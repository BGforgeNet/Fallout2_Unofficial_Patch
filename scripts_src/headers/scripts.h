/*
  Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef SCRIPTS_H
#define SCRIPTS_H

/******************************************************************
   File Name: Scripts.h

   Purpose: This file contains defines for all of the scripts in
            scripts.lst. This is an ordered list and needs to
            conform exactly to scripts list. All defines in here
            need to be prepended with SCRIPT_ as a naming
            convention.

   Created: October 06, 1997
******************************************************************/

#define SCRIPT_OBJ_DUDE         (1)     // obj_dude.int    ; Player script.
#define SCRIPT_TEST0            (2)     // Test0.int       ; Used to Test Scripts
#define SCRIPT_TEST1            (3)     // Test1.int       ; Used to Test Scripts
#define SCRIPT_TEST2            (4)     // Test2.int       ; Used to Test Scripts
#define SCRIPT_TEST3            (5)     // Test3.int       ; Used to Test Scripts
#define SCRIPT_TEST4            (6)     // Test4.int       ; Used to Test Scripts
#define SCRIPT_TEST5            (7)     // Test5.int       ; Used to Test Scripts
#define SCRIPT_ACWARIOR         (8)     // ACWarior.int    ; Generic Warrior in Arroyo
#define SCRIPT_ACVILLGR         (9)     // ACVillgr.int    ; Generic Villager of Arroyo
#define SCRIPT_ACMYNOC          (10)    // ACMynoc.int     ; Mynoc, Bridge Guard of Arroyo
#define SCRIPT_AHELDER          (11)    // AHElder.int     ; Elder of Arroyo
#define SCRIPT_AHHAKUN          (12)    // AHHakun.int     ; Hakunin, Shaman of Arroyo
#define SCRIPT_DOOR             (13)    // Door.int        ; generic locked and trapped door
#define SCRIPT_GENERIC          (14)    // Generic.int     ; Generic dialog for scripts
#define SCRIPT_AILKBOX          (15)    // AILkBox.int     ; Locked box in Arroyo Elder's room
#define SCRIPT_CONTAINR         (16)    // Containr.int    ; Generic locked and trapped container
#define SCRIPT_ACBRAHMN         (17)    // ACBrahmn.int    ; Brahmin for pen in Arroyo
#define SCRIPT_ACSPORPL         (18)    // ACSporPl.int    ; Spore plants in Arroyo
#define SCRIPT_ZCLRAT           (19)    // ZClRat.int      ; Generic lesser rat
#define SCRIPT_ZCLSCORP         (20)    // ZClScorp.int    ; Generic lesser scorpion
#define SCRIPT_ZCLMANTI         (21)    // ZClManti.int    ; Generic lesser mantis
#define SCRIPT_ZCLDTHCL         (22)    // ZClDthCL.int    ; Generic lesser death claw
#define SCRIPT_AIVASE           (23)    // AIVase.int      ; Vase in Arroyo Villager's Hut
#define SCRIPT_AICHEST          (24)    // AIChest.int     ; Chest in Arroyo Shaman's Hut
#define SCRIPT_ARCAVES          (25)    // ArCaves.int     ; Map Script for Arroyo Caves
#define SCRIPT_DOORL100         (26)    // DoorL100.int    ; Generic Locked Door (+100%)
#define SCRIPT_ARVILLAG         (27)    // ArVillag.int    ; Map Script for Arroyo Village
#define SCRIPT_ARBRIDGE         (28)    // ArBridge.int    ; Map Script for Arroyo Bridge
#define SCRIPT_AICAVDOR         (29)    // AICavDor.int    ; Locked wooden door in Arroyo Caves (0/-20)
#define SCRIPT_SPRTRP0          (30)    // SprTrp0.int     ; Generic spear Trap (0)
#define SCRIPT_SPRTRP50         (31)    // SprTrp50.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_SPRTRP51         (32)    // SprTrp51.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_SPRTRP52         (33)    // SprTrp52.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_SPRTRP53         (34)    // SprTrp53.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_AIBKDOR          (35)    // AIBkDor.int     ; Door w/out a handle In Arroyo Caves
#define SCRIPT_DCADDICT         (36)    // DCAddict.int    ; Addict from the Den
#define SCRIPT_DCG2GRD          (37)    // DCG2Grd.int     ; Gang 2 Guards in the Den
#define SCRIPT_DCCUSTMR         (38)    // DCCustmr.int    ; Generic Customer in the Den
#define SCRIPT_DCTHUG           (39)    // DCGenGrd.int    ; Thug from the Den
#define SCRIPT_DCORPHAN         (40)    // DCOrphan        ; Thieving Orphan in the Den
#define SCRIPT_DCJOEY           (41)    // DCJoey          ; Special thug in the Den
#define SCRIPT_DCFLICK          (42)    // DCFlick         ; Kwik N Save store owner in the Den
#define SCRIPT_DCG1GRD          (43)    // DCG1GRD         ; Gang 1 Guard in the Den
#define SCRIPT_DCPETEY          (44)    // DCPetey         ; Petey, the alley addict in the Den
#define SCRIPT_DCSMITTY         (45)    // DCSmitty        ; Smitty the junkyard guy in the Den
#define SCRIPT_DCMETZGE         (46)    // DCMetzge        ; Metzger the Slaver in the Den
#define SCRIPT_DCSLAVER         (47)    // DCSlaver        ; Regular Slaver in the Den
#define SCRIPT_DCTUBBY          (48)    // DCTubby         ; Tubby the store owner in the Den
#define SCRIPT_DCANNA           (49)    // DCAnna          ; Anna the Ghost in the Den
#define SCRIPT_DCVIC            (50)    // DCVic           ; Trader Vic in the Den, can be a party member
#define SCRIPT_DCFRANKI         (51)    // DCFranki        ; Frankie, owner of the Hole in the Den
#define SCRIPT_DCREBECC         (52)    // DCRebecc        ; Rebecca in the Den
#define SCRIPT_DCBILLY          (53)    // DCBilly         ; One-tooth Billy in the Hole in the Den
#define SCRIPT_DCSHEILA         (54)    // DCSheila        ; Sheila, the prostitute in the Hole in the Den
#define SCRIPT_DCMOM            (55)    // DCMom           ; Mom, who run's Mom's in the Den
#define SCRIPT_DCSLVRUN         (56)    // DCSlvRun.int    ; Generic People for Slave Runs
#define SCRIPT_DNSLVRUN         (57)    // DNSlvRun.int    ; Map Script for Den Slave Runs
#define SCRIPT_DISLVCRT         (58)    // DISlvCrt.int    ; Slave Cart to take the Player to Den
#define SCRIPT_DENBUS1          (59)    // DenBus1.int     ; Map Script for Den business area 1
#define SCRIPT_DENBUS2          (60)    // DenBus2.int     ; Map Script for Den business area 2
#define SCRIPT_DENRES1          (61)    // DenRes1.int     ; Map Script for Den residential area
#define SCRIPT_DIANNGRV         (62)    // diAnnGrv.int    ; Grave of Anna the ghost in the Den
#define SCRIPT_DIDADGRV         (63)    // diDadGrv.int    ; Grave of Anna the ghost's Dad in the Den
#define SCRIPT_DIMOMGRV         (64)    // diMomGrv.int    ; Grave of Anna the ghost's Mom in the Den
#define SCRIPT_DIBONES          (65)    // diBones.int     ; Bones of Anna the ghost in the Den
#define SCRIPT_DIDIARY          (66)    // diDiary.int     ; Diary of Anna the ghost in the Den
#define SCRIPT_DILOCKET         (67)    // diLocket.int    ; Locket of Anna the ghost in the Den
#define SCRIPT_DISTILL          (68)    // diStill.int     ; Still that Maggie has in the basement in the Den
#define SCRIPT_ZIGENGRV         (69)    // ziGenGrv.int    ; Generic grave script
#define SCRIPT_ZIBLKJCK         (70)    // ziBlkJck.int    ; Generic black jack table
#define SCRIPT_ZCSLAVE          (71)    // zcSlave.int     ; Generic slave
#define SCRIPT_DCBLKJCK         (72)    // dcBlkJck.int    ; Den black jack table from Maggie's place
#define SCRIPT_DICHCDOR         (73)    // diChcDor.int    ; Church door from the Den
#define SCRIPT_KCBOB            (74)    // KCBob.int       ; Whiskey Bob from Klamath
#define SCRIPT_DCCRAPS          (75)    // dcCraps.int     ; Maggie Craps dealer in the den
#define SCRIPT_KCALDO           (76)    // KCALDO.int
#define SCRIPT_KCARDIN          (77)    // KCARDIN.int
#define SCRIPT_KCHILD           (78)    // KCHILD.int
#define SCRIPT_KCITIZEN         (79)    // KCITIZEN.int
#define SCRIPT_KCMAIDA          (80)    // KCMAIDA.int
#define SCRIPT_KCSAJAG          (81)    // KCSAJAG.int
#define SCRIPT_KCSALLY          (82)    // KCSALLY.int
#define SCRIPT_KCSMILEY         (83)    // KCSMILEY.int
#define SCRIPT_KCJENNY          (84)    // KCJENNY.int
#define SCRIPT_KCSLIM           (85)    // KCSLIM.int
#define SCRIPT_KCTORR           (86)    // KCTORR.int
#define SCRIPT_KCDUNTON         (87)    // KCDUNTON.int
#define SCRIPT_VCCRTCIT         (88)    // VCCrtCit.int    ; Vault City Courtyard Citizen
#define SCRIPT_VCCRTOUT         (89)    // VCCrtOut.int    ; Vault City Courtyard Outsider
#define SCRIPT_VCCRTGRD         (90)    // VCCrtGrd.int    ; Vault City Courtyard Guard
#define SCRIPT_VCINGRD          (91)    // VCInGrd.int     ; Vault City Inner Guard
#define SCRIPT_VCSTEVE          (92)    // VCSteve.int     ; Steve from Vault City
#define SCRIPT_VCANDY           (93)    // VCAndy.int      ; Andy the Medic in the Central Vault City
#define SCRIPT_VCGATGRD         (94)    // VCGatGrd.int    ; Vault City Main Gate Guard
#define SCRIPT_VCDRTROY         (95)    // VCDrTroy.int    ; Vault City Dr. Troy in the Vault
#define SCRIPT_KCYELLOW         (96)    // KCYellow.int    ; Yellow Dog in Klamath
#define SCRIPT_MCBALTHA         (97)    // mcBaltha.int    ; Balthas in Modoc
#define SCRIPT_MCCORNEL         (98)    // mcCornel.int    ; Cornelius in Modoc
#define SCRIPT_MCDAVIN          (99)    // mcDavin.int     ; Davin in Modoc
#define SCRIPT_MCFARREL         (100)   // mcFarrel.int    ; Farrel in Modoc
#define SCRIPT_MCGRISHA         (101)   // mcGrisha.int    ; Grisham in Modoc
#define SCRIPT_MCJO             (102)   // mcJo.int        ; Jo in Modoc
#define SCRIPT_MCJONNY          (103)   // mcJonny.int     ; Jonny in Modoc
#define SCRIPT_MCKARL           (104)   // mcKarl.int      ; Karl in Modoc
#define SCRIPT_MCLADDIE         (105)   // mcLaddie.int    ; Laddie in Modoc
#define SCRIPT_MCMIRIA          (106)   // mcMiria.int     ; Miria in Modoc
#define SCRIPT_MCPROTEC         (107)   // mcProtec.int    ; Protector in Modoc
#define SCRIPT_MCROSE           (108)   // mcRose.int      ; Rose in Modoc
#define SCRIPT_MCVEGEIR         (109)   // mcVegeir.int    ; Vegeir in Modoc
#define SCRIPT_VCED             (110)   // VCEd.int        ; Ed the Brahma dealer in Vault City
#define SCRIPT_VCHARRY          (111)   // VCHarry.int     ; Happy Harry the store keep in Vault City
#define SCRIPT_VCFSMITH         (112)   // VCFSmith.int    ; Mrs. Smith from Vault City (Farmer)
#define SCRIPT_VCMELIND         (113)   // VCMelind.int    ; Town Greeter Melinda, Vault City
#define SCRIPT_KCTRAPR          (114)   // KCTrapr.int     ; Generic Trapper in trapper town (Klamath)
#define SCRIPT_VCMSMITH         (115)   // VCMSmith.int    ; Mr. Smith from Vault City (Farmer)
#define SCRIPT_VCSKEEVE         (116)   // VCSkeeve.int    ; Skeeve, sells fake passes to Vault City
#define SCRIPT_VCGREG           (117)   // VCGreg.int      ; Proconsul Gregory of Vault City
#define SCRIPT_VCNANCY          (118)   // VCNancy.int     ; Nurse Nancy in Vault City
#define SCRIPT_VCRANDAL         (119)   // VCRandal.int    ; Chief Admenities Officer of Vault City
#define SCRIPT_KTGOO            (120)   // KTGoo.int       ; Toxic Goo in the rat caves (Klamath)
#define SCRIPT_VCBARKUS         (121)   // VCBarkus.int    ; Barkus, Vault City Service Coordinator
#define SCRIPT_VCGENVIL         (122)   // VCGenVil.int    ; Generic Villager around Vault City
#define SCRIPT_VCSTARK          (123)   // VCStark.int     ; Vault City Sargent Stark
#define SCRIPT_VCVLTGRD         (124)   // VCVltGrd.int    ; Guard for entrance into the Vault of VC
#define SCRIPT_VCOLDJOE         (125)   // VCOldJoe.int    ; Crazy Old Joe (Vault City)
#define SCRIPT_VCCONNAR         (126)   // VCConnar.int    ; Connar from Vault City
#define SCRIPT_VCWALACE         (127)   // VCWalace.int    ; Wallace the Customs Official (Vault City)
#define SCRIPT_VCLYNETT         (128)   // VCLynett.int    ; First Citizen Lynette of Vault City
#define SCRIPT_VCMCLURE         (129)   // VCMClure.int    ; Senior Council Member MCclure (Vault City)
#define SCRIPT_GCBRAIN          (130)   // GCBrain.int     ; Intelligent rat in Gecko
#define SCRIPT_GCFESTUS         (131)   // GCFestus.int    ; Festering ghoul in Gecko
#define SCRIPT_GCGORDON         (132)   // GCGordon.int    ; Ghoul with economic data in Gecko
#define SCRIPT_GCHANK           (133)   // GCHank.int      ; Ghoul that monitors the reactor in Gecko
#define SCRIPT_GCJEREM          (134)   // GCJerem.int     ; Ghoul in charge of supply cabinet in Gecko
#define SCRIPT_GCLUMPY          (135)   // GCLumpy.int     ; Watches the Brahmin and helps Skeeter
#define SCRIPT_GCSKEETR         (136)   // GCSkeetr.int    ; Gadgeteer in Gecko
#define SCRIPT_GCZOMAK          (137)   // GCZomak.int     ; Muscle man for the Brain
#define SCRIPT_GCWOOZ           (138)   // GCWooz.int      ; Bar owner and Tragic player
#define SCRIPT_GCLENNY          (139)   // GCLenny.int     ; Stuttering ghoul that can join party
#define SCRIPT_GCRDESK          (140)   // GCRDesk.int     ; Reactor Desk guard
#define SCRIPT_GCRWORKR         (141)   // GCRWorkr.int    ; Reactor worker
#define SCRIPT_GCRGLOW          (142)   // GCRGlow.int     ; Reactor glowing one
#define SCRIPT_GCRGUARD         (143)   // GCRGuard.int    ; Reactor guard
#define SCRIPT_GCRROBOT         (144)   // GCRRobot.int    ; Reactor robot
#define SCRIPT_GCFOLK           (145)   // GCFolk.int      ; Townsfolk in Gecko
#define SCRIPT_DEPOLV1          (146)   // DepoLv1.int     ; Map script for Sierra Army Depot, Level 1
#define SCRIPT_DEPOLVA          (147)   // DepoLvA.int     ; Map script for Sierra Army Depot Undergound
#define SCRIPT_DEPOLVB          (148)   // DepoLvB.int     ; Map script for Sierra. Underground B
#define SCRIPT_WCSECBOT         (149)   // WCSecBot.int    ; Sierra Base, Security Robot (generic)
#define SCRIPT_WCREPBOT         (150)   // WCRepBot.int    ; Sierra Base, Repair Robot (generic)
#define SCRIPT_WIEVCDSK         (151)   // WIEvcDsk.int    ; Sierra Base, Evacution Holodisk
#define SCRIPT_WIMEDDSK         (152)   // WIMedDsk.int    ; Sierra Base, Medical Log 1 Holodisk
#define SCRIPT_WIEXPDSK         (153)   // WIExpDsk.int    ; Sierra Base, Experiment Log Holodisk
#define SCRIPT_WSTERM1A         (154)   // WSTerm1A.int    ; Security Computer, Level 1 -- Sierra Base
#define SCRIPT_WSTERM1B         (155)   // WSTerm1B.int    ; Security Systems, Level 1 -- Sierra Base
#define SCRIPT_WSTERM2A         (156)   // WSTerm2A.int    ; Security Computer, Level 2 -- Sierra Base
#define SCRIPT_WSTERM2B         (157)   // WSTerm2B.int    ; Security Systems, Level 2 -- Sierra Base
#define SCRIPT_WSTERM2C         (158)   // WSTerm2C.int    ; Auto Repair System, Level 2 -- Sierra Base
#define SCRIPT_WSTERM3A         (159)   // WSTerm3A.int    ; Security Computer, Level 3 -- Sierra Base
#define SCRIPT_WSTERM3B         (160)   // WSTerm3B.int    ; Skynet Terminal, Level 3 -- Sierra Base
#define SCRIPT_WSTERM3C         (161)   // WSTerm3C.int    ; Robobrain Activator, Level 3 -- Sierra Base
#define SCRIPT_WSTERM4A         (162)   // WSTerm4A.int    ; Security Computer, Level 4 -- Sierra Base
#define SCRIPT_WSTERM4B         (163)   // WSTerm4B.int    ; Organ Extractor, Level 4 -- Sierra Base
#define SCRIPT_WSTERM4C         (164)   // WSTerm4C.int    ; BioStorage Computer, Level 4 -- Sierra Base
#define SCRIPT_WIPASWRD         (165)   // WIPaswrd.int    ; Piece of paper with the password on it
#define SCRIPT_WCDOBBS          (166)   // WCDobbs.int     ; Private Dobbs, Sierra Army Depot
#define SCRIPT_WCBRNBOT         (167)   // WCBrnBot.int    ; Brain Bot in the Army Depot
#define SCRIPT_ZSELEV01         (168)   // ZSElev01.int    ; Generic Elevator
#define SCRIPT_ZSELEV02         (169)   // ZSElev02.int    ; Generic Elevator
#define SCRIPT_DITUBBOX         (170)   // DITubBox.int    ; Tubby's box of inventory
#define SCRIPT_DIFLKBOX         (171)   // DIFlkBox.int    ; Flick's box of inventory
#define SCRIPT_SHTANDI          (172)   // SHTandi.int     ; Tandi the talking head in NCR1
#define SCRIPT_ATSRTRP0         (173)   // ATSrTrp0.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_ATSRTRP1         (174)   // ATSrTrp1.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_ATSRTRP2         (175)   // ATSrTrp2.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_ATSRTRP3         (176)   // ATSrTrp3.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_ATSRTRP4         (177)   // ATSrTrp4.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_ATSRTRP5         (178)   // ATSrTrp5.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_ATSRTRP6         (179)   // ATSrTrp6.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_ATSRTRP7         (180)   // ATSrTrp7.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_ATSRTRP8         (181)   // ATSrTrp8.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_ATSRTRP9         (182)   // ATSrTrp9.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_ATSRTRPA         (183)   // ATSrTrpA.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_ATSRTRPB         (184)   // ATSrTrpB.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_ATSRTRPC         (185)   // ATSrTrpC.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_ATSRTRPD         (186)   // ATSrTrpD.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_ATSRTRPE         (187)   // ATSrTrpE.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_ATSRTRPF         (188)   // ATSrTrpF.int    ; Arroyo Spear Trap for Caves (50)
#define SCRIPT_GSTCAV1          (189)   // GSTCAV1.int     ; Modoc Ghost Cave 1
#define SCRIPT_GSTCAV2          (190)   // GSTCAV2.int     ; Modoc Ghost Cave 2
#define SCRIPT_GSTFARM          (191)   // GSTFARM.int     ; Modoc Ghost Farm
#define SCRIPT_MODBRAH          (192)   // MODBRAH.int     ; Modoc Brahmin Field
#define SCRIPT_MODGARD          (193)   // MODGARD.int     ; Modoc Garden
#define SCRIPT_MODINN           (194)   // MODINN.int      ; Modoc Inn
#define SCRIPT_MODMAIN          (195)   // MODMAIN.int     ; Modoc Main
#define SCRIPT_MODSHIT          (196)   // MODSHIT.int     ; Modoc Under the Shitter
#define SCRIPT_MODWELL          (197)   // MODWELL.int     ; Modoc Under the Well
#define SCRIPT_NCR2             (198)   // NCR2.int        ; NCR area 2
#define SCRIPT_ARGARDEN         (199)   // ArGarden.int    ; Arroyo Gardens map script
#define SCRIPT_ACGECKO          (200)   // ACGecko.int     ; generic Gecko creature
#define SCRIPT_AIBROC           (201)   // AIBroc.int      ; Arroyo Broc Flower
#define SCRIPT_AIXANDER         (202)   // AIXander.int    ; Arroyo Xander Root
#define SCRIPT_ZCBRAHMN         (203)   // zcBrahmn.int    ; Generic Brahmin
#define SCRIPT_MCBALWIF         (204)   // mcBalWif.int    ; Modoc Balthas wife
#define SCRIPT_MCBRAHMN         (205)   // mcBrahmn.int    ; Modoc brahmin
#define SCRIPT_MCATKDOG         (206)   // mcAtkDog.int    ; Modoc Attack Dog
#define SCRIPT_MIDCLRKS         (207)   // miDclRks.int    ; Modoc Rocks in front of the death claw cage
#define SCRIPT_MISHTRKS         (208)   // miShtRks.int    ; Modoc Rocks under the shitter
#define SCRIPT_MIWALSFE         (209)   // miWalSfe.int    ; Modoc Farrel's wall safe
#define SCRIPT_MICOINBG         (210)   // miCoinBg.int    ; Modoc Coin bags at the bottom of the well
#define SCRIPT_MITOILET         (211)   // miToilet.int    ; Modoc Toilet
#define SCRIPT_MILSTFND         (212)   // miLstFnd.int    ; Modoc Lost and Found at Rose's
#define SCRIPT_ACJORDAN         (213)   // ACJordan.int    ; Jordan. Trains player in Melee
#define SCRIPT_ACMORLIS         (214)   // ACMorlis.int    ; Aunt Morlis. Has flint to give player
#define SCRIPT_ACFIST           (215)   // ACFist.int      ; Standing Fist. Trains player in Unarmed
#define SCRIPT_ACERIC           (216)   // ACEric.int      ; Whiny person asking to fix the well
#define SCRIPT_ASWELL           (217)   // ASWell.int      ; Arroyo Well. It's broken. Fix w/ Repair
#define SCRIPT_OCGRUTHA         (218)   // OCGrutha.int    ; Vault 13 Gruthar, Deathclaw leader
#define SCRIPT_KLADWTWN         (219)   // Kladwtwn.int    ; Map Script for Klamath Downtown
#define SCRIPT_SCSKEETE         (220)   // SCSkeete.int    ; Skeeter Dialog for NCR entrance area
#define SCRIPT_ACNAGOR          (221)   // ACNagor.int     ; You cousin who has lost his dog
#define SCRIPT_ACDOG            (222)   // ACDog.int       ; Nagor's dog Smoke
#define SCRIPT_NCR1             (223)   // Ncr1.int        ; map for area 1 in ncr
#define SCRIPT_NCR3             (224)   // Ncr3.int        ; map for area 3 in ncr
#define SCRIPT_NCR4             (225)   // Ncr4.int        ; map for area 4 in ncr
#define SCRIPT_NCRENT           (226)   // Ncrent.int      ; map for area entrance in ncr
#define SCRIPT_SCMIKEY          (227)   // SCMikey.int     ; Script for Mikey the Lizard vendor in ncrentrance.
#define SCRIPT_SIMBOX           (228)   // SIMbox.int      ; Script for Mikey's inventory box
#define SCRIPT_WSEMIT1A         (229)   // WSEmit1a.int    ; Emitter, Level 1, Section A   (Sierra Base)
#define SCRIPT_WSEMIT1B         (230)   // WSEmit1b.int    ; Emitter, Level 1, Section B   (Sierra Base)
#define SCRIPT_WSEMIT1C         (231)   // WSEmit1c.int    ; Emitter, Level 1, Section C   (Sierra Base)
#define SCRIPT_WSEMIT1D         (232)   // WSEmit1d.int    ; Emitter, Level 1, Section D   (Sierra Base)
#define SCRIPT_WSEMIT1E         (233)   // WSEmit1e.int    ; Emitter, Level 1, Section E   (Sierra Base)
#define SCRIPT_WSEMIT2A         (234)   // WSEmit2a.int    ; Emitter, Level 2, Section A   (Sierra Base)
#define SCRIPT_WSEMIT2B         (235)   // WSEmit2b.int    ; Emitter, Level 2, Section B   (Sierra Base)
#define SCRIPT_WSEMIT2C         (236)   // WSEmit2c.int    ; Emitter, Level 2, Section C   (Sierra Base)
#define SCRIPT_WSEMIT2D         (237)   // WSEmit2d.int    ; Emitter, Level 2, Section D   (Sierra Base)
#define SCRIPT_WSEMIT3A         (238)   // WSEmit3a.int    ; Emitter, Level 3, Section A   (Sierra Base)
#define SCRIPT_WSEMIT3B         (239)   // WSEmit3b.int    ; Emitter, Level 3, Section B   (Sierra Base)
#define SCRIPT_WSFELD1A         (240)   // WSFeld1a.int    ; F. Field, Level 1, Section A   (Sierra Base)
#define SCRIPT_WSFELD1B         (241)   // WSFeld1b.int    ; F. Field, Level 1, Section B   (Sierra Base)
#define SCRIPT_WSFELD1C         (242)   // WSFeld1c.int    ; F. Field, Level 1, Section C   (Sierra Base)
#define SCRIPT_WSFELD1D         (243)   // WSFeld1d.int    ; F. Field, Level 1, Section D   (Sierra Base)
#define SCRIPT_WSFELD1E         (244)   // WSFeld1e.int    ; F. Field, Level 1, Section E   (Sierra Base)
#define SCRIPT_WSFELD2A         (245)   // WSFeld2a.int    ; F. Field, Level 2, Section A   (Sierra Base)
#define SCRIPT_WSFELD2B         (246)   // WSFeld2b.int    ; F. Field, Level 2, Section B   (Sierra Base)
#define SCRIPT_WSFELD2C         (247)   // WSFeld2c.int    ; F. Field, Level 2, Section C   (Sierra Base)
#define SCRIPT_WSFELD2D         (248)   // WSFeld2d.int    ; F. Field, Level 2, Section D   (Sierra Base)
#define SCRIPT_WSFELD3A         (249)   // WSFeld3a.int    ; F. Field, Level 3, Section A   (Sierra Base)
#define SCRIPT_WSFELD3B         (250)   // WSFeld3b.int    ; F. Field, Level 3, Section B   (Sierra Base)
#define SCRIPT_WSKLAXON         (251)   // WSKlaxon.int    ; Changes lights to Flashing w/ Sierra on Alert
#define SCRIPT_SCBUSTER         (252)   // SCBuster.int    ; Buster the NCR entrance gun dealer
#define SCRIPT_SISHELF1         (253)   // SIShelf1.int    ; Busters inventory shelf 1
#define SCRIPT_SISHELF2         (254)   // SIShelf2.int    ; Busters inventory shelf 2
#define SCRIPT_SISHELF3         (255)   // SIShelf3.int    ; Busters inventory shelf 3
#define SCRIPT_ECRAIDER         (256)   // ECRaider.int    ; Random Encounter Raider
#define SCRIPT_ECPEASNT         (257)   // ECPeasnt.int    ; Random Encounter Peasant
#define SCRIPT_ECMRCHNT         (258)   // ECMrchnt.int    ; Random Encounter Merchant
#define SCRIPT_ECGUARD          (259)   // ECGuard.int     ; Random Encounter Gaurd
#define SCRIPT_SCRAWPAT         (260)   // SCRawpat.int    ; Rawhide patrons at NCR Entrance
#define SCRIPT_WTELFLR2         (261)   // WTElFlr2.int    ; Electric Floor on Level 2 Sierra Base
#define SCRIPT_WTPLTRP0         (262)   // WTPlTrp0.int    ; Plasma Trap for Sierra Base(-30)
#define SCRIPT_WTPLTRP1         (263)   // WTPlTrp1.int    ; Plasma Trap for Sierra Base(-30)
#define SCRIPT_WSPWRDWN         (264)   // WSPwrDwn.int    ; Power Switch for the Sierra Base
#define SCRIPT_KSBBOARD         (265)   // KSBboard.int    ; Klamath bulletin board
#define SCRIPT_ASCRLDR          (266)   // ASCrlDr.int     ; Arroyo Corral Gate
#define SCRIPT_ATGOO            (267)   // ATGoo.int       ; Goo in the Garden Map
#define SCRIPT_KSCVDOOR         (268)   // KSCVDoor.int    ; Door in Klamath Rat Caves
#define SCRIPT_KSMALLDR         (269)   // KSMalldr.int    ; Door in Klamall..get key from Slim or Dog
#define SCRIPT_ZCGECKO          (270)   // ZCGecko.int     ; Generic gecko
#define SCRIPT_ZCLGECKO         (271)   // ZCLGecko.int    ; Generic Golden Gecko
#define SCRIPT_2NDST            (272)   // 2ndSt.int       ; 2nd Street Map Script
#define SCRIPT_CHOPSHOP         (273)   // ChopShop.int    ; Chop Shop Map Script
#define SCRIPT_GECKPWPL         (274)   // GeckPwpl.int    ; Gecko Power Plant Map Script
#define SCRIPT_GECKTUNL         (275)   // GeckTunl.int    ; Gecko Tunnels Map Script
#define SCRIPT_KLACNYN          (276)   // KlaCnyn.int     ; Klamath Canyon Map Script
#define SCRIPT_MBASE12          (277)   // MBase12.int     ; Military Bas
#define SCRIPT_MBASE34          (278)   // MBase34.int     ; Military Base Level 3,4 Map Script
#define SCRIPT_MBCLOSE          (279)   // MBClose.int     ; Military Base Closed Map Script
//#define SCRIPT_MODSHIT          (280)   // ModShit.int     ; Map Script for Modoc Shitter
//#define SCRIPT_NCR1             (281)   // NCR1.int        ; Map Script for NCR1
//#define SCRIPT_NCR2             (282)   // NCR2.int        ; Map Script for NCR2
//#define SCRIPT_NCR3             (283)   // NCR3.int        ; Map Script for NCR3
//#define SCRIPT_NCR4             (284)   // NCR4.int        ; Map Script for NCR4
#define SCRIPT_NCREX            (285)   // NCREx.int       ; Map Script for NCR Exit
#define SCRIPT_STABLE           (286)   // Stable.int      ; Map Script for Stables
#define SCRIPT_V13_ORIG         (287)   // V13_Orig.int    ; Map Script for Original Vault 13
#define SCRIPT_V13ENT           (288)   // V13Ent.int      ; Map Script for Vault 13 Entrance
#define SCRIPT_V15_ORIG         (289)   // V15_Orig.int    ; Map Script for Original Vault 15
#define SCRIPT_V15ENT           (290)   // V15Ent.int      ; Map Script for Vault 15 Entrance
#define SCRIPT_VAULT13          (291)   // Vault13.int     ; Map Script for Vault 13
#define SCRIPT_VAULT15          (292)   // Vault15.int     ; Map Script for Vault 15
#define SCRIPT_VAULTNEC         (293)   // VaultNec.int    ; Map Script for Necropolis Vault
#define SCRIPT_VCTYVLT          (294)   // VCtyVlt.int     ; Map Script for Vault City Vault
#define SCRIPT_VIRGIN           (295)   // Virgin.int      ; Map Script for Virgin (these still exist?)
#define SCRIPT_KSTILL           (296)   // Kstill.int      ; Script for still in Klamath
#define SCRIPT_KCGGCUST         (297)   // Kcggcust.int    ; Script for Klamath golden gecko customers
#define SCRIPT_KCBHCUST         (298)   // Kcbhcust.int    ; Script for Klamath buckner house customers
#define SCRIPT_SCVORTIS         (299)   // SCVortis.int    ; Script for Vortis in NCR entrance area
#define SCRIPT_KCBGIRL          (300)   // Kcbgirl.int     ; Script for Klamath bath girl
#define SCRIPT_SCSLAVES         (301)   // SCSlaves.int    ; Script for the NCR Entrance Slaves
#define SCRIPT_KCSCORP          (302)   // Kcscorp.int     ; Script for Klamath scorpions on the graze map
#define SCRIPT_KCBRAHMN         (303)   // Kcbrahmn.int    ; Script for Klamath brahmin on the graze map
#define SCRIPT_ZSDRVCAR         (304)   // ZSDrvCar.int    ; Drivable Car for the player
#define SCRIPT_DIVICTBL         (305)   // diVicTbl.int    ; Den, table that Vic works at
#define SCRIPT_KLAGRAZ          (306)   // Klagraz.int     ; Map Script for Klamath graze map
#define SCRIPT_CARDESRT         (307)   // CarDesrt.int    ; Car Out of Gas Desert Map
#define SCRIPT_GECKSETL         (308)   // GeckSetl.int    ; Map Script for Gecko Settlememt
#define SCRIPT_VCTYCTYD         (309)   // VCtyCtyd.int    ; Map Script for Vault City Courtyard
#define SCRIPT_KSCORVEG         (310)   // Kscorveg.int    ; Klaath broken car with fuel injection
#define SCRIPT_KLATOXCV         (311)   // KlaToxCv.int    ; Klamath Toxic Caves  Map Script
#define SCRIPT_SISLVDOR         (312)   // SISlvdor.int    ; Slave pen door in NCR Entrance
#define SCRIPT_RNDDSRT          (313)   // RndDsrt.int     ; Random Encounter Desert Map Script
#define SCRIPT_RNDCOAST         (314)   // RndCoast.int    ; Random Encounter Coast Map Script
#define SCRIPT_RNDMNT           (315)   // RndMnt.int      ; Random Encounter Mountain Map Script
#define SCRIPT_KIDBOX           (316)   // Kidbox.int      ; Klamath dunton inventory box
#define SCRIPT_KIBBOX           (317)   // Kibbox.int      ; Klamath buckner inventory box
#define SCRIPT_KISBOX           (318)   // Kisbox.int      ; Klamath sajag inventory box
#define SCRIPT_SCRATCH          (319)   // SCRatch.int     ; NCR Entrance junk dealer Ratch.
#define SCRIPT_NCBOXER          (320)   // ncBoxer.int     ; New Reno Generic Boxer
#define SCRIPT_NCMCKNEE         (321)   // ncMcKnee.int    ; New Reno Mike McKneely
#define SCRIPT_NCHOLLYF         (322)   // ncHollyf.int    ; New Reno Evan Hollyfeld
#define SCRIPT_NCTYSON          (323)   // ncTyson.int     ; New Reno Mike Tyson
#define SCRIPT_NCSCIENT         (324)   // ncScient.int    ; New Reno Generic Scientist
#define SCRIPT_SCMERK           (325)   // SCMerk.int      ; Merk in NCR kind of a mod dude
#define SCRIPT_NCBOXFAN         (326)   // ncBoxFan.int    ; New Reno Boxing Fan
#define SCRIPT_NCDRGDLR         (327)   // ncDrgDlr.int    ; New Reno Drug Dealer
#define SCRIPT_NCCASPAT         (328)   // ncCasPat.int    ; New Reno Casino Patron
#define SCRIPT_NCPIMP           (329)   // ncPimp.int      ; New Reno Generic Pimp
#define SCRIPT_NCJUNKIE         (330)   // ncJunkie.int    ; New Reno Generic Junkie
#define SCRIPT_STUFF            (331)   // stuff.int       ; signals critters on steal attempt
#define SCRIPT_TRESPASS         (332)   // trespass.int    ; same as stuff only for an area
#define SCRIPT_ATDEATH          (333)   // ATDeath.int     ; Spatial telling the player about Nagor dead
#define SCRIPT_SIFAKHLO         (334)   // SIFakhlo.int    ; Fake vault13 holo disk you get from Merk in ncr
#define SCRIPT_SCLENNY          (335)   // SCLenny.int     ; Lenny guy in NCR entrance
#define SCRIPT_SIPTBOX          (336)   // SIPtbox.int     ; Temporary box for the players crap.
#define SCRIPT_NCPROSTI         (337)   // ncProsti.int    ; New Reno Prostitute with billions of messages
#define SCRIPT_NCSLAVE          (338)   // ncSlave.int     ; New Reno Slaves
#define SCRIPT_NCRICO           (339)   // ncRico.int      ; New Reno Rico, Monte's thug
#define SCRIPT_NCACTRES         (340)   // ncActres.int    ; New Reno Porn Actress
#define SCRIPT_NCFLUFFE         (341)   // ncFluffe.int    ; New Reno Porn Fluffer/Extra
#define SCRIPT_KLACANYN         (342)   // Klacanyn.int    ; Map Script for Klamath Canyon
#define SCRIPT_ECWLFPCK         (343)   // ECWlfPck.int    ; Military Base Wolf Pack
#define SCRIPT_ESPWRGEN         (344)   // ESPwrGen.int    ; Military Base Power Generator
#define SCRIPT_ESLKDOR          (345)   // ESLkDor.int     ; Military Base Locked Door (-30)
#define SCRIPT_ECGENMUT         (346)   // ECGenMut.int    ; Military Base Generic Mutant
#define SCRIPT_NCSALMEN         (347)   // ncSalMen.int    ; New Reno Salvatore's Men
#define SCRIPT_NCBISMEN         (348)   // ncBisMen.int    ; New Reno Bishop's Men
#define SCRIPT_NCMORMEN         (349)   // ncMorMen.int    ; New Reno Mordino's Men
#define SCRIPT_NCWRITEE         (350)   // ncWriTee.int    ; New Reno Wright's Sons & Daughters
#define SCRIPT_NCCASBOU         (351)   // ncCasBou.int    ; New Reno Generic Casino Bouncer
#define SCRIPT_SCMIRA           (352)   // SCMira.int      ; Mira bartender in NCR
#define SCRIPT_NEWR1            (353)   // NewR1.int       ; New Reno Map Virgin Street
#define SCRIPT_NEWR2            (354)   // NewR2.int       ; New Reno Map 2nd Street
#define SCRIPT_NEWR3            (355)   // NewR3.int       ; New Reno Map Commercial Row
#define SCRIPT_NEWR4            (356)   // NewR4.int       ; New Reno Map East Side
#define SCRIPT_NEWRST           (357)   // NewRSt.int      ; New Reno Map Stables
#define SCRIPT_NEWRCS           (358)   // NewRCS.int      ; New Reno Map Chop Shop
#define SCRIPT_NEWRGO           (359)   // NewRGo.int      ; New Reno Map Gologtha
#define SCRIPT_NEWRBA           (360)   // NewRBa.int      ; New Reno Map Bishop Basement
#define SCRIPT_EIOUTDSK         (361)   // EIOutDsk.int    ; Military Base Holodisk (Outside)
#define SCRIPT_EILV1DSK         (362)   // EILv1Dsk.int    ; Military Base Holodisk (Level 1)
#define SCRIPT_EILV2DSK         (363)   // EILv2Dsk.int    ; Military Base Holodisk (Level 2)
#define SCRIPT_EILV3DSK         (364)   // EILv3Dsk.int    ; Military Base Holodisk (Level 3)
#define SCRIPT_EILV4DSK         (365)   // EILv4Dsk.int    ; Military Base Holodisk (Level 4)
#define SCRIPT_SCGTEGRD         (366)   // SCGteGrd.int    ; Gate Guard in NCR
#define SCRIPT_ESMINCRT         (367)   // ESMinCrt.int    ; Military Base Mine Cart to explode on door
#define SCRIPT_ECMELCHR         (368)   // ECMelchr.int    ; Melchoir the Magnificent (psuedo-mage)
#define SCRIPT_ECMUTRAT         (369)   // ECMutRat.int    ; Mutated Rats in Military Base
#define SCRIPT_ETGOO            (370)   // ETGoo.int       ; FEV Goo in the Military Base
#define SCRIPT_SCGGCAP          (371)   // SCGGCap.int     ; NCR Entrance Gate guard captain
#define SCRIPT_SCSLVOVR         (372)   // SCslvovr.int    ; Slave overseer in NCR Entrance
#define SCRIPT_ECMELPET         (373)   // ECMelPet.int    ; Melchior's Pets
#define SCRIPT_SCSLVGRD         (374)   // SCSlvGrd.int    ; Slave guards NCR Entrance
#define SCRIPT_SICLSDOR         (375)   // SIClsDor.int    ; Ncr Entrance doors
#define SCRIPT_SITERM           (376)   // SITerm.int      ; Slave pen terminal NCR Entrance
#define SCRIPT_ZISLOTS          (377)   // ziSlots.int     ; Generic Slot Machine
#define SCRIPT_NCWRICHI         (378)   // ncWriChi.int    ; New Wright children
#define SCRIPT_NCSHEB           (379)   // ncSheb.int      ; New Reno Sheb
#define SCRIPT_SCMRKGRD         (380)   // SCMrkGrd.int    ; Merk's Guards NCR Entrances / Council
#define SCRIPT_SIEMTR           (381)   // SCEmtr.int      ; FField Emitter for NCR Entrance
#define SCRIPT_SIFFIELD         (382)   // SCFField.int    ; Force field for NCR Entrance
#define SCRIPT_KCSULIK          (383)   // Kcsulik.int     ; Sulik from Klamath
#define SCRIPT_SCHENRY          (384)   // SCHenry.int     ; Henry in NCR Entrance
#define SCRIPT_SCCARGRD         (385)   // SCCarGrd.int    ; Carlson's guard NCR2
#define SCRIPT_STCARATK         (386)   // SCCarAtk.int    ; Carlson's guards attack spatial
#define SCRIPT_SCCGTGRD         (387)   // SCcgtgrd.int    ; Carlson's gate guards
#define SCRIPT_VCOUTPRS         (388)   // VCOutPrs.int    ; Vault City Outsider Prisoner (Generic)
#define SCRIPT_VCCITPRS         (389)   // VCCitPrs.int    ; Vault City Citizen Prisoner (Generic)
#define SCRIPT_VCGENFAM         (390)   // VCGenFam.int    ; Vault City Generic Family
#define SCRIPT_VCAMAID          (391)   // VCAmAid.int     ; Vault City Amenities Aid
//#define SCRIPT_GCRDESK          (392)   // GCRDesk.int     ; Gecko Reactor Desk Guard
#define SCRIPT_GCRGHOUL         (393)   // GCRGhoul.int    ; Gecko Reactor Ghoul Worker
//#define SCRIPT_GCRGLOW          (394)   // GCRGlow.int     ; Gecko Glowing One
//#define SCRIPT_GCRGUARD         (395)   // GCRGuard.int    ; Gecko Red Door Guard
#define SCRIPT_GCROBOT          (396)   // GCRobot.int     ; Gecko Reactor Robot
//#define SCRIPT_GCFOLK           (397)   // GCFolk.int      ; Gecko Townsfolk
#define SCRIPT_GCWORSHP         (398)   // GCWorshp.int    ; Gecko Worshippers
#define SCRIPT_GCHAROLD         (399)   // GCHarold.int    ; Harold in Gecko
#define SCRIPT_GCPACOFF         (400)   // GCPACOff.int    ; Gecko Powered Armor Com Officer
#define SCRIPT_SCTOTO           (401)   // SCToto.int      ; Toto helper bot in NCR Entrance
#define SCRIPT_SCDOROTH         (402)   // SCDoroth.int    ; Dorothy NCR Engineer.
#define SCRIPT_NCPERSON         (403)   // ncPerson.int    ; New Reno Generic Townsperson/Citizen
#define SCRIPT_GCYGUARD         (404)   // GCYGuard.int    ; Gecko Yellow Door Guard
#define SCRIPT_GCGUARD          (405)   // GCGuard.int     ; Gecko Generic Guard
#define SCRIPT_SCGOND           (406)   // SCGond.int      ; Gond, Ranger Guard Super Mut
#define SCRIPT_SCDUPPO          (407)   // SCduppo.int     ; Duppo, stockman's yard owner
#define SCRIPT_SIDTBL           (408)   // SIdtbl.int      ; Duppo's shop tables
#define SCRIPT_SCSALBOB         (409)   // SCsalbob.int    ; Salt Beef Bob Ncr 3
#define SCRIPT_ZIDCEGRL         (410)   // ziDceGrl.int    ; Generic Casino Girl with Dice Game
#define SCRIPT_NIDCEGRL         (411)   // niDceGrl.int    ; New Reno Casino Girl with Dice Game
#define SCRIPT_ZI8BALL          (412)   // zi8Ball.int     ; EPA Magic 8 Ball
#define SCRIPT_NCANGBRA         (413)   // ncAngBra.int    ; New Reno Angry Brahmin
#define SCRIPT_NIMCGSLT         (414)   // niMcGSlt.int    ; New Reno McGee's Slot Machine
#define SCRIPT_NCMCGEE          (415)   // ncMcGee.int     ; New Reno Old Man (Bobby) McGee
#define SCRIPT_NC3MONTE         (416)   // nc3Monte.int    ; New Reno Three Card Monte
#define SCRIPT_NCALGERN         (417)   // ncAlgern.int    ; New Reno Algernon
#define SCRIPT_NCBILL           (418)   // ncBill .int     ; New Reno Bill (Trees Lounge)
#define SCRIPT_NCBISGRD         (419)   // ncBisGrd.int    ; New Reno Bishop's Bodyguards
#define SCRIPT_NCBISHOP         (420)   // ncBishop.int    ; New Reno John Bishop
#define SCRIPT_NICASMAC         (421)   // niCasMac.int    ; New Reno Casino Machine
#define SCRIPT_NCCHPBOY         (422)   // ncChpBoy.int    ; New Reno Chop Shop Boys
#define SCRIPT_NCCHRWRI         (423)   // ncChrWri.int    ; New Reno Chris Wright
#define SCRIPT_NCCODY           (424)   // ncCody .int     ; New Reno Cody
#define SCRIPT_NCCORBRO         (425)   // ncCorBro.int    ; New Reno Corsican Bothers
#define SCRIPT_NCELDRID         (426)   // ncEldrid.int    ; New Reno Eldride
#define SCRIPT_NCETHWRI         (427)   // ncEthWri.int    ; New Reno Ethyl Wright
#define SCRIPT_NCFTULLY         (428)   // ncFTully.int    ; New Reno Father Tully
#define SCRIPT_NCHUMPER         (429)   // ncHumper.int    ; New Reno HumperdumperDIDO
#define SCRIPT_NCLILJES         (430)   // ncLilJes.int    ; New Reno Lil' Jesus Mordino
#define SCRIPT_NCJIMMYJ         (431)   // ncJimmyJ.int    ; New Reno Jagged Jimmy J
#define SCRIPT_NCKEIWRI         (432)   // ncKeiWri.int    ; New Reno Keith Wright
#define SCRIPT_NCLABISH         (433)   // ncLABish.int    ; New Reno Lee Anne Bishop
#define SCRIPT_NCLLOYD          (434)   // ncLloyd.int     ; New Reno Pretty Boy Lloyd
#define SCRIPT_NCMASON          (435)   // ncMason.int     ; New Reno Mason
#define SCRIPT_NCMYRGRD         (436)   // ncMyrGrd.int    ; New Reno Myron's Guards
#define SCRIPT_NHMYRON          (437)   // nhMyron.int     ; New Reno Myron (Talking Head)
#define SCRIPT_NCNIKKI          (438)   // ncNikki.int     ; New Reno Darlin Nikki
#define SCRIPT_NCORVILL         (439)   // ncOrvill.int    ; New Reno Orville Wright
#define SCRIPT_NCPITBOS         (440)   // ncPitBos.int    ; New Reno Generic Pit Boss
#define SCRIPT_NCRENESC         (441)   // ncRenesc.int    ; New Reno Renesco the Rocket-Man
#define SCRIPT_NCRESEAR         (442)   // ncResear.int    ; New Reno Stables Researcher
#define SCRIPT_NCSALVAT         (443)   // ncSalvat.int    ; New Reno Boss Salvatore
#define SCRIPT_NCSTULIT         (444)   // ncStuLit.int    ; New Reno Stuart Little (Agent)
#define SCRIPT_NCTRAY           (445)   // ncTRay .int     ; New Reno T-Ray
#define SCRIPT_NCBITCH          (446)   // ncBitch.int    ; New Reno Corsican Brothers Bitches
#define SCRIPT_NCWRIPLY         (447)   // ncWriPly.int    ; New Reno Wright Children Playing
#define SCRIPT_SCCOP            (448)   // SCCop.int       ; NCR Cop
#define SCRIPT_SCOSWALD         (449)   // SCOswald.int    ; NCR Raider captive
#define SCRIPT_SCDUSTY          (450)   // SCDusty.int     ; Dusty Ncr 1, bartender
#define SCRIPT_NCJULES          (451)   // ncJules.int     ; New Reno Jules
#define SCRIPT_NCKITTY          (452)   // ncKitty.int     ; New Reno Miss Kitty
#define SCRIPT_NCBARTEN         (453)   // ncBarten.int    ; New Reno Bartender
#define SCRIPT_SCKARL           (454)   // SCKarl.int      ; Karl a Deupty in NCR map 1
#define SCRIPT_SIKDOOR          (455)   // SIKdoor.int     ; Karl's door.
#define SCRIPT_NCBIGJES         (456)   // ncBigJes.int    ; New Reno Big Jesus Mordino
#define SCRIPT_SCHOSS           (457)   // SCHoss.int      ; Hoss, bully NCR 1 map
#define SCRIPT_SIMSERUM         (458)   // SIMserum.int    ; Mutagenic Syrum
#define SCRIPT_NISALBOX         (459)   // niSalBox.int    ; New Reno Salvatore Bartender Shop Inventory
#define SCRIPT_NIMORBOX         (460)   // niMorBox.int    ; New Reno Mordino Bartender Shop Inventory
#define SCRIPT_NIBISBOX         (461)   // niBisBox.int    ; New Reno Bishop Bartender Shop Inventory
#define SCRIPT_NITMPBOX         (462)   // niTmpBox.int    ; New Reno Personal Inventory Swap Box
#define SCRIPT_SCDOCJUB         (463)   // SCDocJub.int    ; Doctor Jubilee NCR Map 1
#define SCRIPT_GSYDOOR          (464)   // GSYDoor.int     ; Yellow Door in Gecko Reactor
#define SCRIPT_GSRDOOR          (465)   // GSRDoor.int     ; Red Door in Gecko Reactor
#define SCRIPT_SIDSHELF         (466)   // SIDShelf.int    ; Doctor's shelf NCR 1
#define SCRIPT_SCSHERIF         (467)   // SCsherif.int    ; Sheriff in NCR map 1
#define SCRIPT_SCELISE          (468)   // SCElise.int     ; Elise NCR map 1 Ranger leader
#define SCRIPT_SCWRHAND         (469)   // SCwrhand.int    ; Westin Ranch Hand
#define SCRIPT_SCFELIX          (470)   // SCFelix.int     ; Felix Westin's Ranch Forman
#define SCRIPT_SCWESTIN         (471)   // SCWestin.int    ; Westin big dude NCR 3
#define SCRIPT_SCRONDO          (472)   // SCRondo.int     ; Rondo Ranger in NCR 1
#define SCRIPT_SCROBO           (473)   // SCRobo.int      ; Robodog NCR 1
#define SCRIPT_NIBISSTA         (474)   // NIBissta.int    ; New Reno Bishop's stairs
#define SCRIPT_SCHAL            (475)   // SCHal.int       ; Hal, Drive Leader NCR
#define SCRIPT_SCGUNTHR         (476)   // SCGunthr.int    ; Gunther, Tandi's assistant NCR 2
#define SCRIPT_ECCRTBRA         (477)   // ECCrtBra.int    ; Random Encounter Brahmin for carts
#define SCRIPT_ECCVNMST         (478)   // ECCvnMst.int    ; Random Encounter Caravan Master
#define SCRIPT_ECCVNDRV         (479)   // ECCvnDrv.int    ; Random Encounter Caravan Driver
#define SCRIPT_ECCVNGRD         (480)   // ECCvnGrd.int    ; Random Encounter Caravan Guard
#define SCRIPT_ECRADLDR         (481)   // ECRadLdr.int    ; Random Encounter Raider Leader
#define SCRIPT_ECMOBSTR         (482)   // ECMobstr.int    ; Random Encounter Mobster (Outside New Reno)
#define SCRIPT_ECHNTLDR         (483)   // ECHntLdr.int    ; Random Encoutner Hunting Party Leader
#define SCRIPT_ECHUNTER         (484)   // ECHunter.int    ; Random Encounter Hnting Party
#define SCRIPT_ECRANGER         (485)   // ECRanger.int    ; Random Encounter NCR Rangers (Patrol)
#define SCRIPT_ECMERCS          (486)   // ECMercs.int     ; Random Encounter Mercenaries
#define SCRIPT_ECMRCLDR         (487)   // ECMrcLdr.int    ; Random Encounter Mercenary Leader
#define SCRIPT_ECRADGRP         (488)   // ECRadGrp.int    ; Random Encounter Raider Party
#define SCRIPT_ECRNDDRV         (489)   // ECRndDrv.int    ; Random Encounter Other Caravan Driver
#define SCRIPT_ECRNDGRD         (490)   // ECRndGrd.int    ; Random Encounter Other Caravan Guard
#define SCRIPT_ECVLTPAT         (491)   // ECVltPat.int    ; Random Encounter Vault City Patrols
#define SCRIPT_ECVLTCPT         (492)   // ECVltCpt.int    ; Random Encounter Vault City Patrol Capt.
#define SCRIPT_ECFARMER         (493)   // ECFarmer.int    ; Random Encounter Farmer
#define SCRIPT_ECBRAHRD         (494)   // ECBraHrd.int    ; Random Encounter Brahmin Herd
#define SCRIPT_ECLEDBRA         (495)   // ECLedBra.int    ; Randm Encounter Lead Brahmin
#define SCRIPT_ECTRVLR          (496)   // ECTrvlr.int     ; Random Encounter Traveler
#define SCRIPT_ECGHLPAT         (497)   // ECGhlPat.int    ; Random Encounter Ghoul Patrol
#define SCRIPT_ECGHLCPT         (498)   // ECGhlCpt.int    ; Random Encounter Ghoul Patrol Capt.
#define SCRIPT_ECMUTPAT         (499)   // ECMutPat.int    ; Random Encounter Mutant Patrol
#define SCRIPT_ECMUTCPT         (500)   // ECMutCpt.int    ; Random Encounter Mutant Patrol Capt.
#define SCRIPT_ECBRADRV         (501)   // ECBraDrv.int    ; Random Encounter Brahmin Driver
#define SCRIPT_ECBRARST         (502)   // ECBraRst.int    ; Random Encounter Brahmin Rustler
#define SCRIPT_ECSQUATR         (503)   // ECSquatr.int    ; Random Encounter Squatters
#define SCRIPT_ECABOLST         (504)   // ECAbolst.int    ; Random Encounter Abolitionist
#define SCRIPT_ECMONSHN         (505)   // ECMonShn.int    ; Random Encounter Moonshine Runner
#define SCRIPT_ECROGMUT         (506)   // ECRogMut.int    ; Random Encounter Rogue Super Mutants
#define SCRIPT_ECFSHRMN         (507)   // ECFshrmn.int    ; Random Encounter Fisherman
#define SCRIPT_ECSLAVER         (508)   // ECSlaver.int    ; Random Encounter Slaver
#define SCRIPT_ECTRAPPR         (509)   // ECTrappr.int    ; Random Encounter Trapper
#define SCRIPT_SCCARKID         (510)   // SCCarkid.int    ; Carlson's kid NCR map 2
#define SCRIPT_SCCARLSN         (511)   // SCCarlsn.int    ; Carlson NCR 2
#define SCRIPT_ANIMFRVR         (512)   // animfrvr.int     ; Animate forever
#define SCRIPT_SCOFJACK         (513)   // SCOfjack.int    ; Officer Jack NCR 1
#define SCRIPT_SCENLONE         (514)   // SCEnlOne.int    ; The Enlightened One NCR 1
#define SCRIPT_DIDOOR           (515)   // diDoor.int      ; Den Auto Closing Door
#define SCRIPT_GSTERM           (516)   // gsTerm.int      ; Gecko robot control terminal
#define SCRIPT_SCBRAHMN         (517)   // SCBrahmn.int    ; NCR Map 4 Brahmn
#define SCRIPT_SCDTHCLA         (518)   // SCDthCla.int    ; NCR Map 4 Deathclaw
#define SCRIPT_SIEXIT           (519)   // SIExit.int      ; NCR Map 4 Exit Grid Control
#define SCRIPT_SSCOMP           (520)   // SSComp.int      ; NCR Map 1 Computer terminal that blows up
#define SCRIPT_SCFERGUS         (521)   // SCFergus.int    ; NCR Map 2
#define SCRIPT_OCARIEL          (522)   // OCAriel.int     ; Vault13 map Ariel
#define SCRIPT_RCFANNIE         (523)   // RCFannie.int    ; Fannie Mae the hooker in Redding
#define SCRIPT_OSCOMPTR         (524)   // OSComptr.int    ; Computer terminal in Vault 13
#define SCRIPT_OCDALIA          (525)   // OCDalia.int     ; Dalia in Vault 13
#define SCRIPT_OCDAR            (526)   // OCDar.int       ; Dar Deathclaw guard Vault 13
#define SCRIPT_OCDAVE           (527)   // OCDave.int      ; Dave NPC in Vault 13
#define SCRIPT_OCGORDON         (528)   // OCGordon.int    ; Gordon the shrine templar dude
#define SCRIPT_ZICLOSED         (529)   // ziClosed.int    ; Generic "Out of Business" signs
#define SCRIPT_GSREACTR         (530)   // gsReactor.int   ; Script to animate reactor
#define SCRIPT_OCJIMMY          (531)   // OCJimmy.int     ; Jimmy guy in computer room in Vault13
#define SCRIPT_OCJOSEPH         (532)   // OCJoseph.int    ; Doctor in Vault 13
#define SCRIPT_OCMATT           (533)   // OCMatt.int      ; Prisonner in Vault 13
#define SCRIPT_RCFITRAT         (534)   // RCFitRat.int    ; Redding Fighting Molerats
#define SCRIPT_REDMENT          (535)   // RedMEnt.int     ; Redding Mine Entrance Map Script
//#define SCRIPT_VAULT13          (536)   // Vault13.int     ; Vault13 map script
#define SCRIPT_OCSANDY          (537)   // OCSandy.int     ; Sandy Vault 13 Child
#define SCRIPT_ZITMPBOX         (538)   // ziTmpBox.int    ; Generic Temporary swap box
#define SCRIPT_OCTHEARN         (539)   // OCThearn.int    ; Vault13 guard Thearn
#define SCRIPT_MIGRIBOX         (540)   // miGriBox.int    ; Modoc Grisham Merchant box
#define SCRIPT_MIJOBOX          (541)   // miJoBox.int     ; Modoc Jo Merchant box
#define SCRIPT_OCVALDIS         (542)   // OCValdis.int    ; Guard in Vault 13
#define SCRIPT_OSVDRCMP         (543)   // OSVdrcmp.int    ; Vault 13 entrace computer
#define SCRIPT_OILOCKER         (544)   // OILocker.int    ; Locker in Vault 13
#define SCRIPT_OIFTLKR          (545)   // OIftlkr.int     ; Footlocker in Vault 13
#define SCRIPT_OCGRUNT          (546)   // OCGrunt.int     ; Generic Deathclaw guard Vau;t 13
#define SCRIPT_OCGORIS          (547)   // OCGoris.int     ; Goris possible NPC party member in Vault 13
#define SCRIPT_MIBALBOX         (548)   // miBalBox.int    ; Modoc Balthas Merchant box
#define SCRIPT_SILOCKER         (549)   // SILocker.int    ; Guard's lockers in NCR 1
#define SCRIPT_CHEATER          (550)   // Cheater.int     ; Cheater Character
//#define SCRIPT_VAULT15          (551)   // Vault15.int     ; Vault 15 script
#define SCRIPT_BCPHIL           (552)   // BCPhil.int      ; Vault 15 entrance guard dude
#define SCRIPT_BCBILL           (553)   // BCBill.int      ; Vault 15 entrance fluff dude
#define SCRIPT_MCBUTCHR         (554)   // mcButchr.int    ; Slaughter house guys in Modoc
#define SCRIPT_BCDALIA          (555)   // BCDalia.int     ; Dalia guard who guards a trail in Vault15
#define SCRIPT_BCJOHN           (556)   // BCJohn.int      ; John vault 15 guy entrance
#define SCRIPT_BCJONES          (557)   // BCJones.int     ; Jones doctor in vault 15
#define SCRIPT_BCKARLA          (558)   // BCKarla.int     ; Karla Vault 15 guard
#define SCRIPT_V15SENT          (559)   // V15sent.int     ; vault 15 secret entrance
#define SCRIPT_BCREBECC         (560)   // VCRebecc.int    ; Rebecca V15ent
#define SCRIPT_MIDOOR           (561)   // miDoor.int      ; Modoc Doors
#define SCRIPT_MCDTHCLW         (562)   // mcDthClw.int    ; Modoc Rose's "Chicken"
#define SCRIPT_BCROBERT         (563)   // BCRobert.int    ; Roberta Vault 15 Entrace
#define SCRIPT_BCSARA           (564)   // BCSara.int      ; Sara Vault 15 Entrance
#define SCRIPT_BCZEKE           (565)   // BCZeke.int      ; Zeke Vault 15 Entrace mayor
#define SCRIPT_BCBRAHMN         (566)   // BCBrahmn.int    ; Generic Brahmin in Vault 15 Entrance
#define SCRIPT_BIENTDR          (567)   // BIEntdr.int     ; Vault 15 Entrance door trapped
#define SCRIPT_BCCRISSY         (568)   // BCCrissy.int    ; Crissy Rebecca's daughter vault 15
#define SCRIPT_BCDARION         (569)   // BCDarion.int    ; Darion Big bad dude Vault 15
#define SCRIPT_BCDARGRD         (570)   // BCDarGrd.int    ; Darion's guards in Vault 15
#define SCRIPT_BCDARDOG         (571)   // BCDarDog.int    ; Darion's dog in Vault 15
#define SCRIPT_VCCASIDY         (572)   // VCCasidy.int    ; Cassidy the  bar person in Vault City
#define SCRIPT_MIWELL           (573)   // miWell.int      ; Modoc Well
#define SCRIPT_MCMOLRAT         (574)   // mcMolRat.int    ; Modoc Shitter Mole Rat
#define SCRIPT_MIBRAMEA         (575)   // miBraMea.int    ; Modoc Brahmin Chunks
#define SCRIPT_MCKILBRA         (576)   // mcKilBra.int    ; Modoc Slaughterhouse brahmin
#define SCRIPT_BSELEV           (577)   // BSElev.int      ; Elevator door in V15sent
#define SCRIPT_MCKILDOG         (578)   // mcKilDog.int    ; Modoc Dog that hangs out at the slaughter house
#define SCRIPT_MCRAT            (579)   // mcRat.int       ; Modoc Garden Rat
#define SCRIPT_ZISUNSPT         (580)   // ziSunSpt.int    ; Generic Sun Spot
#define SCRIPT_MCBESS           (581)   // mcBess.int      ; Modoc Bess the Brahmin
#define SCRIPT_MIJKYBOX         (582)   // miJkyBox.int    ; Modoc Jerky box
#define SCRIPT_ZCCRPDEL         (583)   // ZCCrpDel.int    ; Craps Dealer
#define SCRIPT_BCGENGRD         (584)   // BCGenGrd.int    ; Generic Guard for Vault 15, Khan Guard
#define SCRIPT_MCSLAG           (585)   // mcSlag.int      ; Modoc Generic Slag
#define SCRIPT_MTRUG            (586)   // mtRug.int       ; Modoc Spacial Script for Rug
#define SCRIPT_MCCHILD          (587)   // mcChild.int     ; Modoc Child
#define SCRIPT_HCAILEEN         (588)   // hcAileen.int    ; Aileen in Broken Hill
#define SCRIPT_HCBNKGRD         (589)   // hcBnkGrd.int    ; Bank Guard in Broken Hills
#define SCRIPT_HCDOC            (590)   // hcDoc.int       ; Doc in Broken Hills
#define SCRIPT_HCENCHA          (591)   // hcencha.int     ; Henchman A in Broken Hills
#define SCRIPT_HCENCHB          (592)   // hcenchb.int     ; Henchman B in Broken Hills
#define SCRIPT_HCFEMALE         (593)   // hcfemale.int    ; Female in Broken Hills
#define SCRIPT_HCFRANCI         (594)   // hcFranci.int    ; Francis in Broken Hills
#define SCRIPT_HCFRANK          (595)   // hcFrank.int     ; Frank in Broken Hills
#define SCRIPT_HCGHOUL          (596)   // hcGhoul.int     ; Ghoul in Broken Hills
#define SCRIPT_HCLIZ            (597)   // hcLiz.int       ; Liz in Broken Hills
#define SCRIPT_HCMALE           (598)   // hcmale.int      ; Male in Broken Hills
#define SCRIPT_HCMANSON         (599)   // hcManson.int    ; Manson in Broken Hills
#define SCRIPT_HCMARCUS         (600)   // hcMarcus.int    ; Marcus in Broken Hills
#define SCRIPT_HCMINERS         (601)   // hcMiners.int    ; Miners in Broken Hills
#define SCRIPT_HCMUTANT         (602)   // hcMutant.int    ; Mutant in Broken Hills
#define SCRIPT_HCOUTFIT         (603)   // hcOutfit.int    ; Outfitter in Broken Hills
#define SCRIPT_HCPHIL           (604)   // hcPhil.int      ; Phil the bartender in Broken Hills
#define SCRIPT_HCSTEVE          (605)   // hcSteve.int     ; Steve in Broken Hills
#define SCRIPT_HCSUPER          (606)   // hcSuper.int     ; Supervisor in Broken Hills
#define SCRIPT_HCZAIUS          (607)   // hcZaius.int     ; Zaius in Broken Hills
#define SCRIPT_HCJACOB          (608)   // hcJacob.int     ; Jacob in Broken Hills
#define SCRIPT_HCHEMS           (609)   // hchems.int      ; Chemistry Set in Broken Hills
#define SCRIPT_MIGSTPRP         (610)   // miGstPrp.int    ; Modoc Ghost Farm Prop
#define SCRIPT_BSSDOR1          (611)   // BiSdor1.int     ; Shack doors on v15sent.map
#define SCRIPT_BSCOMP1          (612)   // BSComp1.int     ; ibrary computer vault 15
#define SCRIPT_HCCHAD           (613)   // hcchad.int      ; Chad from Broken Hills
#define SCRIPT_ECPLANT          (614)   // ECPlant.int     ; Random Encounter Spore Plant
#define SCRIPT_ECGECKO          (615)   // ECGecko.int     ; Random Encounter Gecko
#define SCRIPT_ECSCORP          (616)   // ECScorp.int     ; Random Encounter Scorpions
#define SCRIPT_ECRAT            (617)   // ECRat.int       ; Random Encounter Rats
#define SCRIPT_ECWARPTY         (618)   // ECWarPty.int    ; Random Encounter War Party
#define SCRIPT_ECCANIBL         (619)   // ECCanibl.int    ; Random Encounter Cannibals
#define SCRIPT_ECOUTCST         (620)   // ECOutCst.int    ; Random Encounter Outcasts
#define SCRIPT_ECHLYPPL         (621)   // ECHlyPpl.int    ; Random Encounter Holy People
#define SCRIPT_ECNOMAD          (622)   // ECNomad.int     ; Random Encounter Nomads
#define SCRIPT_ECHOMLES         (623)   // ECHomles.int    ; Random Encounter Homeless
#define SCRIPT_ECBANDIT         (624)   // ECBandit.int    ; Random Encounter Bandit
#define SCRIPT_ECROBBER         (625)   // ECRobber.int    ; Random Encounter Robber
#define SCRIPT_ECHIWYMN         (626)   // ECHiwymn.int    ; Random Encounter Highwaymen
#define SCRIPT_ECSLVRUN         (627)   // ECSlvRun.int    ; Random Encounter Slavers on a Slave Run
#define SCRIPT_ECSLAVE          (628)   // ECSlave.int     ; Random Encounter Slaves
#define SCRIPT_ECRAVPTY         (629)   // ECRavPty.int    ; Random Encounter Rave Party
#define SCRIPT_ECMANTIS         (630)   // ECMantis.int    ; Random Encounter Mantis
#define SCRIPT_ECBRAHMN         (631)   // ECBrahmn.int    ; Random Encounter Brahmin
#define SCRIPT_ECWLDDOG         (632)   // ECWldDog.int    ; Random Encounter Wild Dogs
#define SCRIPT_BSCOMP2          (633)   // BSComp2.int     ; Darion's computer terminal Vault 15
#define SCRIPT_BSCOMP3          (634)   // BSComp3.int     ; Computer terminal 3 Vault 15
#define SCRIPT_BSCOMP4          (635)   // BSComp4.int     ; Computer terminal 4 Vault 15
#define SCRIPT_BSCOMP5          (636)   // BSComp5.int     ; Computer terminal 5 Vault 15
#define SCRIPT_BSPOWER          (637)   // BSPower.int     ; Power Generator in Vault 15
#define SCRIPT_BSFIELD          (638)   // BSField.int     ; Force Field in Vault 15
// #define SCRIPT_MCPEASAN         (639)   // mcPeasan.int    ; Modoc Peasant Person
#define SCRIPT_BSEMTR           (640)   // BSEmtr.int      ; Emitter in vault 15
#define SCRIPT_OSV13DR          (641)   // OSV13Dr.int     ; Vault 13 Door
#define SCRIPT_OSDOOR1          (642)   // OSdoor1.int     ; Vault 13 Door that shows the deathclaws.
#define SCRIPT_RNDBESS          (643)   // rndBess.int     ; Bess random encounter map script
#define SCRIPT_ECBESS           (644)   // ECBess.int      ; Bess on Bess's random encounter map
#define SCRIPT_ECBESCOW         (645)   // ECBesCow.int    ; One of the Brahmin in Bess's herd
#define SCRIPT_NCANGBIS         (646)   // ncAngBis.int    ; New Reno Angela Bishop
#define SCRIPT_NCTOMMY          (647)   // ncTommy.int     ; New Reno Tommy the Balls (YEAH! OUR HERO)
#define SCRIPT_NIABISSF         (648)   // niABisSf.int    ; New Reno Angela Bishop's Safe
#define SCRIPT_NIMRBSF          (649)   // niMrBSf.int     ; New Reno Mr. Bishop's Safe
#define SCRIPT_NIMRSBSF         (650)   // niMrsBSf.int    ; New Reno Mrs. Bishop's Safe
#define SCRIPT_NIOWRISF         (651)   // niOWriSf.int    ; New Reno Orville Wright's Safe
#define SCRIPT_NIPRIGRV         (652)   // niPriGrv.int    ; New Reno Pritchard's Grave
#define SCRIPT_NIWRIDRS         (653)   // niWridrs.int    ; New Reno Richard Wright's Dresser
#define SCRIPT_NIWRIGRV         (654)   // niWriGrv.int    ; New Reno Righard Wright's Grave
#define SCRIPT_NIWRISTI         (655)   // niWriSti.int    ; New Reno Wright Stills
#define SCRIPT_NCRAMIRE         (656)   // ncRamire.int    ; New Reno Ramirez
#define SCRIPT_CAVE01           (657)   // cave01.int      ; Cave 1 Random Encounter map
#define SCRIPT_NIRENBOX         (658)   // niRenBox.int    ; New Reno Renesco Box
#define SCRIPT_NIDOOR           (659)   // niDoor.int      ; New Reno Door
#define SCRIPT_CAVE02           (660)   // Cave02.int      ; Cave 2 map script
#define SCRIPT_CAVE03           (661)   // Cave03.int      ; Cave 3 map script
#define SCRIPT_CAVE04           (662)   // Cave04.int      ; Cave 4 map script
#define SCRIPT_CAVE05           (663)   // Cave05.int      ; Cave 5 map script
#define SCRIPT_VIENTDOR         (664)   // VIEntDor.int    ; Vault City Entrance Door
#define SCRIPT_VCTYDWTN         (665)   // VCtyDwtn.int    ; Vault City Downtown Map script
#define SCRIPT_MITRPDOR         (666)   // miTrpDor.int    ; Modoc Ghost Farm Trap Door
#define SCRIPT_HILBOX           (667)   // Hilbox.int      ; Broken Hills Liz inventory box
#define SCRIPT_NTLYDROM         (668)   // ntLydRom.int    ; New Reno Lloyd Room
#define SCRIPT_VCMOORE          (669)   // VCMoore.int     ; Thomas Moore from Vault City
#define SCRIPT_ZILCKDOR         (670)   // ZILckDor.int    ; Generic Locked Door (-20)
#define SCRIPT_NILYDBOX         (671)   // niLydBox.int    ; New Reno Lloyd's Loot Box
#define SCRIPT_NIMANHOL         (672)   // niManhol.int    ; New Reno Manhole to Lloyd's Loot
#define SCRIPT_NILYDGRV         (673)   // niLydGrv.int    ; New Reno Lloyd's Loot Grave
#define SCRIPT_VCSUPGRD         (674)   // VCSupGrd.int    ; Vault City Supply Guard Martin
#define SCRIPT_BROKEN1          (675)   // broken1.int     ; Map Script for Broken Hills Map 1
#define SCRIPT_RNDEXCOW         (676)   // CowBomb.int     ; Map script with some exploding cows
#define SCRIPT_ECCOWBMB         (677)   // ECCowBmb.int    ; The cows that go boom.
#define SCRIPT_RCHAKES          (678)   // RCHakes.int     ; Hakeswill from Redding
#define SCRIPT_REDDOWN          (679)   // REDDown.int     ; Redding Downtown map script
#define SCRIPT_BHRNDDST         (680)   // BHRndDst.int    ; Broken Hills Caravan Desert Map
#define SCRIPT_BHRNDMTN         (681)   // BHRndMtn.int    ; Broken Hills Caravan Mountain Map
#define SCRIPT_RCLOU            (682)   // RCLou.int       ; Lou from Redding
#define SCRIPT_ECARTHUR         (683)   // ECArthur.int    ; Arthur the leader of the Special Encounter Knights
#define SCRIPT_ECROBIN          (684)   // ECRobin.int     ; Robin One of the knights with Arthur
#define SCRIPT_ECBEDEMI         (685)   // ECBedemi.int    ; Bedemir one of the knights with Arthur
#define SCRIPT_ECSIRLAU         (686)   // ECSirLau.int    ; Launcelot one of the knights with Arthur
#define SCRIPT_ECGALAHA         (687)   // ECGalaha.int    ; Galahad one of the knights with Arthur
#define SCRIPT_RCWADE           (688)   // RCWade.int      ; Ben Wade from Radding
#define SCRIPT_RCDICK           (689)   // RCDick.int      ; Athabaska Dick from Redding
#define SCRIPT_RCROONEY         (690)   // RCRooney.int    ; Widow Rooney from Redding
#define SCRIPT_RCGENPES         (691)   // RCGenPes.int    ; Generic Townsperson in Redding
#define SCRIPT_RCSTANWL         (692)   // RCStanwl.int    ; Stannwell from Redding
#define SCRIPT_RCSAVINE         (693)   // RCSavine.int    ; Savinelli from Redding
#define SCRIPT_RCMARGE          (694)   // RCMarge.int     ; Marge LeBarge from Redding
#define SCRIPT_RCMODJES         (695)   // RCModjes.int    ; Madam Modjeska from Redding
#define SCRIPT_RCHOFFY          (696)   // RCHoffy.int     ; James Hoffy, Caravan Master for Redding
#define SCRIPT_RNDHOLY1         (697)   // Rndholy1.int    ; Random Encounter Holy Knights 1 map
#define SCRIPT_ECPATSY          (698)   // ECPatsy.int     ; Random Encounter Holy 1 Arthur's horse
#define SCRIPT_ECCONCOR         (699)   // ECConcor.int    ; Launcelot's horse
#define SCRIPT_ECERIC           (700)   // ECEric.int      ; Robin's horse
#define SCRIPT_ECJOHN           (701)   // ECJohn.int      ; Bedemir's horse
#define SCRIPT_ECJOSHUA         (702)   // ECJoshua.int    ; Robin's minstrel.
#define SCRIPT_MILADDER         (703)   // miLadder.int    ; Modoc Shitter Ladder
#define SCRIPT_ECBHEAD          (704)   // ECBHead.int     ; Big Head Special encounter
#define SCRIPT_ECBLKHRO         (705)   // ECBlkHro.int    ; Black Hero Model
#define SCRIPT_ECREDHRO         (706)   // ECRedHro.int    ; Red Heroine Model
#define SCRIPT_ECSET            (707)   // ECSet.int       ; Set in Cafe
#define SCRIPT_ECTANDI          (708)   // ECTandi.int     ; Tandi in Cafe
#define SCRIPT_ECWHRO1          (709)   // ECWhro1.int     ; White Hero Model 1
#define SCRIPT_ECWHRO2          (710)   // ECWhro2.int     ; White Hero Model 2
#define SCRIPT_ECWHEON1         (711)   // ECWheon1.int    ; White Heroine Model 1
#define SCRIPT_NIJULBOX         (712)   // NiJulBox.int    ; New Reno Jules Shop Inventory Box
#define SCRIPT_NIELDBOX         (713)   // niEldBox.int    ; New Reno Eldridge Shop Box
#define SCRIPT_NIELDBX2         (714)   // niEldBx2.int    ; New Reno Eldridge Shop Box (For Made Men)
#define SCRIPT_RNDHOLY2         (715)   // RndHoly2.int    ; Random Encounter 2 for Holy Knights
#define SCRIPT_ECVORRAT         (716)   // ECVorRat.int    ; Vorpal rat for Holy 2 encounter
#define SCRIPT_ECPDOG           (717)   // ECPDog.int      ; Pariah Dog
#define SCRIPT_CCDRILL          (718)   // CCDrill.int     ; Drill Seargant in Colusa/Nevarro
#define SCRIPT_CCGUARD          (719)   // CCGuard.int     ; Guard in Colusa/Nevarro
#define SCRIPT_CCTECH           (720)   // CCTech.int      ; Technician in Colusa/Nevarro
#define SCRIPT_CCMANDR          (721)   // CCMandr.int     ; Commander in Colusa Nevarro
#define SCRIPT_CCCHRIS          (722)   // CCChris.int     ; Chris the gas station attendant in Colusa
#define SCRIPT_CCMASTER         (723)   // CCMaster.int    ; Quarter Master in Colusa/Nevarro
#define SCRIPT_CCGGUARD         (724)   // CCGGuard.int    ; Gate Guard in Colusa/Nevarro
#define SCRIPT_NTLYDGRV         (725)   // ntLydGrv.int    ; New Reno Lloyd's Loot Grave (Spacial Script)
#define SCRIPT_NTCAR1           (726)   // ntCar1.int      ; New Reno Stolen Car Seed Spacial 1
#define SCRIPT_NTCAR2           (727)   // ntCar2.int      ; New Reno Stolen Car Seed Spacial 2
#define SCRIPT_NIMORGRV         (728)   // niMorGrv.int    ; New Reno Mordino Stash Grave
#define SCRIPT_ECBRIDGE         (729)   // ECBridge.int    ; Bridge guy special encounter
#define SCRIPT_SCDRVPAY         (730)   // SCdrvpay.int    ; Cattle Drive Buyer in Redding.
#define SCRIPT_RNDBRIDG         (731)   // RndBridg.int    ; Random Bridge encounter
#define SCRIPT_ECMSTSTR         (732)   // ECMstStr.int    ; Mysterious Stranger
#define SCRIPT_ECGCWBMB         (733)   // ECGcwbmb.int    ; Generic Cow Bomb
#define SCRIPT_ECYAKUZA         (734)   // ECYakzua.int    ; Yakzua Random dudes
#define SCRIPT_ECWILDER         (735)   // ECWilder.int    ; Random Encounter Wilders
#define SCRIPT_NCWRIDOG         (736)   // ncWriDog.int    ; New Reno Wright Dog
#define SCRIPT_NIRAMBOX         (737)   // niRamBox.int    ; New Reno Box to be delivered to Ramirez
#define SCRIPT_ECUNIPAT         (738)   // ECUniPat.int    ; Unity patrol Random Encounter
#define SCRIPT_ECTRAVLR         (739)   // ECTravlr.int    ; Random Encounter Traveler
#define SCRIPT_KTSMOKE          (740)   // KtSmoke.int     ; displays message about smoke smell in Duntons
#define SCRIPT_ECTRADER         (741)   // ECTrader.int    ; Random Encounter Trader
#define SCRIPT_ECSCAVEN         (742)   // ECScaven.int    ; Random Encounter Scavengers
#define SCRIPT_FCMERCHA         (743)   // FCMercha.int    ; San Francisco Merchant
#define SCRIPT_FCBADPEA         (744)   // FCBadPea.int    ; San Francisco Bad Peasants
#define SCRIPT_ARTEMPLE         (745)   // ARTemple.int    ; Arroyo Temple map script
#define SCRIPT_FCDOKWRK         (746)   // FCDokWok.int    ; San Fran Dock Worker
#define SCRIPT_FCGUDPEA         (747)   // FCGudPea.int    ; San Fran Good Peasants
#define SCRIPT_FCSHIGRD         (748)   // FCShiGrd.int    ; San Fran Shi Guard
#define SCRIPT_ACTEMVIL         (749)   // ACTemVil.int    ; Temple challenge person
#define SCRIPT_AITEMDOR         (750)   // AITemDor.int    ; Temple doors that lock at the challenge
#define SCRIPT_ACKLINT          (751)   // ACKlint.int     ; Klint the guardian of the temple exit
#define SCRIPT_AICROPS          (752)   // AICrops.int     ; Crops that die after a period of time
#define SCRIPT_FCSLABTE         (753)   // FCslabte.int    ; San Fran Shi Lab Techs
#define SCRIPT_FCSKIDS          (754)   // FCSKids.int     ; San Fran Shi Kids
#define SCRIPT_GCWANDER         (755)   // GCWander.int    ; wandering ghouls in Gecko
#define SCRIPT_FCDRFUNG         (756)   // FCDrFung.int    ; San Fran Dr Fung
#define SCRIPT_OCJUL            (757)   // OCJul.int       ; Vault 13 Denmother guard
#define SCRIPT_OCKERITH         (758)   // OCKerith.int    ; Vault 13 Den Mother
#define SCRIPT_AITEMCST         (759)   // AITemCst.int    ; Temple Chest to hold the players things
#define SCRIPT_GCRGHUL          (760)   // GCRGhul.int     ; Reactor Ghoul that doesn't move
#define SCRIPT_ECRAIBOW         (761)   // ECRaiBow.int    ; Random Encounter Gays
#define SCRIPT_ECMSTAMY         (762)   // ECMstAmy.int    ; Random Encounter Master's Army
#define SCRIPT_ECPROSPE         (763)   // ECProspe.int    ; Random Encounter Prospector
#define SCRIPT_ECPRSGNG         (764)   // ECPrsGng.int    ; Random Encounter Press Gang
#define SCRIPT_ECNOMCHF         (765)   // ECNomChf.int    ; Random Encounter Nomad Chief
#define SCRIPT_ECELRON          (766)   // ECElRon.int     ; Elronologist Patrol
#define SCRIPT_ECCRAZY          (767)   // ECCrazy.int     ; Crazies from Random Encounter
#define SCRIPT_ECCLMJMP         (768)   // ECClmJmp.int    ; Random Encounter Claim Jumpers
#define SCRIPT_ECCANBAL         (769)   // ECCanbal.int    ; Random Encounter Cannibals
#define SCRIPT_ECNOMSHA         (770)   // ECNomsha.int    ; Random Encounter Nomad Shamon
#define SCRIPT_ECMARADR         (771)   // ECMaradr.int    ; Random Encounter Marauder
#define SCRIPT_ECROGUE          (772)   // ECRogue.int     ; Random Encounter Rogue
#define SCRIPT_ECHERMIT         (773)   // ECHermit.int    ; Random Encounter Hermit
#define SCRIPT_ECGANGS          (774)   // ECGangs.int     ; Random Encounter Gangs
#define SCRIPT_ECMSTKLA         (775)   // ECMstKla.int    ; Random Encounter Klamath Caravan Master
#define SCRIPT_ECMSTDEN         (776)   // ECMstDen.int    ; Random Encounter Den Caravan Master
#define SCRIPT_ECMSTNEW         (777)   // ECMstNew.int    ; Random Encounter New Reno Caravan Master
#define SCRIPT_ECMSTRED         (778)   // ECMstRed.int    ; Random Encounter Redding Caravan Master
#define SCRIPT_ECMSTBRO         (779)   // ECMstBro.int    ; Random Encounter Broken Hills Caravan Master
#define SCRIPT_ECMSTGEC         (780)   // ECMstGec.int    ; Random Encounter Gecko Caravan Master
#define SCRIPT_ECMSTSAN         (781)   // ECMstSan.int    ; Random Encounter San Fran Caravan Master
#define SCRIPT_ECMSTNCR         (782)   // ECMstNCR.int    ; Random Encounter NCR Caravan Master
#define SCRIPT_ECMSTV15         (783)   // ECMstV15.int    ; Random Encounter Vault 15 Caravan Master
#define SCRIPT_ECFRMWFE         (784)   // ECFrmWfe.int    ; Random Encounter Farmer's Wife
#define SCRIPT_ECFRMKID         (785)   // ECFrmKid.int    ; Random Encounter Farmer's Kid
#define SCRIPT_ECHOMEST         (786)   // ECHomest.int    ; Random Encounter Homesteader
#define SCRIPT_ECHOMWFE         (787)   // ECHomwfe.int    ; Random Ecnounter Homesteader's wife
#define SCRIPT_ECHOMKID         (788)   // ECHomkid.int    ; Random Ecnounter Homesteader's kid
#define SCRIPT_ECMSTVC          (789)   // ECMstVC.int     ; Random Encounter Vault City Caravan Master
#define SCRIPT_ECALIEN          (790)   // ECAlien.int     ; Random Encounter Alien
#define SCRIPT_ECDTHCLW         (791)   // ECDthclw.int    ; Random Encounter Deathclaws
#define SCRIPT_ECFLOATR         (792)   // ECFloatr.int    ; Random Encounter Floater
#define SCRIPT_ECCENTUR         (793)   // ECCentur.int    ; Random Encounter Centaurs
#define SCRIPT_ECELVPAT         (794)   // ECElvPat.int    ; Random Encounter Enclave Patrol
#define SCRIPT_ICMRCCPT         (795)   // icMrcCpt.int    ; Raiders Merc Captain
#define SCRIPT_ICMERC           (796)   // icMerc.int      ; Raiders Merc
#define SCRIPT_ICSCOUT          (797)   // icScout.int     ; Raiders Scout
#define SCRIPT_IISAFE           (798)   // iiSafe.int      ; Raiders Safe
#define SCRIPT_RAIDERS1         (799)   // raiders1.int    ; Raiders 1 Enterance
#define SCRIPT_RAIDERS2         (800)   // raiders2.int    ; Raiders 2 Caves
#define SCRIPT_HSCELLDR         (801)   // HSCellDr.int    ; Broken Hills bank/jail door
#define SCRIPT_NITRYBOX         (802)   // niTRyBox.int    ; New Reno Chop Shop T-Ray Box
#define SCRIPT_QHPRZRCH         (803)   // qhPrzRch.int    ; Enclave President Richardson
#define SCRIPT_WIHOWITZ         (804)   // WIHowitz.int    ; Howitzer in the Sierra Base
#define SCRIPT_WIENTDOR         (805)   // WIEntDor.int    ; Entrance to Sierra Base Door
#define SCRIPT_OCBABDTH         (806)   // OCBabDth.int    ; Baby Deathclaws in Vault 13
#define SCRIPT_RCMCGREW         (807)   // RCMcGrew.int    ; Dangerous Dan McGrew from redding
#define SCRIPT_RCDRJOHN         (808)   // RCDrJohn.int    ; Painless Doc Johnson (breaks Jet)
#define SCRIPT_RCMARION         (809)   // RCMarion.int    ; Sheriff Earl Marion
#define SCRIPT_RCASCORT         (810)   // RCAscort.int    ; Mayor Ascorti of Redding
#define SCRIPT_RCNORD           (811)   // RCNord.int      ; Nording, the payoff man for Stanwell
#define SCRIPT_RCVELANI         (812)   // RCVelani.int    ; Velani, the payoff man for Savinelli
#define SCRIPT_RCFERN           (813)   // RCFern.int      ; Ferndown, the payoff man for Wade
#define SCRIPT_FCDRAGON         (814)   // FCDragon.int    ; The Dragon, San Francisco.
#define SCRIPT_MCSBLBOY         (815)   // mcSblBoy.int    ; Modoc Stable Boy
#define SCRIPT_MCTRADER         (816)   // mcTrader.int    ; Modoc Trader
#define SCRIPT_MCPERSON         (817)   // mcPerson.int    ; Modoc Townspeople
#define SCRIPT_MCSLGEXT         (818)   // mcSlgExt.int    ; Ghost Farm Slag Exit Guard
#define SCRIPT_MCSLGGRD         (819)   // mcSlgGrd.int    ; Ghost Farm Slag Enterance Guard
#define SCRIPT_FCLOPAN          (820)   // FCLoPan.int     ; LoPan in San Fran
#define SCRIPT_FCBADGER         (821)   // FCBadger.int    ; Badger in San Fran
#define SCRIPT_RCJOSH           (822)   // RCJosh.int      ; Josh Laurance of Redding
#define SCRIPT_RCCAMINT         (823)   // RCCamint.int    ; Caminetto in bar fight in redding
#define SCRIPT_RCBETTE          (824)   // RCBette.int     ; Blasphemous Bette in bar fight in redding
#define SCRIPT_FCGUNMER         (825)   // FCGunMer.int    ; San Fran's gun merchant
#define SCRIPT_ZIWODDOR         (826)   // ZIWodDor.int    ; Generic Wooden Door
#define SCRIPT_ZIMTLDOR         (827)   // ZIMtlDor.int    ; Generic Metal Door
#define SCRIPT_SSEMTN2          (828)   // SSEmtn2.int     ; Force Field Emitter NCR 2
#define SCRIPT_KCRATGOD         (829)   // KCRatGod.int    ; Rat god in Klamath
#define SCRIPT_ECBOX            (830)   // ECBox.int       ; Random Box that has things in it.
#define SCRIPT_ECKAGA1          (831)   // ECKaga1.int     ; Random Encounter Kaga 1
#define SCRIPT_ECKAGA2          (832)   // ECKaga2.int     ; Random Encounter Kaga 2
#define SCRIPT_ECKAGA3          (833)   // ECKaga3.int     ; Random Encounter Kaga 3
#define SCRIPT_ECKAGA4          (834)   // ECKaga4.int     ; Random Encounter Kaga 4
#define SCRIPT_ECKAGA5          (835)   // ECKaga5.int     ; Random Encounter Kaga 5
#define SCRIPT_ECBHUNTR         (836)   // ECBHuntr.int    ; Random Encounter Bounty Hunter
#define SCRIPT_VIMEDCOM         (837)   // VIMedCom.int    ; Vault City Medical Computer
#define SCRIPT_VICENCOM         (838)   // VICenCom.int    ; Vault City Central Computer
#define SCRIPT_VIALOCOM         (839)   // VIAloCom.int    ; Vault City Allocation Computer
#define SCRIPT_VCDARROW         (840)   // VCDarrow.int    ; Vault City Sub-Amenities Officer Darrow
#define SCRIPT_VCFARREL         (841)   // VCFarrel.int    ; Vault City Sub-Amenities Officer Farrell
#define SCRIPT_VCBARPAT         (842)   // VCBarPat.int    ; Vault City Bar Patron
#define SCRIPT_VCWRKCIT         (843)   // VCWrkCit.int    ; Vault City Working Citizen
#define SCRIPT_VCSLAVE          (844)   // VCSlave.int     ; Vault City Slave
#define SCRIPT_VISHFT2B         (845)   // VIShft2b.int    ; Vault City Ventilation Shaft 2B
#define SCRIPT_VCCHARLI         (846)   // VCCharli.int    ; Vault City Puking Charlie
#define SCRIPT_GSVALVE          (847)   // GSValve.int     ; Gecko Coolant Control Panel
#define SCRIPT_ZIBRAPOO         (848)   // ziBraPoo.int    ; Generic BRAHMIN SHIT!!! YES YES YES
#define SCRIPT_SCWESGRD         (849)   // SCWesGrd.int    ; Westin's Force Field Guard
#define SCRIPT_SSEMIWES         (850)   // SSEmiWes.int    ; Westin's Foce Field Emitter
#define SCRIPT_SSEMIWE1         (851)   // SSEmiWe1.int    ; Westin's Force Field Emitter on his map
#define SCRIPT_SICMPWES         (852)   // SICmpWes.int    ; Westin's computer terminal
#define SCRIPT_FSEMPTER         (853)   // SSEmpTer.int    ; Emperor Computer Terminal V8.8
#define SCRIPT_QCBIRD           (854)   // QCBird.int      ; Enclave, Vice President Bird
#define SCRIPT_QCMARTIN         (855)   // QCMartin.int    ; Enclave, Martin Frobishner, V13 spokesman
#define SCRIPT_FCKENLEE         (856)   // FCKenLee.int    ; Ken Lee in San Francisco
#define SCRIPT_QCGRANIT         (857)   // QCGranit.int    ; Sgt. Granite of the Enclave Patrol
#define SCRIPT_QCFRANK          (858)   // QCFrank.int     ; Secret Service Agent Frank (End Boss)
#define SCRIPT_GECKJUNK         (859)   // GeckJunk.int    ; Map script for Gecko Junkyard
//#define SCRIPT_GECKTUNL         (860)   // GeckTunl.int    ; Map script for Gecko Tunnels
#define SCRIPT_SSFRGDOR         (861)   // SSFrgDor.int    ; Fergus's door
#define SCRIPT_SSGUNDOR         (862)   // SSGunDor.int    ; Gunther's door
#define SCRIPT_SSFLXDOR         (863)   // SSflxDor.int    ; Felix's door
#define SCRIPT_SSROPE           (864)   // SSRope.int      ; Yeah ROPE yeah !!!
#define SCRIPT_SSEMIENT         (865)   // SSEmient.int    ; Emitter for entrance.
#define SCRIPT_QCCURLNG         (866)   // QCCurlng.int    ; Dr. Charles Curling, Chem Corps.
#define SCRIPT_SSSIGN           (867)   // SSSign.int      ; Sign in NCR Entrance
//#define SCRIPT_MCMOLRAT         (868)   // mcMolRat.int    ; Ghost Farm Mole Rat
#define SCRIPT_QCPRSSEC         (869)   // QCPrsSec.int    ; President's personal intern (uh sectertary)
#define SCRIPT_QCMURRAY         (870)   // QCMurray.int    ; Tom Murray, head of AEC
#define SCRIPT_SSCRPDOR         (871)   // SSCrpDor.int    ; Craps Table door
#define SCRIPT_MCPEASAN         (872)   // mcPeasan.int    ; Modoc Peseant, they attack the farm
#define SCRIPT_VCTYCOCL         (873)   // VCtyCocl.int    ; Map Script Vault City Council Area
#define SCRIPT_HSPURIFY         (874)   // HSPurify.int    ; Air Purifier for Broken Hills
#define SCRIPT_ESENTRKS         (875)  // esEntRks.int    ; Military Base Enterance Rocks
#define SCRIPT_RCGAMBLE         (876)   // RCGamble.int    ; Redding Generic Gamblers
#define SCRIPT_HTCORPSE         (877)   // HTCorpse.int    ; Spatial script for corpses in Broken Hills
#define SCRIPT_SCCHEAT          (878)   // SCCheat.int     ; Cheat Character for NCR
#define SCRIPT_QCGENPRS         (879)   // QCGenPrs.int    ; Enclave Generic Prisoner
#define SCRIPT_QCGENCIT         (880)   // QCGenCit.int    ; Enclave Generic Citizens
#define SCRIPT_QCGENGRD         (881)   // QCGenGrd.int    ; Enclave Generic Guards
#define SCRIPT_QCGENSCI         (882)   // QCGenSci.int    ; Enclave Generic Scientist
#define SCRIPT_QIPZLTRM         (883)   // QIPzlTrm.int    ; Enclave terminal in the Puzzle Level
#define SCRIPT_ETENTER          (884)   // etEnter.int     ; Military Base Enterance Spacial Message
#define SCRIPT_ETBATTLE         (885)   // etBattle.int    ; Military Base Battle Area Spacial Message
#define SCRIPT_SSEMIEN1         (886)   // SSEmiEn1.int    ; Ncr emitters for ncr entrance on map 1
#define SCRIPT_QIBSTDR1         (887)   // QIBstDr1.int    ; Blast Door for Reactor Off to remain closed
#define SCRIPT_QIBSTDR2         (888)   // QIBstDr2.int    ; Blast Door for Reactor On to remain closed
#define SCRIPT_VIDARBOX         (889)   // VIDarBox.int      ; Vault City Darrow Shop Box
#define SCRIPT_HSCRLDR          (890)   // HSCrlDr.int     ; Jail cell door for Broken Hills
#define SCRIPT_ECTLKMUT         (891)   // ecTlkMut.int    ; Military Base Conversation Mutants
#define SCRIPT_FCCHEMST         (892)   // FCChemst.int    ; Chemist in San Francisco
#define SCRIPT_ECGRUNDE         (893)   // ecGrunde.int    ; Military Base Mouse Hunter
#define SCRIPT_ECMELKID         (894)   // ecMelKid.int    ; Some Town USA, Melchior's Kid
#define SCRIPT_WIRETSCN         (895)   // WIRetScn.int    ; Retinal Scanner in the Sieera Base
#define SCRIPT_WIELVDOR         (896)   // WIElvDor.int    ; Elevator Door in the Seirra Base
#define SCRIPT_WIBRKBRN         (897)   // WIBrkBrn.int    ; Broken Brain Bot in the Sierra Base
#define SCRIPT_WISCRTDR         (898)   // WIScrtDr.int    ; Sierra Base Secert Door
#define SCRIPT_BROKEN2          (899)   // broken2.int     ; Map Script for Broken Hills Map 2
#define SCRIPT_VIFARBOX         (900)   // VIFarBox.int    ; Vault City Farrow Shop Stock Shelf
#define SCRIPT_VIHARBOX         (901)   // VIHarBox.int    ; Vault City Harry Shop Stock Shelf
#define SCRIPT_VICTYBOX         (902)   // VICtyBox.int    ; Vault City Courtyard Temp Inventory Box
#define SCRIPT_VIDWTBOX         (903)   // VIDwtBox.int    ; Vault City Downtown Temp Inventory Box
#define SCRIPT_DCDEREK          (904)   // dcDerek.int     ; Derek in the Den
#define SCRIPT_DCTUBFRI         (905)   // dcTubFri.int    ; Tubby's Junkie Friends in the Den
#define SCRIPT_DCGAMBLE         (906)   // dcGamble.int    ; Gamblers in the Den
#define SCRIPT_DCSLAVE          (907)   // dcSlave.int     ; Pen Slaves in the Den
#define SCRIPT_DCMETROM         (908)   // dcMetRom.int    ; Metzger Room Guard in the Den
#define SCRIPT_DCPENGRD         (909)   // dcPenGrd.int    ; Slaver Pen Guard in the Den
#define SCRIPT_DCLARA           (910)   // dcLara.int      ; Lara in the Den
#define SCRIPT_DCTYLER          (911)   // dcTyler.int     ; Tyler in the Den
#define SCRIPT_DCMARC           (912)   // dcMarc.int      ; Marc in the Den
#define SCRIPT_DIBULBRD         (913)   // diBulBrd.int    ; Bulletin Board in the Den
#define SCRIPT_DCVICGRD         (914)   // dcVicGrd.int    ; Vic Guard in the Den
#define SCRIPT_DCSLVGRT         (915)   // dcSlvGrt.int    ; Slaver Greeter in the Den
#define SCRIPT_DCFRED           (916)   // dcFred.int      ; Fred in the Den
#define SCRIPT_DIFLIBOX         (917)   // diFliBox.int    ; Flick Box in the Den
#define SCRIPT_DIMOMBOX         (918)   // diMomBox.int    ; Mom Box in the Den
#define SCRIPT_DISMIBOX         (919)   // diSmiBox.int    ; Smitty Box in the Den
#define SCRIPT_ZICRTRNK         (920)   // ZICrTrnk.int    ; generic script for Car Trunk
#define SCRIPT_QIPZLDOR         (921)   // QIPzlDor.int    ; Door for the puzzle room in the Enclave
#define SCRIPT_FSPHYSTA         (922)   // FSPhySta.int    ; Physics station Computer San Fran
#define SCRIPT_FSBIOSTA         (923)   // FSBioSta.int    ; Biology station Computer in San Fran
#define SCRIPT_FSCHESTA         (924)   // FSCheSta.int    ; Chemistry Station Computer in San Fran
#define SCRIPT_FCLAOCHO         (925)   // FCLaoCho.int    ; Lao Chou Merchant in San Fran
#define SCRIPT_FIPAPER          (926)   // FIPaper.int     ; Papers that combine in San Fran.
#define SCRIPT_CSVENT           (927)   // CSVent.int      ; Ventilation shaft for Navarro
#define SCRIPT_ENCTRP           (928)   // EncTrp.int      ; Map Script for Enclave Trap Rooms
#define SCRIPT_HTBODY           (929)   // HtBody.int      ; Script for dead bodies in Broken Hills
#define SCRIPT_QIWIRES          (930)   // QIWires.int     ; Wires on the ground in the trap room
#define SCRIPT_DIMETBOX         (931)   // diMetBox.int    ; Metzger Box from Slave Crap
#define SCRIPT_DCRUNSLV         (932)   // dcRunSlv.int    ; Den Slave Run Fleeing Slaves
#define SCRIPT_DCATKSLV         (933)   // dcAtkSlv.int    ; Den Slave Run Hostile Slaves
#define SCRIPT_DCRNSLVR         (934)   // dcRnSlvr.int    ; Den Slave Run Slavers
#define SCRIPT_FCCHIP           (935)   // FCChip.int      ; Chip in San Francisco no splean
#define SCRIPT_QIREACTR         (936)   // QIReactr.int    ; Reactor in the Enclave
#define SCRIPT_QIRCTRCM         (937)   // QIRctrCm.int    ; Reactor Computer in the Enclave
#define SCRIPT_RCCSHTND         (938)   // RCCshTnd.int    ; Redding Cash Tender in the Casino
#define SCRIPT_RICSHBOX         (939)   // RICshBox        ; Cash Box for the Cash Tender
#define SCRIPT_RCWANAMI         (940)   // RCWanami.int    ; Wanamingo
#define SCRIPT_DCSTORY1         (941)   // dcStory1.int    ; Story Teller 1 in the Den
#define SCRIPT_DCSTORY2         (942)   // dcSory2.int    ; Story Teller 2 in the Den
#define SCRIPT_RIJALDOR         (943)   // RIJalDor.int    ; Jail Door in Redding
#define SCRIPT_FCSUZE           (944)   // FCSuze.int      ; Suze in San Fran
#define SCRIPT_FCRONMEY         (945)   // FCRonMey.int    ; Captain Ron Meyers
#define SCRIPT_DIPENDOR         (946)   // diPenDor.int    ; Slave Pen Door in the Den
#define SCRIPT_REDWAN1          (947)   // RedWan1.int     ; Map Script for Wanamingo Mine
#define SCRIPT_REDWAME          (948)   // RedWane.int     ; Map Script for Wanamingo Mine Entrance
#define SCRIPT_RCFROG           (949)   // RCFrog.int      ; Frog Morton
#define SCRIPT_FCDAVEH          (950)   // FCDaveH.int     ; Dave Handy in San Fran
#define SCRIPT_DIVICDOR         (951)   // diVicDor.int    ; Vic's Room Door in the Den
#define SCRIPT_DIROMDOR         (952)   // diRomDor.int    ; Metzger's Room Door in the Den
#define SCRIPT_VCCHARLY         (953)   // vccharly.int    ; Puking Charlie in Vault City Courtyard
#define SCRIPT_SIPAINT          (954)   // SIPaint.int     ; Painting that reveals Vault 13
#define SCRIPT_SFCHINA          (955)   // SFChina.int     ; San Fran China Map
#define SCRIPT_VCCOUBAR         (956)   // VCCouBar.int    ; Vault City Council Area Bartender
#define SCRIPT_VIBARBOX         (957)   // VIBarBox.int    ; Vault City Slave Sale Inventory Dump
#define SCRIPT_VIAUTDOC         (958)   // VIAutDoc.int    ; Vault City Courtyard Auto-Doc
#define SCRIPT_RIMINENT         (959)   // RIMinEnt.int    ; Entrance Back to the Mines
#define SCRIPT_REDMTUN          (960)   // RedMTun.int     ; Map Script for Mining Tunnel
#define SCRIPT_KCROB            (961)   // KCRob.int       ; Robot on Klamath Canyon Map
#define SCRIPT_FIGUNTBL         (962)   // FIGunTbl.int    ; Gun Merchants table
#define SCRIPT_KLAMALL          (963)   // KlaMall.int     ; Map Script for Klamath Mall area
#define SCRIPT_KLATRAP          (964)   // KlaTrap.int     ; Map Script for Klamath Still area
#define SCRIPT_VCDWNBAR         (965)   // VCDwnBar.int    ; Vault City Downtown Bartender
#define SCRIPT_REDDTUN          (966)   // RedDTun.int     ; Redding Downtown Tunnels
#define SCRIPT_FCROCMAN         (967)   // FCRocMan.int    ; Rocket man in San Francisco
#define SCRIPT_FCOZ7            (968)   // FCOz7.int       ; Oz7 in San Fran
#define SCRIPT_FCCROCKE         (969)   // FCCroke.int     ; Crockett in San Fran
#define SCRIPT_VCAMANDA         (970)   // VCAmanda.int    ; Vault City Courtyard Amanda
#define SCRIPT_VCJOSHUA         (971)   // VCJoshua.int    ; Vault City Courtyard Joshua
#define SCRIPT_VCMAINWK         (972)   // VCMainWk.int    ; Valerie, Vic's Daughter and Maintence Worker
#define SCRIPT_VITEACH          (973)   // VITeach.int     ; Vault City Teaching System
#define SCRIPT_DICRATE          (974)   // diCrate.int     ; Den Crate in Church
#define SCRIPT_VCURINE          (975)   // VCUrine.int     ; Peeing Guy in Vault City Council Area
#define SCRIPT_VCCURTIS         (976)   // VCCurtis.int    ; Curtis, Amanda and Joshua's Sonme
#define SCRIPT_FCMARC           (977)   // FCMarc.int      ; Marc, San Fran punk
#define SCRIPT_FSELCOMP         (978)   // FSElComp.int    ; Elronologists computer in San FranuL
#define SCRIPT_FCOZ9            (979)   // FCOz9.int       ; Elronologist main dudenLe
#define SCRIPT_FCELGRD          (980)   // FCElGrd.int     ; Elronologist's Guards
#define SCRIPT_VIROCKS          (981)   // VIRocks.int     ; Pile of Rocks w/ Hidden Wrenchv
#define SCRIPT_VIVLTDOR         (982)   // VIVltDor.int    ; Vault City 2nd floor doors
#define SCRIPT_DCREBGRD         (983)   // dcRebGrd.int    ; Den Rebecca Guard
#define SCRIPT_DCREBDOR         (984)   // dcRebDor.int    ; Den Rebecca Door Guard
#define SCRIPT_DIREBDOR         (985)   // diRebDor.int    ; Den Rebecca Doore
#define SCRIPT_ZSWSIGN          (986)   // ZSWsign.int     ; Generic wanted Sign.nl
#define SCRIPT_FCDRWONG         (987)   // FCDrWong.int    ; Dr. Wong in San Fran area
#define SCRIPT_FILAOTBL         (988)   // FIlaotbl.int    ; Lao Cho's stock tables in san Fran
#define SCRIPT_WILV1DOR         (989)   // WILv1Dor.int    ; Locked Door on Level 1 Entrance
#define SCRIPT_FCFEMPNK         (990)   // FCFemPnk.int    ; San Fran Female Punk
#define SCRIPT_FCMALPNK         (991)   // FCMalPnk.int    ; San Fran Male Punk
#define SCRIPT_FCRYAN           (992)   // FCRyan.int      ; San Fran Ryan Punk
#define SCRIPT_HIBH1BOX         (993)   // HIBh1Box.int    ; Broken Hills Temp Inventory BoxtM
#define SCRIPT_FCJUAVKI         (994)   // FCJuaVki.int    ; Juan/Vikkin in San Fran Elron Camp
#define SCRIPT_HIMANHOL         (995)   // HIManHol.int    ; Manhole to Basement in Liz's Storea
#define SCRIPT_SFELRONB         (996)   // SFElronb.int    ; Elron Base map Script
#define SCRIPT_HILADDER         (997)   // HILadder.int    ; Ladder up to Liz's Store
#define SCRIPT_WIPNCHBG         (998)   // WIPnchBg.int    ; Punching Bag in the Sierra Depot
#define SCRIPT_WIBAYDOR         (999)   // WIBayDor.int    ; Sierra Base Repair Bay Door
#define SCRIPT_GSALARM          (1000)  // GSAlarm.int     ; Gecko Reactor Alarmp
#define SCRIPT_WTPLTRP2         (1001)  // WIPlTrp2.int    ; Plasma Floor Trap Level 2 of Seirra
#define SCRIPT_WTPLTRP3         (1002)  // WIPlTrp3.int    ; Plasma Floor Trap Level 2 of Seirra
#define SCRIPT_WTPLTRP4         (1003)  // WIPlTrp4.int    ; Plasma Floor Trap Level 2 of Seirra
#define SCRIPT_WTPLTRP5         (1004)  // WIPlTrp5.int    ; Plasma Floor Trap Level 2 of Seirra
#define SCRIPT_WTPLTRP6         (1005)  // WIPlTrp6.int    ; Plasma Floor Trap Level 2 of Seirra
#define SCRIPT_WTPLTRP7         (1006)  // WIPlTrp7.int    ; Plasma Floor Trap Level 2 of Seirra
#define SCRIPT_WTPLTRP8         (1007)  // WIPlTrp8.int    ; Plasma Floor Trap Level 2 of Seirra
#define SCRIPT_WTPLTRP9         (1008)  // WIPlTrp9.int    ; Plasma Floor Trap Level 2 of Seirra
#define SCRIPT_WTPLTRPA         (1009)  // WIPlTrpA.int    ; Plasma Floor Trap Level 2 of Seirra
#define SCRIPT_WTPLTRPB         (1010)  // WIPlTrpB.int   ; Plasma Floor Trap Level 2 of Seirra
#define SCRIPT_WTPLTRPC         (1011)  // WIPlTrpC.int    ; Plasma Floor Trap Level 2 of Seirra
#define SCRIPT_WTPLTRPD         (1012)  // WIPlTrpD.int    ; Plasma Floor Trap Level 2 of Seirra
#define SCRIPT_WTPLTRPE         (1013)  // WIPlTrpE.int    ; Plasma Floor Trap Level 2 of Seirra
#define SCRIPT_WTPLTRPF         (1014)  // WIPlTrpF.int    ; Plasma Floor Trap Level 2 of Seirra
#define SCRIPT_WSEMIT4A         (1015)  // WSEmit4a.int    ; Emitter, Level 4 in Sierra Base
#define SCRIPT_WSEMIT4B         (1016)  // WSEmit4b.int    ; Emitter, Level 4 in Sierra Base
#define SCRIPT_WSEMIT4C         (1017)  // WSEmit4c.int    ; Emitter, Level 4 in Sierra Base
#define SCRIPT_WSFELD4A         (1018)  // WSFeld4a.int    ; Force Field, Level 4 in Sierra Base
#define SCRIPT_WSFELD4B         (1019)  // WSFeld4b.int    ; Force Field, Level 4 in Sierra Base
#define SCRIPT_WSFELD4C         (1020)  // WSFeld4c.int    ; Force Field, Level 4 in Sierra Base
#define SCRIPT_FCELRIND         (1021)  // FCElrind.int    ; Elron Indoctrinee
#define SCRIPT_FSTNKCMP         (1022)  // FSTnkCmp.int    ; Posiden Tanker Computer
#define SCRIPT_WIBNKDOR         (1023)  // WIBnkDor.int    ; Bunker Door for the Sierra Depot
#define SCRIPT_MIGATE           (1024)  // miGate.int      ; Modoc Gate
#define SCRIPT_WITRPBX1         (1025)  // WITrpBx1.int    ; Sierra Base Trapped Box
#define SCRIPT_RCMORBRS         (1026)  // RCMorBrs.int    ; Morton Brothers, Inc.
#define SCRIPT_FSEMT1           (1027)  // FSEmt1.int      ; Emitter 1 in San Fran
#define SCRIPT_FSEMT2           (1028)  // FSEmt2.int      ; Emitter 2 in San Fran
#define SCRIPT_FSEMT3           (1029)  // FSEmt3.int      ; Emitter 3 in San Fran'i
#define SCRIPT_CAVE6            (1030)  // Cave06.int      ; Fake Vault 13 Cave Map
#define SCRIPT_VCCHET           (1031)  // VCChet.int      ; Illicit Allocations Officer Chet
#define SCRIPT_NEWRVB           (1032)  // NewRVB.int      ; New Reno Helicopter Script Map
#define SCRIPT_NSVERTIB         (1033)  // nsVertib.int    ; New Reno Helicopter Script Vertibird
#define SCRIPT_NCHSSAL1         (1034)  // ncHSSal1.int    ; New Reno Helicopter Script Salvatore 1
#define SCRIPT_NCHSSAL2         (1035)  // ncHSSal2.int    ; New Reno Helicopter Script Salvatroe 2
#define SCRIPT_NCHSPOW1         (1036)  // ncHSPow1.int    ; New Reno Helicopter Script Power Armor 1
#define SCRIPT_NCHSPOW2         (1037)  // ncHSPow2.int    ; New Reno Helicopter Script Power Armor 2
#define SCRIPT_NIHSCRAT         (1038)  // niHSCrat.int    ; New Reno Helicopter Script Crate
#define SCRIPT_NCHSHAND         (1039)  // ncHSHand.int    ; New Reno Helicopter Script Handy
#define SCRIPT_NCHSGSAL         (1040)  // ncHSGSal.int    ; New Reno Helicopter Script Salvatore Guard
#define SCRIPT_NTHSGRD          (1041)  // ntHSGrd.int     ; New Reno Helicopter Script Guarding Spacial
#define SCRIPT_NIELDDOR         (1042)  // niEldDor.int    ; New Reno Elderidge Door
#define SCRIPT_NISALDOR         (1043)  // niSalDor.int    ; New Reno Salvatore Door
#define SCRIPT_NIMYRDOR         (1044)  // niMyrDor.int    ; New Reno Myron Door pt
#define SCRIPT_FCMONST          (1045)  // FCMonst.int     ; Monsters in San Fran Tanker
#define SCRIPT_SFTANKER         (1046)  // SFTanker.int    ; San Fran Tanker Script
#define SCRIPT_VCSLAV2          (1047)  // VCSlav2.int     ; Vault City Prisoner Slaves
#define SCRIPT_VCBARCIT         (1048)  // VCBarCit.int    ; Vault City Bar Patrons
#define SCRIPT_NIBASDOR         (1049)  // niBasDor.int    ; New Reno Locking Doors
#define SCRIPT_NCFIGHTR         (1050)  // ncFightr.int    ; New Reno Boxer Actually Fighting
#define SCRIPT_RIVLTDOR         (1051)  // RIVltDor.int    ; Locked Vault Door in Redding
#define SCRIPT_CCXARN           (1052)  // CcXarn.int      ; Xarn in Navarro
#define SCRIPT_CCRAUL           (1053)  // CcRaul.int      ; Raul in Navarro
#define SCRIPT_CCQUINCY         (1054)  // CcQuincy.int    ; Quincy in Navarro
#define SCRIPT_CCQMSTR          (1055)  // CcQmstr.int     ; Quartermaster in Navarro
#define SCRIPT_CCMEDGRD         (1056)  // CcMedGrd.int    ; Med Lab Guard in Navarro
#define SCRIPT_CCK9             (1057)  // CcK9.int        ; K9 in Navarro
#define SCRIPT_CCDOCTOR         (1058)  // CcDoctor.int    ; Dr Shreber in Navarro
#define SCRIPT_CCATECH          (1059)  // CcATech.int     ; Air Tech in Navarro
#define SCRIPT_CCACON           (1060)  // CcACon.int      ; Air Control in Navarro
#define SCRIPT_CCDRGRD          (1061)  // CcDrGrd.int     ; Door Guard in Navarro
#define SCRIPT_CCGGBAK          (1062)  // Ccggbak.int     ; Gate Guard Backup in Navarro
#define SCRIPT_CCGRDCA          (1063)  // CcGrdca.int     ; Guard (combat armor) in Navarro
#define SCRIPT_CCGRDPA          (1064)  // CcGrdpa.int     ; Guard (power armor) in Navarro
#define SCRIPT_CCTECH1          (1065)  // CcTech1.int     ; Com Tech1 in Navarro
#define SCRIPT_CCTECH2          (1066)  // CcTech2.int     ; Com Tech2 in Navarro
#define SCRIPT_CCCOMP1          (1067)  // CcComp1.int     ; Computer Tech1 in Navarro
#define SCRIPT_CCCOMP2          (1068)  // CcComp2.int     ; Computer Tech2 in Navarro
#define SCRIPT_HICAVEIN         (1069)  // HICaveIn.int    ; Broken Hills Caved-In mine
#define SCRIPT_QCEPSQAD         (1070)  // QCEPSqad.int    ; Enclave EP Squad (joins player in fighting
#define SCRIPT_QIENDDOR         (1071)  // QIEndDor.int    ; Doors at the End Fight Area
#define SCRIPT_ENCDET           (1072)  // EncDet.int      ; Map Script for Enclave Detention Center
#define SCRIPT_ENCDOCK          (1073)  // EncDock.int     ; Map Script for Enclave Dock
#define SCRIPT_ENCGD            (1074)  // EncGd.int       ; Map Script for Enclave Guard Barracks
#define SCRIPT_ENCPRES          (1075)  // EncPres.int     ; Map Script for Enclave Presidential Area
#define SCRIPT_ENCRETR          (1076)  // EncRetr.int     ; Map Script for Enclave Reactor Area
#define SCRIPT_ENCFITE          (1077)  // EncFite.int     ; Map Script for Enclave Fight Area
#define SCRIPT_QCSECBOT         (1078)  // QCSecBot.int    ; Enclave Security Robot
#define SCRIPT_NITULBOX         (1079)  // niTulBox.int    ; New Reno Poor Box
#define SCRIPT_HIDEAD           (1080)  // hiDead.int      ; Dead body in Broken Hills Tunnels
#define SCRIPT_HIJACBOX         (1081)  // hiJacBox.int    ; Broken Hills Jacob Inventory Box
#define SCRIPT_HIDOCBOX         (1082)  // hiDOCBox.int    ; Broken Hills Doc Holliday Inventory Box
#define SCRIPT_HIOUTBOX         (1083)  // hiOutBox.int    ; Broken Hills Outfitter Inventory Box
#define SCRIPT_RCCVNGRD         (1084)  // RCCvnGrd.int    ; Generic Caravan Guard
#define SCRIPT_RCCVNDRV         (1085)  // RCCvnDrv.int    ; Generic Caravan Driver
#define SCRIPT_NCANOUNC         (1086)  // ncAnounc.int    ; New Reno Boxing Anouncer
#define SCRIPT_NCRNGGRL         (1087)  // ncRngGrl.int    ; New Reno Ring Grrrl
#define SCRIPT_NCPRZFTR         (1088)  // ncPrzFtr.int    ; New Reno Prize Fighter
#define SCRIPT_VIVLTDR2         (1089)  // VIVltDr2.int    ; Vault Doors in Vault 8
#define SCRIPT_NCCHEAT          (1090)  // ncCheat.int     ; New Reno Cheat Character
#define SCRIPT_WIGNNDSK         (1091)  // WIGNNDsk.int    ; Sierra Base GNN Transscript
#define SCRIPT_WIMISDSK         (1092)  // WIMisDsk.int    ; Sierra Base Mission Statement Disk
#define SCRIPT_FIELRDSK         (1093)  // FIElrDsk.int    ; Elronologist Holodisk
#define SCRIPT_HINOTE           (1094)  // HINote.int      ; Script for Francis/Zaius Note
#define SCRIPT_ECDOGMET         (1095)  // ECDogMet.int    ; Dog Meat specal random encounter
#define SCRIPT_NICATPW5         (1096)  // niCatPw5.int    ; New Reno Cat's Paw magazine 5
#define SCRIPT_NIRAIMAP         (1097)  // niRaiMap.int    ; New Reno Raiders Map in Bishop's Safe
#define SCRIPT_ECPARIAH         (1098)  // ECPariah.int    ; Pariah Dog in Low Luck encounter
#define SCRIPT_QIKLAXON         (1099)  // QIKlaxon.int    ; Klaxon Lights for Enclave when under alert    # local_vars=3
#define SCRIPT_IIMINE           (1100)  // IIMine.int      ; Mines in Raiders Cave
#define SCRIPT_IIPIT            (1101)  // IIPit.int       ; Pits in the Raiders Cave
#define SCRIPT_FCTNKGMR         (1102)  // FCTnkGmr.int    ; Tanker Gun Merchant San Fran
#define SCRIPT_FCTNKBAR         (1103)  // FCTnkBar.int    ; Tanker Bartender
#define SCRIPT_FCTNKMER         (1104)  // FCTnkMer.int    ; Tanker Merchant
#define SCRIPT_FITGUNTB         (1105)  // FITGunTb.int    ; Tanker Gun Merchant's table YEAH yeah YEAH
#define SCRIPT_FITMERTB         (1106)  // FITMerTb.int    ; Tanker Merchant Table
#define SCRIPT_FSPEMTR1         (1107)  // FSPEmtr1.int    ; Palace Emitter 1 in China Town
#define SCRIPT_FSPEMTR2         (1108)  // FSPEmtr2.int    ; Palace Emitter 2 in China Town
#define SCRIPT_FSPEMTR3         (1109)  // FSPEmtr3.int    ; Palace Emitter 3 in China Town
#define SCRIPT_FSEMPEMT         (1110)  // FSEmpEmt.int    ; Emporor computer's Force Field
#define SCRIPT_NIF2HINT         (1111)  // niF2Hint.int    ; New Reno Fallout 2 Hintbook
#define SCRIPT_CSTOUCH          (1112)  // csTouch.int     ; Script to signal if dude touches container objects (in Navarro)
#define SCRIPT_CSAREA           (1113)  // csArea.int      ; Script to signal if dude enters an area (in Navarro)
#define SCRIPT_RCASCGRD         (1114)  // RCAscGrd.int    ; Generic Guard for Ascorti's Bar
#define SCRIPT_ECLDPROS         (1115)  // ECLdPros.int    ; Random Encounter Lead Prospector
#define SCRIPT_ECLDBOOT         (1116)  // ECLdBoot.int    ; Random Encounter Lead Bootlegger
#define SCRIPT_CSOPEN           (1117)  // csOpen.int      ; Script to signal if dude uses door w/o permision
#define SCRIPT_HCDAN            (1118)  // hcDan.int       ; Dan, Spouse of murdered conspirator.
#define SCRIPT_NCCOMEDI         (1119)  // ncComedi.int    ; New Reno Comedian
#define SCRIPT_NCBAND           (1120)  // ncBand.int      ; New Reno Trashcan Band
#define SCRIPT_ARDEAD           (1121)  // ARDead.int      ; Destroyed Arroyo Bridge map script
#define SCRIPT_CSGATE           (1122)  // csGate.int      ; Script to signal if dude uses gate w/o permision
#define SCRIPT_NIWILGRV         (1123)  // niWilGrv.int    ; New Reno Coffin Willie's Grave
#define SCRIPT_NCWILLIE         (1124)  // ncWillie.int    ; New Reno Coffin Willie
#define SCRIPT_FSFOBTER         (1125)  // FSFobTer.int    ; Fob Terminal in San Fran
#define SCRIPT_FSFOBDOR         (1126)  // FSFobDor.int    ; Fob Door
#define SCRIPT_CCNCOMP          (1127)  // ccNComp.int     ; Navarro Computer
#define SCRIPT_VCKOHL           (1128)  // vcKohl.int      ; Vault City Info Officer Kohl
#define SCRIPT_ECCHILD          (1129)  // ECChild.int     ; Random Encounter Children
#define SCRIPT_CCCOOK           (1130)  // ccCook.int      ; Navarro Cook
#define SCRIPT_CCTURRET         (1131)  // ccTurret.int    ; Navarro Turret
#define SCRIPT_HCBRIAN          (1132)  // hcBrian.int     ; Brian, the Power Technician
#define SCRIPT_HIPOWER          (1133)  // hiPower.int     ; Power Generator for Broken Hills
#define SCRIPT_HICONSOL         (1134)  // hiConsole.int   ; Power Station Console in Broken Hills
#define SCRIPT_HCANT1           (1135)  // hiAnt1.int      ; Standard Broken Hills Ant
#define SCRIPT_HCANT2           (1136)  // hiAnt2.int      ; Broken Hills Ant - Missing Persons
#define SCRIPT_CSXDOOR          (1137)  // csXDoor.int     ; Another lousy door script -signals xarn to leave
#define SCRIPT_HTSECRET         (1138)  // htSecret.int    ; Spatial for secret area of Broken Hills Mine
#define SCRIPT_NIETHBOX         (1139)  // niEthBox.int    ; New Reno Ethyl Wright Shop Box
#define SCRIPT_HCERIC           (1140)  // hcEric.int      ; Eric the Smelly Boy, Broken Hills
#define SCRIPT_HTFLIES          (1141)  // htFlies.int     ; Spatial Flies script for Broken Hills
#define SCRIPT_VIRANBOX         (1142)  // viRanBox.int    ; Randal's Stock Box in Vault City
#define SCRIPT_IISCORP          (1143)  // iiScorp.int     ; Raiders Scorpions 2X poison
#define SCRIPT_RCJANE           (1144)  // RCane.int      ; Redding Jackot Jane
#define SCRIPT_VTALOMRK         (1145)  // VTAloMrk.int    ; Spatial Script for Allocation Computer VCityp
#define SCRIPT_CAVE7            (1146)  // Cave7.int       ; Fake Vault 13 map
#define SCRIPT_NIDERMAL         (1147)  // niDermal.int    ; New Reno Dermal Pip Boy
#define SCRIPT_NCELDDOG         (1148)  // ncEldDog.int    ; New Reno Eldridge Dogs
#define SCRIPT_RCRATRAY         (1149)  // RCRatray.int    ; Rattray, Doc Johnson's assistant
#define SCRIPT_HCHUSWIF         (1150)  // HCHusWif.int    ; Mutant Husband/Wife Broken HillsJ
#define SCRIPT_FCLOGRD          (1151)  // FCLoGrd.int     ; Lo Pan Guard in San Fran
#define SCRIPT_NAVARRO          (1152)  // Navarro.int     ; Map script for navarro
#define SCRIPT_VIVLTDR3         (1153)  // VIVltDr3.int    ; Vault Door in Vault 8 - Martin
#define SCRIPT_CCFAK9           (1154)  // ccFak9.int      ; Fake K-9 Scenery obj
#define SCRIPT_FCNLUKE          (1155)  // FCNLuke.int     ; Luke in NCR BOS rep
#define SCRIPT_FCDJOSH          (1156)  // FCDJosh.int     ; Joshua BOS in the Den
#define SCRIPT_IILOCKDR         (1157)  // iiLockDr.int    ; Gates in Raiders area
#define SCRIPT_FCFMATT          (1158)  // FCFMatt.int     ; Matt BOS in San Fran
#define SCRIPT_FSBRODOR         (1159)  // FSBroDor.int    ; Brotherhood Door
#define SCRIPT_HCGRD2           (1160)  // hcGrd2.int      ; Bank Guard 2 in Broken Hills
#define SCRIPT_QIGECKDR         (1161)  // QIGeckDr.int    ; Door Requiring the player to use the geck
#define SCRIPT_FSFACE           (1162)  // FSFace.int      ; Ace Computer in San Fran
#define SCRIPT_QITURTRM         (1163)  // QITurTrm.int    ; Generic Enclave Turret Terminal
#define SCRIPT_QCTURRET         (1164)  // QCTurret.int    ; Enclave Turrets
#define SCRIPT_HCCHUCK          (1165)  // hcChuck.int     ; Chuck Stodgers, Broken Hills
#define SCRIPT_HTCHUCK          (1166)  // htChuck.int     ; Spatial Script for waking up Chuck
#define SCRIPT_VITERM           (1167)  // viTerm.int      ; Vault City Vault Terminal
#define SCRIPT_RCMOTGNG         (1168)  // RCMotGng.int    ; Frog Morton's gang
#define SCRIPT_CCCHEAT          (1169)  // ccCheat.int     ; cheat character in Navarro
#define SCRIPT_FSTNKRDR         (1170)  // FSTnkrDr.int    ; Tanker Doors in San Frans
#define SCRIPT_SCPEAON          (1171)  // SCPeaon.int     ; NCR Peaons
#define SCRIPT_DIREBBOK         (1172)  // diRebBok.int    ; Den Becky's Book
#define SCRIPT_HCSCORP          (1173)  // hcScorp.int     ; Broken Hills Scorpion
#define SCRIPT_HCPROF           (1174)  // hcProf.int      ; Broken Hills Professor
#define SCRIPT_HIPRFBX1         (1175)  // hiPrfBx1.int    ; Professor's Box in Broken Hills
#define SCRIPT_HIPRFBX2         (1176)  // hiPrfBx2.int    ; Professor's Box in Broken Hills
#define SCRIPT_HCSEYMOR         (1177)  // hcSeymore.int   ; Seymour the talking Plant/Broken Hills
#define SCRIPT_HCSULVAN         (1178)  // hcSulvan.int    ; John Sullivan - Broken Hills
#define SCRIPT_HCLUMPY          (1179)  // hcLumpy.int     ; Lumpy the car accident victim - Broken Hills
#define SCRIPT_BISPYHOL         (1180)  // BISpyHol.int    ; Spy Holodisk for NCR
#define SCRIPT_SIHISHOL         (1181)  // SIHisHol.int    ; NCR History Holodisk
#define SCRIPT_SIWESHOL         (1182)  // SIWesHol.int    ; Westin Holodisk
#define SCRIPT_SCBGRD           (1183)  // SCBgrd.int      ; Buster's Guards in NCR
#define SCRIPT_SIELNOBJ         (1184)  // SIElnObj.int    ; Elise Notify Obj
#define SCRIPT_SIGCAOBJ         (1185)  // SIGCaObj.int    ; Gaurd Captain Notify Obj
#define SCRIPT_HCTYPHON         (1186)  // hcTyphon.int    ; Typhon, Son of Set - Broken Hills
#define SCRIPT_ECBDYGRD         (1187)  // ECBdyGrd.int    ; BodyGuard Vignette
#define SCRIPT_GAMMOVIE         (1188)  // Gammovie.int    ; Game Movie Map script
#define SCRIPT_ZILOCKER         (1189)  // ziLocker.int    ; Generic Locker Script
#define SCRIPT_HIWELL           (1190)  // hiWell.int      ; Broken Hills Well
#define SCRIPT_HCMICKY          (1191)  // hcMicky.int     ; Mickey the Dwarf - Broken Hills
#define SCRIPT_WCTURRET         (1192)  // WCTurret.int    ; Turret for Sierra Depot                       # local_vars=5
#define SCRIPT_HCOLDGHL         (1193)  // hcOldGhl.int    ; Ghouls in Old-Folks Home - Broken Hills
#define SCRIPT_HCHENCH          (1194)  // hcHench.int     ; Broken Hills Outfitter Henchmen
#define SCRIPT_HCELMO           (1195)  // hcElmo.int      ; Elmo - Broken Hills
#define SCRIPT_NITOILET         (1196)  // niToilet.int    ; Toilet - Contains Grenades - New Reno
#define SCRIPT_NICROSS          (1197)  // niCross.int     ; Cross - Golgotha - Buried Cash
#define SCRIPT_VIPLOW1          (1198)  // viPlow1.int     ; Plow - Vault City
#define SCRIPT_VIPLOW2          (1199)  // viPlow2.int     ; Plow - Vault City
#define SCRIPT_KCSCORPA         (1200)  // kcScorpa.int    ; Attacking scorpion in klamath
#define SCRIPT_KCGNRATR         (1201)  // kcGnratr.int    ; Generator player needs to fix in toxic caves
#define SCRIPT_KCLVATR          (1202)  // kcLvatr.int     ; Elevator door in toxic caves
#define SCRIPT_SIVDOR           (1203)  // SIVdor.int      ; Vortis Slave Door
#define SCRIPT_NIMEDICA         (1204)  // niMedica.int    ; New Reno "Doctor Skill" Upgrade
#define SCRIPT_NIPRSTLK         (1205)  // niPrstLk.int    ; New Reno Prostitute"Locker"
#define SCRIPT_NIBIGJLK         (1206)  // niBigJLk.int    ; New Reno Big Jesus "Locker"
#define SCRIPT_NIMOR1LK         (1207)  // niMor1Lk.int    ; New Reno Mordino No Lock/No Ignore "Locker"
#define SCRIPT_NIBOXRLK         (1208)  // niBoxrLk.int    ; New Reno Boxer "Locker"
#define SCRIPT_NIBIS1LK         (1209)  // niBis1Lk.int    ; New Reno Bishop Family OK "Locker"
#define SCRIPT_NIPORNLK         (1210)  // niPornLk.int    ; New Reno Porn Actress "Locker"
#define SCRIPT_NIBTCHLK         (1211)  // niBtchLk.int    ; New Reno Bitch "Locker"
#define SCRIPT_NIBIS2LK         (1212)  // niBis2Lk.int    ; New Reno Bishop Family NO IGNORE "Locker"
#define SCRIPT_NIELDRLK         (1213)  // niEldrLk.int    ; New Reno Eldridge "Locker"
#define SCRIPT_NIWRT1LK         (1214)  // niWrT1Lk.int    ; New Reno Wright Teen NO IGNORE "Locker"
#define SCRIPT_NIOWRILK         (1215)  // niOWriLk.int    ; New Reno Orville Wright "Locker"
#define SCRIPT_NIWRT2LK         (1216)  // niWrT2Lk.int    ; New Reno Wright Teen FAMILY IGNORE "Locker"
//#define SCRIPT_NIMOR1LK         (1217)  // niMor1Lk.int    ; New Reno Mordino FAMILY IGNORE "Locker"
#define SCRIPT_NIMYGDLK         (1218)  // niMyGdLk.int    ; New Reno Myron Guard "Locker"
#define SCRIPT_NIMOR2LK         (1219)  // niMor2Lk.int    ; New Reno Mordino NO IGNORE "Locker"
#define SCRIPT_NIMYRNLK         (1220)  // niMyrnLk.int    ; New Reno Myron "Locker"
#define SCRIPT_NICHP1LK         (1221)  // niChp1Lk.int    ; New Reno Chop Shop Boy LOCKED "Locker"
#define SCRIPT_NICHP2LK         (1222)  // niChp2Lk.int    ; New Reno Chop Shop Boy NO-LOCK "Locker"
#define SCRIPT_NITRYLK          (1223)  // niTryLk.int     ; New Reno Tray "Locker"
#define SCRIPT_NIMOR3LK         (1224)  // niMor3Lk.int    ; New Reno Mordino locker, no warning
#define SCRIPT_RNDTOXIC         (1225)  // RndToxic.int    ; Random Toxic Map
#define SCRIPT_ECIRRAD          (1226)  // ECIrrad.int     ; Critter that Irradiates
#define SCRIPT_ECTINWOD         (1227)  // ECTinWod.int    ; Tin Woodsman
#define SCRIPT_RNDTINWD         (1228)  // RNDTinWd.int    ; Tin Woodsman Map Script
#define SCRIPT_ECGRDFRV         (1229)  // ecGrdFrv.int    ; Guardian of Forever
#define SCRIPT_RNDFORVR         (1230)  // rndForvr.int    ; Guardian of Forever Rnd Enct Map Script
#define SCRIPT_ECGRDTRM         (1231)  // ecGrdTrm.int    ; Guardian of Forever Water Chip Terminal
#define SCRIPT_NIELD2LK         (1232)  // niEld2Lk.int    ; New Reno Eldridge "Locker" HARD LOCK
#define SCRIPT_SIRAGOBJ         (1233)  // SIRagobj.int    ; Box Rondo cares about
#define SCRIPT_SFCHINA2         (1234)  // SFChina2.int    ; China 2
#define SCRIPT_WCDEDBOT         (1235)  // WCDedBot.int    ; Fighting Bot that does nothing                # local_vars=10
#define SCRIPT_KCWUPASS         (1236)  // KCWupass.int    ; Klamath Guard robot under Toxic Caves
#define SCRIPT_VIHARWCH         (1237)  // viHarWch.int    ; VCty - Harry Watch Script
#define SCRIPT_VIEDWCH          (1238)  // viEdWch.int     ; VCty - Ed Watch Script
#define SCRIPT_VIANDWCH         (1239)  // viAndWch.int    ; VCty - Doc Andrew Watch Script
#define SCRIPT_VILYNWCH         (1240)  // viLynWch.int    ; VCty - Lynette Watch Script
#define SCRIPT_VIGRGWCH         (1241)  // viGrgWch.int    ; VCty - Greg Watch Script
#define SCRIPT_VICGWCH1         (1242)  // viCGWch1.int    ; VCty - Prison Door Watch Script
#define SCRIPT_VICGWCH2         (1243)  // viCGWch2.int    ; VCty - Greeting Watch Script
#define SCRIPT_VIRNWCH1         (1244)  // viRNWch1.int    ; VCty - Randal1 Watch Script
#define SCRIPT_VIRNWCH2         (1245)  // viRNWch2.int    ; VCty - Randal2 Watch Script
#define SCRIPT_VISTKWCH         (1246)  // viStkWch.int    ; VCty - Stark Watch Script
#define SCRIPT_VIBARWCH         (1247)  // viBarWch.int    ; VCty - Barkus Watch Script
#define SCRIPT_VIVLWCH1         (1248)  // viVLWch1.int    ; VCty - Valerie1 Watch Script
#define SCRIPT_VIVLWCH2         (1249)  // viVLWch2.int    ; VCty - Valerie2 Watch Script
#define SCRIPT_VIWALWCH         (1250)  // viWalWch.int    ; VCty - Wallace Watch Script
#define SCRIPT_VISKVWCH         (1251)  // viSkvWch.int    ; VCty - Greeting Watch Script
#define SCRIPT_VIINWCH1         (1252)  // viInWch1.int    ; VCty - InGrd Watch Script
#define SCRIPT_VIINWCH2         (1253)  // viInWch2.int    ; VCty - InGrd Watch Script
#define SCRIPT_VIINWCH3         (1254)  // viInWch2.int    ; VCty - InGrd Watch Script
#define SCRIPT_VIFAMWCH         (1255)  // viFamWch.int    ; VCty - GenFam Watch Script
#define SCRIPT_VICSWCH1         (1256)  // viCsWch1.int    ; VCty - Cassidy Watch Script
#define SCRIPT_FCDOCSQA         (1257)  // FCDocSqa.int    ; Doc Squatter
#define SCRIPT_FCDOCKID         (1258)  // FCDocKid.int    ; Doc Kids
#define SCRIPT_RNDWHALE         (1259)  // RndWhale.int    ; Random Whale Script
#define SCRIPT_GCPERCY          (1260)  // gcPercy.int     ; Percy Crump, Gecko Merchant
#define SCRIPT_GIPERBOX         (1261)  // giPerBox.int    ; Percy's Stock Box
#define SCRIPT_GIJNKBOX         (1262)  // giJnkBox.int    ; Gecko Junkyard Temp Inventory Box
#define SCRIPT_NIWRIDOR         (1263)  // niWriDor.int    ; New Reno Wright Room Door
#define SCRIPT_DCANAN           (1264)  // dcAnan.int      ; The Great Ananias, Mummy Master
#define SCRIPT_RNDUVILG         (1265)  // rndUvilg.int    ; Unwashed Villagers Map
#define SCRIPT_ECWASH           (1266)  // EcWash.int      ; Unwashed Villagers
#define SCRIPT_ECSPAMMR         (1267)  // ECSpammr.int    ; Spammer in Unwashed.
#define SCRIPT_EISANMAP         (1268)  // eiSanMap.int    ; Military Base San Francisco Map
#define SCRIPT_RNDSHUTL         (1269)  // RndShutl.int    ; Random Shuttle Map Script
#define SCRIPT_RNDPARIH         (1270)  // RndParih.int    ; Random Pariah Map Script
#define SCRIPT_RNDBHEAD         (1271)  // RndBHead.int    ; Random Big Head Map Script
#define SCRIPT_RNDCAFE          (1272)  // RndCafe.int     ; Random Cafe Map Script
#define SCRIPT_ZINUKE           (1273)  // ZINuke.int      ; Nuka-Cola Script
#define SCRIPT_SFDOCK           (1274)  // sfdock.int      ; map script for San Fran Dock
#define SCRIPT_CICRISDR         (1275)  // ciCrisDr.int    ; Chris's Door
#define SCRIPT_RTLNDMIN         (1276)  // rtlndmin.int    ; Redding Land Mines
#define SCRIPT_WTLNDMIN         (1277)  // wtlndmin.int
#define SCRIPT_NCEXSPOU         (1278)  // ncExSpou.int    ; New Reno Ex-Spouse script
#define SCRIPT_ECMEL            (1279)  // ECMel.int       ; Mel that Dogmeat Creates
#define SCRIPT_CIVENT           (1280)  // ciVent.int      ; Vent into Navarro
#define SCRIPT_CCKEVIN          (1281)  // ccKevin.int     ; Kevin in Navarro
#define SCRIPT_CSALARM          (1282)  // csAlarm.int     ; Navarro base on alert lights
#define SCRIPT_CIQUNWCH         (1283)  // ciQunWch.int    ; Quincy Locker watch script
#define SCRIPT_CIRULWCH         (1284)  // ciRulWch.int    ; Raul Locker Watch Script
#define SCRIPT_CICMDWCH         (1285)  // ciCmdWch.int    ; Commanded Locker Watch Script
#define SCRIPT_SSSTAT           (1286)  // SSStat.int      ; NCR Statue
#define SCRIPT_CTFOB            (1287)  // ctFob.int       ; Fob EXP Spatial Script
#define SCRIPT_CTPLANS          (1288)  // ctPlans.int     ; Vertibird EXP Spatial Script
#define SCRIPT_CTK9PART         (1289)  // ctK9Part.int    ; K9 Part EXP Spatial Script
#define SCRIPT_CSAREA2          (1290)  // csArea2.int     ; Script to signal if dude enters an area
#define SCRIPT_CSOPEN2          (1291)  // csOpen2.int     ; Script to signal if dude uses door w/o permision (in Navarro)
#define SCRIPT_CTSOUND          (1292)  // ctSound.int     ; Soundproof Room Spatial Script
#define SCRIPT_CSOPEN3          (1293)  // csOpen3.int     ; Script to signal if dude uses door w/o permis
#define SCRIPT_ECTLKMON         (1294)  // ECTlkMon.int    ; Talking Moonshiners                           # local_vars=8
#define SCRIPT_ZIWEAKLK         (1295)  // ziWeakLk.int    ; Generic Weak Lock Watch Script
#define SCRIPT_ZIMEDMLK         (1296)  // ziMedmLk.int    ; Generic Medium Lock Watch Script
#define SCRIPT_DCCARNKD         (1297)  // dcCarnKd.int    ; Carny Kid - The Den
#define SCRIPT_CIDOCWCH         (1298)  // ciDocWch.int    ; Raul Locker Watch Script
#define SCRIPT_ZIHARDLK         (1299)  // ziHardLk.int    ; Generic Hard Lock Watch Script
#define SCRIPT_CIMINE           (1300)  // CIMine.int      ; Mines in Raiders Cave
#define SCRIPT_NIBISHLK         (1301)  // niBisHLk.int    ; New Reno Bishop Hard Locker
#define SCRIPT_NIBISHDR         (1302)  // niBisHDr.int    ; New Reno Bishop Hard Locked Door
#define SCRIPT_NTRICROM         (1303)  // ntRicRom.int    ; New Reno Richard Wright Room Spacial
#define SCRIPT_MIMIRDOR         (1304)  // MIMirDor.int    ; Miria's Bedroom Door
#define SCRIPT_MIDAVDOR         (1305)  // MIDavDor.int    ; Dave's Bedroom Door
#define SCRIPT_SIPTBOX2         (1306)  // SIPtbox2.int    ; box where Merk hides your car trunk stuff
#define SCRIPT_SFSHUTL1         (1307)  // sfshutl1.int    ; map script to Hubologist entrance (shuttle)
#define SCRIPT_PATCHINF         (1308)  // patchinf.int    ; Patch Info

#endif // SCRIPTS_H
