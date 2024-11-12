#include "gbafe.h"

CONST_DATA EventListScr EventScr_Ch16a_BeginingScene[] = {
    CALL(EventScr_089F6A8C)
    SVAL(EVT_SLOT_B, 0x0)
    LOMA(0x10)
    LOAD1(0x0, UnitDef_088BCE58)
    ENUN
    LOAD1(0x1, UnitDef_088BCF5C)
    ENUN
    SVAL(EVT_SLOT_2, UnitDef_088BD1B4)
    SVAL(EVT_SLOT_3, 0x1)
    CALL(EventScr_LoadUnitForTutorial)
    CLEA
    CALL(EventScr_CallPrepScreen)
    ENUT(12)
    ENDA
};

CONST_DATA EventListScr EventScr_089F6A8C[] = {
    MUSC(0x47)
    SVAL(EVT_SLOT_B, 0x0)
    LOMA(0x40)
    FADU(16)
    LOAD2(0x1, UnitDef_088BD648)
    ENUN
    CUMO_CHAR(CHARACTER_EPHRAIM)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0x1d)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xb39)
    TEXTEND
    MUSC(0x25)
    TEXTCONT
    TEXTEND
    REMA
    FADI(16)
    CLEAN
    FADU(16)
    MOVE_1STEP(0x10, CHARACTER_MYRRH, FACING_UP)
    ENUN
    SVAL(EVT_SLOT_2, 0x1d)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xb3a)
    TEXTEND
    REMA
    MUSCMID(0x7fff)
    FADI(16)
    CLEA
    CLEE
    CLEN
    SVAL(EVT_SLOT_B, 0xc0000)
    LOMA(0x42)
    UNIT_COLORS(0x2)
    LOAD2(0x1, UnitDef_088BD810)
    ENUN
    FADU(16)
    LOAD2(0x1, UnitDef_088BD84C)
    ENUN
    SOUN(0xb1)
    TILECHANGE(0x0)
    MOVE(0x0, CHARACTER_ORSON, 7, 6)
    ENUN
    TILEREVERT(0x0)
    LOAD2(0x1, UnitDef_088BD874)
    ENUN
    FADI(16)
    CLEA
    CLEE
    CLEN
    CHECK_MODE
    SVAL(EVT_SLOT_1, 0x2)
    BNE(0x1, EVT_SLOT_C, EVT_SLOT_1)
    SVAL(EVT_SLOT_2, 0xe)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xb3b)
    TEXTEND
    REMA
    FADI(16)
    CLEAN
LABEL(0x1)
    CHECK_MODE
    SVAL(EVT_SLOT_1, 0x2)
    BEQ(0x2, EVT_SLOT_C, EVT_SLOT_1)
    MUSC(0x2e)
    EvtSetLoadUnitNoREDA // ENOSUPP in EAstdlib
    LOAD2(0x1, UnitDef_088BD8B0)
    ENUN
    REMU(CHARACTER_LYON)
    REMU(CHARACTER_RIEV)
    FADU(16)
    SVAL(EVT_SLOT_2, 0x40)
    MOVE_CLOSEST(0xffff, CHAR_EVT_SLOT2, 7, 11)
    CALL(EventScr_UnitWarpIN)
    SVAL(EVT_SLOT_2, 0x57)
    MOVE_CLOSEST(0xffff, CHAR_EVT_SLOT2, 8, 11)
    CALL(EventScr_UnitWarpIN)
    LOAD2(0x1, UnitDef_088BD8B0)
    ENUN
    CUMO_CHAR(0x80)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0x10)
    SVAL(EVT_SLOT_3, 0xb3c)
    CALL(Event_TextWithBG)
    MOVE_1STEP(0x10, 0x80, FACING_LEFT)
    MOVE_1STEP(0x10, 0x81, FACING_RIGHT)
    ENUN
LABEL(0x2)
    CHECK_MODE
    SVAL(EVT_SLOT_1, 0x2)
    BNE(0x3, EVT_SLOT_C, EVT_SLOT_1)
    LOAD2(0x1, UnitDef_088BD8B0)
    ENUN
    MOVE_1STEP(0xffff, 0x80, FACING_LEFT)
    MOVE_1STEP(0xffff, 0x81, FACING_RIGHT)
    FADU(16)
