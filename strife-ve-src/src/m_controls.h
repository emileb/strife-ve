//
// Copyright(C) 1993-1996 Id Software, Inc.
// Copyright(C) 1993-2008 Raven Software
// Copyright(C) 2005-2014 Simon Howard
//
// This program is free software; you can redistribute it and/or
// modify it under the terms of the GNU General Public License
// as published by the Free Software Foundation; either version 2
// of the License, or (at your option) any later version.
//
// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.
//

#ifndef __M_CONTROLS_H__
#define __M_CONTROLS_H__
 
extern int key_right;
extern int key_left;

extern int key_up;
extern int key_down;
extern int key_strafeleft;
extern int key_straferight;
extern int key_fire;
extern int key_use;
extern int key_strafe;
extern int key_speed;

extern int key_jump;
 
extern int key_flyup;
extern int key_flydown;
extern int key_flycenter;
extern int key_lookup;
extern int key_lookdown;
extern int key_lookcenter;
extern int key_invleft;
extern int key_invright;
extern int key_useartifact;

extern int key_invslot0;
extern int key_invslot1;
extern int key_invslot2;
extern int key_invslot3;
extern int key_invslot4;
extern int key_invslot5;

// villsa [STRIFE] strife keys
extern int key_usehealth;
extern int key_invquery;
extern int key_mission;
extern int key_invpop;
extern int key_invkey;
extern int key_invhome;
extern int key_invend;
extern int key_invuse;
extern int key_invdrop;
extern int key_centerview; // [SVE] svillarreal

extern int key_message_refresh;
extern int key_pause;

extern int key_multi_msg;
extern int key_multi_msgplayer[8];

extern int key_weapon1;
extern int key_weapon2;
extern int key_weapon3;
extern int key_weapon4;
extern int key_weapon5;
extern int key_weapon6;
extern int key_weapon7;
extern int key_weapon8;

extern int key_arti_all;
extern int key_arti_health;
extern int key_arti_poisonbag;
extern int key_arti_blastradius;
extern int key_arti_teleport;
extern int key_arti_teleportother;
extern int key_arti_egg;
extern int key_arti_invulnerability;

extern int key_demo_quit;
extern int key_spy;
extern int key_prevweapon;
extern int key_nextweapon;

extern int key_map_north;
extern int key_map_south;
extern int key_map_east;
extern int key_map_west;
extern int key_map_zoomin;
extern int key_map_zoomout;
extern int key_map_toggle;
extern int key_map_maxzoom;
extern int key_map_follow;
extern int key_map_grid;
extern int key_map_mark;
extern int key_map_clearmark;

// menu keys:

extern int key_menu_activate;
extern int key_menu_up;
extern int key_menu_down;
extern int key_menu_left;
extern int key_menu_right;
extern int key_menu_back;
extern int key_menu_forward;
extern int key_menu_confirm;
extern int key_menu_abort;

extern int key_menu_help;
extern int key_menu_save;
extern int key_menu_load;
extern int key_menu_volume;
extern int key_menu_detail;
extern int key_menu_qsave;
extern int key_menu_endgame;
extern int key_menu_messages;
extern int key_menu_qload;
extern int key_menu_quit;
extern int key_menu_gamma;

extern int key_menu_incscreen;
extern int key_menu_decscreen;
extern int key_menu_screenshot;

extern int mousebfire;
extern int mousebstrafe;
extern int mousebforward;

extern int mousebjump;

extern int mousebstrafeleft;
extern int mousebstraferight;
extern int mousebbackward;
extern int mousebuse;

extern int mousebprevweapon;
extern int mousebnextweapon;

extern int mousebinvuse;
extern int mousebinvprev;
extern int mousebinvnext;

extern int joybfire;
extern int joybstrafe;
extern int joybuse;
extern int joybspeed;

extern int joybjump;

extern int joybstrafeleft;
extern int joybstraferight;

extern int joybprevweapon;
extern int joybnextweapon;

extern int joybmenu;
extern int joybmenu_up;
extern int joybmenu_down;
extern int joybmenu_left;
extern int joybmenu_right;
extern int joybmenu_back;
extern int joybmenu_forward;
extern int joybmenu_confirm;
extern int joybmenu_abort;

// [SVE] svillarreal
extern int joybinvleft;
extern int joybinvright;
extern int joybinvuse;
extern int joybinvdrop;
extern int joybcenterview;
extern int joybmission;
extern int joybinvpop;
extern int joybinvkey;

// [SVE] svillarreal
extern int joybmap_north;
extern int joybmap_south;
extern int joybmap_east;
extern int joybmap_west;
extern int joybmap_zoomin;
extern int joybmap_zoomout;
extern int joybmap_toggle;
extern int joybmap_maxzoom;
extern int joybmap_follow;
extern int joybmap_mark;
extern int joybmap_clearmark;

extern int dclick_use;

void M_BindBaseControls(void);
void M_BindHereticControls(void);
void M_BindHexenControls(void);
void M_BindStrifeControls(void);
void M_BindWeaponControls(void);
void M_BindMapControls(void);
void M_BindMenuControls(void);
void M_BindChatControls(unsigned int num_players);

void M_ApplyPlatformDefaults(void);
boolean M_CheckGamepadButtonVars(void);

#endif /* #ifndef __M_CONTROLS_H__ */

