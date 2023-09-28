#include "global.h"

#include "bmsave.h"
#include "hardware.h"
#include "worldmap.h"
#include "fontgrp.h"
#include "bmlib.h"
#include "uiutils.h"
#include "m4a.h"
#include "soundwrapper.h"
#include "ctc.h"

#include "savemenu.h"

extern u8 gUnknown_02000940[];
extern u8 gUnknown_02000944[];
extern struct PlaySt_OptionBits gUnknown_02000948[];

struct Unknown_08A209FC
{
    s8 a;
    s8 b;
};

struct Unknown_08A209FC gUnknown_08A209FC[] =
{
    { 0, 0x20, },
    { 0, 0x40, },
    { 0, 0x60, },
};

//! FE8U = 0x080ABC14
void sub_80ABC14(u8 slot, struct SaveMenuProc * proc)
{
    struct PlaySt playSt;
    struct GMapData worldMapData;
    u8 localbuffer[4] __attribute__((unused));

    if (slot < 3)
    {
        if (IsSaveValid(slot))
        {
            int chIndex;
            int r2;
            ReadGameSavePlaySt(slot, &playSt);

            r2 = playSt.chapterIndex;
            if (!(playSt.chapterStateBits & PLAY_FLAG_COMPLETE) && (playSt.unk4A_2 == 4))
            {
                LoadSavedWMStuff(slot, &worldMapData);
                r2 = sub_80BD224(&worldMapData);
            }

            chIndex = playSt.chapterIndex;
            playSt.chapterIndex = r2;
            proc->unk_37[slot] = sub_8089768(&playSt);

            playSt.chapterIndex = chIndex;
            proc->unk_48[slot] = playSt.time_saved;

            proc->unk_3a[slot] = 0;

            // BUG?
            if (IsGameNotFirstChapter((struct PlaySt *)(uintptr_t)slot) != 0)
            {
                proc->unk_3a[slot] |= 1;
            }

            if (LoadSavedEid8A(slot) != 0)
            {
                proc->unk_3a[slot] |= 2;
            }

            if (playSt.chapterStateBits & PLAY_FLAG_COMPLETE)
            {
                proc->unk_3a[slot] |= 4;
            }

            gUnknown_02000940[slot] = playSt.chapterStateBits;
            gUnknown_02000944[slot] = playSt.chapterModeIndex;
            memcpy(&gUnknown_02000948[slot], &playSt.config, 8);
        }
        else
        {
            proc->unk_37[slot] = 0xff;
            proc->unk_3a[slot] = 0;
            proc->unk_48[slot] = 0;

            gUnknown_02000940[slot] = 0;
            gUnknown_02000944[slot] = 0;

            memset(&gUnknown_02000948[slot], 0, 8);
        }
    }
    else if (proc->unk_44 == 0x100)
    {
        if (IsValidSuspendSave(3))
        {
            ReadSuspendSavePlaySt(3, &playSt);
            proc->unk_3f = playSt.gameSaveSlot;
            proc->unk_54 = playSt.time_saved;
        }
        else
        {
            proc->unk_44 = 0xf0;
        }
    }

    return;
}

//! FE8U = 0x080ABD88
void sub_80ABD88(u8 slot)
{
    int i;
#ifndef NONMATCHING
    register u32 r1 asm("r1");
#else
    u32 r1;
#endif

    for (i = 0; i < 3; i++)
    {
        u32 flags = gUnknown_02000940[i] & 0x40 ? 4 : 0;

        if (!gUnknown_02000948[i].controller)
        {
            if (gUnknown_02000944[i] == 1)
            {
                flags = flags | 0x10;
            }

            if (gUnknown_02000944[i] == 2)
            {
                flags = flags | 0x20;
                flags = (u8)flags;
            }

            if (gUnknown_02000944[i] == 3)
            {
                flags = flags | 0x40;
            }
        }
        else
        {
            if (gUnknown_02000944[i] == 3)
            {
                flags = flags | 0x40;
            }
            else
            {
                flags = flags | 0x20;
                flags = (u8)flags;
            }
        }

        if (i != slot)
        {
            flags = flags | 2;
            flags = (u8)flags;
        }
        r1 = 1;
        sub_80895B4(flags | r1, i * 2 + 0x1a);
        sub_80895B4(flags, i * 2 + 0x1b);
    }

    EnablePaletteSync();
    return;
}