LABEL(0x3)
    LOAD2(0x1, UnitDef_088BD914)
    ENUN
    SOUN(0xb1)
    TILECHANGE(0x0)
    MOVE(0x10, CHARACTER_LYON, 7, 5)
    ENUN
    MOVE(0x10, CHARACTER_RIEV, 8, 6)
    ENUN
    TILEREVERT(0x0)
    LOAD2(0x1, UnitDef_088BD950)
    ENUN
    MOVE_1STEP(0x10, 0x80, FACING_RIGHT)
    ENUN
    MOVE_1STEP(0x10, 0x81, FACING_LEFT)
    ENUN
    MUSC(0x2e)
    CUMO_CHAR(0x80)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0x10)
    CALL(EventScr_SetBackground)
    CHECK_MODE
    SVAL(EVT_SLOT_1, 0x2)
    BNE(0x4, EVT_SLOT_C, EVT_SLOT_1)
    TEXTSHOW(0xb3d)
    TEXTEND
    GOTO(0x5)
LABEL(0x4)
    TEXTSHOW(0xb3e)
    TEXTEND
    MUSCMID(0x7fff)
LABEL(0x5)
    REMA
    FADI(16)
    CLEA
    CLEE
    CLEN
    SVAL(EVT_SLOT_2, 0xe)
    CALL(EventScr_SetBackground)
    CHECK_MODE
    SVAL(EVT_SLOT_1, 0x2)
    BNE(0x6, EVT_SLOT_C, EVT_SLOT_1)
    TEXTSHOW(0xb3f)
    TEXTEND
    GOTO(0x7)
LABEL(0x6)
    MUSC(0x2d)
    TEXTSHOW(0xb40)
    TEXTEND
LABEL(0x7)
    REMA
    FADI(16)
    CHECK_MODE
    SVAL(EVT_SLOT_1, 0x2)
    BNE(0x8, EVT_SLOT_C, EVT_SLOT_1)
    CLEAN
    CAMERA(0, 0)
    MUSC(0x2d)
    FADU(16)
    LOAD2(0x1, UnitDef_088BD98C)
    ENUN
    CUMO_CHAR(CHARACTER_RIEV)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0xe)
    SVAL(EVT_SLOT_3, 0xb41)
    CALL(Event_TextWithBG)
    SVAL(EVT_SLOT_2, 0x40)
    CALL(EventScr_UnitWarpOUT)
    SVAL(EVT_SLOT_2, 0x57)
    CALL(EventScr_UnitWarpOUT)
    FADI(16)
    CLEA
    CLEE
    CLEN
LABEL(0x8)
    UNIT_COLORS(0x0)
    ENDA
};

CONST_DATA EventListScr EventScr_089F6E40[] = {
    CALL(EventScr_089F6E50)
    MNCH(0x11)
    ENDA
};

