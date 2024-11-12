#pragma once

#include "global.h"
#include "event.h"
#include "eventinfo.h"
#include "eventcall.h"
#include "EAstdlib.h"
#include "constants/characters.h"

CONST_DATA EventListScr EventScr_Ch10a_BeginingScene[] = {
	MUSC(0x2e)
	SVAL(EVT_SLOT_2, 0x2000f)
	CALL(EventScr_9EEA58)
	LOAD1(0x1, UnitDef_088B9640)
	ENUN
	FADU(16)
	MOVE_1STEP(0x10, CHARACTER_GLEN, FACING_UP)
	ENUN
	CUMO_CHAR(CHARACTER_VIGARDE)
	STAL(60)
	CURE
	TEXTSTART
	TEXTSHOW(0xa2b)
	TEXTEND
	REMA
	FADI(16)
	CLEA
	CLEE
	CLEN
	CAMERA2(9, 11)
	UNIT_COLORS(0x2)
	EvtSetLoadUnitNoREDA // ENOSUPP in EAstdlib
	LOAD2(0x1, UnitDef_088B96E0)
	ENUN
	SVAL(EVT_SLOT_B, 0xd0007)
	TILECHANGE(0xffff)
	FADU(16)
	TILECHANGE(0x0)
	LOAD2(0x1, UnitDef_088B96E0)
	ENUN
	TILEREVERT(0x0)
	LOAD2(0x1, UnitDef_088B971C)
	ENUN
	CUMO_CHAR(CHARACTER_GLEN)
	STAL(60)
	CURE
	SVAL(EVT_SLOT_2, 0xc)
	SVAL(EVT_SLOT_3, 0xa2c)
	CALL(Event_TextWithBG)
	LOAD2(0x1, UnitDef_088B9744)
	ENUN
	MUSI
	CUMO_CHAR(CHARACTER_VALTER)
	STAL(60)
	CURE
	SVAL(EVT_SLOT_2, 0xc)
	CALL(EventScr_SetBackground)
	TEXTSHOW(0xa2d)
	TEXTEND
	REMA
	FADI(16)
	CLEA
	CLEE
	CLEN
	UNIT_COLORS(0x0)
	SVAL(EVT_SLOT_B, 0x100007)
	LOMA(0xb)
	LOAD1(0x1, UnitDef_088B898C)
	ENUN
	LOAD1(0x1, UnitDef_088B8644)
	ENUN
	SVAL(EVT_SLOT_2, UnitDef_088B8900)
	SVAL(EVT_SLOT_3, 0x1)
	CALL(EventScr_LoadUnitForTutorial)
	FADU(16)
	CUMO_CHAR(CHARACTER_INNES)
	STAL(60)
	CURE
	MUSC(0x26)
	SVAL(EVT_SLOT_2, 0x26)
	SVAL(EVT_SLOT_3, 0xa2e)
	CALL(Event_TextWithBG)
	CAMERA(0, 0)
	LOAD2(0x1, UnitDef_088B8B44)
	STAL2(32)
	SVAL(EVT_SLOT_1, 0x0)
	SET_STATE(CHARACTER_EIRIKA)
	SVAL(EVT_SLOT_1, 0x0)
	SET_STATE(CHARACTER_SETH)
	LOAD3(0x0, UnitDef_088B8B80)
	ENUN
	SVAL(EVT_SLOT_1, 0xffffffff)
	SET_STATE(CHARACTER_EIRIKA)
	SVAL(EVT_SLOT_1, 0xffffffff)
	SET_STATE(CHARACTER_SETH)
	CUMO_CHAR(CHARACTER_EIRIKA)
	STAL(60)
	CURE
	SVAL(EVT_SLOT_2, 0x1d)
	CALL(EventScr_SetBackground)
	TEXTSHOW(0xa2f)
	TEXTEND
	REMA
	CALL(EventScr_CallPrepScreen)
	ENUT(13)
	ENUT(14)
	ENDA
};

CONST_DATA EventListScr EventScr_089F43A0[] = {
	CAMERA_CAHR(CHARACTER_PABLO)
	CUMO_CHAR(CHARACTER_PABLO)
	STAL(60)
	CURE
	MUSC(0x14)
	TEXTSTART
	TEXTSHOW(0xa30)
	TEXTEND
	REMA
	CUMO_AT(16, 1)
	STAL(60)
	CURE
	MUSI
	SVAL(EVT_SLOT_2, 0xe)
	SVAL(EVT_SLOT_3, 0xa31)
	CALL(Event_TextWithBG)
	MUNO
	EVBIT_T(7)
	ENDA
};

