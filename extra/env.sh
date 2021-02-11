#!/bin/bash

set -xeu -o pipefail

export extra_dir="$(realpath extra)"
export bin_dir="$extra_dir/bin"
export release_dir="$(realpath release)"
export mods_dir="$release_dir/mods"
export mpack_version=${mpack_version:-4.2.9}
export mpack_7z="mpack.7z"
export sfall_version=${sfall_version:-4.2.9}
export WINEARCH=win32
export WINEDEBUG=-all
export mod_name=upu
export trans_dir="$(realpath translations)"

set +xeu +o pipefail