CONST_DATA EventListScr EventScr_089F6E50[] = {
    FADI(16)
    CLEA
    CLEE
    CLEN
    MUSC(0x32)
    SVAL(EVT_SLOT_2, 0xa)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xb49)
    TEXTEND
    REMA
    FADI(16)
    SVAL(EVT_SLOT_B, 0x0)
    LOMA(0x42)
    FADU(16)
    LOAD2(0x1, UnitDef_088BDA08)
    ENUN
    SOUN(0xb1)
    TILECHANGE(0x0)
    LOAD2(0x1, UnitDef_088BDA44)
    ENUN
    CUMO_CHAR(0xfb)
    STAL(60)
    CURE
    MUSCMID(0x7fff)
    SVAL(EVT_SLOT_2, 0xe)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xb4a)
    TEXTEND
    FADI(4)
    REMA
    CLEA
    CLEE
    CLEN
    SVAL(EVT_SLOT_B, 0x4000e)
    LOMA(0x10)
    EvtSetLoadUnitNoREDA // ENOSUPP in EAstdlib
    LOAD2(0x1, UnitDef_088BD3D0)
    ENUN
    FADU(4)
    CUMO_CHAR(CHARACTER_EPHRAIM)
    STAL(60)
    CURE
    MUSC(0x31)
    TEXTSTART
    TEXTSHOW(0xb4b)
    TEXTEND
    REMA
    LOAD2(0x1, UnitDef_088BD3D0)
    ENUN
    CUMO_CHAR(CHARACTER_SETH)
    STAL(60)
    CURE
    TEXTSTART
    TEXTSHOW(0xb4c)
    TEXTEND
    REMA
    MOVE(0x0, CHARACTER_EIRIKA, 12, 11)
    MOVE(0x0, CHARACTER_EPHRAIM, 14, 11)
    MOVE(0x0, CHARACTER_SETH, 13, 11)
    STAL2(20)
    MUSCMID(0x7fff)
    FADI(16)
    ENUN
    CLEA
    SVAL(EVT_SLOT_B, 0x0)
    LOMA(0x43)
    LOAD2(0x1, UnitDef_088BDB5C)
    ENUN
    MUSC(0x95)
    FADU(16)
    LOAD2(0x1, UnitDef_088BDAF8)
    SOLOTEXTBOXSTART
    SVAL(EVT_SLOT_B, 0x400008)
    TEXTSHOW(0xb4d)
    TEXTEND
    REMA
    SVAL(EVT_SLOT_B, 0x580030)
    TEXTSHOW(0xb4e)
    TEXTEND
    REMA
    SVAL(EVT_SLOT_B, 0x480060)
    TEXTSHOW(0xb4f)
    TEXTEND
    REMA
    ENUN
    CUMO_CHAR(CHARACTER_EPHRAIM)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0xa)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xb50)
    TEXTEND
    REMA
    MUSCMID(0x7fff)
    FADI(16)
    CLEA
    CLEE
    CLEN
    STAL(60)
    SVAL(EVT_SLOT_B, 0x4000e)
    LOMA(0x10)
    EvtSetLoadUnitNoREDA // ENOSUPP in EAstdlib
    LOAD2(0x1, UnitDef_088BD420)
    ENUN
    FADU(16)
    CUMO_CHAR(CHARACTER_SETH)
    STAL(60)
    CURE
    TEXTSTART
    TEXTSHOW(0xb51)
    TEXTEND
    REMA
    STARTFADE
    EvtColorFadeSetup(0x6, 0xa, 4, 128, 128, 128) // ENOSUPP in EAstdlib
    ASMC2(sub_8080014)
    SVAL(EVT_SLOT_B, 0x3000d)
    TILECHANGE(0xffff)
    SVAL(EVT_SLOT_B, 0x3000e)
    TILECHANGE(0xffff)
    EvtColorFadeSetup(0x6, 0xa, 4, 256, 256, 256) // ENOSUPP in EAstdlib
    EVBIT_T(6)
    LOAD2(0x1, UnitDef_088BD420)
    STAL(20)
    FADI(4)
    ENUN
    EVBIT_F(6)
    CLEA
    SVAL(EVT_SLOT_B, 0x0)
    LOMA(0x47)
    FADU(16)
    LOAD2(0x1, UnitDef_088BDC24)
    ENUN
    CUMO_CHAR(CHARACTER_EPHRAIM)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0x2e)
    CALL(EventScr_SetBackground)
    MUSCSLOW(0x2b)
    TEXTSHOW(0xb52)
    TEXTEND
    MUSCSLOW(0x7fff)
    FADI(4)
    REMA
    CLEAN
    FADU(4)
    CUMO_CHAR(CHARACTER_EPHRAIM)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0x2e)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xb53)
    TEXTEND
    SOUN(0x2eb)
    FAWI(4)
    REMA
    SVAL(EVT_SLOT_2, 0x2e)
    CALL(EventScr_089F731C)
    MUSCSLOW(0x2b)
    REMOVEPORTRAITS
    TEXTSHOW(0xb54)
    TEXTEND
    REMA
    FADI(16)
    CLEAN
    FADU(4)
    LOAD2(0x1, UnitDef_088BDC88)
    ENUN
    SOUN(0xb1)
    TILECHANGE(0x0)
    LOAD2(0x1, UnitDef_088BDCB0)
    ENUN
    SOUN(0xb1)
    TILECHANGE(0x1)
    LOAD2(0x1, UnitDef_088BDCD8)
    ENUN
    CUMO_CHAR(CHARACTER_SETH)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0x2e)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xb55)
    TEXTEND
    REMA
    CALL(EventScr_RemoveBGIfNeeded)
    SVAL(EVT_SLOT_3, 0x92)
    GIVEITEMTO(CHARACTER_EPHRAIM)
    TEXTSHOW(0xb56)
    TEXTEND
    REMA
    CALL(EventScr_RemoveBGIfNeeded)
    SVAL(EVT_SLOT_3, 0x85)
    GIVEITEMTO(CHARACTER_EIRIKA)
    CHECK_MODE
    SVAL(EVT_SLOT_1, 0x2)
    BNE(0x0, EVT_SLOT_C, EVT_SLOT_1)
    TEXTSHOW(0xb57)
    TEXTEND
    GOTO(0x1)
