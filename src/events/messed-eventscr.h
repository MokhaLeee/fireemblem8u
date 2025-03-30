#pragma once

#include "global.h"
#include "event.h"
#include "eventinfo.h"
#include "eventscript.h"
#include "eventcall.h"
#include "EAstdlib.h"
#include "mapanim.h"
#include "bmio.h"
#include "ending_details.h"
#include "constants/characters.h"
#include "constants/chapters.h"
#include "constants/songs.h"

CONST_DATA EventListScr EventScr_089FFC0C[] = {
    CHECK_CHAPTER_NUMBER
LABEL(0x0)
    SDEQUEUE(EVT_SLOT_7)
    SDEQUEUE(EVT_SLOT_2)
    BNE(0x0, EVT_SLOT_7, EVT_SLOT_C)
    CALL(0xffffffff)
    ENDA
};

CONST_DATA EventListScr EventScr_SkirmishCommonBeginning[] = {
    SVAL(EVT_SLOT_D, 0x0)
    SVAL(EVT_SLOT_1, 0x4)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_089FFE84)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x7)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_089FFF14)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0xb)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_089FFF8C)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0xd)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_08A00034)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x11)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_08A000A0)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x12)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_08A0013C)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x18)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_08A001AC)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x1a)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_08A00260)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x1e)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_08A000A0)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x1f)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_08A0013C)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x39)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_08A002F0)
    SENQUEUE1
    CALL(EventScr_089FFC0C)
    TILECHANGE(0xfffd)
    LOAD4(0x1, 0x0)
    ENUN
    CALL(EventScr_08591FD8)
    ENDA
};

CONST_DATA EventListScr EventScr_SkirmishCommonEnd[] = {
    SVAL(EVT_SLOT_D, 0x0)
    SVAL(EVT_SLOT_1, 0x4)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_089FFF08)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x7)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_089FFF80)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0xb)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_08A00028)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0xd)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_08A00094)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x11)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_08A00130)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x12)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_08A001A0)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x18)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_08A00254)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x1a)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_08A002E4)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x1e)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_08A00130)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x1f)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_08A001A0)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x39)
    SENQUEUE1
    SVAL(EVT_SLOT_1, EventScr_08A00350)
    SENQUEUE1
    CALL(EventScr_089FFC0C)
    MNCH(0xffff)
    ENDA
};

CONST_DATA EventListScr EventScr_089FFE84[] = {
    SVAL(EVT_SLOT_2, 0x0)
    CALL(EventScr_ConfigHardModeLoadUnitHard)
    SVAL(EVT_SLOT_D, 0x0)
    SVAL(EVT_SLOT_1, 0x32)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x19)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0xf)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    CALL(EventScr_9EE84C)
    SVAL(EVT_SLOT_1, 0x0)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x1)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x2)
    SENQUEUE1
    ENDA
};

CONST_DATA EventListScr EventScr_089FFF08[] = {
    SVAL(EVT_SLOT_2, 0x7)
    ENDA
};

CONST_DATA EventListScr EventScr_089FFF14[] = {
    SVAL(EVT_SLOT_2, 0x0)
    CALL(EventScr_ConfigHardModeLoadUnitHard)
    SVAL(EVT_SLOT_D, 0x0)
    SVAL(EVT_SLOT_1, 0x32)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x19)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0xf)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    CALL(EventScr_9EE84C)
    SVAL(EVT_SLOT_1, 0x0)
    SENQUEUE1
    ENDA
};

CONST_DATA EventListScr EventScr_089FFF80[] = {
    SVAL(EVT_SLOT_2, 0xb)
    ENDA
};

CONST_DATA EventListScr EventScr_089FFF8C[] = {
    SVAL(EVT_SLOT_2, 0x0)
    CALL(EventScr_ConfigHardModeLoadUnitHard)
    SVAL(EVT_SLOT_D, 0x0)
    SVAL(EVT_SLOT_1, 0x32)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x19)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0xf)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    CALL(EventScr_9EE84C)
    SVAL(EVT_SLOT_1, 0x0)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x1)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x2)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x3)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x4)
    SENQUEUE1
    ENDA
};

CONST_DATA EventListScr EventScr_08A00028[] = {
    SVAL(EVT_SLOT_2, 0xd)
    ENDA
};

CONST_DATA EventListScr EventScr_08A00034[] = {
    SVAL(EVT_SLOT_2, 0x0)
    CALL(EventScr_ConfigHardModeLoadUnitHard)
    SVAL(EVT_SLOT_D, 0x0)
    SVAL(EVT_SLOT_1, 0x32)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x19)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0xf)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    CALL(EventScr_9EE84C)
    ENDA
};

CONST_DATA EventListScr EventScr_08A00094[] = {
    SVAL(EVT_SLOT_2, 0x11)
    ENDA
};