extern u16 gUnknown_08A07B0A[];
extern u16 gUnknown_08A07AEA[];
extern u16 gUnknown_08A07C0A[];
extern u16 gUnknown_08A07BEA[];

//! FE8U = 0x080ABE3C
void sub_80ABE3C(int param_1, int param_2)
{
    int r2;
    u16 *r6;
    u16 *r8;
    int r9;
    u16* ip;
    // permuter
    u16 *pickle = gUnknown_08A07BEA;
    u16 *ketchup = gUnknown_08A07AEA;

    param_1 = (param_1 >> 1) & 0x1f;
    if (param_1 > 0x10)
        param_1 = 0x10 - (param_1 & 0xf);

    for (r2 = 0; r2 < 3; r2++)
    {
        int tmp;
        if (!(gUnknown_02000940[r2] & 0x40))
            continue;

        tmp = (r2 * 0x20 + 0xa0);
        r8 = &gPaletteBuffer[tmp + 0x109];

        if (r2 == param_2)
        {
            ip = ketchup;
            r6 = pickle;
        }
        else
        {
            ip = gUnknown_08A07B0A;
            r6 = gUnknown_08A07C0A;
        }

        for (r9 = 0; r9 < 7; r9++)
        {
            *r8 =
                ((((*ip & 0x1f) * param_1 + (0x10 - param_1) * (*r6 & 0x1f)) >> 4) & 0x1f) +
                ((((*ip & 0x3e0) * param_1 + (0x10 - param_1) * (*r6 & 0x3e0)) >> 4) & 0x3e0) +
                ((((*ip & 0x7c00) * param_1 + (0x10 - param_1) * (*r6 & 0x7c00)) >> 4) & 0x7c00);
            ++r8;
            ++ip;
            ++r6;
        }
    }

    EnablePaletteSync();

    return;
}

//! FE8U = 0x080ABF44
u8 sub_80ABF44(u8 endMask, struct SaveMenuProc * proc)
{
    int mask;
    int count = 0;

    for (mask = 1; mask < endMask; mask <<= 1)
    {
        if ((proc->unk_30 & mask) != 0)
        {
            count++;
        }
    }

    return count;
}

#if NONMATCHING

/* https://decomp.me/scratch/SDtUT */

//! FE8U = 0x080ABF74
void sub_80ABF74(u8 param_1)
{
    int r4;
    void * r6;
    int r2;
    int i;
    void * r5;

    if ((param_1 & 0x60) != 0)
    {
        r6 = (void *)0x06014000;
        r2 = 0xe;
        r4 = 2;
    }
    else if ((param_1 & 0x10) != 0)
    {
        r6 = (void *)0x06014800;
        r2 = 0xe;
        r4 = 2;
    }

    r5 = (void *)(0x060121C0);
    for (i = 0; i < r4; i++)
    {
        CpuFastCopy(r6, r5 + i * 0x400, r2 * 0x20);
        r6 += 0x400;
    }

    return;
}

#else

NAKEDFUNC
void sub_80ABF74(u8 param_1)
{
    asm("\n\
        .syntax unified\n\
        push {r4, r5, r6, r7, lr}\n\
        mov r7, r8\n\
        push {r7}\n\
        lsls r0, r0, #0x18\n\
        lsrs r3, r0, #0x18\n\
        movs r1, #0x60\n\
        adds r0, r3, #0\n\
        ands r0, r1\n\
        cmp r0, #0\n\
        beq _080ABF94\n\
        ldr r6, _080ABF90  @ 0x06014000\n\
        movs r2, #0xe\n\
        movs r4, #2\n\
        b _080ABFA6\n\
        .align 2, 0\n\
    _080ABF90: .4byte 0x06014000\n\
    _080ABF94:\n\
        movs r0, #0x10\n\
        ands r0, r3\n\
        cmp r0, #0\n\
        beq _080ABFA2\n\
        ldr r6, _080ABFD4  @ 0x06014800\n\
        movs r2, #0xe\n\
        movs r4, #2\n\
    _080ABFA2:\n\
        cmp r4, #0\n\
        ble _080ABFC8\n\
    _080ABFA6:\n\
        lsls r7, r2, #3\n\
        ldr r5, _080ABFD8  @ 0x060121C0\n\
        ldr r0, _080ABFDC  @ 0x001FFFFF\n\
        mov r8, r0\n\
    _080ABFAE:\n\
        adds r0, r6, #0\n\
        adds r1, r5, #0\n\
        mov r2, r8\n\
        ands r2, r7\n\
        bl CpuFastSet\n\
        movs r0, #0x80\n\
        lsls r0, r0, #3\n\
        adds r6, r6, r0\n\
        adds r5, r5, r0\n\
        subs r4, #1\n\
        cmp r4, #0\n\
        bne _080ABFAE\n\
    _080ABFC8:\n\
        pop {r3}\n\
        mov r8, r3\n\
        pop {r4, r5, r6, r7}\n\
        pop {r0}\n\
        bx r0\n\
        .align 2, 0\n\
    _080ABFD4: .4byte 0x06014800\n\
    _080ABFD8: .4byte 0x060121C0\n\
    _080ABFDC: .4byte 0x001FFFFF\n\
        .syntax divided\n\
    ");
}

