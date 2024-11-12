#include "gbafe.h"

CONST_DATA EventListScr EventScr_Ch13a_BeginingScene[] = {
    SVAL(EVT_SLOT_2, 0x0)
    CALL(EventScr_9EEA58)
    SVAL(EVT_SLOT_2, 0xc)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xa68)
    TEXTEND
    REMA
    FADI(16)
    SVAL(EVT_SLOT_B, 0x0)
    LOMA(0x3f)
    FADU(16)
    LOAD1(0x1, UnitDef_088BB970)
    ENUN
    CLEE
    CUMO_AT(10, 4)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0xc)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xa69)
    TEXTEND
    REMA
    FADI(16)
    SVAL(EVT_SLOT_B, 0x0)
    LOMA(0x49)
    EvtSetLoadUnitNoREDA // ENOSUPP in EAstdlib
    LOAD2(0x1, UnitDef_088BB9C4)
    ENUN
    DISA(CHARACTER_MESSENGER)
    FADU(16)
    LOAD2(0x1, UnitDef_088BB9C4)
    ENUN
    CUMO_CHAR(CHARACTER_MESSENGER)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0x1d)
    CALL(EventScr_SetBackground)
    MUSC(0x25)
    TEXTSHOW(0xa6a)
    TEXTEND
    REMA
    FADI(4)
    CLEA
    CLEE
    CLEN
    SVAL(EVT_SLOT_2, 0x1d)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xa6b)
    TEXTEND
    REMA
    FADI(16)
    SVAL(EVT_SLOT_B, 0x90012)
    LOMA(0xd)
    LOAD1(0x1, UnitDef_088BAA74)
    ENUN
    SVAL(EVT_SLOT_2, UnitDef_088BAC18)
    SVAL(EVT_SLOT_3, 0x1)
    CALL(EventScr_LoadUnitForTutorial)
    CHECK_EVENTID(134)
    BNE(0x0, EVT_SLOT_C, EVT_SLOT_0)
    CHECK_EXISTS(CHARACTER_AMELIA)
    BNE(0x0, EVT_SLOT_C, EVT_SLOT_0)
    LOAD1(0x1, UnitDef_088BAF10)
    ENUN
    GOTO(0x1)
LABEL(0x0)
    ENUT(7)
LABEL(0x1)
    FADU(16)
    CUMO_AT(23, 11)
    STAL(60)
    CURE
    MUSS(0x2e)
    STAL(33)
    SVAL(EVT_SLOT_2, 0x26)
    SVAL(EVT_SLOT_3, 0xa6c)
    CALL(Event_TextWithBG)
    LOAD1(0x1, UnitDef_088BAF38)
    ENUN
    LOAD1(0x1, UnitDef_088BAA4C)
    ENUN
    DISA(CHARACTER_CAELLACH)
    CAMERA2(13, 9)
    LOAD2(0x1, UnitDef_088BAF60)
    ENUN
    SVAL(EVT_SLOT_1, 0x0)
    SET_STATE(CHARACTER_EIRIKA)
    SVAL(EVT_SLOT_1, 0x0)
    SET_STATE(CHARACTER_LARACHEL)
    SVAL(EVT_SLOT_1, 0x0)
    SET_STATE(CHARACTER_INNES)
    SVAL(EVT_SLOT_1, 0x0)
    SET_STATE(CHARACTER_SETH)
    LOAD3(0x0, UnitDef_088BAFC4)
    ENUN
    SVAL(EVT_SLOT_1, 0xffffffff)
    SET_STATE(CHARACTER_EIRIKA)
    SVAL(EVT_SLOT_1, 0xffffffff)
    SET_STATE(CHARACTER_LARACHEL)
    SVAL(EVT_SLOT_1, 0xffffffff)
    SET_STATE(CHARACTER_INNES)
    SVAL(EVT_SLOT_1, 0xffffffff)
    SET_STATE(CHARACTER_SETH)
    CUMO_CHAR(CHARACTER_EIRIKA)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0x1b)
    CALL(EventScr_SetBackground)
    MURE(0x2)
    TEXTSHOW(0xa6d)
    TEXTEND
    REMA
    CALL(EventScr_CallPrepScreen)
    ENDA
};

CONST_DATA EventListScr EventScr_Ch13a_EndingScene[] = {
    CHECK_EVENTID(2)
    BNE(0x0, EVT_SLOT_C, EVT_SLOT_0)
    CAMERA_CAHR(CHARACTER_AIAS)
    CUMO_CHAR(CHARACTER_AIAS)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0x1b)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xa75)
    TEXTEND
    GOTO(0x1)
LABEL(0x0)
    SVAL(EVT_SLOT_2, 0x1b)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xa76)
    TEXTEND
