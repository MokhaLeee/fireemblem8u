#include "gbafe.h"

CONST_DATA EventListScr EventScr_Ch9b_BeginingScene[] = {
    MUSC(0x2e)
    SVAL(EVT_SLOT_2, 0xa9e)
    SVAL(EVT_SLOT_3, 0xa9f)
    SVAL(EVT_SLOT_4, 0xaa0)
    CALL(EventScr_089F3C34)
    CAMERA2(19, 9)
    FADU(16)
    LOAD1(0x1, UnitDef_088C2980)
    ENUN
    CUMO_CHAR(CHARACTER_DUESSEL)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0xc)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xaa1)
    TEXTEND
    REMA
    FADI(16)
    CLEA
    CLEE
    CLEN
    SVAL(EVT_SLOT_B, 0xa0012)
    LOMA(0x17)
    LOAD1(0x1, UnitDef_088C23B8)
    ENUN
    LOAD1(0x1, UnitDef_088C2890)
    ENUN
    SVAL(EVT_SLOT_B, 0x3000c)
    TILECHANGE(0xffff)
    MUSCMID(0x7fff)
    FADU(16)
    LOAD2(0x1, UnitDef_088C282C)
    ENUN
    CUMO_CHAR(CHARACTER_GHEB)
    STAL(60)
    CURE
    MUSC(0x25)
    SVAL(EVT_SLOT_2, 0x27)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xaa2)
    TEXTEND
    REMA
    FADI(16)
    CLEA
    CLEE
    CLEN
    SVAL(EVT_SLOT_2, 0x25)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xaa3)
    TEXTEND
    REMA
    FADI(16)
    CLEAN
    CAMERA(0, 0)
    LOAD1(0x1, UnitDef_088C23B8)
    ENUN
    EvtSetLoadUnitNoREDA // ENOSUPP in EAstdlib
    LOAD1(0x1, UnitDef_088C2868)
    ENUN
    FADU(16)
    SVAL(EVT_SLOT_1, 0x1)
    SET_STATE(CHARACTER_EPHRAIM)
    LOAD3(0x0, UnitDef_088C22C8)
    ENUN
    DISA(CHARACTER_SOLDIER_83)
    LOAD1(0x1, UnitDef_088C2868)
    ENUN
    FADI(16)
    CLEA
    CLEE
    CLEN
    LOAD1(0x1, UnitDef_088C23B8)
    ENUN
    LOAD1(0x1, UnitDef_088C2890)
    ENUN
    CAMERA2(17, 10)
    FADU(16)
    CUMO_CHAR(CHARACTER_SOLDIER_83)
    STAL(60)
    CURE
    MUSC(0x2e)
    SVAL(EVT_SLOT_2, 0x27)
    SVAL(EVT_SLOT_3, 0xaa4)
    CALL(Event_TextWithBG)
    MOVE_1STEP(0x10, CHARACTER_GHEB, FACING_DOWN)
    ENUN
    CUMO_CHAR(CHARACTER_GHEB)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0x27)
    SVAL(EVT_SLOT_3, 0xaa5)
    CALL(Event_TextWithBG)
    MOVE_1STEP(0x10, CHARACTER_GHEB, FACING_UP)
    SVAL(EVT_SLOT_D, 0x0)
    SVAL(EVT_SLOT_1, 0x256)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x0)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x216)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x0)
    SENQUEUE1
    MOVE_DEFINED(CHARACTER_AMELIA)
    ENUN
    CUMO_CHAR(CHARACTER_AMELIA)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0x27)
    SVAL(EVT_SLOT_3, 0xaa6)
    CALL(Event_TextWithBG)
    MOVE_1STEP(0x8, CHARACTER_AMELIA, FACING_DOWN)
    ENUN
    SVAL(EVT_SLOT_D, 0x0)
    SVAL(EVT_SLOT_1, 0x10215)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x0)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x10295)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x0)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x10296)
    SENQUEUE1
    SVAL(EVT_SLOT_1, 0x0)
    SENQUEUE1
    MOVE_DEFINED(CHARACTER_SOLDIER_83)
    ENUN
    CUMO_CHAR(CHARACTER_AMELIA)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0x27)
    SVAL(EVT_SLOT_3, 0xaa7)
    CALL(Event_TextWithBG)
    MOVE(0x10, CHARACTER_SOLDIER_83, 23, 15)
    MOVE(0x10, CHARACTER_AMELIA, 23, 15)
    LOAD1(0x1, UnitDef_088C2610)
    STAL2(30)
    FADI(16)
    ENUN
    CLEA
    CLEE
    CLEN
    LOAD1(0x1, UnitDef_088C23B8)
    ENUN
    LOAD1(0x1, UnitDef_088C2610)
    ENUN
    LOAD1(0x1, UnitDef_088C269C)
    ENUN
    CALL(EventScr_CallPrepScreen)
    MUSC(0xc)
    CAMERA2(8, 4)
    FADU(16)
    LOAD1(0x1, UnitDef_088C26D8)
    ENUN
    SVAL(EVT_SLOT_B, 0x3000c)
    TILEREVERT(0xffff)
    CUMO_CHAR(CHARACTER_TANA)
    STAL(60)
    CURE
    MUSI
    SVAL(EVT_SLOT_2, 0x17)
    SVAL(EVT_SLOT_3, 0xaa8)
    CALL(Event_TextWithBG)
    MUNO
    ENUT(18)
    ENUT(12)
    ENUT(16)
    ENUT(14)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_Ch9b_EndingScene[] = {
    MUSC(0x31)
    SVAL(EVT_SLOT_2, 0x27)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xaac)
    TEXTEND
    REMA
    FADI(16)
    SVAL(EVT_SLOT_2, 0x12)
    CALL(EventScr_9EE5BC)
    CLEAN
    CAMERA2(17, 9)
    CLEA
    CLEE
    CLEN
    EvtSetLoadUnitNoREDA // ENOSUPP in EAstdlib
    LOAD2(0x1, UnitDef_088C28CC)
    ENUN
    FADU(16)
    LOAD2(0x1, UnitDef_088C28CC)
    ENUN
    MOVE_1STEP(0x10, CHARACTER_EPHRAIM, FACING_DOWN)
    ENUN
    CUMO_CHAR(CHARACTER_EPHRAIM)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0x27)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xaad)
    TEXTEND
    MUSCFAST(0x7fff)
    TEXTCONT
    TEXTEND
    MUSC(0x32)
    TEXTCONT
    TEXTEND
    REMA
    FADI(4)
    SVAL(EVT_SLOT_2, 0x25)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xaae)
    TEXTEND
    REMA
    SVAL(EVT_SLOT_2, 0x18)
    CALL(EventScr_SetBackground)
    MUSI
    TEXTSHOW(0xaaf)
    TEXTEND
    REMA
    MUSCMID(0x7fff)
    SVAL(EVT_SLOT_2, 0x2000f)
    CALL(EventScr_9EEA58)
    LOAD1(0x1, UnitDef_088C2A00)
    ENUN
    MUSC(0x2e)
    FADU(16)
    TILECHANGE(0x0)
    LOAD1(0x1, UnitDef_088C2A3C)
    ENUN
    CUMO_CHAR(CHARACTER_VIGARDE)
    STAL(60)
    CURE
    TEXTSTART
    TEXTSHOW(0xab0)
    TEXTEND
    REMA
    ENUT(113)
    MNCH(0x18)
    ENDA
};