#endif

u16 CONST_DATA gTextIds_DifficultyDescription[] =
{
    0x0149, // TODO: msgid "For first-timers.[.][NL]Game rules and[NL]controls will be[NL]explained as you[NL]play.[.]"
    0x014A, // TODO: msgid "For experienced[.][NL]players. No game-[.][NL]play hints will[.][NL]be provided as[NL]you play.[.]"
    0x014B, // TODO: msgid "For players seeking[.][NL]a real challenge.[.][NL]No instructions are[.][NL]given & difficulty[NL]is set to high.[.]"
};

//! FE8U = 0x080ABFE0
void DrawDifficultyModeText(struct DifficultyMenuProc * proc)
{
    const char * str;
    struct Text * th;
    int i;

    for (i = 0; i < 5; i++)
    {
        ClearText(&proc->unk_38[i]);
    }

    th = proc->unk_38;
    str = GetStringFromIndex(gTextIds_DifficultyDescription[proc->unk_30]);

    while (1)
    {
        if (*str == 0x00) // [X]
        {
            return;
        }

        if (*str == 0x01) // [NL]
        {
            th++;
            str++;
            continue;
        }

        str = Text_DrawCharacter(th, str);
    }

    return;
}

//! FE8U = 0x080AC034
void sub_80AC034(struct DifficultyMenuProc * proc)
{
    int i;

    TileMap_FillRect(TILEMAP_LOCATED(gBG0TilemapBuffer, 7, 7), 14, 10, 0);

    for (i = 0; i < 5; i++)
    {
        PutText(&proc->unk_38[i], TILEMAP_LOCATED(gBG0TilemapBuffer, 18, 7 + i * 2));
    }

    BG_EnableSyncByMask(BG0_SYNC_BIT);

    return;
}

//! FE8U = 0x080AC078
void DifficultySelect_OnEnd(struct DifficultyMenuProc * proc)
{
    ((struct SaveMenuProc *)(proc->proc_parent))->unk_58->unk_29 = 1;
    return;
}

extern u16 gUnknown_08A25DCC[];    // pal
extern u16 gUnknown_08A268D8[];    // pal
extern u16 Pal_SaveScreenSprits[]; // pal
extern u16 gUnknown_08A295B4[];    // pal
extern u16 Pal_DifficultyMenuObjs[];
extern u8 Img_DifficultyMenuObjs[];

extern u8 gUnknown_08A29558[];

//! FE8U = 0x080AC084
void InitDifficultySelectScreen(struct DifficultyMenuProc * proc)
{
    int i;

    ResetTextFont();
    LoadUiFrameGraphics();
    ResetText();

    for (i = 0; i < 5; i++)
    {
        InitText(&proc->unk_38[i], 14);
    }

    ApplyPalettes(gUnknown_08A25DCC, 8, 8);
    ApplyPalette(gUnknown_08A268D8, 7);

    ApplyPalettes(Pal_SaveScreenSprits, 18, 8);
    ApplyPalette(gUnknown_08A295B4, 2);

    Decompress(Img_DifficultyMenuObjs, (void *)0x06010800);
    ApplyPalettes(Pal_DifficultyMenuObjs, 17, 10);

    EnablePaletteSync();

    ((struct SaveMenuProc *)(proc->proc_parent))->unk_58->unk_29 = 0;

    BG_Fill(gBG0TilemapBuffer, 0);
    BG_Fill(gBG1TilemapBuffer, 0);

    Decompress(gUnknown_08A29558, gGenericBuffer);
    CallARM_FillTileRect(gBG1TilemapBuffer + 0xd1, gGenericBuffer, 0x1000);

    DrawDifficultyModeText(proc);
    sub_80AC034(proc);

    BG_EnableSyncByMask(BG0_SYNC_BIT | BG1_SYNC_BIT);

    proc->unk_34 = StartDrawDifficultyMenuSprites(proc);
    proc->unk_30 = 0;
    proc->unk_34->unk_2b = 0;
    proc->unk_34->unk_2c = gUnknown_08A209FC[proc->unk_30].a;
    proc->unk_34->unk_2e = gUnknown_08A209FC[proc->unk_30].b;

    return;
}