LABEL(0x0)
    TEXTSHOW(0xb58)
    TEXTEND
LABEL(0x1)
    FADI(16)
    REMA
    CLEA
    CLEE
    CLEN
    SVAL(EVT_SLOT_B, 0x4000e)
    LOMA(0x10)
    SVAL(EVT_SLOT_B, 0x3000d)
    TILECHANGE(0xffff)
    SVAL(EVT_SLOT_B, 0x3000e)
    TILECHANGE(0xffff)
    LOAD2(0x1, UnitDef_088BD4AC)
    ENUN
    FADU(16)
    LOAD2(0x1, UnitDef_088BD4FC)
    ENUN
    SVAL(EVT_SLOT_B, 0x3000d)
    TILEREVERT(0xffff)
    SVAL(EVT_SLOT_B, 0x3000e)
    TILEREVERT(0xffff)
    CUMO_CHAR(CHARACTER_LARACHEL)
    STAL(60)
    CURE
    MUSC(0x31)
    CHECK_MODE
    SVAL(EVT_SLOT_1, 0x2)
    BNE(0xa, EVT_SLOT_C, EVT_SLOT_1)
    TEXTSTART
    TEXTSHOW(0xb59)
    TEXTEND
    REMA
    GOTO(0xb)
LABEL(0xa)
    TEXTSTART
    TEXTSHOW(0xb5a)
    TEXTEND
    REMA
LABEL(0xb)
    LOAD2(0x1, UnitDef_088BD54C)
    ENUN
    FADI(16)
    ENUN
    ENDA
};

CONST_DATA EventListScr EventScr_089F731C[] = {
    SADD(EVT_SLOT_A, EVT_SLOT_2, EVT_SLOT_0)
    BACG(0x35)
    STARTFADE
    EvtColorFadeSetup(0x6, 0xa, 0, 512, 512, 512) // ENOSUPP in EAstdlib
    FAWU(128)
    CALL(EventScr_RemoveBGIfNeeded)
    EVBIT_MODIFY(0x4)
    CALL(EventScr_089F7378)
    MUSCMID(0x7fff)
    REMOVEPORTRAITS
    SADD(EVT_SLOT_2, EVT_SLOT_A, EVT_SLOT_0)
    BACG(0xffff)
    FAWU(4)
    EVBIT_MODIFY(0x0)
    ENDA
};

CONST_DATA EventListScr EventScr_089F7378[] = {
    CHECK_MODE
    SVAL(EVT_SLOT_1, 0x2)
    BNE(0x0, EVT_SLOT_C, EVT_SLOT_1)
    TUTORIALTEXTBOXSTART
    SVAL(EVT_SLOT_B, 0xffffffff)
    TEXTSHOW(0xb5b)
    TEXTEND
    REMA
    CALL(EventScr_089F73F0)
    CALL(EventScr_089F7470)
    GOTO(0x1)
LABEL(0x0)
    TUTORIALTEXTBOXSTART
    SVAL(EVT_SLOT_B, 0xffffffff)
    TEXTSHOW(0xb5c)
    TEXTEND
    REMA
    CALL(EventScr_089F7470)
    CALL(EventScr_089F73F0)
LABEL(0x1)
    FAWI(16)
    ENDA
};

