//various custom commands
#ifndef UPU_H
#define UPU_H



//force use item remotely
procedure create_and_use_itempid_on(variable target, variable itempid) begin
   variable item;
   item := create_object(itempid, tile_num(target), elevation(target));
   set_self(target);
   set_self(target);
   use_obj_on_obj(item, target);
   set_self(0);
end

procedure is_human(variable who) begin
   variable type;
   type := critter_kill_type(who);
   if type == KILL_TYPE_men_kills or type == KILL_TYPE_women_kills or type == KILL_TYPE_children_kills then return true;
   return false;
end

#define is_critter(obj)    (obj_type(obj) == OBJ_TYPE_CRITTER)

//a workaround for game_time going negative after 7 years
#define restock_fix \
  if ( (game_time < 0) and (local_var(LVAR_Restock_Time_Fix) == 0) ) then begin \
    set_local_var(LVAR_Restock_Time, game_time - 1); \
    set_local_var(LVAR_Restock_Time_Fix, 1); \
  end

#define CUR_AREA_MILITARY_BASE            (cur_town == AREA_MILITARY_BASE)

// Proper rep checking functions
// Evil_Critter is defined in talk_p_proc, while check_general_rep happens in other procedures too, so we build a separate array for them. Fortunately, there aren't many evils.
procedure is_evil begin
  variable evil_critters := [
    // grep -R "Evil_Critter:=1" scripts_src/ | awk -F ':' '{print $1}' | xargs grep "#define SCRIPT_REALNAME" | awk '{print $3}' | sort
    // Can't use SCRIPT_NAME because it's defined in (parentheses) and sfall array syntax won't have it.
    "bcdardog",
    "bcdargrd",
    "bcdarion",
    "bcgengrd",
    "bckarla",
    "bcphil",
    "fcdaveh",
    "fcelrind",
    "fcjuavki",
    "fclopan",
    "fcoz7",
    "fcoz9",
    "ncbismen",
    "ncdrgdlr",
    "ncmormen",
    "ncramire",
    "ncsalmen",
    "ocmatt",
    "qcfrank",
    "rchakes",
    "scbuster",
    "sclenny",
    "scmerk",
    "scmira",
    "scmrkgrd",
    "scoswald",
    "scrawpat",
    "scskeete",
    "scslvgrd",
    "scvortis"
  ];
  if is_in_array(SCRIPT_REALNAME, evil_critters) then return true;
  return false;
end

procedure effective_rep begin
  variable rep := global_var(GVAR_PLAYER_REPUTATION);
  if has_trait(TRAIT_PERK, dude_obj, PERK_karma_beacon_perk) then rep := rep * 2;
  if has_trait(TRAIT_PERK, dude_obj, PERK_cult_of_personality) then begin
    variable i_am_evil := is_evil;
    if i_am_evil and rep > 0 then return -1 * rep;
    if not i_am_evil and rep < 0 then return -1 * rep;
  end
  return rep;
end

// Allows to check both negative and positive titles sanely.
// Original sometimes checks > vs >=, I think it's a typo. Either you have the title, or not.
procedure has_title(variable title) begin
  variable rep := effective_rep;
  if title >= 0 and rep >= title then return true;
  if title < 0 and rep <= title then return true;
  return false;
end

#define rep_positive (effective_rep >= 0) // ok, "almost positive". In line with has_title.
#define rep_negative (effective_rep < 0)

#define self_exists (self_pid != -1)

procedure closest_party_member(variable obj) begin
  variable who, cur_distance, min_distance = -1, closest_who = false;
  // only dude
  if len_array(party_member_list_critters) == 1 then return false;

  foreach who in party_member_list_critters begin
    if who != dude_obj then begin
      cur_distance = tile_distance_objs(obj, who);
      if (min_distance == -1) or (cur_distance < min_distance) then begin
        min_distance = cur_distance;
        closest_who = who;
      end
    end
  end
  return closest_who;
end

#endif  // UPU_H
