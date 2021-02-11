#!/bin/bash

set -xeu -o pipefail

install_iss="inno.iss" # inno doesn't like absolute path

# inno in docker is picky about permissions and accessing files above current dir
pushd .
cd extra/inno
mkdir -p Output
chmod 0777 Output

# delete unnecessary files
rm -f "$release_dir"/{upu-install.sh,upu-install.command}
sed -i "s|define uversion .*|define uversion \"${uversion}\"|" "$install_iss"
sed -i "s|define vversion .*|define vversion \"${vversion}\"|" "$install_iss"

rm -rf release translations
cp -r $release_dir ./
mkdir translations
mv $trans_dir/*.dat translations/
docker run --rm -i -v $PWD:/work amake/innosetup "$install_iss"
rm -rf release translations
popd

mv "$extra_dir"/inno/Output/*.exe .
