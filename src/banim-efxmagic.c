#include "global.h"
#include "anime.h"
#include "ekrbattle.h"
#include "efxbattle.h"
#include "efxmagic.h"
#include "hardware.h"

CONST_DATA SpellAnimFunc gEkrSpellAnimLut[] = {
    StartSpellAnimDummy,
    StartSpellAnimHandAxe,
    StartSpellAnimArrow,
    StartSpellAnimJavelin,
    sub_805C44C,
    sub_805C4A8,
    sub_805C504,
    sub_805C560,
    sub_805C5BC,
    sub_805C618,
    sub_805C674,
    sub_805C6D0,
    sub_805C72C,
    sub_805C788,
    StartSpellAnimSong,
    StartSpellAnimDance,
    sub_805CD0C,
    nullsub_42,
    sub_805CEC8,
    StartSpellAnimFireBreath,
    StartSpellAnimIceBreath,
    StartSpellAnimDarkBreath,
    StartSpellAnimFire,
    StartSpellAnimElfire,
    nullsub_41,
    StartSpellAnimThunder,
    sub_805E754,
    StartSpellAnimFimbulvetr,
    sub_805EB98,
    sub_805EED8,
    StartSpellAnimNosferatu,
    sub_805F8B4,
    StartSpellAnimPurge,
    sub_8060284,
    StartSpellAnimDivine,
    nullsub_40,
    sub_806028C,
    StartSpellAnimFenrir,
    StartSpellAnimHeal,
    StartSpellAnimMend,
    StartSpellAnimRecover,
    sub_8061420,
    sub_8061C18,
    sub_8061C48,
    sub_80620EC,
    StartSpellAnimSilence,
    StartSpellAnimSleep,
    StartSpellAnimHammerne,
    StartSpellAnimBerserk,
    sub_8063214,
    (void *)NULL,
    StartSpellAnimShine,
    StartSpellAnimLuna,
    sub_8064308,
    nullsub_51,
    StartSpellAnimAura,
    sub_8065490,
    nullsub_53,
    sub_8065634,
    sub_8065670,
    sub_80656AC,
    sub_80656E8,
    StartSpellAnimStone,
    StartSpellAnimIvaldi,
    sub_8066514,
    sub_8068B80,
    StartSpellAnimCrimsonEye,
    StartSpellAnimEvilEye,
    sub_806AEF4,
    sub_806B4F8,
    StartSpellAnimNaglfar,
    sub_80687E4,
    (void *)NULL
};

u32 FramScr_Unk5D4F84[] = {
    0x1, 0x0, 0x0
};

u32 FramScr_Unk5D4F90[] = {
    0x85D4F85, /* (uintptr_t)FramScr_Unk5D4F84 + 1 */
    0x80000000
};

void StartSpellAnimation(struct Anim *anim)
{
    s16 index = gEkrSpellAnimIndex[GetAnimPosition(anim)];

#if BUGFIX
    if (gEkrSpellAnimLut[index](anim) == NULL)
        return;
#endif

    gEkrSpellAnimLut[index](anim);
}

void sub_805B3FC(void)
{
    return;
}

CONST_DATA struct ProcCmd ProcScr_efxRestRST[] = {
    PROC_NAME("efxRestRST"),
    PROC_SET_END_CB(sub_805B444),
    PROC_REPEAT(efxRestRSTMain),
    PROC_END
};

ProcPtr NewefxRestRST(struct Anim *anim, int unk44, int unk48, int frame, int unk50)
{
    struct ProcEfx *proc;

    gEfxBgSemaphore++;
    proc = Proc_Start(ProcScr_efxRestRST, PROC_TREE_3);

    proc->anim = anim;
    proc->timer = 0,
    proc->unk2E = 0;
    proc->unk44 = unk44;
    proc->unk48 = unk48;
    proc->unk4C = frame;
    proc->unk50 = unk50;

    return proc;
}

void sub_805B444(struct ProcEfx *proc)
{
    gEfxBgSemaphore--;
}

void efxRestRSTMain(struct ProcEfx *proc)
{
    u8 val1;
    int val2;
    u32 i;
    u16 *buf;

    if (gEkrBg1ScrollFlip == 0)
        buf = gpEkrLvupBg1ScrollOffsetTable2;
    else
        buf = gpEkrLvupBg1ScrollOffsetTable1;

    val1 = proc->unk2E;
    proc->unk2E += proc->unk50;

    for (i = 0; i < 0x78; buf++, i++) {
        val1 += proc->unk48;
        *buf = (((gUnknown_0875879C[val1] * proc->unk4C) << 8) >> 0x10) + gLCDControlBuffer.bgoffset[1].x;
    }

    if (++proc->timer == proc->unk44)
        Proc_End(proc);
}

CONST_DATA struct ProcCmd ProcScr_efxTwobaiRST[] = {
    PROC_NAME("efxTwobaiRST"),
    PROC_REPEAT(EfxTwobaiRSTMain),
    PROC_END
};