//! FE8U = 0x080AC1A8
void DifficultySelect_Init(struct DifficultyMenuProc * proc)
{
    proc->unk_30 = 0;
    proc->unk_2c = 0;
    InitDifficultySelectScreen(proc);
    return;
}

//! FE8U = 0x080AC1BC
void sub_80AC1BC(struct DifficultyMenuProc * proc)
{
    int a;
    int b;
    int c;

    proc->unk_2c++;

    SetDispEnable(1, 1, 1, 1, 1);

    a = (0x10 - proc->unk_2c);
    b = (a * 0x50 * a) / 256;
    c = 0x50 - b;

    SetWin0Box(0, 0x50 - c, 0xf0, c + 0x50);

    if (proc->unk_2c == 0x10)
    {
        Proc_Break(proc);
    }

    return;
}

//! FE8U = 0x080AC22C
void sub_80AC22C(struct DifficultyMenuProc * proc)
{
    int a;
    int b;
    int c;

    proc->unk_2c++;

    a = (0x10 - proc->unk_2c);
    b = (a * 0x50 * a) / 256;
    c = 0x50 - b;

    SetWin0Box(0, c, 0xf0, -0x60 - c);

    if (proc->unk_2c == 0x10)
    {
        Proc_Break(proc);
    }

    return;
}

//! FE8U = 0x080AC288
void DifficultySelect_Loop_KeyHandler(struct DifficultyMenuProc * proc)
{
    s8 hasChanged = 0;

    if (gKeyStatusPtr->repeatedKeys & DPAD_UP)
    {
        if (proc->unk_30 == 0)
        {
            proc->unk_30 = 2;
        }
        else
        {
            proc->unk_30--;
        }

        hasChanged = 1;
    }
    else if (gKeyStatusPtr->repeatedKeys & DPAD_DOWN)
    {
        if (proc->unk_30 == 2)
        {
            proc->unk_30 = 0;
        }
        else
        {
            proc->unk_30++;
        }

        hasChanged = 1;
    }

    if (hasChanged != 0)
    {
        PlaySoundEffect(0x66);
        proc->unk_34->unk_2b = proc->unk_30;
        sub_80AC680(proc->unk_34, gUnknown_08A209FC[proc->unk_30].a, gUnknown_08A209FC[proc->unk_30].b);
        DrawDifficultyModeText(proc);
        sub_80AC034(proc);
        return;
    }

    if (proc->unk_34->unk_29_1)
    {
        return;
    }

    if (gKeyStatusPtr->newKeys & (A_BUTTON | START_BUTTON))
    {
        proc->unk_2c = 0;
        PlaySoundEffect(0x6a);
        switch (proc->unk_30)
        {
            case 0:
                savemenu_SetDifficultyChoice(0, 0);
                break;

            case 1:
                savemenu_SetDifficultyChoice(1, 0);
                break;

            case 2:
                savemenu_SetDifficultyChoice(2, 0);
                break;
        }

        Proc_Goto(proc, 1);
    }

    if (gKeyStatusPtr->newKeys & B_BUTTON)
    {
        proc->unk_2c = 0;
        PlaySoundEffect(0x6b);
        savemenu_SetDifficultyChoice(3, 0);
        Proc_Goto(proc, 2);
    }

    return;
}

//! FE8U = 0x080AC3DC
void nullsub_64(void)
{
    return;
}

// clang-format off

struct ProcCmd CONST_DATA ProcScr_NewGameDifficultySelect[] =
{
    PROC_SET_END_CB(DifficultySelect_OnEnd),