CONST_DATA EventListScr EventScr_08A000A0[] = {
    SVAL(EVT_SLOT_2, 0x0)
    CALL(EventScr_ConfigHardModeLoadUnitHard)
    SVAL(EVT_SLOT_D, 0x0)
    SVAL(EVT_SLOT_1, 0x32)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x19)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0xf)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    CALL(EventScr_9EE84C)
    SVAL(EVT_SLOT_1, 0x0)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x1)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x2)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x3)
    SENQUEUE1
    ENDA
};

CONST_DATA EventListScr EventScr_08A00130[] = {
    SVAL(EVT_SLOT_2, 0x12)
    ENDA
};

CONST_DATA EventListScr EventScr_08A0013C[] = {
    SVAL(EVT_SLOT_2, 0x0)
    CALL(EventScr_ConfigHardModeLoadUnitHard)
    SVAL(EVT_SLOT_D, 0x0)
    SVAL(EVT_SLOT_1, 0x32)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x19)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0xf)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    CALL(EventScr_9EE84C)
    VCWF(0)
    ENDA
};

CONST_DATA EventListScr EventScr_08A001A0[] = {
    SVAL(EVT_SLOT_2, 0x14)
    ENDA
};

CONST_DATA EventListScr EventScr_08A001AC[] = {
    SVAL(EVT_SLOT_2, 0x0)
    CALL(EventScr_ConfigHardModeLoadUnitHard)
    SVAL(EVT_SLOT_D, 0x0)
    SVAL(EVT_SLOT_1, 0x32)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x19)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0xf)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    CALL(EventScr_9EE84C)
    SVAL(EVT_SLOT_1, 0x0)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x1)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x2)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x3)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x6)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x7)
    SENQUEUE1
    ENDA
};

CONST_DATA EventListScr EventScr_08A00254[] = {
    SVAL(EVT_SLOT_2, 0x1a)
    ENDA
};

CONST_DATA EventListScr EventScr_08A00260[] = {
    SVAL(EVT_SLOT_2, 0x0)
    CALL(EventScr_ConfigHardModeLoadUnitHard)
    SVAL(EVT_SLOT_D, 0x0)
    SVAL(EVT_SLOT_1, 0x32)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x19)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0xf)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    CALL(EventScr_9EE84C)
    SVAL(EVT_SLOT_1, 0x0)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x1)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x4)
    SENQUEUE1
    ENDA
};

CONST_DATA EventListScr EventScr_08A002E4[] = {
    SVAL(EVT_SLOT_2, 0x39)
    ENDA
};

CONST_DATA EventListScr EventScr_08A002F0[] = {
    SVAL(EVT_SLOT_2, 0x0)
    CALL(EventScr_ConfigHardModeLoadUnitHard)
    SVAL(EVT_SLOT_D, 0x0)
    SVAL(EVT_SLOT_1, 0x32)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x19)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0xf)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x5)
    SENQUEUE1
    CALL(EventScr_9EE84C)
    ENDA
};

CONST_DATA EventListScr EventScr_08A00350[] = {
    SVAL(EVT_SLOT_2, 0x4)
    ENDA
};

