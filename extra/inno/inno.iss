#define basename "upu"
#define backup_dir "backup\" + basename
#define mods_dir "{app}\mods"
; build process shenanigans, see inno.sh
#define uversion "u0"
#define vversion "v0"

[Setup]
AppName=Fallout 2 Unofficial Patch
AppVerName=Fallout 2 Unofficial Patch 1.02.31{#uversion}
AppId=Fallout 2 Unofficial Patch
AppPublisher=BGforge
AppPublisherURL=https://bgforge.net
AppSupportURL=https://forums.bgforge.net/viewforum.php?f=34
AppUpdatesURL=https://github.com/BGforgeNet/Fallout2_Unofficial_Patch
DefaultDirName=C:\Games\Fallout2
AppendDefaultDirName=no
DisableProgramGroupPage=yes
OutputBaseFilename={#basename}_{#vversion}
Compression=lzma
DirExistsWarning=no
Uninstallable=no
InfoBeforeFile=before.rtf
SetupIconFile=nuclear.ico
DisableDirPage=no
UsePreviousAppDir=no
AlwaysShowDirOnReadyPage=yes

[Files]
Source: "release\*.*"; DestDir: "{app}"; Components: core; Flags: ignoreversion recursesubdirs overwritereadonly
#include "files_translations.iss"

[INI]
#include "ini_translations.iss"
#include "ini_qol.iss"

[Dirs]
Name: "{app}\{#backup_dir}"

[Run]
Filename: "{app}\{#basename}-install.bat"; Parameters: "> {#backup_dir}\log.txt 2>&1"; WorkingDir: "{app}"; Description: "install script";

[Components]
Name: "core"; Description: "Core"; Types: "custom"; Flags: fixed;
Name: "qol"; Description: "Enable sfall QoL features"; Flags: fixed;
Name: "translation"; Description: "Language"; Types: "custom"; Flags: fixed;
#include "components_translations.iss"

[Types]
Name: "custom"; Description: "Custom Selection"; Flags: iscustom

#include "preinstall.iss"