    PROC_CALL(sub_80AD5B4),
    PROC_YIELD,

    PROC_CALL(DifficultySelect_Init),
    PROC_SLEEP(1),

    PROC_CALL(EnableAllGfx),
    PROC_CALL_ARG(NewFadeIn, 8),
    PROC_WHILE(FadeInExists),

PROC_LABEL(0),
    PROC_REPEAT(DifficultySelect_Loop_KeyHandler),

    // fallthrough

PROC_LABEL(1),
    PROC_SLEEP(10),

    // fallthrough

PROC_LABEL(2),
    PROC_CALL_ARG(NewFadeOut, 8),
    PROC_WHILE(FadeOutExists),

    PROC_CALL(nullsub_64),

    PROC_END,
};

// clang-format on

//! FE8U = 0x080AC3E0
void NewNewGameDifficultySelect(ProcPtr parent)
{
    Proc_StartBlocking(ProcScr_NewGameDifficultySelect, parent);
    return;
}

//! FE8U = 0x080AC3F4
void DrawDifficultySprite_Init(struct DifficultyMenuSpritesProc * proc)
{
    proc->unk_29_0 = 0;
    proc->unk_29_1 = 0;

    proc->unk_2a = 0;
    proc->unk_2e = 0;
    proc->unk_2c = 0;

    return;
}

extern u8 gUnknown_08A20B14[];

// clang-format off

u16 CONST_DATA gSprite_08A20A98[] =
{
    1,
    OAM0_SHAPE_32x32, OAM1_SIZE_32x32, OAM2_CHR(0x5C) + OAM2_LAYER(1),
};

// clang-format on

//! FE8U = 0x080AC418
void DrawDifficultyMenuCursorMaybe(struct DifficultyMenuSpritesProc * proc)
{
    if (proc->unk_29_0)
    {
        proc->unk_38 = proc->unk_34 - proc->unk_30;
        proc->unk_3a = proc->unk_36 - proc->unk_32;
        proc->unk_2c = proc->unk_30;
        proc->unk_2e = proc->unk_32;
        proc->unk_3c = 0;
        proc->unk_29_0 = 0;
        proc->unk_29_1 = 1;
    }

    if (proc->unk_29_1)
    {
        proc->unk_3c++;

        if (proc->unk_3c < 4)
        {
            int unk = sub_800B84C(proc->unk_3c, 4, 0);

            proc->unk_2c = proc->unk_30 + DivArm(0x1000, proc->unk_38 * unk);
            proc->unk_2e = proc->unk_32 + DivArm(0x1000, proc->unk_3a * unk);
        }
        else
        {
            proc->unk_2c = proc->unk_34;
            proc->unk_2e = proc->unk_36;
            proc->unk_29_1 = 0;
        }
    }

    PutSpriteExt(
        4, proc->unk_2c, OAM0_Y(proc->unk_2e + gUnknown_08A20B14[(proc->unk_2a >> 3) & 7]), gSprite_08A20A98, OAM2_PAL(3));

    return;
}

// TODO: Confirm that this is a 3D array
// Seems to be palettes for easy, normal, difficult; active / inactive; size 0x10 each
extern u16 gUnknown_08A29498[3][2][0x10];

extern u16 gUnknown_08A28088[];

#if NONMATCHING

/* https://decomp.me/scratch/GaYjI */

//! FE8U = 0x080AC4F8
void sub_80AC4F8(u8 frameMaybe, u8 selectedIdx)
{
    int i;
    int palId;
    int color;

    for (i = 0; i < 3; i++)
    {
        if (i == selectedIdx)
        {
            PAL_OBJ_COLOR(5 + i * 2, 1) = gUnknown_08A29498[i][0][1];
        }
        else
        {
            // inactive
            u16 * pal = &gUnknown_08A29498[i][1][1];
            PAL_OBJ_COLOR(6 + i * 2, 1) = *pal;
        }
    }

    color = (frameMaybe % 0x40) / 4;

    gPaletteBuffer[(((5 + 0x10) * 0x10) + 1) + ((selectedIdx * 2))] = gUnknown_08A28088[color];

    EnablePaletteSync();

    return;
}

#else

