#!/bin/bash

set -xeu -o pipefail

export comp_dir="components"
trans_dir="$(realpath translations)"
export trans_dir

short_sha="$(git rev-parse --short HEAD)"
# defaults, local build or github non-tagged
export version="git$short_sha"
export vversion="$version" # in package names

if [[ -n "${GITHUB_REF-}" ]]; then                 # github build
    if echo "$GITHUB_REF" | grep "refs/tags"; then # tagged
        # shellcheck disable=SC2001  #  sed is more readable
        version="$(echo "$GITHUB_REF" | sed 's|refs\/tags\/v||')"
        export version
        export vversion="v$version"
    fi
fi

# cleanup for local build
git checkout -- release
git clean -fd release
git clean -fdX release

# translations packaged first, to get extra text out of the way
# shellcheck disable=SC2154  # extra_dir from env.sh
"$extra_dir"/package/translations.sh

# data
# shellcheck disable=SC2154  # from env.sh
DAT_FILE="$mod_name.dat"
# shellcheck disable=SC2154  # from env.sh
mkdir -p "$mods_dir"

cd data
"$DAT3" a "$mods_dir/$DAT_FILE" ./*
cd ..

# cassidy mod compatibility check
"$extra_dir"/package/cassidy_head.sh

# sfall
"$extra_dir"/package/sfall.sh

# ammo mod from sfall
"$extra_dir"/package/ammo.sh

# hi-res patch files
"$extra_dir"/package/f2_res.sh

# manual package: linux/mac os
pushd .
# shellcheck disable=SC2154  # from env.sh
cd "$release_dir"
zip -r "${mod_name}_${vversion}.zip" -- * # our package
popd
mv "$release_dir/${mod_name}_${vversion}.zip" .

# exe installer
"$extra_dir"/package/inno.sh

# cleanup for local build
git checkout -- data/text release extra/inno/inno.iss
git clean -fd translations
git clean -fdX translations
