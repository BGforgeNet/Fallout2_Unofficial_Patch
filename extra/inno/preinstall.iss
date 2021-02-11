[Code]
function NextButtonClick(PageId: Integer): Boolean;
begin
  Result := True;
  if (PageId = wpSelectDir) then begin
    if not FileExists(ExpandConstant('{app}\fallout2.exe')) then begin
      MsgBox('fallout2.exe not found in the selected directory. Re-check game path.', mbError, MB_OK);
      Result := False;
      exit;
    end;
    if FileExists(ExpandConstant('{app}\data\scripts\glkagako.int')) then begin
      MsgBox('RP installation detected. UPU cannot be installed on RP. Re-start with a fresh Fallout 2 installation.', mbError, MB_OK);
      Result := False;
      exit;
    end;
    if FileExists(ExpandConstant('{app}\mods\rpu.dat')) then begin
      MsgBox('RPU installation detected. UPU cannot be installed on RPU. Re-start with a fresh Fallout 2 installation.', mbError, MB_OK);
      Result := False;
      exit;
    end;
  end;
end;
