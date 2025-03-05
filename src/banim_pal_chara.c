// some characters have their own palette set for battle animation
// each set has 5 palettes: 
// player, enemy, npc, p4, independent

#include "banim_data.h"

__attribute__((section(".data.banim_pal_ptr_table")))
struct BattleAnimCharaPal character_battle_animation_palette_table[] = {
	{"", NULL }
};

__attribute__((section(".data.banim_pal_head")))
DataBlockHead banim_pal_head = {
    sizeof(character_battle_animation_palette_table) / sizeof(character_battle_animation_palette_table)[0],
//    _banim_pal_end - _banim_pal_start
//    + 0x8000000
//    (int)_banim_pal_size
//    initializer element for `banim_pal_head.size' is not computable at load time
//    (int)_banim_pal_size & 0xFFFFFF
//    (int)(unsigned short)_banim_pal_size
//    FIXME update block size automatically, not hardcoded
    0x32E0
};
