#include "global.h"
#include "variables.h"
#include "functions.h"

#include "proc.h"
#include "bmmap.h"
#include "hardware.h"
#include "soundwrapper.h"
#include "bmfx.h"
#include "constants/songs.h"

CONST_DATA struct ProcCmd ProcScr_EventEarthQuake[] = {
    PROC_YIELD,
    PROC_REPEAT(EventEarthQuakeMain),
    PROC_END
};

/* Thanks to supper-man YohannDR! */
void EventEarthQuakeMain(struct ProcBmFx * proc)
{
    if (GetGameClock() & 1)
    {
        switch (proc->type) {
        case 0:
            switch (proc->position) {
            case POS_L:
                gBmSt.camera.x ^= 2;
                break;
            
            case POS_R:
                gBmSt.camera.y ^= 2;
                break;
            }
            RenderBmMap();
            break;

        case 1:
            switch (proc->position) {
            case POS_L:
                SetBgOffset(3, GetGameClock() & 2, 0);
                break;
            
            case POS_R:
                SetBgOffset(3, 0, GetGameClock() & 2);
                break;
            }
            break;
        }
    }
}

void StartEventEarthQuake(u8 type, u8 direction, s8 play_sound)
{
    struct ProcBmFx * proc;

    proc = Proc_Find(ProcScr_EventEarthQuake);
    if (!proc) {
        if (1 == play_sound)
            PlaySoundEffect(SONG_26A);
        
        proc = SpawnProc(ProcScr_EventEarthQuake, PROC_TREE_3);
    }

    proc->type = type; /* 0 to move camera, 1 to move BG position */
    proc->position = direction;
}

/* Thanks to supper-man YohannDR! */
void EndEventEarthQuake(void)
{
    struct ProcBmFx * proc;
    proc = Proc_Find(ProcScr_EventEarthQuake);
    if (!proc)
        return;

    switch (proc->type) {
    case 0:
        (u16)gBmSt.camera.x &= 0xFFFC;
        (u16)gBmSt.camera.y &= 0xFFFC;
        break;

    case 1:
        SetBgOffset(3, 0, 0);
    }

    Proc_EndEach(ProcScr_EventEarthQuake);
    Sound_FadeOutSE(4);
}
