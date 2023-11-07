// some characters have their own palette set for battle animation
// each set has 5 palettes: 
// player, enemy, npc, p4, independent

#include "banim_data.h"

__attribute__((section(".data.banim_pal_ptr_table")))
struct BattleAnimCharaPal character_battle_animation_palette_table[] = {
	{"mer", banim_pal_mer}, // 0
	{"ame", banim_pal_mer}, // 1
	{"gil", banim_pal_mer}, // 2
	{"bre", banim_pal_mer}, // 3
	{"saa", banim_pal_mer}, // 4
	{"mar", banim_pal_mer}, // 5
	{"com", banim_pal_mer}, // 6
	{"jho", banim_pal_mer}, // 7
	{"bon", banim_pal_mer}, // 8
	{"baz", banim_pal_mer}, // 9
	{"ass", banim_pal_mer}, // 10
	{"nat", banim_pal_mer}, // 11
	{"mul", banim_pal_mer}, // 12
	{"irv", banim_pal_mer}, // 13
	{"ewa", banim_pal_mer}, // 14
	{"gar", banim_pal_mer}, // 15
	{"ros", banim_pal_mer}, // 16
	{"xys", banim_pal_mer}, // 17
	{"doz", banim_pal_mer}, // 18
	{"ros", banim_pal_mer}, // 19
	{"tet", banim_pal_mer}, // 20
	{"cug", banim_pal_mer}, // 21
	{"cug", banim_pal_mer}, // 22
	{"gle", banim_pal_mer}, // 23
	{"kno", banim_pal_mer}, // 24
	{"ewa", banim_pal_mer}, // 25
	{"tur", banim_pal_mer}, // 26
	{"van", banim_pal_mer}, // 27
	{"syr", banim_pal_mer}, // 28
	{"gar", banim_pal_mer}, // 29
	{"ros", banim_pal_mer}, // 30
	{"one", banim_pal_mer}, // 31
	{"xys", banim_pal_mer}, // 32
	{"mer", banim_pal_mer}, // 33
	{"ber", banim_pal_mer}, // 34
	{"ame", banim_pal_mer}, // 35
	{"gil", banim_pal_mer}, // 36
	{"vig", banim_pal_mer}, // 37
	{"tir", banim_pal_mer}, // 38
	{"for", banim_pal_mer}, // 39
	{"fra", banim_pal_mer}, // 40
	{"gil", banim_pal_mer}, // 41
	{"kyl", banim_pal_mer}, // 42
	{"ame", banim_pal_mer}, // 43
	{"dus", banim_pal_mer}, // 44
	{"aia", banim_pal_mer}, // 45
	{"lut", banim_pal_mer}, // 46
	{"ewa", banim_pal_mer}, // 47
	{"xys", banim_pal_mer}, // 48
	{"zon", banim_pal_mer}, // 49
	{"ewa", banim_pal_mer}, // 50
	{"lar", banim_pal_mer}, // 51
	{"lut", banim_pal_mer}, // 52
	{"cel", banim_pal_mer}, // 53
	{"ass", banim_pal_mer}, // 54
	{"jho", banim_pal_mer}, // 55
	{"mar", banim_pal_mer}, // 56
	{"ame", banim_pal_mer}, // 57
	{"for", banim_pal_mer}, // 58
	{"set", banim_pal_mer}, // 59
	{"fra", banim_pal_mer}, // 60
	{"kyl", banim_pal_mer}, // 61
	{"ols", banim_pal_mer}, // 62
	{"van", banim_pal_mer}, // 63
	{"tur", banim_pal_mer}, // 64
	{"ros", banim_pal_mer}, // 65
	{"nat", banim_pal_mer}, // 66
	{"com", banim_pal_mer}, // 67
	{"mul", banim_pal_mer}, // 68
	{"ren", banim_pal_mer}, // 69
	{"lut", banim_pal_mer}, // 70
	{"ass", banim_pal_mer}, // 71
	{"ewa", banim_pal_mer}, // 72
	{"kno", banim_pal_mer}, // 73
	{"mul", banim_pal_mer}, // 74
	{"sal", banim_pal_mer}, // 75
	{"ewa", banim_pal_mer}, // 76
	{"kno", banim_pal_mer}, // 77
	{"nov", banim_pal_mer}, // 78
	{"ewa", banim_pal_mer}, // 79
	{"kno", banim_pal_mer}, // 80
	{"hea", banim_pal_mer}, // 81
	{"mer", banim_pal_mer}, // 82
	{"ame", banim_pal_mer}, // 83
	{"fra", banim_pal_mer}, // 84
	{"kyl", banim_pal_mer}, // 85
	{"for", banim_pal_mer}, // 86
	{"mur", banim_pal_mer}, // 87
	{"ish", banim_pal_mer}, // 88
	{"hey", banim_pal_mer}, // 89
	{"fad", banim_pal_mer}, // 90
	{"jho", banim_pal_mer}, // 91
	{"mar", banim_pal_mer}, // 92
	{"com", banim_pal_mer}, // 93
	{"car", banim_pal_mer}, // 94
	{"lar", banim_pal_mer}, // 95
	{"nat", banim_pal_mer}, // 96
	{"lar", banim_pal_mer}, // 97
	{"gar", banim_pal_mer}, // 98
	{"ros", banim_pal_mer}, // 99
	{"bin", banim_pal_mer}, // 100
	{"tur", banim_pal_mer}, // 101
	{"van", banim_pal_mer}, // 102
	{"cug", banim_pal_mer}, // 103
	{"wal", banim_pal_mer}, // 104
	{"geb", banim_pal_mer}, // 105
	{"pab", banim_pal_mer}, // 106
	{"cet", banim_pal_mer}, // 107
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
