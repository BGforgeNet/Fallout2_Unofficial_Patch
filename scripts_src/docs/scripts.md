# Dev docs

Included in this file is the directory structure and update procedures for scripts, message files, maps, and any other files that pertain primarily to scripters.

- [Directory structure](#directory-structure)
	- [Scripts](#scripts)
	- [Data](#data)
- [Naming conventions](#naming-conventions)
	- [Vars](#vars)
	- [Script names](#script-names)
	- [Defines](#defines)

##  Directory Structure

Below is the directory structure for SourceSafe and the network drive for the scripts and files which pertain to them. Please, make sure that files go into the proper directory, as it could cause confusion at a later times, should anyone need to find specific files.

### Scripts
- `scripts`: this is where text files explaining directory structure, script procedures, and anything else would be stored. No scripts	should be placed in here.
- `scripts\arroyo`: this is were all of the scripts for Arroyo are located.
- `scripts\generic`: generic scripts. This would be mainly for things like locked doors, trapped doors, locked and trapped doors, containers, and so forth.
- `scripts\headers`: includable files. Primarily, these would be: `define.h`, `scripts.h`, `global.h`, `itempid.h`, `scenepid.h`, `critrpid.h`, `teams.h`, `aipack.h`, `reppoint.h`, `exppoint.h`, `modreact.ssl` (or `modreact.h`), and `commands.h`.
- `scripts\main`: scripts for the heads.
- `scripts\maps`: map scripts.
- `scripts\party`: anyone who could be part of the party will be placed here.
- `scripts\rndenctr`: all random encounter map scripts, special scripts made for random encounters, etc.
- `scripts\template`: templates for scripting will be placed here. Most importantly will be the dialog scripts, locked containers, trapped containers, locked and trapped doors, etc. 

### Data
- `data`: scripters should not place anything in this directory.
- `data\data`: this is where the global variable `.gam` file and the `AI.txt` file are kept.
- `data\maps`: this is where all the map variable `.gam` files will be placed. The actual maps are placed in an alternate SourceSafe.
- `data\scripts`: this is where the `scripts.lst` file will be placed. The only other files which can be placed in here would be the binaries from compiled scripts.
- `data\text\english\dialog`: message files for scripts.
- `data\text\english\game`: game message files.

## Naming conventions
Below are the naming conventions which should be followed for variable names and script names.

### Vars
#### Global
Global Vars will be stored in a header file called `global.h`, located in the `scripts\headers` directory. All global vars will be prepended with `GVAR_`.

#### Map vars
Map vars will be stored in header files in the format of `<map name>.h` and be located in the `scripts\headers` directory. All vars will be prepended with `MVAR_`.

#### Local vars
Local vars will be stored in the script itself. The total number of Local vars must be added into `scripts.lst` so that they may be allocated memory in the game. `scripts.lst` is located in the `data\scripts` directory. All vars will be prepended with `LVAR_`.

### Script names

#### Naming scripts
All scripts will follow the same naming convention whether they are spatial scripts, critters, or scenery. The conventions which is to be used is:
- First character is the City name
- Second character is the Type name
- Remaining six characters are the Name

All scripts will end with the suffix of `.ssl`. An example from Fallout would be: `ncghoul.ssl`  (Necropolis, Critter, Ghoul).

#### City names

The following are the abbreviations which are to be used for the City field of the script name.

```
A == Arroyo
K == Klamath
D == The Den
M == Modoc
G == Gecko
V == VaultCity
R == Redding
W == Sierra Army Depot (Weapons Depot)
N == New Reno
H == Broken Hills
C == Colusa
B == Vault 15 (Buried Vault)
S == Shady Sands
O == Vault 13 (Original Vault)
E == Military Base (Excavated Base)
F == San Francisco
E == Random Encounter
Z == Generic Critter/Item
I == Raiders
Q == Enclave
```

#### Type names
The following are the abbreviations which are to be used for the Type field of the script name.

```
C == Critter  (Default person or animal)
I == Items		(Default items [ie Radios])
S == Scenery	(Default Scenery)
T == Spatial	(Spatial scripts)
P == Party		(Used for Party Members)
H == Head			(Any Script for a Head Character)
W == Walls		(Default Walls)
```

### Defines
- PID. All prototypes which are placed in their corresponding header files (scenery in `scenepid.h`, items in `itempid.h`, and critters in `critrpid.h`) will have a prepended `PID_` to their names.
- Experience points. Stored in `exppoint.h`, prepended with `EXP_`.
- Reputation points. Stored in `reppoint.h`, prepended with `REP_`.
- AI packets. Stored in `aipack.h`, prepended by `AI_`.
- Teams. Stored in the file `teams.h`, prepended by `TEAM_`.
- Script names. All script name defines will come directly from `scripts.lst` in the exact order in which `scripts.lst` is in. The defines will be stored in the file `scripts.h`. Prepended with `SCRIPT_`.