NAKEDFUNC
void sub_80AC4F8(u8 frameMaybe, u8 selectedIdx)
{
    asm("\n\
        .syntax unified\n\
        push {r4, r5, r6, r7, lr}\n\
        mov r7, r8\n\
        push {r7}\n\
        lsls r0, r0, #0x18\n\
        lsrs r0, r0, #0x18\n\
        mov ip, r0\n\
        lsls r1, r1, #0x18\n\
        lsrs r3, r1, #0x18\n\
        movs r2, #0\n\
        ldr r7, _080AC530  @ gPaletteBuffer\n\
        ldr r0, _080AC534  @ gUnknown_08A28088\n\
        mov r8, r0\n\
        lsls r0, r3, #6\n\
        ldr r1, _080AC538  @ 0x000002A2\n\
        adds r0, r0, r1\n\
        adds r6, r0, r7\n\
        lsls r1, r3, #6\n\
        ldr r0, _080AC53C  @ 0x000002C2\n\
        adds r4, r7, r0\n\
        ldr r0, _080AC540  @ gUnknown_08A2949A\n\
        adds r5, r1, r0\n\
    _080AC522:\n\
        cmp r2, r3\n\
        bne _080AC544\n\
        ldrh r0, [r5]\n\
        strh r0, [r6]\n\
        lsls r1, r2, #5\n\
        b _080AC550\n\
        .align 2, 0\n\
    _080AC530: .4byte gPaletteBuffer\n\
    _080AC534: .4byte gUnknown_08A28088\n\
    _080AC538: .4byte 0x000002A2\n\
    _080AC53C: .4byte 0x000002C2\n\
    _080AC540: .4byte gUnknown_08A2949A\n\
    _080AC544:\n\
        lsls r0, r2, #6\n\
        ldr r1, _080AC580  @ gUnknown_08A294BA\n\
        adds r0, r0, r1\n\
        ldrh r0, [r0]\n\
        strh r0, [r4]\n\
        lsls r1, r3, #5\n\
    _080AC550:\n\
        adds r4, #0x40\n\
        adds r2, #1\n\
        cmp r2, #2\n\
        ble _080AC522\n\
        movs r0, #0x3f\n\
        mov r2, ip\n\
        ands r0, r2\n\
        lsrs r0, r0, #2\n\
        ldr r2, _080AC584  @ 0x00000151\n\
        adds r1, r1, r2\n\
        lsls r1, r1, #1\n\
        adds r1, r1, r7\n\
        lsls r0, r0, #1\n\
        add r0, r8\n\
        ldrh r0, [r0]\n\
        strh r0, [r1]\n\
        bl EnablePaletteSync\n\
        pop {r3}\n\
        mov r8, r3\n\
        pop {r4, r5, r6, r7}\n\
        pop {r0}\n\
        bx r0\n\
        .align 2, 0\n\
    _080AC580: .4byte gUnknown_08A294BA\n\
    _080AC584: .4byte 0x00000151\n\
        .syntax divided\n\
    ");
}

#endif

// clang-format off

u16 CONST_DATA gSprite_DifficultyMenuSelectModeBg[] =
{
    2,
    OAM0_SHAPE_64x32, OAM1_SIZE_64x32, OAM2_CHR(0x40) + OAM2_LAYER(2),
    OAM0_SHAPE_64x32, OAM1_SIZE_64x32 + OAM1_X(64), OAM2_CHR(0x48) + OAM2_LAYER(2),
};

u16 CONST_DATA gSprite_DifficultyMenuSelectModeText[] =
{
    3,
    OAM0_SHAPE_32x16 + OAM0_Y(8), OAM1_SIZE_32x16 + OAM1_X(16), OAM2_CHR(0x50) + OAM2_LAYER(2),
    OAM0_SHAPE_32x16 + OAM0_Y(8), OAM1_SIZE_32x16 + OAM1_X(48), OAM2_CHR(0x54) + OAM2_LAYER(2),
    OAM0_SHAPE_32x16 + OAM0_Y(8), OAM1_SIZE_32x16 + OAM1_X(80), OAM2_CHR(0x58) + OAM2_LAYER(2),
};

u16 CONST_DATA gSprite_08A20AC2[] =
{
    2,
    OAM0_SHAPE_64x32, OAM1_SIZE_64x32, OAM2_CHR(0x40) + OAM2_LAYER(2),
    OAM0_SHAPE_64x32, OAM1_SIZE_64x32 + OAM1_X(64), OAM2_CHR(0x48) + OAM2_LAYER(2),
};

