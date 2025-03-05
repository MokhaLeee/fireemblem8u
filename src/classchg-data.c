#include "global.h"
#include "constants/characters.h"
#include "constants/classes.h"

CONST_DATA u8 gPromoJidLut[][2] = {
    [CLASS_EPHRAIM_LORD]    = {CLASS_EPHRAIM_MASTER_LORD},
    [CLASS_EIRIKA_LORD]     = {CLASS_EIRIKA_MASTER_LORD},
    [CLASS_CAVALIER]        = {CLASS_PALADIN,               CLASS_GREAT_KNIGHT},
    [CLASS_CAVALIER_F]      = {CLASS_PALADIN_F,             CLASS_GREAT_KNIGHT_F},
    [CLASS_ARMOR_KNIGHT]    = {CLASS_GENERAL,               CLASS_GREAT_KNIGHT},
    [CLASS_ARMOR_KNIGHT_F]  = {CLASS_GENERAL_F,             CLASS_GREAT_KNIGHT_F},
    [CLASS_THIEF]           = {CLASS_ASSASSIN,              CLASS_ROGUE},
    [CLASS_MERCENARY]       = {CLASS_HERO,                  CLASS_RANGER},
    [CLASS_MERCENARY_F]     = {CLASS_HERO_F,                CLASS_RANGER_F},
    [CLASS_MYRMIDON]        = {CLASS_ASSASSIN,              CLASS_SWORDMASTER},
    [CLASS_MYRMIDON_F]      = {CLASS_ASSASSIN_F,            CLASS_SWORDMASTER_F},
    [CLASS_ARCHER]          = {CLASS_SNIPER,                CLASS_RANGER},
    [CLASS_ARCHER_F]        = {CLASS_SNIPER_F,              CLASS_RANGER_F},
    [CLASS_WYVERN_RIDER]    = {CLASS_WYVERN_LORD,           CLASS_WYVERN_KNIGHT},
    [CLASS_WYVERN_RIDER_F]  = {CLASS_WYVERN_LORD_F,         CLASS_WYVERN_KNIGHT_F},
    [CLASS_MAGE]            = {CLASS_SAGE,                  CLASS_MAGE_KNIGHT},
    [CLASS_MAGE_F]          = {CLASS_SAGE_F,                CLASS_MAGE_KNIGHT_F},
    [CLASS_SHAMAN]          = {CLASS_DRUID,                 CLASS_SUMMONER},
    [CLASS_SHAMAN_F]        = {CLASS_DRUID,                 CLASS_SUMMONER},
    [CLASS_GORGONEGG2]      = {CLASS_GORGON},
    [CLASS_RECRUIT_T1]      = {CLASS_PALADIN_F,             CLASS_RECRUIT_T2},
    [CLASS_JOURNEYMAN]      = {CLASS_FIGHTER,               CLASS_PIRATE},
    [CLASS_PUPIL]           = {CLASS_MAGE,                  CLASS_SHAMAN},
    [CLASS_FIGHTER]         = {CLASS_HERO,                  CLASS_WARRIOR},
    [CLASS_BRIGAND]         = {CLASS_WARRIOR,               CLASS_BERSERKER},
    [CLASS_PIRATE]          = {CLASS_WARRIOR,               CLASS_BERSERKER},
    [CLASS_MONK]            = {CLASS_BISHOP,                CLASS_SAGE},
    [CLASS_PRIEST]          = {CLASS_BISHOP,                CLASS_SAGE},
    [CLASS_RECRUIT]         = {CLASS_ARMOR_KNIGHT_F,        CLASS_CAVALIER_F},
    [CLASS_PEGASUS_KNIGHT]  = {CLASS_FALCON_KNIGHT,         CLASS_WYVERN_KNIGHT_F},
    [CLASS_CLERIC]          = {CLASS_BISHOP_F,              CLASS_VALKYRIE},
    [CLASS_TROUBADOUR]      = {CLASS_VALKYRIE,              CLASS_MAGE_KNIGHT_F},
    [CLASS_REVENANT]        = {CLASS_ENTOUMBED},
    [CLASS_BONEWALKER]      = {CLASS_WIGHT},
    [CLASS_BONEWALKER_BOW]  = {CLASS_WIGHT_BOW},
    [CLASS_BAEL]            = {CLASS_ELDER_BAEL},
    [CLASS_MAUTHEDOOG]      = {CLASS_GWYLLGI},
    [CLASS_TARVOS]          = {CLASS_MAELDUIN},
    [CLASS_MOGALL]          = {CLASS_ARCH_MOGALL},
    [CLASS_GORGONEGG]       = {CLASS_GORGON},
    [CLASS_GARGOYLE]        = {CLASS_DEATHGOYLE},
    [CLASS_JOURNEYMAN_T1]   = {CLASS_HERO,                  CLASS_JOURNEYMAN_T2},
    [CLASS_PUPIL_T1]        = {CLASS_SAGE,                  CLASS_PUPIL_T2},
};

CONST_DATA u8 gAnimCharaPalConfig[0x100][7] = {0};

CONST_DATA u8 gAnimCharaPalConfigUnused[0x100][7] = {0};

 CONST_DATA u8 gAnimCharaPalIt[0x100][7] = {0};

CONST_DATA u8 gSummonConfig[4][2] = {
    {
        CHARACTER_EWAN, CHARACTER_SUMMON_EWAN
    },
    {
        CHARACTER_KNOLL, CHARACTER_SUMMON_KNOLL
    },
    {
        CHARACTER_LYON_CC, CHARACTER_SUMMON_LYON
    },
    {0}
};