LABEL(0x1)
    REMA
    FADI(16)
    CLEE
    CLEAN
    CAMERA(23, 0)
    FADU(16)
    LOAD1(0x1, UnitDef_088BB078)
    ENUN
    CUMO_CHAR(CHARACTER_MANSEL)
    STAL(60)
    CURE
    MUSC(0xf)
    TEXTSTART
    TEXTSHOW(0xa77)
    TEXTEND
    REMA
    CAMERA_CAHR(CHARACTER_EIRIKA)
    CUMO_CHAR(CHARACTER_EIRIKA)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0x1b)
    CALL(EventScr_SetBackground)
    TEXTSHOW(0xa78)
    TEXTEND
    REMA
    FADI(16)
    SVAL(EVT_SLOT_2, 0x1b)
    CALL(EventScr_SetBackground)
    MUSS(0x31)
    STAL(33)
    CHECK_ALIVE(CHARACTER_DOZLA)
    BEQ(0xa, EVT_SLOT_C, EVT_SLOT_0)
    TEXTSHOW(0xa79)
    TEXTEND
    REMA
    CALL(EventScr_RemoveBGIfNeeded)
    SVAL(EVT_SLOT_3, 0x1388)
    GIVEITEMTOMAIN(CHAR_EVT_PLAYER_LEADER)
    TEXTSHOW(0xa7a)
    TEXTEND
    MUSCMID(0x7fff)
    TEXTCONT
    TEXTEND
    MUSC(0x26)
    TEXTCONT
    TEXTEND
    GOTO(0xb)
LABEL(0xa)
    TEXTSHOW(0xa7b)
    TEXTEND
    REMA
    CALL(EventScr_RemoveBGIfNeeded)
    SVAL(EVT_SLOT_3, 0x1388)
    GIVEITEMTOMAIN(CHAR_EVT_PLAYER_LEADER)
    TEXTSHOW(0xa7c)
    TEXTEND
    MUSCMID(0x7fff)
    TEXTCONT
    TEXTEND
    MUSC(0x26)
    TEXTCONT
    TEXTEND
LABEL(0xb)
    REMA
    FADI(4)
    CLEA
    CLEE
    CLEN
    CHECK_EVENTID(2)
    BNE(0x63, EVT_SLOT_C, EVT_SLOT_0)
    SVAL(EVT_SLOT_B, 0x0)
    LOMA(0xf)
    LOAD1(0x1, UnitDef_088BBA58)
    ENUN
    FADU(4)
    LOAD1(0x1, UnitDef_088BBA80)
    ENUN
    SVAL(EVT_SLOT_1, 0x5)
    SET_HP(CHARACTER_AIAS)
    CUMO_CHAR(CHARACTER_CAELLACH)
    STAL(60)
    CURE
    SVAL(EVT_SLOT_2, 0x30)
    CALL(EventScr_SetBackground)
    MUSC(0x2e)
    TEXTSHOW(0xa7d)
    TEXTEND
    REMA
    CALL(EventScr_TextShowWithFadeIn)

    StartBattle
    CriticalHit(DEFENDER, 0)
    FIGHT_MAP(CHARACTER_CAELLACH, CHARACTER_AIAS, 0, 0)

    FADI(4)
LABEL(0x63)
    ENUT(117)
    MNCH(0xe)
    ENDA
};

CONST_DATA EventListScr EventScr_089F59CC[] = {
    MUSS(0x30)
    STAL(33)
    TEXTSTART
    TEXTSHOW(0xa28)
    TEXTEND
    REMA
    MURE(0x2)
    CUSA(CHARACTER_AMELIA)
LABEL(0x0)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089F59F8[] = {
    MUSS(0x30)
    STAL(33)
    TEXTSTART
    TEXTSHOW(0xa27)
    TEXTEND
    REMA
    MURE(0x2)
    CUSA(CHARACTER_AMELIA)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089F5A20[] = {
    MUSS(0x30)
    STAL(33)
    TEXTSTART
    TEXTSHOW(0xa80)
    TEXTEND
    REMA
    MURE(0x2)
    CUSA(CHARACTER_CORMAG)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089F5A48[] = {
    MUSC(0x14)
    SVAL(EVT_SLOT_2, UnitDef_088BACA4)
    CALL(EventScr_LoadReinforce)
    SVAL(EVT_SLOT_2, UnitDef_088BAD80)
    CALL(EventScr_LoadReinforceHardMode)
    CUMO_CHAR(CHARACTER_PABLO)
    STAL(60)
    CURE
    TEXTSTART
    TEXTSHOW(0xa6e)
    TEXTEND
    REMA
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089F5A90[] = {
    CHECK_TURNS
    SVAL(EVT_SLOT_1, 0x1)
    SAND(EVT_SLOT_C, EVT_SLOT_C, EVT_SLOT_1)
    BEQ(0x0, EVT_SLOT_C, EVT_SLOT_0)
    SVAL(EVT_SLOT_2, UnitDef_088BADBC)
    CALL(EventScr_LoadReinforce)
    SVAL(EVT_SLOT_2, UnitDef_088BADF8)
    CALL(EventScr_LoadReinforce)
LABEL(0x0)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089F5AD4[] = {
    SVAL(EVT_SLOT_2, UnitDef_088BAE48)
    CALL(EventScr_LoadReinforce)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089F5AEC[] = {
    SVAL(EVT_SLOT_2, UnitDef_088BAE84)
    CALL(EventScr_LoadReinforce)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_089F5B04[] = {
    MUSC(0x14)
    SVAL(EVT_SLOT_2, UnitDef_088BAEC0)
    CALL(EventScr_LoadReinforce)
    CUMO_CHAR(CHARACTER_CORMAG)
    STAL(60)
    CURE
    TEXTSTART
    TEXTSHOW(0xa6f)
    TEXTEND
    REMA
    EVBIT_T(7)
    ENDA
};
