## Changelog

This file lists changes for UPU only. See original UP changelog [here](up-changelog.txt).

All applicable changes are also present in corresponding [RPU releases](https://github.com/BGforgeNet/Fallout2_Restoration_Project/blob/master/docs/changelog.md).
Sometimes UPU or RPU may be updated independently, which is why you might see gaps in version numbers.

- [Version 18](#version-18)
- [Version 17](#version-17)
- [Version 16](#version-16)
- [Version 15](#version-15)
- [Version 14](#version-14)
- [Version 13](#version-13)
- [Version 12](#version-12)
- [Version 10](#version-10)
- [Version 9](#version-9)
- [Version 8](#version-8)
- [Version 7](#version-7)
- [Version 4](#version-4)
- [Version 3](#version-3)
- [Version 2](#version-2)
- [Version 1](#version-1)

### Version 18
- Fixed automatic installer appending extra dir when selecting game directory.
- Updated sfall to 4.2.8.1

### Version 17
- [Fixed](https://github.com/BGforgeNet/Fallout2_Unofficial_Patch/issues/54) Slags trying to use non-existent animation, let them 'pick up' stuff from the ground instead.
- [Fixed](https://github.com/BGforgeNet/Fallout2_Unofficial_Patch/pull/55) formatting of some strings in dialog with Big Jesus.
- [Added](https://forums.bgforge.net/viewtopic.php?f=34&p=760) sfall translation files to releases.
- Default sfall scripts are [added](https://github.com/BGforgeNet/Fallout2_Restoration_Project/issues/59) to releases as well.
- More sanity checks [added](https://github.com/BGforgeNet/Fallout2_Restoration_Project/issues/60) for installer.
- [Fixed](https://github.com/BGforgeNet/Fallout2_Restoration_Project/issues/63) crash in Broken Hills mines ([sfall](https://github.com/phobos2077/sfall/issues/337) bug).

### Version 16
Fixed Linux install script not allowing to proceed even after the directory was lowercased (introduced in v15).

### Version 15
- General:
  - Fixed `AllowSoundForFloats` placement in `ddraw.ini` and moved it into QoL component.
  - More QoL settings in the corresponding component: `DisplayBonusDamage`, `SpeedInterfaceCounterAnims`, `StackEmptyWeapons`, fixed values for `NumSoundBuffers` and `SpeedInventoryPCRotation`.
  - The installer now tries to preserve setting placement in the `ddraw.ini` when enabling them.
  - Fixed installation routine deleting `data` dir and not restoring some files because of that.
  - IniConfig dir in `ddraw.ini` now defaults to `mods`, for ease of use.
  - Added a component to enabled certain QoL sfall features.
  - Updated sfall to 4.2.5.1.
- Arroyo:
  - Reverted plant respawn behaviour fix introduced in v13, it was causing more issues than solving #52.
- San Francisco:
  - Fixed intermittent crash during Lo Pan apprentices fights #44.

### Version 14
Fixed auto installer not allowing to select a directory in some cases.

### Version 13
- General:
  - Code overhauled using [ReDefine](https://github.com/rotators/ReDefine), more files converged with [RPU](https://github.com/BGforgeNet/Fallout2_Restoration_Project).
  - Fixed issues with fonts in main menu and some translations (English, Spanish, French, maybe others too).
  - Added a GUI installer.
  - More robust drug application in various scripts (Rebecca, Frankie, Myron, Hank) - before it could fail.
  - Sfall updated to 4.2.4.
  - Multiple 'all ready' > 'already' typos fixed.
- Arroyo:
  - Fixed Garden plant respawn behaviour (respawn with geckos, not daily).
- Klamath:
  - Fixed Sajag's reputation check, now he reacts favourably if the dude has high rep in town.
  - Aldo's dialog now correctly checks the amount of money on dude.
- Sierra:
  - Angry Skynet will no longer join the party. And it won't forget its enemy status if party has left the area before Skynet could burst a party member.

### Version 12
 - [Fixed](https://github.com/BGforgeNet/Fallout2_Restoration_Project/issues/32) custom `ddraw.ini` configuration.
 - [Removed](https://github.com/BGforgeNet/Fallout2_Unofficial_Patch/issues/35) old workarounds for 'too many items'.
 - Install script now removes itself after installation.
 - Sfall updated to 4.2.2.

### Version 10
- General:
  - Fixed crash when trying to talk to Pariah dog (introduced in [v9](#version-9)).
- Arroyo:
  - Fixed crash when talking to Hakunin with low karma.

### Version 9
- General:
  - Added missing siptbox2 script.
  - Standartized 'deathclaw' spelling.
  - Various under the hood changes: better debug, code cleanup, switched to gcc for preprocessing, removed unused d3d dlls.
  - Added patchinf script, now UP version is visible in-game, like RP.
- Den:
  - Fixed "Error" in Tubby's dialog.
- Modoc:
  - Disabled stuck Modoc shitty death narration (not intended to work in UP).
- NCR:
  - Fixed fadein/out in Vortis' dialog.
- Enclave:
  - Fixed final slideshow not playing.
- Vault City:
  - Fixed Cassidy stage 0 armor bonus.

### Version 8
- General:
  - Fixed party proto issue introduced in v7.
- Modoc:
  - Reverted Jonny's dialog faulty fix.

### Version 7
- General:
  - Changed localizations to use proper language name from `fallout2.cfg`.
  - Enabled `AIBestWeaponFix`, `AIDrugUsePerfFix` and `StartGDialogFix` in sfall.
  - Uncensor: "chem" > "drug", "habit-forming" > "addictive".
  - Deleted files that were identical to their `master.dat` versions.
  - Fixed music path correction in the installer.
- Arroyo:
  - Fixed Cameron not giving a second chance at training as promised.
- Den:
  - Made Anna's ghost invulnerable, also disabled stealing.

### Version 4
Added missing `scripts.lst`.

### Version 3
- Created a complete package.
- Added localizations.

### Version 2
Repacked into .dat file.

### Version 1
- General
  - Fixed Laddie being counted as a "strange" party member instead of K-9.
  - Added scr_return() for all scripts attached items in OBJ_DUDE, to prevent an issue that when you used a remove-after-use item, using other items without closing the inventory will make them being removed as well, even if they shouldn't be.
  - Fixed Sierra Mission Holodisk and Broadcast Holodisk setting each other's GVAR.
  - Fixed Vic not being counted as one of human/male party members in various scripts.
  - More foolproof hintbook (from RP).
  - Implemented Karma Beacon and Cult of Personality for general reactions.
  - Fixed discrepancy in addressing player (you/name) when using Traps skill on various doors.
  - Robobrain now has intelligence 10, combat armor stats but 0% EMP resistance on all stages.
  - Various under the hood changes, optimizations and cleanups.
  - Corrected a plethora of typos.
  - Getting weapon upgrades won't reload them with free ammo anymore.
- Spelling standartization
    - Stockman's Association (instead of Stockmen's).
    - Auto-Doc.
    - Pip-Boy.
    - Jet, jethead.
    - Robobrain.
    - RobCo.
    - BeatCo.
- Arroyo
  - Mynoc actually has a sharpened spear now.
- Broken Hills
  - If Francis leaves before wrestling with him, that quest will be crossed out.
  - Dead professor will no longer show floats when clicking on the scorpion.
  - When caught stealing from the scorpion, it will just hiss instead of using human floats.
- Den
  - Fixed Billy's response when asking for a second chance at sex.
  - Sex with Karl advances time.
  - Metgzer now has money in his inventory after Vic is bought from him.
- Enclave
  - Ensured that blast doors always get locked in the final fight. If Granite has joined the player, the door between him and Frank will remain open.
- Military base Mariposa
  - Moved unreachable boxes on the first and second level to be reachable.
- Modoc
  - Jonnny won't speak to the player until he sees Laddie. (Ensuring that talking to him before starting the quest won't break it.)
  - PC will get up after the methane explosion.
  - Bess and Laddie are no longer counted as party members.
- NCR
  - Fixed a dumb character being prematurely thrown out of dialog when talking to Doc Jubilee about Vault 13 and then asking about "Mother Lode?".
  - Added fadein/out when Vortis escorts PC out.
  - Hoss should be more eager to give up.
  - Moved a table in Dusty's cantina to be accessible.
- New Reno
  - Fixed wielding four new bladed weapons not being counted as wielding a knife when talking to Little Jesus.
  - Changed the team of slaves in the Stables to TEAM_RND_SLAVE.
  - Inhaling Jet with Angela will correctly apply all Jet effects, including possible addiction.
  - Miss Kitty will correctly apply bonuses on PC and companions.
  - "Oral" in Cat's Paw does count as sex.
  - Fixed boxers being unable to use hook punches.
  - Lloyd's body won't disappear after reloading.
  - Fixed Salvatore's guards walking out prematurely when watching the transaction the second time.
- Vault 15
  - The enemies have their weapons equipped now.
- Vault City
  - Fixed Skeev not returning back to his post after sending dumb character to the servant allocation center.
  - Seeing Phyllis advances time.
- Redding
  - Bartender in Last Gasp will ask for the correct amount of money, get the correct amount and get PC/party actually drunk.
- Sierra Army Base
  - When punching bags, don't show exact bonus. Actual behaviour isn't changed (tagged skill gets +4, untagged +5).
  - Fixed organ extraction room:
    - Everyone in the room gets killed (including Sierra defence bots if any).
    - Humans yield normal brain, mutants/ghouls/deathclaws/dogs - abnormal, all the rest - none.
    - Karma penalty applies for anyone but Sierra defence bots.