CONST_DATA EventListScr EventScr_Ch10a_EndingScene[] = {
	FADI(16)
	SVAL(EVT_SLOT_2, 0xb)
	CALL(EventScr_LoadUniqueAlly)
	SVAL(EVT_SLOT_7, 0x2)
	CHECK_EXISTS(CHARACTER_GERIK)
	BEQ(0x0, EVT_SLOT_C, EVT_SLOT_0)
	CHECK_ALIVE(CHARACTER_GERIK)
	BEQ(0x0, EVT_SLOT_C, EVT_SLOT_0)
	SVAL(EVT_SLOT_1, 0x1)
	SSUB(EVT_SLOT_7, EVT_SLOT_7, EVT_SLOT_1)
LABEL(0x0)
	CHECK_EXISTS(CHARACTER_TETHYS)
	BEQ(0x1, EVT_SLOT_C, EVT_SLOT_0)
	CHECK_ALIVE(CHARACTER_TETHYS)
	BEQ(0x1, EVT_SLOT_C, EVT_SLOT_0)
	SVAL(EVT_SLOT_1, 0x1)
	SSUB(EVT_SLOT_7, EVT_SLOT_7, EVT_SLOT_1)
LABEL(0x1)
	SVAL(EVT_SLOT_2, 0x14)
	CALL(EventScr_LoadUniqueAlly)
	SVAL(EVT_SLOT_2, 0x15)
	CALL(EventScr_LoadUniqueAlly)
	BEQ(0x2, EVT_SLOT_7, EVT_SLOT_0)
	SVAL(EVT_SLOT_1, 0x0)
	SET_HP(CHARACTER_GERIK)
	SVAL(EVT_SLOT_1, 0x0)
	SET_HP(CHARACTER_TETHYS)
	SVAL(EVT_SLOT_1, 0x0)
	SET_STATE(CHARACTER_GERIK)
	SVAL(EVT_SLOT_1, 0x0)
	SET_STATE(CHARACTER_TETHYS)
	REMU(CHARACTER_GERIK)
	REMU(CHARACTER_TETHYS)
LABEL(0x2)
	SVAL(EVT_SLOT_2, 0x16)
	CALL(EventScr_9EE5BC)
	CLEA
	CLEE
	CLEN
	MUSC(0x2e)
	CAMERA(0, 30)
	FADU(16)
	LOAD1(0x1, UnitDef_088B8C5C)
	ENUN
	CUMO_CHAR(CHARACTER_VALTER)
	STAL(60)
	CURE
	SVAL(EVT_SLOT_2, 0x1d)
	SVAL(EVT_SLOT_3, 0xa36)
	CALL(Event_TextWithBG)
	MOVE(0x10, CHARACTER_VALTER, 3, 30)
	SVAL(EVT_SLOT_B, 0x1b0002)
	STAL2(32)
	MOVE(0x10, CHAR_EVT_POSITION_AT_SLOTB, 2, 30)
	SVAL(EVT_SLOT_B, 0x1b0004)
	MOVE(0x10, CHAR_EVT_POSITION_AT_SLOTB, 4, 30)
	FADI(16)
	MUSCMID(0x7fff)
	ENUN
	CLEA
	CLEE
	CLEN
	CAMERA(19, 0)
	FADU(16)
	CUMO_AT(15, 1)
	STAL(60)
	CURE
	SVAL(EVT_SLOT_2, 0xe)
	CALL(EventScr_SetBackground)
	MUSC(0x31)
	TEXTSHOW(0xa37)
	TEXTEND
	REMA
	BNE(0x3, EVT_SLOT_7, EVT_SLOT_0)
	SVAL(EVT_SLOT_2, 0x10)
	CALL(EventScr_SetBackground)
	TEXTSHOW(0xa38)
	TEXTEND
	REMA
LABEL(0x3)
	SVAL(EVT_SLOT_2, 0x2)
	CALL(EventScr_SetBackground)
	CHECK_ALIVE(CHARACTER_TETHYS)
	BEQ(0xa, EVT_SLOT_C, EVT_SLOT_0)
	MUSI
	TEXTSHOW(0xa39)
	TEXTEND
	REMA
	SVAL(EVT_SLOT_2, 0x1d)
	CALL(EventScr_SetBackground)
	TEXTSHOW(0xa3a)
	TEXTEND
	REMA
	MUNO
	GOTO(0xb)
LABEL(0xa)
	TEXTSHOW(0xa3b)
	TEXTEND
	REMA
LABEL(0xb)
	FADI(16)
	ENUT(114)
	MNCH(0x3d)
	ENDA
};

CONST_DATA EventListScr EventScr_089F4634[] = {
	MUSS(0x30)
	STAL(33)
	TEXTSTART
	TEXTSHOW(0xa3c)
	TEXTEND
	REMA
	MURE(0x2)
	CUSA(CHARACTER_INNES)
	EVBIT_T(7)
	ENDA
};

CONST_DATA EventListScr EventScr_089F465C[] = {
	MUSS(0x30)
	STAL(33)
	TEXTSTART
	TEXTSHOW(0xa3d)
	TEXTEND
	REMA
	MURE(0x2)
	CUSA(CHARACTER_INNES)
	EVBIT_T(7)
	ENDA
};

CONST_DATA EventListScr EventScr_089F4684[] = {
	MUSS(0x30)
	STAL(33)
	TEXTSTART
	TEXTSHOW(0xa3e)
	TEXTEND
	REMA
	MURE(0x2)
	CUSA(CHARACTER_GERIK)
	EVBIT_T(7)
	ENDA
};

