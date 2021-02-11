#!/bin/bash

set -xeu -o pipefail

mpack_file="modderspack_$mpack_version.7z"
mpack_url="https://sourceforge.net/projects/sfall/files/Modders%20pack/$mpack_file/download"
compile_exe="compile.exe"
mpack_compile="ScriptEditor/resources/$compile_exe"
sfall_headers_dir="scripts_src/sfall"

# compile.exe
wget -nv "$mpack_url" -O "$mpack_7z"
7zr e "$mpack_7z" "$mpack_compile"
mv -f "$compile_exe" "$bin_dir/"

# sfall headers
rm -rf "$sfall_headers_dir" "scripting_docs/headers"
7zr x "$mpack_7z" "scripting_docs/headers"
mv "scripting_docs/headers" "$sfall_headers_dir"
