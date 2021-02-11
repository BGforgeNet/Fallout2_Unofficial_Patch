set "bdir=backup\upu"
set "scripts_dir=data\scripts"

if not exist %bdir% mkdir %bdir%

if exist patch000.dat (
  move patch000.dat %bdir%\
)

:: I don't know how to iterate over files in batch properly, so just moving back and forth
move /y data %bdir%\
mkdir data\sound
move /y %bdir%\data\savegame data\
move /y %bdir%\data\*.txt data\
move /y %bdir%\data\*.gcd data\
move /y %bdir%\data\sound\music data\sound\

:: sfall scripts
mkdir %scripts_dir%
move /y gl_ammomod.int %scripts_dir%\
move /y gl_highlighting.int %scripts_dir%\
move /y gl_partycontrol.int %scripts_dir%\

:: sound path fix
initool.exe s fallout2.cfg sound music_path1 data\sound\music\ > tmp.cfg
initool.exe s tmp.cfg sound music_path2 sound\music\ > tmp2.cfg
del /s %bdir%\fallout2.cfg
move /y fallout2.cfg %bdir%\
del /s tmp.cfg initool.exe camlrt.dll
move /y tmp2.cfg fallout2.cfg

del /s upu-install.sh upu-install.bat upu-install.command
echo UPU installed. Backup is in %bdir%