CONST_DATA EventListScr EventScr_089F46AC[] = {
	MUSS(0x30)
	STAL(33)
	TEXTSTART
	TEXTSHOW(0xa41)
	TEXTEND
	REMA
	MURE(0x2)
	CUSA(CHARACTER_GERIK)
	EVBIT_T(7)
	ENDA
};

CONST_DATA EventListScr EventScr_089F46D4[] = {
	MUSS(0x30)
	STAL(33)
	TEXTSTART
	TEXTSHOW(0xa3f)
	TEXTEND
	REMA
	MURE(0x2)
	CUSA(CHARACTER_TETHYS)
	EVBIT_T(7)
	ENDA
};

CONST_DATA EventListScr EventScr_089F46FC[] = {
	MUSS(0x30)
	STAL(33)
	TEXTSTART
	TEXTSHOW(0xa40)
	TEXTEND
	REMA
	MURE(0x2)
	CUSA(CHARACTER_TETHYS)
	EVBIT_T(7)
	ENDA
};

CONST_DATA EventListScr EventScr_089F4724[] = {
	MUSS(0x30)
	STAL(33)
	TEXTSTART
	TEXTSHOW(0xa42)
	TEXTEND
	REMA
	MURE(0x2)
	CUSA(CHARACTER_MARISA)
	ENUF(13)
	EVBIT_T(7)
	ENDA
};

CONST_DATA EventListScr EventScr_089F4750[] = {
	CHECK_TUTORIAL
	BNE(0x0, EVT_SLOT_C, EVT_SLOT_0)
	CHECK_HARD
	BEQ(0x0, EVT_SLOT_C, EVT_SLOT_0)
	CAMERA(0, 10)
	SVAL(EVT_SLOT_2, UnitDef_088B8AF4)
	CALL(EventScr_LoadReinforceHardMode)
LABEL(0x0)
	SVAL(EVT_SLOT_2, UnitDef_088B8A18)
	CALL(EventScr_LoadReinforce)
	SVAL(EVT_SLOT_2, UnitDef_088B8A90)
	CALL(EventScr_LoadReinforce)
	EVBIT_T(7)
	ENDA
};

CONST_DATA EventListScr EventScr_089F47A8[] = {
	MUSI
	SVAL(EVT_SLOT_2, 0x0)
	SVAL(EVT_SLOT_3, 0xa43)
	CALL(Event_TextWithBG)
	MUNO
	EVBIT_T(7)
	ENDA
};

CONST_DATA EventListScr EventScr_089F47D0[] = {
	MUSI
	SVAL(EVT_SLOT_2, 0x0)
	SVAL(EVT_SLOT_3, 0xa44)
	CALL(Event_TextWithBG)
	MUNO
	EVBIT_T(7)
	ENDA
};

CONST_DATA EventListScr EventScr_089F47F8[] = {
	MUSI
	SVAL(EVT_SLOT_2, 0x0)
	SVAL(EVT_SLOT_3, 0xa45)
	CALL(Event_TextWithBG)
	MUNO
	EVBIT_T(7)
	ENDA
};

CONST_DATA EventListScr EventScr_089F4820[] = {
	SVAL(EVT_SLOT_2, UnitDef_088B89DC)
	CALL(EventScr_LoadReinforce)
	EVBIT_T(7)
	ENDA
};

CONST_DATA EventListScr EventScr_089F4838[] = {
	SVAL(EVT_SLOT_2, 0x0)
	CALL(EventScr_UnTriggerIfNotFaction)
	ENUF(14)
	SVAL(EVT_SLOT_D, 0x0)
	SVAL(EVT_SLOT_1, 0x1d000d)
	SENQUEUE1
	SVAL(EVT_SLOT_1, 0x1c000e)
	SENQUEUE1
	SVAL(EVT_SLOT_1, 0x1d000f)
	SENQUEUE1
	SVAL(EVT_SLOT_1, 0x1c0010)
	SENQUEUE1
	SVAL(EVT_SLOT_1, 0x1d0011)
	SENQUEUE1
	SVAL(EVT_SLOT_1, 0x1e000e)
	SENQUEUE1
	SVAL(EVT_SLOT_1, 0x1e0010)
	SENQUEUE1
	SVAL(EVT_SLOT_1, 0x1e0012)
	SENQUEUE1
	SVAL(EVT_SLOT_2, 0x10000)
	CALL(EventScr_ChangeAIinQueue)
	EVBIT_T(7)
	ENDA
};

CONST_DATA EventListScr EventScr_089F48CC[] = {
	CAMERA_CAHR(CHARACTER_MARISA)
	CUMO_CHAR(CHARACTER_MARISA)
	STAL(60)
	CURE
	MUSC(0x14)
	TEXTSTART
	TEXTSHOW(0xa32)
	TEXTEND
	REMA
	EVBIT_T(7)
	ENDA
};
