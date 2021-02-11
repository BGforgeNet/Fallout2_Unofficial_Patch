#!/bin/bash

set -xeu -o pipefail

# exporting for subshell
export src="$(realpath scripts_src)"
export dst="$(realpath data/scripts)"
export scripts_lst="$dst/scripts.lst"
export compile_exe="$bin_dir/compile.exe"

# wine doesn't return proper error code on missing file
if [[ ! -f $compile_exe ]]; then
  echo "compile.exe missing, failed"
  exit 1
fi

# single file compile
function process_file() {
  set -eu -o pipefail
  f="$1"
  dst="$2"
  script_name="$(echo "$f" | sed 's|\.ssl$|.int|')"
  gcc -E -x c -P -Werror -Wfatal-errors -o "${f}.tmp" "$f" # preprocess

  # retry on wine connection reset, 1 time should be enough
  set +e
  result_text="$(wine "$compile_exe" -n -l -q -O2 "$f.tmp" -o "$dst/$script_name" 2>&1)" # compile
  result_code="$?"
  set -e
  if [[ "$result_code" != "0" ]]; then
    set -x
    if echo "$result_text" | grep -q "recvmsg: Connection reset by peer"; then
      sleep 1
      wine "$compile_exe" -n -l -q -O2 "$f.tmp" -o "$dst/$script_name" # 1 retry
    else
      echo "Compilation failed:"
      echo "$result_text"
      exit 1
    fi
    set +x
  fi
  rm -f "$f.tmp"
}
export -f process_file

# compile all
for d in $(ls $src); do
  if [[ -d "$src/$d" && "$d" != "template" ]]; then # if it's a dir and not a template
    cd "$src/$d"
    files=""
    set +x # ok this is too verbose
    for f in $(ls | grep -i "\.ssl$"); do # build file list
      int="$(echo $f | sed 's|\.ssl$|.int|')"
      if grep -qi "^$int " "$scripts_lst"; then # if file is in scripts.lst
        files="$files $f"
      fi
      if [[ "$d" == "global" ]]; then # or if it's a global script
        files="$files $f"
      fi
    done
    set -x # enabling output again
    if [[ -n "$files" ]]; then
      parallel -j20 -i bash -c "process_file {} $dst" -- $files
    fi
    cd ..
  fi
done
