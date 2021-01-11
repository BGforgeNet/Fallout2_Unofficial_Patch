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

#endif // DOORS_H