CONST_DATA EventListScr EventScr_089F73F0[] = {
    TUTORIALTEXTBOXSTART
    SVAL(EVT_SLOT_B, 0xffffffff)
    TEXTSHOW(0xb5d)
    TEXTEND
    REMA
    SVAL(EVT_SLOT_7, 0x1)
    BNE(0x0, EVT_SLOT_C, EVT_SLOT_7)
    FADI(16)
    CALL(EventScr_08591F64)
    PROM(CHARACTER_EIRIKA, 0x4, 0x98)
    EVBIT_MODIFY(0x4)
    REMOVEPORTRAITS
    BACG(0x35)
    STARTFADE
    EvtColorFadeSetup(0x6, 0xa, 0, 512, 512, 512) // ENOSUPP in EAstdlib
    FADU(16)
    GOTO(0x1)
LABEL(0x0)
    CALL(EventScr_089F74F0)
LABEL(0x1)
    ENDA
};

CONST_DATA EventListScr EventScr_089F7470[] = {
    TUTORIALTEXTBOXSTART
    SVAL(EVT_SLOT_B, 0xffffffff)
    TEXTSHOW(0xb5e)
    TEXTEND
    REMA
    SVAL(EVT_SLOT_7, 0x1)
    BNE(0x0, EVT_SLOT_C, EVT_SLOT_7)
    FADI(16)
    CALL(EventScr_08591F64)
    PROM(CHARACTER_EPHRAIM, 0x3, 0x99)
    EVBIT_MODIFY(0x4)
    REMOVEPORTRAITS
    BACG(0x35)
    STARTFADE
    EvtColorFadeSetup(0x6, 0xa, 0, 512, 512, 512) // ENOSUPP in EAstdlib
    FADU(16)
    GOTO(0x1)
LABEL(0x0)
    CALL(EventScr_089F7524)
LABEL(0x1)
    ENDA
};

CONST_DATA EventListScr EventScr_089F74F0[] = {
    CALL(EventScr_RemoveBGIfNeeded)
    SVAL(EVT_SLOT_3, 0x98)
    GIVEITEMTO(CHARACTER_EIRIKA)
    EVBIT_MODIFY(0x4)
    TUTORIALTEXTBOXSTART
    SVAL(EVT_SLOT_B, 0xffffffff)
    TEXTSHOW(0xb5f)
    TEXTEND
    REMA
    ENDA
};

CONST_DATA EventListScr EventScr_089F7524[] = {
    CALL(EventScr_RemoveBGIfNeeded)
    SVAL(EVT_SLOT_3, 0x99)
    GIVEITEMTO(CHARACTER_EPHRAIM)
    EVBIT_MODIFY(0x4)
    TUTORIALTEXTBOXSTART
    SVAL(EVT_SLOT_B, 0xffffffff)
    TEXTSHOW(0xb60)
    TEXTEND
    REMA
    ENDA
};

CONST_DATA EventListScr EventScr_089F7558[] = {
    SVAL(EVT_SLOT_2, UnitDef_088BD380)
    CALL(EventScr_LoadReinforce)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089F7570[] = {
    SVAL(EVT_SLOT_2, 0x0)
    CALL(EventScr_UnTriggerIfNotFaction)
    SVAL(EVT_SLOT_1, 0x10000)
    CHAI(0x8f)
    SVAL(EVT_SLOT_1, 0x10303)
    CHAI(0x90)
    ENUF(12)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089F75A4[] = {
    SVAL(EVT_SLOT_2, UnitDef_088BD240)
    CALL(EventScr_LoadReinforce)
    SVAL(EVT_SLOT_2, UnitDef_088BD2B8)
    CALL(EventScr_LoadReinforce)
    CAMERA(19, 27)
    SVAL(EVT_SLOT_2, UnitDef_088BD308)
    CALL(EventScr_LoadReinforce)
    SVAL(EVT_SLOT_2, UnitDef_088BD358)
    CALL(EventScr_LoadReinforce)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089F75F0[] = {
    SVAL(EVT_SLOT_2, UnitDef_088BD3A8)
    CALL(EventScr_LoadReinforceHardMode)
    EVBIT_T(7)
    ENDA
};
