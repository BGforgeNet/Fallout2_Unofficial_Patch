#!/bin/bash

set -xeu -o pipefail

install_iss="inno.iss" # inno doesn't like absolute path

# inno in docker is picky about permissions and accessing files above current dir
pushd .
cd extra/inno
mkdir -p Output
chmod 0777 Output

# delete unnecessary files
# shellcheck disable=SC2154  # from env.sh
rm -f "$release_dir"/{upu-install.sh,upu-install.command}
# shellcheck disable=SC2154  # from env.sh
sed -i "s|define version .*|define version \"${version}\"|" "$install_iss"

rm -rf release translations
cp -r "$release_dir" ./
mkdir translations
# shellcheck disable=SC2154  # from env.sh
mv "$trans_dir"/*.dat translations/

# alternative animations, not included into manual install
# shellcheck disable=SC2154  # from env.sh
"$extra_dir"/package/animation_fixes.sh

docker run --rm -i -v "$PWD":/work docker.io/amake/innosetup "$install_iss"
rm -rf release translations
popd

mv "$extra_dir"/inno/Output/*.exe .
