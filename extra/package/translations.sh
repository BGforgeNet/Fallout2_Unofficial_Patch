#!/bin/bash

set -xeu -o pipefail

lang_dir="data/text"
trans_dir="translations"

# delete unnecessary files
rm -rf "$lang_dir"/{po,readme.md,translation.patch}
rm -f "$lang_dir/english/cuts/intro.sve"

# update patchinf
for lang in $(ls $lang_dir); do
  patchinf="$lang_dir/$lang/dialog/patchinf.msg"
  # display current version
  sed -i "s|1\.02\.31u[0-9]*\.|1.02.31${uversion}.|" "$patchinf"
  # if the string is untranslated, still show correct language
  lang_name="${lang^}"
  sed -i "s|English|$lang_name|" "$patchinf"
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
rm -f *.dat
for d in $(ls); do
  dat="${mod_name}_$d.dat"
  cd "$d"
  find . -type f | sed -e 's|^\.\/||' -e 's|\/|\\|g' | sort > "$file_list"
  $dat2a "$dat" @"$file_list" 2>&1 | grep -v "wine: Read access denied for device" # wine pollutes the log
  mv $dat ..
  cd ..
done
cd ..

cp "$trans_dir"/${mod_name}_russian.dat ${mod_name}_russian_sound.dat # Russian includes speech, it's much larger than others, so packaged separately
$dat2 d -r "$trans_dir"/${mod_name}_russian.dat 'sound\speech\*'
$dat2 k "$trans_dir"/${mod_name}_russian.dat

pushd .
cd "$trans_dir"
zip -r "${mod_name}_${vversion}_translations.zip" *.dat # all translations, just text and graphics
popd
mv "$trans_dir/${mod_name}_${vversion}_translations.zip" .