void NewEfxTwobaiRST(struct Anim *anim, int unk44)
{
    u32 i, j;
    u16 *buf;
    struct ProcEfx *proc;
    proc = Proc_Start(ProcScr_efxTwobaiRST, PROC_TREE_3);

    proc->anim = anim;
    proc->timer = 0;
    proc->unk2E = 0;
    proc->unk44 = unk44;

    for (i = 0; i < 0x78; i++)
        gpEkrLvupBg1ScrollOffsetTable1[i] = -(i / 2);

    buf = gpEkrLvupBg1ScrollOffsetTable2;
    for (j = 0; j < 0x78; buf++, j++)
        *buf = -(j / 2);
}

void EfxTwobaiRSTMain(struct ProcEfx *proc)
{
    if (++proc->timer == proc->unk44)
        Proc_Break(proc);
}

CONST_DATA struct ProcCmd ProcScr_DummvRST[] = {
    PROC_NAME("efxDummyRST"),
    PROC_SET_END_CB(sub_805B584),
    PROC_REPEAT(DummvRSTMain),
    PROC_END
};

void NewDummvRST(struct Anim *anim, int unk44)
{
    struct ProcEfx *proc;

    gEfxBgSemaphore++;
    proc = Proc_Start(ProcScr_DummvRST, PROC_TREE_3);

    proc->anim = anim;
    proc->timer = 0;
    proc->unk2E = 0;
    proc->unk44 = unk44;
}

void sub_805B584(void)
{
    gEfxBgSemaphore--;
}

void DummvRSTMain(struct ProcEfx *proc)
{
    u32 i;
    u16 *buf;

    if (gEkrBg1ScrollFlip == 0)
        buf = gpEkrLvupBg1ScrollOffsetTable2;
    else
        buf = gpEkrLvupBg1ScrollOffsetTable1;

    for (i = 0; i < 0x78; i++)
        buf[i] = gLCDControlBuffer.bgoffset[1].x;

    if (++proc->timer == proc->unk44)
        Proc_End(proc);
}

CONST_DATA struct ProcCmd ProcScr_EfxRestWIN[] = {
    PROC_NAME("efxRestWIN"),
    PROC_REPEAT(EfxRestWINMain),
    PROC_END
};

void NewEfxRestWIN(struct Anim *anim, int unk44, void *unk54, void *unk58)
{
    struct ProcEfx *proc;

    gEfxBgSemaphore++;
    proc = Proc_Start(ProcScr_EfxRestWIN, PROC_TREE_3);

    proc->anim = anim;
    proc->timer = 0;
    proc->unk2E = 0;
    proc->unk44 = unk44;
    proc->unk54 = unk54;
    proc->unk58 = unk58;

    if (GetAnimPosition(GetAnimAnotherSide(anim)) == EKR_POS_L)
        proc->unk32 = 0xFFB8;
    else
        proc->unk32 = 0xFFF8;

    if (gEkrDistanceType != EKR_DISTANCE_CLOSE) {
        if (GetAnimPosition(anim) == EKR_POS_L)
            proc->unk32 += 0x18;
        else
            proc->unk32 -= 0x18;
    }
}

void EfxRestWINMain(struct ProcEfx *proc)
{
    u32 i;
    u16 val2;
    u16 *buf;
    s16 *buf2, *base;

    if (gEkrBg2ScrollFlip == 0)
        buf = gpEkrLvupBg2ScrollOffsetTable2;
    else
        buf = gpEkrLvupBg2ScrollOffsetTable1;

    base = proc->unk54;
    val2 = base[proc->unk2E];
    buf2 = proc->unk58[val2];

    if (val2 != 0xFFFF) {
        proc->unk2E++;
        for (i = 0; i < 0x78; buf2 = buf2 + 2, buf++, i++) {
            if (buf2[0] == 0x7FFF)
                buf[0] = 0;
            else {
                s16 tmp3 = buf2[0] + proc->unk32;
                s16 tmp4 = buf2[1] + proc->unk32;
                buf[0] = (tmp3 * 0x100) | tmp4;
            }
        }
    } else {
        for (i = 0; i < 0x78; i++)
            *buf++ = 0;
    }

    proc->timer++;
    if (proc->timer == proc->unk44) {
        gEfxBgSemaphore--;
        Proc_Break(proc);
    }
}

void EfxMagicHBlank_805B724(void)
{
    if (!(REG_DISPSTAT & DISPSTAT_VBLANK))
        REG_BG1HOFS = *gpEkrLvupBg1ScrollOffset++;
}

void EfxMagicHBlank_805B750(void)
{
    if (!(REG_DISPSTAT & DISPSTAT_VBLANK))
        REG_BG1VOFS = *gpEkrLvupBg1ScrollOffset++;
}

void EfxMagicHBlank_805B77C(void)
{
    if (!(REG_DISPSTAT & DISPSTAT_VBLANK)) {
        REG_BG2VOFS = *gpEkrLvupBg2ScrollOffset++;
        REG_BG1HOFS = *gpEkrLvupBg1ScrollOffset++;
    }
}

