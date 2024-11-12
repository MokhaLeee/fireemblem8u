#include "gbafe.h"

CONST_DATA EventListScr EventScr_MelkaenCoast_BeginingScene[] = {
    LOAD1(0x1, UnitDef_088CFCC4)
    ENUN
    CALL(EventScr_CallPrepScreen)
    EVBIT_T(7)
    ENDA
};

CONST_DATA EventListScr EventScr_MelkaenCoast_EndingScene[] = {
    MNCH(0x0)
    ENDA
};
