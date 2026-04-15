#!/bin/bash

set -xeu -o pipefail

extra_dir="$(realpath extra)"
export extra_dir
export bin_dir="$extra_dir/bin"
release_dir="$(realpath release)"
export release_dir
export mods_dir="$release_dir/mods"
export mpack_version=${mpack_version:-4.4.9}
export mpack_7z="mpack.7z"
export sfall_version=${sfall_version:-4.4.9.1}
export mod_name=upu
trans_dir="$(realpath translations)"
export trans_dir

SSLC_VERSION="2026-03-15-12-52-25"
export SSLC_URL="https://github.com/sfall-team/sslc/releases/download/${SSLC_VERSION}/sslc-linux"
export COMPILE="$bin_dir/sslc"

DAT3_VERSION="v0.6.2"
export DAT3_URL="https://github.com/BGforgeNet/dat3/releases/download/${DAT3_VERSION}/dat3"
export DAT3="$bin_dir/dat3"