CONST_DATA EventListScr EventScr_8A0035C[] = {
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_8A00364[] = {
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_08A0036C[] = {
    ASMC(StartCharacterEndings)
    STAL(1)
    ENDA
};

CONST_DATA EventListScr EventScr_EirikaModeGameEnd[] = {
    EVBIT_MODIFY(0x2)
    MUSC(SONG_MAIN_THEME_REPRISE)
    SVAL(EVT_SLOT_2, UnitDef_088D17B8)
    SVAL(EVT_SLOT_3, 0xc19)
    CALL(EventScr_08A00544)
    CHECK_ALIVE(CHARACTER_JOSHUA)
    BEQ(0x0, EVT_SLOT_C, EVT_SLOT_0)
    LOAD2(0x1, UnitDef_088D1894)
    ENUN
    SVAL(EVT_SLOT_B, 0x17)
    LOMA(CHAPTER_E_15)
    FADU(16)
    BROWNBOXTEXT(0x65d, 8, 8)
    MOVE_1STEP(0x8, CHARACTER_JOSHUA, FACING_DOWN)
    ENUN
    CUMO_CHAR(CHARACTER_JOSHUA)
    STAL(60)
    CURE
    TEXTSHOW(0xc1a)
    TEXTEND
    GOTO(0x1)
LABEL(0x0)
    LOAD2(0x1, UnitDef_088D1984)
    ENUN
    SVAL(EVT_SLOT_B, 0x17)
    LOMA(CHAPTER_E_15)
    FADU(16)
    BROWNBOXTEXT(0x65d, 8, 8)
    MOVE_1STEP(0x8, CHARACTER_MYRRH, FACING_DOWN)
    ENUN
    CUMO_CHAR(CHARACTER_MYRRH)
    STAL(60)
    CURE
    TEXTSHOW(0xc1b)
    TEXTEND
LABEL(0x1)
    FADI(4)
    REMA
    CLEA
    CLEE
    CLEN
    SVAL(EVT_SLOT_2, REDA_088D1C40)
    SVAL(EVT_SLOT_3, 0xc1c)
    CALL(EventScr_08A005B4)
    SVAL(EVT_SLOT_2, UnitDef_088D1D38)
    SVAL(EVT_SLOT_3, 0xc1d)
    CALL(EventScr_08A0062C)
    CALL(EventScr_08A00680)
    ENDA
};

CONST_DATA EventListScr EventScr_EphraimModeGameEnd[] = {
    EVBIT_MODIFY(0x2)
    MUSC(SONG_MAIN_THEME_REPRISE)
    SVAL(EVT_SLOT_2, UnitDef_088D181C)
    SVAL(EVT_SLOT_3, 0xc1e)
    CALL(EventScr_08A00544)
    LOAD2(0x1, UnitDef_088D1A60)
    ENUN
    SVAL(EVT_SLOT_B, 0x8000c)
    LOMA(CHAPTER_E_12)
    FADU(16)
    BROWNBOXTEXT(0x65b, 8, 8)
    TEXTSTART
    MOVE_1STEP(0x8, CHARACTER_MYRRH, FACING_DOWN)
    ENUN
    CUMO_CHAR(CHARACTER_MYRRH)
    STAL(60)
    CURE
    TEXTSHOW(0xc1f)
    TEXTEND
    FADI(4)
    REMA
    CLEA
    CLEE
    CLEN
    SVAL(EVT_SLOT_2, REDA_088D1C90)
    SVAL(EVT_SLOT_3, 0xc20)
    CALL(EventScr_08A005B4)
    SVAL(EVT_SLOT_2, UnitDef_088D1D74)
    SVAL(EVT_SLOT_3, 0xc21)
    CALL(EventScr_08A0062C)
    CALL(EventScr_08A00680)
    ENDA
};

CONST_DATA EventListScr EventScr_08A00544[] = {
    LOAD2(0x1, UnitDef_088D1740)
    ENUN
    LOAD2(0x1, 0xffffffff)
    ENUN
    SVAL(EVT_SLOT_B, 0xc0011)
    LOMA(CHAPTER_E_19)
    FADU(16)
    BROWNBOXTEXT(0x667, 8, 8)
    MOVE_1STEP(0x8, CHARACTER_LARACHEL, FACING_DOWN)
    ENUN
    CUMO_CHAR(CHARACTER_LARACHEL)
    STAL(60)
    CURE
    TEXTSTART
    SADD(EVT_SLOT_2, EVT_SLOT_3, EVT_SLOT_0)
    TEXTSHOW(0xffff)
    TEXTEND
    FADI(4)
    REMA
    CLEA
    CLEE
    CLEN
    ENDA
};

CONST_DATA EventListScr EventScr_08A005B4[] = {
    EvtSetLoadUnitNoREDA // ENOSUPP in EAstdlib
    LOAD2(0x1, REDA_088D1BA0)
    ENUN
    LOAD2(0x1, 0xffffffff)
    ENUN
    SVAL(EVT_SLOT_B, 0x0)
    LOMA(CHAPTER_40)
    FADU(16)
    BROWNBOXTEXT(0x664, 8, 8)
    CUMO_CHAR(CHARACTER_INNES)
    STAL(60)
    CURE
    SADD(EVT_SLOT_2, EVT_SLOT_3, EVT_SLOT_0)
    TEXTSTART
    TEXTSHOW(0xffff)
    TEXTEND
    REMA
    LOAD2(0x1, REDA_088D1BA0)
    STAL2(32)
    FADI(4)
    ENUN
    CLEA
    CLEE
    CLEN
    ENDA
};

CONST_DATA EventListScr EventScr_08A0062C[] = {
    SVAL(EVT_SLOT_B, 0x5000e)
    LOMA(CHAPTER_E_16)
    FADU(4)
    LOAD2(0x1, 0xffffffff)
    ENUN
    CUMO_CHAR(CHARACTER_EIRIKA)
    STAL(60)
    CURE
    TEXTSTART
    SADD(EVT_SLOT_2, EVT_SLOT_3, EVT_SLOT_0)
    TEXTSHOW(0xffff)
    TEXTEND
    EvtBgmFadeIn(SONG_SILENT, 8) // ENOSUPP in EAstdlib
    FADI(2)
    REMA
    CLEA
    CLEE
    CLEN
    ENDA
};

CONST_DATA EventListScr EventScr_08A00680[] = {
    EVBIT_F(2)
    ASMC(BMapDispSuspend)
    MUSC(SONG_FLY_WITH_THE_BREEZE)
    ASMC(StartEndingCredits)
    STAL(90)
    EvtTextStartType2 // ENOSUPP in EAstdlib
    EvtBgFadeIn(0x0, 0, 2) // ENOSUPP in EAstdlib
    TEXTSHOW(0xc22)
    TEXTEND
    EvtBgmFadeIn(SONG_SILENT, 8) // ENOSUPP in EAstdlib
    FADI(2)
    REMA
    EVBIT_F(2)
    STAL(120)
    ASMC(StartEndingTurnRecordScreen)
    STAL(1)
    CALL(EventScr_08A0036C)
    STAL(90)
    MNTS(0x0)
    ENDA
};