CONST_DATA EventListScr EventScr_089FA634[] = {
    MUSS(0x30)
    STAL(33)
    TEXTSTART
    TEXTSHOW(0xab2)
    TEXTEND
    REMA
    MURE(0x2)
    CUSA(CHARACTER_AMELIA)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089FA65C[] = {
    MUSS(0x30)
    STAL(33)
    TEXTSTART
    TEXTSHOW(0xab1)
    TEXTEND
    SOUN(0x2d9)
    TEXTCONT
    TEXTEND
    REMA
    MURE(0x2)
    CUSA(CHARACTER_AMELIA)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089FA690[] = {
    MUSS(0x30)
    STAL(33)
    TEXTSTART
    TEXTSHOW(0xab3)
    TEXTEND
    REMA
    MURE(0x2)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089FA6B4[] = {
    SVAL(EVT_SLOT_2, 0x0)
    CALL(EventScr_UnTriggerIfNotFaction)
    SVAL(EVT_SLOT_1, 0x10000)
    CHAI(0x81)
    COUNTER_SET(0x0, 1)
    ENUF(18)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089FA6E0[] = {
    SVAL(EVT_SLOT_2, UnitDef_088C2714)
    CALL(EventScr_LoadReinforceHardMode)
    COUNTER_DEC(0x0)
    ENUF(18)
    COUNTER_CHECK(0x0)
    BNE(0x0, EVT_SLOT_C, EVT_SLOT_0)
    ENUT(18)
LABEL(0x0)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089FA714[] = {
    SVAL(EVT_SLOT_2, 0x0)
    CALL(EventScr_UnTriggerIfNotFaction)
    COUNTER_SET(0x1, 2)
    ENUF(12)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089FA734[] = {
    SVAL(EVT_SLOT_2, UnitDef_088C2764)
    CALL(EventScr_LoadReinforceHardMode)
    COUNTER_DEC(0x1)
    ENUF(12)
    COUNTER_CHECK(0x1)
    BNE(0x0, EVT_SLOT_C, EVT_SLOT_0)
    ENUT(12)
LABEL(0x0)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089FA768[] = {
    COUNTER_SET(0x2, 2)
    ENUF(16)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089FA778[] = {
    SVAL(EVT_SLOT_2, UnitDef_088C278C)
    CALL(EventScr_LoadReinforce)
    COUNTER_DEC(0x2)
    ENUF(16)
    COUNTER_CHECK(0x2)
    BNE(0x0, EVT_SLOT_C, EVT_SLOT_0)
    ENUT(16)
LABEL(0x0)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089FA7AC[] = {
    SVAL(EVT_SLOT_2, 0x0)
    CALL(EventScr_UnTriggerIfNotFaction)
    COUNTER_SET(0x3, 1)
    CHECK_TUTORIAL
    BNE(0x0, EVT_SLOT_C, EVT_SLOT_0)
    CHECK_HARD
    BEQ(0x0, EVT_SLOT_C, EVT_SLOT_0)
    COUNTER_SET(0x3, 3)
LABEL(0x0)
    ENUF(14)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089FA7EC[] = {
    SVAL(EVT_SLOT_2, UnitDef_088C27C8)
    CALL(EventScr_LoadReinforce)
    COUNTER_DEC(0x3)
    ENUF(14)
    COUNTER_CHECK(0x3)
    BNE(0x0, EVT_SLOT_C, EVT_SLOT_0)
    ENUT(14)
LABEL(0x0)
    EVBIT_T(7)
    ENDA
};
