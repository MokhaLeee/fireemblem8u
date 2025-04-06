#include "global.h"

#include "ctc.h"
#include "worldmap.h"

#include "constants/worldmap.h"
#include "constants/msg.h"
#include "constants/chapters.h"

const struct NodeIcon gWMNodeIconData[] =
{
    {
        .sheetTileId = 0x0080,
        .pSpriteData = gObject_32x32,
        .xCenter = 16,
        .yCenter = 24,
        .width = 32,
        .height = 32,
        .xFlagOrigin = 19,
        .yFlagOrigin = 1,
    },
    {
        .sheetTileId = 0x0084,
        .pSpriteData = gObject_32x32,
        .xCenter = 16,
        .yCenter = 24,
        .width = 32,
        .height = 32,
        .xFlagOrigin = 15,
        .yFlagOrigin = 8,
    },
    {
        .sheetTileId = 0x0088,
        .pSpriteData = gObject_32x32,
        .xCenter = 16,
        .yCenter = 24,
        .width = 32,
        .height = 32,
        .xFlagOrigin = 15,
        .yFlagOrigin = 8,
    },
    {
        .sheetTileId = 0x0088,
        .pSpriteData = gObject_32x32,
        .xCenter = 16,
        .yCenter = 24,
        .width = 32,
        .height = 32,
        .xFlagOrigin = 15,
        .yFlagOrigin = 8,
    },
    {
        .sheetTileId = 0x0088,
        .pSpriteData = gObject_32x32,
        .xCenter = 16,
        .yCenter = 24,
        .width = 32,
        .height = 32,
        .xFlagOrigin = 15,
        .yFlagOrigin = 8,
    },
    {
        .sheetTileId = 0x0092,
        .pSpriteData = gObject_16x16,
        .xCenter = 8,
        .yCenter = 8,
        .width = 16,
        .height = 16,
        .xFlagOrigin = 8,
        .yFlagOrigin = 1,
    },
    {
        .sheetTileId = 0x009A,
        .pSpriteData = gObject_32x32,
        .xCenter = 16,
        .yCenter = 24,
        .width = 32,
        .height = 32,
        .xFlagOrigin = 16,
        .yFlagOrigin = 5,
    },
    {
        .sheetTileId = 0x0014,
        .pSpriteData = gObject_32x32,
        .xCenter = 16,
        .yCenter = 24,
        .width = 32,
        .height = 32,
        .xFlagOrigin = 16,
        .yFlagOrigin = 4,
    },
    {
        .sheetTileId = 0x0018,
        .pSpriteData = gObject_32x32,
        .xCenter = 16,
        .yCenter = 24,
        .width = 32,
        .height = 32,
        .xFlagOrigin = 16,
        .yFlagOrigin = 4,
    },
    {
        .sheetTileId = 0x0098,
        .pSpriteData = gObject_16x16,
        .xCenter = 8,
        .yCenter = 8,
        .width = 16,
        .height = 16,
        .xFlagOrigin = 8,
        .yFlagOrigin = 3,
    },
    {
        .sheetTileId = 0x00D2,
        .pSpriteData = gObject_16x16,
        .xCenter = 8,
        .yCenter = 8,
        .width = 16,
        .height = 16,
        .xFlagOrigin = 6,
        .yFlagOrigin = 2,
    },
    {
        .sheetTileId = 0x0094,
        .pSpriteData = gObject_16x16,
        .xCenter = 8,
        .yCenter = 8,
        .width = 16,
        .height = 16,
        .xFlagOrigin = 10,
        .yFlagOrigin = 2,
    },
    {
        .sheetTileId = 0x001C,
        .pSpriteData = gObject_32x32,
        .xCenter = 16,
        .yCenter = 24,
        .width = 32,
        .height = 32,
        .xFlagOrigin = 16,
        .yFlagOrigin = 11,
    },
    {
        .sheetTileId = 0x0090,
        .pSpriteData = gObject_16x32,
        .xCenter = 8,
        .yCenter = 24,
        .width = 16,
        .height = 32,
        .xFlagOrigin = 8,
        .yFlagOrigin = 24,
    },
    {
        .sheetTileId = 0x008C,
        .pSpriteData = gObject_32x32,
        .xCenter = 16,
        .yCenter = 24,
        .width = 32,
        .height = 32,
        .xFlagOrigin = 16,
        .yFlagOrigin = 24,
    },
    {
        .sheetTileId = 0x00D4,
        .pSpriteData = gObject_8x8,
        .xCenter = 4,
        .yCenter = 4,
        .width = 8,
        .height = 8,
        .xFlagOrigin = 4,
        .yFlagOrigin = 4,
    },
    {
        .sheetTileId = 0x0092,
        .pSpriteData = gObject_16x16,
        .xCenter = 8,
        .yCenter = 8,
        .width = 16,
        .height = 16,
        .xFlagOrigin = 8,
        .yFlagOrigin = 8,
    },
};

