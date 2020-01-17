#!/bin/bash

set -xeu -o pipefail

bin_dir="$(realpath $bin_dir)"
dat2a="wine $bin_dir/dat2.exe a -1"
trans_dir="translations"
file_list="$(realpath file.list)"
mods_dir="$(realpath $mods_dir)"
release_dir="$(realpath release_dir)"
lang_dir="data/text"

# delete unnecessary files
rm -rf "$lang_dir"/{po,readme.md,translation.patch}

# update current version in patchinf
for f in $lang_dir/*/dialog/patchinf.msg; do
  sed -i "s|1\.02\.31u[0-9]*\.|1.02.31${uversion}.|" "$f"
done

# duplicate cuts for english language, otherwise sfall won't display them in english
cp -r "$lang_dir"/english/cuts{,_female}

# move texts to translation package dir
for d in $(ls $lang_dir | grep -v english); do
  mkdir -p "$trans_dir/$d/text"
  mv "$lang_dir/$d" "$trans_dir/$d/text/"
done

# package into dats
cd "$trans_dir"
for d in $(ls); do
  dat="${mod_name}_${version}_$d.dat"
  cd "$d"
  find . -type f | sed -e 's|^\.\/||' -e 's|\/|\\|g' | sort > "$file_list"
  $dat2a "$dat" @"$file_list"
  cd ..
done
cd ..
mv "$trans_dir"/*/*.dat .