void EfxMagicHBlank_805B7BC(void)
{
    if (!(REG_DISPSTAT & DISPSTAT_VBLANK)) {
        REG_BG2VOFS = *gpEkrLvupBg2ScrollOffset++;
        REG_BG1VOFS = *gpEkrLvupBg1ScrollOffset++;
    }
}

void EfxMagicHBlank_805B7FC(void)
{
    if (!(REG_DISPSTAT & DISPSTAT_VBLANK)) {
        REG_BG2VOFS = *gpEkrLvupBg2ScrollOffset++;
    }
}

CONST_DATA struct ProcCmd ProcScr_EfxRestWINH[] = {
    PROC_NAME("efxRestWINH"),
    PROC_REPEAT(sub_805B94C),
    PROC_REPEAT(sub_805B958),
    PROC_END
};

void NewEfxRestWINH(struct Anim *anim, int a, u16 b, u32 c)
{
    u32 i;
    u16 *buf;
    struct ProcEfx *proc;

    gEfxBgSemaphore++;

    if (c == 2) {
        buf = gpEkrLvupBg2ScrollOffsetTable1;
        for (i = 0; i < 0xA0; buf++, i++)
            *buf = b;

        buf = gpEkrLvupBg2ScrollOffsetTable2;
        for (i = 0; i < 0xA0; buf++, i++)
            *buf = b;

        gEkrBg2ScrollFlip = 0;
        gpEkrLvupBg2ScrollOffsetStart = gpEkrLvupBg2ScrollOffsetTable1;
        gpEkrLvupBg2ScrollOffset = gpEkrLvupBg2ScrollOffsetTable1;
    }

    buf = gpEkrLvupBg1ScrollOffsetTable1;
    for (i = 0; i < 0xA0; buf++, i++)
        *buf = b;

    buf = gpEkrLvupBg1ScrollOffsetTable2;
    for (i = 0; i < 0xA0; buf++, i++)
        *buf = b;

    gEkrBg1ScrollFlip = 0;
    gpEkrLvupBg1ScrollOffset = gpEkrLvupBg1ScrollOffsetStart = gpEkrLvupBg1ScrollOffsetTable1;

    switch (c) {
    case 0:
        SetPrimaryHBlankHandler(EfxMagicHBlank_805B724);
        break;

    case 1:
        SetPrimaryHBlankHandler(EfxMagicHBlank_805B750);
        break;

    case 2:
        SetPrimaryHBlankHandler(EfxMagicHBlank_805B750);
        break;
    }

    proc = Proc_Start(ProcScr_EfxRestWINH, PROC_TREE_VSYNC);
    proc->anim = anim;
    proc->timer = 0;
    proc->unk44 = a;
    proc->unk48 = c;
}

void NewEfxRestWINH_(struct Anim *anim, int a, int b)
{
    NewEfxRestWINH(anim, a, 0, b);
}

void sub_805B94C(ProcPtr proc)
{
    Proc_Break(proc);
}

void sub_805B958(struct ProcEfx *proc)
{
    if (gBmSt.sync_hardware != false) {
        if (proc->unk48 == 0x2) {
            if (gEkrBg2ScrollFlip == 1) {
                gEkrBg2ScrollFlip = 0;
                gpEkrLvupBg2ScrollOffsetStart = gpEkrLvupBg2ScrollOffsetTable1;
            } else {
                gEkrBg2ScrollFlip = 1;
                gpEkrLvupBg2ScrollOffsetStart = gpEkrLvupBg2ScrollOffsetTable2;
            }
        }

        if (gEkrBg1ScrollFlip == 1) {
            gEkrBg1ScrollFlip = 0;
            gpEkrLvupBg1ScrollOffsetStart = gpEkrLvupBg1ScrollOffsetTable1;
        } else {
            gEkrBg1ScrollFlip = 1;
            gpEkrLvupBg1ScrollOffsetStart = gpEkrLvupBg1ScrollOffsetTable2;
        }
    }

    gpEkrLvupBg2ScrollOffset = gpEkrLvupBg2ScrollOffsetStart;
    gpEkrLvupBg1ScrollOffset = gpEkrLvupBg1ScrollOffsetStart;

    if (++proc->timer == proc->unk44) {
        gEfxBgSemaphore--;
        SetPrimaryHBlankHandler(NULL);
        Proc_Break(proc);
    }
}

void NewEfxALPHA(struct Anim *anim, int a, int b, int c, int d, int e)
{
    struct ProcEfx *proc;
    gEfxBgSemaphore++;
    proc = Proc_Start(ProcScr_efxALPHA, PROC_TREE_3);
    proc->anim = anim;
    proc->timer = 0;
    proc->unk2E = a;
    proc->unk30 = a + b;
    proc->unk44 = c;
    proc->unk48 = d;
    proc->unk4C = e;
}