const struct GMapNodeData gWMNodeData[] =
{
    [NODE_BORDER_MULAN] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_NONE,
        .iconPreClear = 0x0B,
        .iconPostClear = 0x0B,
        .chapteridx_eirika = CHAPTER_L_PROLOGUE,
        .chapteridx_ephram = CHAPTER_L_PROLOGUE,
        .unk_06 = 0x0089,
        .unk_08 = { 0x00, 0x00, 0x01, 0x01, },
        .armory = (u16 *) 0x08A3EFB4,
        .vendor = (u16 *) 0x08A3F078,
        .secretShop = (u16 *) 0x08A3F16A,
        .x = 152,
        .y = 88,
        .nameTextId = MSG_650, // "Border Mulan"
        .shipTravelFlag = 0,
    },
    [NODE_CASTLE_FRELIA] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_FRELIA,
        .encounters = GMAP_ENCOUNTERS_NONE,
        .iconPreClear = 0x02,
        .iconPostClear = 0x02,
        .chapteridx_eirika = CHAPTER_CASTLE_FRELIA,
        .chapteridx_ephram = CHAPTER_CASTLE_FRELIA,
        .unk_06 = 0x0088,
        .unk_08 = { 0x02, 0x02, 0x09, 0x0E, },
        .armory = (u16 *) 0x08A3EFB6,
        .vendor = (u16 *) 0x08A3F07A,
        .secretShop = (u16 *) 0x08A3F16C,
        .x = 88,
        .y = 72,
        .nameTextId = MSG_651, // "Castle Frelia[.]"
        .shipTravelFlag = 0,
    },
    [NODE_IDE] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_MONSTERS,
        .iconPreClear = 0x0A,
        .iconPostClear = 0x0A,
        .chapteridx_eirika = CHAPTER_L_2,
        .chapteridx_ephram = CHAPTER_L_2,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x03, 0x03, 0x03, 0x03, },
        .armory = (u16 *) 0x08A3EFB8,
        .vendor = (u16 *) 0x08A3F07C,
        .secretShop = (u16 *) 0x08A3F16E,
        .x = 120,
        .y = 120,
        .nameTextId = MSG_652, // "Ide[.]"
        .shipTravelFlag = 0,
    },
    [NODE_BORGO_RIDGE] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_MONSTERS,
        .iconPreClear = 0x0B,
        .iconPostClear = 0x0B,
        .chapteridx_eirika = CHAPTER_L_3,
        .chapteridx_ephram = CHAPTER_L_3,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x04, 0x04, 0x04, 0x04, },
        .armory = (u16 *) 0x08A3EFCA,
        .vendor = (u16 *) 0x08A3F07E,
        .secretShop = (u16 *) 0x08A3F170,
        .x = 120,
        .y = 152,
        .nameTextId = MSG_653, // "Borgo Ridge[.]"
        .shipTravelFlag = 0,
    },
    [NODE_ZAHA_WOODS] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_MONSTERS,
        .iconPreClear = 0x0F,
        .iconPostClear = 0x0F,
        .chapteridx_eirika = CHAPTER_L_4,
        .chapteridx_ephram = CHAPTER_L_4,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x05, 0x05, 0x05, 0x05, },
        .armory = (u16 *) 0x08A3EFCC,
        .vendor = (u16 *) 0x08A3F080,
        .secretShop = (u16 *) 0x08A3F172,
        .x = 152,
        .y = 152,
        .nameTextId = MSG_654, // "Za'ha Woods[.]"
        .shipTravelFlag = 0,
    },
    [NODE_SERAFEW] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_NONE,
        .iconPreClear = 0x0A,
        .iconPostClear = 0x0A,
        .chapteridx_eirika = CHAPTER_L_5,
        .chapteridx_ephram = CHAPTER_L_5,
        .unk_06 = 0x0088,
        .unk_08 = { 0x06, 0x06, 0x01, 0x01, },
        .armory = (u16 *) 0x08A3EFCE,
        .vendor = (u16 *) 0x08A3F082,
        .secretShop = (u16 *) 0x08A3F174,
        .x = 152,
        .y = 183,
        .nameTextId = MSG_655, // "Serafew[.]"
        .shipTravelFlag = 0,
    },
    [NODE_ADLAS_PLAINS] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_MONSTERS,
        .iconPreClear = 0x0F,
        .iconPostClear = 0x0F,
        .chapteridx_eirika = CHAPTER_L_6,
        .chapteridx_ephram = CHAPTER_L_6,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x07, 0x07, 0x07, 0x07, },
        .armory = (u16 *) 0x08A3EFE4,
        .vendor = (u16 *) 0x08A3F090,
        .secretShop = (u16 *) 0x08A3F176,
        .x = 184,
        .y = 200,
        .nameTextId = MSG_656, // "Adlas Plains"
        .shipTravelFlag = 0,
    },
    [NODE_RENVALL_07] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_NONE,
        .iconPreClear = 0x05,
        .iconPostClear = 0x05,
        .chapteridx_eirika = CHAPTER_L_7,
        .chapteridx_ephram = CHAPTER_L_7,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x08, 0x08, 0x08, 0x08, },
        .armory = (u16 *) 0x08A3EFE6,
        .vendor = (u16 *) 0x08A3F092,
        .secretShop = (u16 *) 0x08A3F178,
        .x = 216,
        .y = 216,
        .nameTextId = MSG_657, // "Renvall[.]"
        .shipTravelFlag = 0,
    },
    [NODE_RENVALL_08] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_NONE,
        .iconPreClear = 0x05,
        .iconPostClear = 0x05,
        .chapteridx_eirika = CHAPTER_L_8,
        .chapteridx_ephram = CHAPTER_L_8,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x05, 0x05, 0x05, 0x05, },
        .armory = (u16 *) 0x08A3EFE8,
        .vendor = (u16 *) 0x08A3F094,
        .secretShop = (u16 *) 0x08A3F17A,
        .x = 216,
        .y = 216,
        .nameTextId = MSG_658, // "Renvall[.]"
        .shipTravelFlag = 0,
    },
    [NODE_PORT_KIRIS] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_NONE,
        .iconPreClear = 0x0A,
        .iconPostClear = 0x0A,
        .chapteridx_eirika = CHAPTER_E_9,
        .chapteridx_ephram = CHAPTER_E_9,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x0A, 0x0A, 0x0A, 0x0A, },
        .armory = (u16 *) 0x08A3EFEA,
        .vendor = (u16 *) 0x08A3F096,
        .secretShop = (u16 *) 0x08A3F17C,
        .x = 216,
        .y = 56,
        .nameTextId = MSG_659, // "Port Kiris"
        .shipTravelFlag = 1,
    },
    [NODE_TERAZ_PLATEAU] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_MONSTERS,
        .iconPreClear = 0x0F,
        .iconPostClear = 0x0F,
        .chapteridx_eirika = CHAPTER_E_10,
        .chapteridx_ephram = CHAPTER_E_10,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x0B, 0x0B, 0x0B, 0x0B, },
        .armory = (u16 *) 0x08A3F004,
        .vendor = (u16 *) 0x08A3F0B2,
        .secretShop = (u16 *) 0x08A3F17E,
        .x = 216,
        .y = 104,
        .nameTextId = MSG_65A, // "Teraz Plateau[.]"
        .shipTravelFlag = 0,
    },
    [NODE_CAER_PELYN] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_NONE,
        .iconPreClear = 0x09,
        .iconPostClear = 0x09,
        .chapteridx_eirika = CHAPTER_E_11,
        .chapteridx_ephram = CHAPTER_E_11,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x0C, 0x0C, 0x0C, 0x0C, },
        .armory = (u16 *) 0x08A3F006,
        .vendor = (u16 *) 0x08A3F0B4,
        .secretShop = (u16 *) 0x08A3F180,
        .x = 264,
        .y = 104,
        .nameTextId = MSG_65B, // "Caer Pelyn"
        .shipTravelFlag = 0,
    },
    [NODE_HAMILL_CANYON] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_MONSTERS,
        .iconPreClear = 0x0F,
        .iconPostClear = 0x0F,
        .chapteridx_eirika = CHAPTER_E_13,
        .chapteridx_ephram = CHAPTER_E_13,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x0D, 0x0D, 0x0D, 0x0D, },
        .armory = (u16 *) 0x08A3F008,
        .vendor = (u16 *) 0x08A3F0CC,
        .secretShop = (u16 *) 0x08A3F182,
        .x = 312,
        .y = 136,
        .nameTextId = MSG_65C, // "Hamill Canyon[.]"
        .shipTravelFlag = 0,
    },
    [NODE_JEHANNA_HALL_0D] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_NONE,
        .iconPreClear = 0x07,
        .iconPostClear = 0x07,
        .chapteridx_eirika = CHAPTER_E_14,
        .chapteridx_ephram = CHAPTER_E_14,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x13, 0x13, 0x13, 0x13, },
        .armory = (u16 *) 0x08A3F00A,
        .vendor = (u16 *) 0x08A3F0CE,
        .secretShop = (u16 *) 0x08A3F184,
        .x = 312,
        .y = 200,
        .nameTextId = MSG_65D, // "Jehanna Hall"
        .shipTravelFlag = 0,
    },
    [NODE_FORT_RIGWALD] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_MONSTERS,
        .iconPreClear = 0x0B,
        .iconPostClear = 0x0B,
        .chapteridx_eirika = CHAPTER_I_9,
        .chapteridx_ephram = CHAPTER_I_9,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x0F, 0x0F, 0x0F, 0x0F, },
        .armory = (u16 *) 0x08A3F00C,
        .vendor = (u16 *) 0x08A3F0D0,
        .secretShop = (u16 *) 0x08A3F186,
        .x = 72,
        .y = 152,
        .nameTextId = MSG_65E, // "Fort Rigwald"
        .shipTravelFlag = 0,
    },
    [NODE_BETHROEN] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_MONSTERS,
        .iconPreClear = 0x0F,
        .iconPostClear = 0x0F,
        .chapteridx_eirika = CHAPTER_I_10,
        .chapteridx_ephram = CHAPTER_I_10,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x10, 0x10, 0x10, 0x10, },
        .armory = (u16 *) 0x08A3F00E,
        .vendor = (u16 *) 0x08A3F0D2,
        .secretShop = (u16 *) 0x08A3F188,
        .x = 72,
        .y = 232,
        .nameTextId = MSG_65F, // "Bethroen"
        .shipTravelFlag = 1,
    },
    [NODE_TAIZEL] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_NONE,
        .iconPreClear = 0x0A,
        .iconPostClear = 0x0A,
        .chapteridx_eirika = CHAPTER_I_11,
        .chapteridx_ephram = CHAPTER_I_11,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x11, 0x11, 0x11, 0x11, },
        .armory = (u16 *) 0x08A3F028,
        .vendor = (u16 *) 0x08A3F0EE,
        .secretShop = (u16 *) 0x08A3F18A,
        .x = 152,
        .y = 248,
        .nameTextId = MSG_660, // "Taizel"
        .shipTravelFlag = 1,
    },
    [NODE_ZAALBUL_MARSH] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_MONSTERS,
        .iconPreClear = 0x0F,
        .iconPostClear = 0x0F,
        .chapteridx_eirika = CHAPTER_I_13,
        .chapteridx_ephram = CHAPTER_I_13,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x12, 0x12, 0x12, 0x12, },
        .armory = (u16 *) 0x08A3F02A,
        .vendor = (u16 *) 0x08A3F106,
        .secretShop = (u16 *) 0x08A3F18C,
        .x = 200,
        .y = 264,
        .nameTextId = MSG_661, // "Za'albul Marsh"
        .shipTravelFlag = 0,
    },
    [NODE_GRADO_KEEP] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_NONE,
        .iconPreClear = 0x08,
        .iconPostClear = 0x08,
        .chapteridx_eirika = CHAPTER_I_14,
        .chapteridx_ephram = CHAPTER_I_14,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x13, 0x13, 0x13, 0x13, },
        .armory = (u16 *) 0x08A3F02C,
        .vendor = (u16 *) 0x08A3F108,
        .secretShop = (u16 *) 0x08A3F18E,
        .x = 264,
        .y = 264,
        .nameTextId = MSG_662, // "Grado Keep"
        .shipTravelFlag = 0,
    },
    [NODE_JEHANNA_HALL_13] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_NONE,
        .iconPreClear = 0x07,
        .iconPostClear = 0x07,
        .chapteridx_eirika = CHAPTER_E_15,
        .chapteridx_ephram = CHAPTER_I_15,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x14, 0x14, 0x14, 0x14, },
        .armory = (u16 *) 0x08A3F02E,
        .vendor = (u16 *) 0x08A3F10A,
        .secretShop = (u16 *) 0x08A3F1B8,
        .x = 312,
        .y = 200,
        .nameTextId = MSG_663, // "Jehanna Hall"
        .shipTravelFlag = 0,
    },
    [NODE_RENAIS_CASTLE] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_NONE,
        .iconPreClear = 0x06,
        .iconPostClear = 0x06,
        .chapteridx_eirika = CHAPTER_E_16,
        .chapteridx_ephram = CHAPTER_I_16,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x15, 0x15, 0x15, 0x15, },
        .armory = (u16 *) 0x08A3F030,
        .vendor = (u16 *) 0x08A3F128,
        .secretShop = (u16 *) 0x08A3F1E2,
        .x = 216,
        .y = 152,
        .nameTextId = MSG_664, // "Renais Castle[.]"
        .shipTravelFlag = 0,
    },
    [NODE_NARUBE_RIVER] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_MONSTERS,
        .iconPreClear = 0x0F,
        .iconPostClear = 0x0F,
        .chapteridx_eirika = CHAPTER_E_17,
        .chapteridx_ephram = CHAPTER_I_17,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x16, 0x16, 0x16, 0x16, },
        .armory = (u16 *) 0x08A3F032,
        .vendor = (u16 *) 0x08A3F12A,
        .secretShop = (u16 *) 0x08A3F1E4,
        .x = 360,
        .y = 168,
        .nameTextId = MSG_665, // "Narube River"
        .shipTravelFlag = 0,
    },
    [NODE_NELERAS_PEAK] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_MONSTERS,
        .iconPreClear = 0x0F,
        .iconPostClear = 0x0F,
        .chapteridx_eirika = CHAPTER_E_18,
        .chapteridx_ephram = CHAPTER_I_18,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x17, 0x17, 0x17, 0x17, },
        .armory = (u16 *) 0x08A3F04E,
        .vendor = (u16 *) 0x08A3F142,
        .secretShop = (u16 *) 0x08A3F1E6,
        .x = 360,
        .y = 120,
        .nameTextId = MSG_666, // "Neleras Peak"
        .shipTravelFlag = 0,
    },
    [NODE_RAUSTEN_COURT] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_NONE,
        .iconPreClear = 0x03,
        .iconPostClear = 0x03,
        .chapteridx_eirika = CHAPTER_E_19,
        .chapteridx_ephram = CHAPTER_I_19,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0x19, 0x19, 0x19, 0x19, },
        .armory = (u16 *) 0x08A3F050,
        .vendor = (u16 *) 0x08A3F144,
        .secretShop = (u16 *) 0x08A3F1E8,
        .x = 392,
        .y = 88,
        .nameTextId = MSG_667, // "Rausten Court[.]"
        .shipTravelFlag = 0,
    },
    [NODE_DARKLING_WOODS] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_MONSTERS,
        .iconPreClear = 0x0F,
        .iconPostClear = 0x0F,
        .chapteridx_eirika = CHAPTER_FF,
        .chapteridx_ephram = CHAPTER_FF,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0xFF, 0xFF, 0xFF, 0xFF, },
        .armory = (u16 *) 0x08A3F06E,
        .vendor = (u16 *) 0x08A3F160,
        .secretShop = (u16 *) 0x08A3F212,
        .x = 344,
        .y = 72,
        .nameTextId = MSG_668, // "Darkling Woods"
        .shipTravelFlag = 0,
    },
    [NODE_BLACK_TEMPLE] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_PROGRESSION,
        .encounters = GMAP_ENCOUNTERS_NONE,
        .iconPreClear = 0x0C,
        .iconPostClear = 0x0C,
        .chapteridx_eirika = CHAPTER_E_20,
        .chapteridx_ephram = CHAPTER_I_20,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0xFF, 0xFF, 0xFF, 0xFF, },
        .armory = (u16 *) 0x08A3F070,
        .vendor = (u16 *) 0x08A3F162,
        .secretShop = (u16 *) 0x08A3F214,
        .x = 312,
        .y = 88,
        .nameTextId = MSG_669, // "Black Temple"
        .shipTravelFlag = 0,
    },
    [NODE_TOWER_OF_VALNI] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_DUNGEON,
        .encounters = GMAP_ENCOUNTERS_DUNGEON,
        .iconPreClear = 0x0D,
        .iconPostClear = 0x0D,
        .chapteridx_eirika = CHAPTER_T_01,
        .chapteridx_ephram = CHAPTER_T_01,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0xFF, 0xFF, 0xFF, 0xFF, },
        .armory = (u16 *) 0x08A3F072,
        .vendor = (u16 *) 0x08A3F164,
        .secretShop = (u16 *) 0x08A3F216,
        .x = 152,
        .y = 56,
        .nameTextId = MSG_66A, // "Tower of Valni"
        .shipTravelFlag = 0,
    },
    [NODE_LAGDOU_RUINS] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_DUNGEON,
        .encounters = GMAP_ENCOUNTERS_DUNGEON,
        .iconPreClear = 0x0E,
        .iconPostClear = 0x0E,
        .chapteridx_eirika = CHAPTER_R_01,
        .chapteridx_ephram = CHAPTER_R_01,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0xFF, 0xFF, 0xFF, 0xFF, },
        .armory = (u16 *) 0x08A3F074,
        .vendor = (u16 *) 0x08A3F166,
        .secretShop = (u16 *) 0x08A3F218,
        .x = 408,
        .y = 184,
        .nameTextId = MSG_66B, // "Lagdou Ruins"
        .shipTravelFlag = 0,
    },
    [NODE_MELKAEN_COAST] =
    {
        .placementFlag = GMAP_NODE_PLACEMENT_MONSTERSPAWN,
        .encounters = GMAP_ENCOUNTERS_MONSTERS,
        .iconPreClear = 0x0F,
        .iconPostClear = 0x0F,
        .chapteridx_eirika = CHAPTER_MALKAEN_COAST,
        .chapteridx_ephram = CHAPTER_MALKAEN_COAST,
        .unk_06 = 0xFFFF,
        .unk_08 = { 0xFF, 0xFF, 0xFF, 0xFF, },
        .armory = (u16 *) 0x08A3F076,
        .vendor = (u16 *) 0x08A3F168,
        .secretShop = (u16 *) 0x08A3F21A,
        .x = 344,
        .y = 40,
        .nameTextId = MSG_66C, // "Melkaen Coast[.]"
        .shipTravelFlag = 1,
    },
};