u16 CONST_DATA gSprite_08A20AD0[] =
{
    3,
    OAM0_SHAPE_32x16 + OAM0_Y(8), OAM1_SIZE_32x16 + OAM1_X(24), OAM2_CHR(0xC0) + OAM2_LAYER(2),
    OAM0_SHAPE_32x16 + OAM0_Y(8), OAM1_SIZE_32x16 + OAM1_X(56), OAM2_CHR(0xC4) + OAM2_LAYER(2),
    OAM0_SHAPE_16x16 + OAM0_Y(8), OAM1_SIZE_16x16 + OAM1_X(88), OAM2_CHR(0xC8) + OAM2_LAYER(2),
};

u16 CONST_DATA gSprite_08A20AE4[] =
{
    2,
    OAM0_SHAPE_32x16 + OAM0_Y(8), OAM1_SIZE_32x16 + OAM1_X(32), OAM2_CHR(0xCA) + OAM2_LAYER(2),
    OAM0_SHAPE_32x16 + OAM0_Y(8), OAM1_SIZE_32x16 + OAM1_X(64), OAM2_CHR(0xCE) + OAM2_LAYER(2),
};

u16 CONST_DATA gSprite_08A20AF2[] =
{
    3,
    OAM0_SHAPE_32x16 + OAM0_Y(8), OAM1_SIZE_32x16 + OAM1_X(16), OAM2_CHR(0x90) + OAM2_LAYER(2),
    OAM0_SHAPE_32x16 + OAM0_Y(8), OAM1_SIZE_32x16 + OAM1_X(48), OAM2_CHR(0x94) + OAM2_LAYER(2),
    OAM0_SHAPE_32x16 + OAM0_Y(8), OAM1_SIZE_32x16 + OAM1_X(80), OAM2_CHR(0x98) + OAM2_LAYER(2),
};

u16 * CONST_DATA gSpriteArray_08A20B08[] =
{
    gSprite_08A20AD0,
    gSprite_08A20AE4,
    gSprite_08A20AF2,
};

u8 CONST_DATA gUnknown_08A20B14[] =
{
    0, 1, 2, 3, 3, 2, 1, 0,
};

// clang-format on

//! FE8U = 0x080AC588
void DrawDifficultySprites_Loop(struct DifficultyMenuSpritesProc * proc)
{
    int i;

    proc->unk_2a++;

    PutSpriteExt(4, 56, 4, gSprite_DifficultyMenuSelectModeBg, OAM2_PAL(2));
    PutSpriteExt(4, 56, 4, gSprite_DifficultyMenuSelectModeText, OAM2_PAL(4));

    for (i = 0; i < 3; i++)
    {
        s16 x = 8; // ?
        s16 y = 48 + i * 32;

        if (i == proc->unk_2b)
        {
            PutSpriteExt(4, x, y, gSprite_08A20AC2, OAM2_PAL(5 + (i * 2)));
        }
        else
        {
            PutSpriteExt(4, x, y, gSprite_08A20AC2, OAM2_PAL(6 + (i * 2)));
        }

        PutSpriteExt(4, x, y, gSpriteArray_08A20B08[i], OAM2_PAL(4));
    }

    sub_80AC4F8(proc->unk_2a, proc->unk_2b);
    DrawDifficultyMenuCursorMaybe(proc);

    return;
}

//! FE8U = 0x080AC680
void sub_80AC680(struct DifficultyMenuSpritesProc * proc, int param_2, int param_3)
{
    proc->unk_30 = proc->unk_2c;
    proc->unk_32 = proc->unk_2e;
    proc->unk_34 = param_2;
    proc->unk_36 = param_3;
    proc->unk_29_0 = 1;

    return;
}

// clang-format off

struct ProcCmd CONST_DATA gProcScr_DrawDifficultyMenuSprites[] =
{
    PROC_CALL(DrawDifficultySprite_Init),
    PROC_YIELD,

    PROC_REPEAT(DrawDifficultySprites_Loop),

    PROC_END,
};

// clang-format on

//! FE8U = 0x080AC698
ProcPtr StartDrawDifficultyMenuSprites(ProcPtr parent)
{
    return Proc_Start(gProcScr_DrawDifficultyMenuSprites, parent);
}
