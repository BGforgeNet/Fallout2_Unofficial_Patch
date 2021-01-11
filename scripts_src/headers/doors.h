#ifndef DOORS_H
#define DOORS_H

//Doors functions

#include "scripts.h"

#define doors_mstr(x) (message_str(SCRIPT_DOOR,x))

procedure trap_search_result(variable found_trap, variable who) begin
   if (found_trap == 0) then begin // can't see trap
      if (who == dude_obj) then begin
         display_msg(doors_mstr(195));
      end else begin
         display_msg(obj_name(who) + doors_mstr(200));
      end
   end else begin // found trap
      if (who == dude_obj) then begin
         display_msg(doors_mstr(198));
      end else begin
         display_msg(obj_name(who) + doors_mstr(200));
      end
   end
end

/***************************************************************************
   This procedure is used should the player try to pry the door open using a
   crowbar or some similar instrument.
***************************************************************************/

procedure Pry_Door begin
   variable Stat_Roll;

   Stat_Roll:=do_check(source_obj,STAT_st,Crowbar_Bonus);

   if (is_success(Stat_Roll)) then begin
       set_local_var(LVAR_Locked, STATE_INACTIVE);
       obj_unlock(self_obj);

       if (source_obj == dude_obj) then begin
           display_msg(mstr(176));
       end

       else begin
           display_msg(mstr(181));
       end
   end

   else if (is_critical(Stat_Roll)) then begin
       critter_dmg(source_obj,Crowbar_Strain,(DMG_normal_dam BWOR DMG_BYPASS_ARMOR));

       if (source_obj == dude_obj) then begin
           if (Crowbar_Strain == 1) then begin
               display_msg(mstr(177));
           end
           else begin
               display_msg(mstr(178)+Crowbar_Strain+mstr(179));
           end
       end

       else begin
           if (is_male(source_obj)) then begin
               if (Crowbar_Strain == 1) then begin
                   display_msg(mstr(182));
               end
               else begin
                   display_msg(mstr(183)+Crowbar_Strain+mstr(184));
               end
           end
 
           else begin
               if (Crowbar_Strain == 1) then begin
                   display_msg(mstr(186));
               end
               else begin
                   display_msg(mstr(187)+Crowbar_Strain+mstr(188));
               end
           end
       end
   end

   else begin
       if (source_obj == dude_obj) then begin
           display_msg(mstr(180));
       end

       else begin
           display_msg(mstr(185));
       end
   end
end


#endif // DOORS_H
