/*
	Copyright 1998-2003 Interplay Entertainment Corp.  All rights reserved.
*/

#ifndef ARGARDEN_H
#define ARGARDEN_H

/************************************************
    Generic Defines
************************************************/

#define MIN_SMALL_GECKO                         (4)
#define MAX_SMALL_GECKO                         (7)

#define MIN_TOUGH_GECKO                         (1)
#define MAX_TOUGH_GECKO                         (3)

#define MIN_BROC_FLOWER                         (2)
#define MAX_BROC_FLOWER                         (4)

#define MIN_XANDER_ROOT                         (2)
#define MAX_XANDER_ROOT                         (4)

#define HEX_MARK0                               (18682)
#define HEX_MARK1                               (22920) /*(23323)*/
#define HEX_MARK2                               (27490) /*(28695*/

#define HEX_DEAD_DOG                            (23491)
#define HEX_DEAD_COUSIN                         (23894)
#define HEX_DEAD_GECKO                          (23491)

/************************************************
    Map Vars for Arroyo Garden Map
************************************************/

#define MVAR_Last_Respawn_Map                   (0)
#define MVAR_Current_Gecko_Easy                 (1)
#define MVAR_Current_Gecko_Hard                 (2)
#define MVAR_Current_Xander_Root                (3)
#define MVAR_Current_Broc_Flower                (4)
#define MVAR_Last_Spot                          (5)
#define MVAR_Kill_Runaway                       (6)
#define MVAR_Dog_Already_Dead                   (7)

/**************************************************
    Formula Macros
**************************************************/

#define Next_Hex                if (map_var(MVAR_Last_Spot) == 0) then                  \
                                    set_map_var(MVAR_Last_Spot,HEX_MARK0);              \
                                else if (map_var(MVAR_Last_Spot) == HEX_MARK0) then     \
                                    set_map_var(MVAR_Last_Spot,HEX_MARK1);              \
                                else if (map_var(MVAR_Last_Spot) == HEX_MARK1) then     \
                                    set_map_var(MVAR_Last_Spot,HEX_MARK2);              \
                                else if (map_var(MVAR_Last_Spot) == HEX_MARK2) then     \
                                    set_map_var(MVAR_Last_Spot,HEX_MARK0)

#endif // ARGARDEN_H
