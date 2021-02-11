#!/bin/bash

set -xeu -o pipefail

export comp_dir="components"
export dat2="wine $bin_dir/dat2.exe"
export dat2a="wine $bin_dir/dat2.exe a -1"
export trans_dir="$(realpath translations)"
export file_list="file.list"

short_sha="$(git rev-parse --short HEAD)"
# defaults, local build or github non-tagged
export version="git$short_sha"
export vversion="$version" # in package names
export uversion="$version" # in game

if [[ ! -z "${GITHUB_REF-}" ]]; then # github build
  if echo "$GITHUB_REF" | grep "refs/tags"; then # tagged
    version="$(echo $GITHUB_REF | sed 's|refs\/tags\/v||')"
    export version
    export vversion="v$version"
    export uversion="u$version" # in game
  fi
fi

# translations packaged first, to get extra text out of the way
"$extra_dir"/package/translations.sh

# data
dat="$mod_name.dat"
mkdir -p "$mods_dir"
chmod 0444 data/proto/*/*

cd data
# I don't know how to pack recursively
find . -type f | sed -e 's|^\.\/||' -e 's|\/|\\|g' | sort > "$file_list" # replace slashes with backslashes
$dat2a "$mods_dir/$dat" @"$file_list" 2>&1 | grep -v "wine: Read access denied for device" # wine pollutes the log
cd ..

# sfall
"$extra_dir"/package/sfall.sh

# final package
pushd .
cd "$release_dir"
zip -r "${mod_name}_${vversion}.zip" * # our package
popd
mv "$release_dir/${mod_name}_${vversion}.zip" .

# exe installer
"$extra_dir"/package/inno.sh

# cleanup for local build
git checkout -- data/text release extra/inno/inno.iss
git clean -fd translations
git clean -fdX translations
