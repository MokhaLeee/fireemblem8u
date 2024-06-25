#include "global.h"
#include "proc.h"
#include "hardware.h"
#include "anime.h"
#include "bmunit.h"
#include "ekrbattle.h"
#include "efxbattle.h"
#include "ctc.h"
#include "constants/video-banim.h"

void sub_805515C(void)
{
    return;
}

void SpellFx_Begin(void)
{
    gEfxSpellAnimExists = true;
}

void SpellFx_Finish(void)
{
    gEfxSpellAnimExists = false;
}

void SpellFx_ClearBG1Position(void)
{
    BG_SetPosition(BG_1, 0, 0);
}

void SpellFx_ClearBG1(void)
{
    CpuFastFill16(0, gBG1TilemapBuffer, 0x800);
    BG_EnableSyncByMask(BG1_SYNC_BIT);
}

void SpellFx_SetSomeColorEffect(void)
{
    SetBlendConfig(1, 0x10, 0x10, 0);
    SetBlendTargetA(0, 1, 0, 0, 0);
    SetBlendTargetB(0, 0, 1, 1, 1);
    SetWinEnable(1, 0, 0);
    SetWin0Box(0, 0, 0xF0, 0xA0);
    SetWin0Layers(1, 1, 1, 1, 1);
    SetWOutLayers(1, 0, 1, 1, 1);

    gLCDControlBuffer.wincnt.win0_enableBlend = 1;
    gLCDControlBuffer.wincnt.wout_enableBlend = 0;
    gLCDControlBuffer.bldcnt.target2_bd_on = 1;
}

void SetDefaultColorEffects_(void)
{
    SetDefaultColorEffects();
}

void StartBattleAnimHitEffectsDefault(struct Anim *anim, int type)
{
    StartBattleAnimHitEffects(anim, type, 3, 4);
}

void sub_8055288(struct Anim *anim, int type)
{
    StartBattleAnimHitEffects(anim, type, 5, 5);
}

void StartBattleAnimHitEffects(struct Anim * anim, int type, int quake_kind_normal, int quake_kind_crit)
{
    struct Anim * animact_f, * animact_b, * animtar_f, * animtar_b;
    int hp_this, hp_next;
    s16 round_act, round_tar;

    if (GetAnimPosition(anim) == EKR_POS_L)
    {
        animact_f = gAnims[2];
        animact_b = gAnims[3];
        animtar_f = gAnims[0];
        animtar_b = gAnims[1];
    }
    else
    {
        animact_f = gAnims[0];
        animact_b = gAnims[1];
        animtar_f = gAnims[2];
        animtar_b = gAnims[3];
    }

    switch (type) {
    case EKR_HITTED:
        round_act = GetRoundFlagByAnim(animact_f);
        round_tar = GetRoundFlagByAnim(animtar_f);

        if (round_act & ANIM_ROUND_POISON)
        {
            if (GetUnitEfxDebuff(animact_f) == UNIT_STATUS_NONE)
                SetUnitEfxDebuff(animact_f, UNIT_STATUS_POISON);
        }

        if (round_tar & ANIM_ROUND_POISON)
        {
            if (GetUnitEfxDebuff(animtar_f) == UNIT_STATUS_NONE)
                SetUnitEfxDebuff(animtar_f, UNIT_STATUS_POISON);
        }

        /**
         * If devil, swap the actor and target
         */
        if (round_act & ANIM_ROUND_DEVIL || round_tar & ANIM_ROUND_DEVIL)
        {
            struct Anim * swap_tmp;
            swap_tmp = animtar_f;
            animtar_f = animact_f;
            animact_f = swap_tmp;
            animtar_b = animact_b;
        }

        hp_this = gEfxHpLutOff[GetAnimPosition(animtar_f)];
        hp_next = gEfxHpLutOff[GetAnimPosition(animtar_f)];
        hp_next++;
    
        hp_this = GetEfxHp(hp_this * 2 + GetAnimPosition(animtar_f));
        hp_next = GetEfxHp(hp_next * 2 + GetAnimPosition(animtar_f));

        if (hp_this != hp_next)
        {
            NewEfxHPBar(animtar_f);

            if (CheckRoundCrit(animact_f) == 1)
                NewEfxHitQuake(animtar_f, animact_f, quake_kind_crit);
            else
                NewEfxHitQuake(animtar_f, animact_f, quake_kind_normal);
            
            NewEfxFlashHPBar(animtar_f, 0, 5);
            NewEfxFlashUnit(animtar_f, 0, 8, 0);
        }
        else
        {
            NewEfxNoDamage(animtar_f, animtar_b, 0);
        }
        break;

    case EKR_MISS:
        NewEfxAvoid(animtar_f);
        break;
    }
}

void StartBattleAnimResireHitEffects(struct Anim * anim, int type)
{
    int hp_this, hp_next, off;
    struct Anim * animact_f, * animtar_f, * animtar_b;

    if (GetAnimPosition(anim) == EKR_POS_L)
    {
        animact_f = gAnims[2];
        animtar_f = gAnims[0];
        animtar_b = gAnims[1];
    }
    else
    {
        animact_f = gAnims[0];
        animtar_f = gAnims[2];
        animtar_b = gAnims[3];
    }

    hp_this = gEfxHpLutOff[GetAnimPosition(animtar_f)];
    hp_next = gEfxHpLutOff[GetAnimPosition(animtar_f)];
    hp_next++;

    {
        hp_this = GetEfxHp(hp_this * 2 + GetAnimPosition(animtar_f));
        hp_next = GetEfxHp(hp_next * 2 + GetAnimPosition(animtar_f));
    }

    switch (type) {
    case EKR_HITTED:
        if (hp_this != hp_next)
        {
            NewEfxHPBarResire(animtar_f);

            if (CheckRoundCrit(animact_f) == 1)
                NewEfxHitQuake(animtar_f, animact_f, 4);
            else
                NewEfxHitQuake(animtar_f, animact_f, 3);
            
            NewEfxFlashHPBar(animtar_f, 0, 5);
            NewEfxFlashUnit(animtar_f, 0, 8, 0);
        }
        else
        {
            gBanimHpDrainKind = 2;
            NewEfxNoDamage(animtar_f, animtar_b, 1);
        }
        break;

    case EKR_MISS:
        NewEfxAvoid(animtar_f);
        break;
    }
}

void StartBattleAnimStatusChgHitEffects(struct Anim * anim, int type)
{
    struct Anim * anim1;

    if (GetAnimPosition(anim) == EKR_POS_L)
        anim1 = gAnims[0];
    else
        anim1 = gAnims[2];

    switch (type) {
    case EKR_HITTED:
        NewEfxStatusCHG(anim1);
        break;
    
    case EKR_MISS:
        NewEfxAvoid(anim1);
        break;
    }
}

struct Anim * EfxCreateFrontAnim(struct Anim * anim, const u32 * scr1, const u32 * scr2, const u32 * scr3, const u32 * scr4)
{
    struct Anim * anim1;

    if (gEkrDistanceType == EKR_DISTANCE_CLOSE) {
        if (GetAnimPosition(anim) == EKR_POS_L) {
            anim1 = AnimCreate(scr1, 0x78);
            anim1->oam2Base = OAM2_PAL(0x2) + OAM2_LAYER(0x2) + OAM2_CHR(VRAMOFF_BANIM_SPELL_OBJ / 0x20);
            anim1->xPosition = anim->xPosition;
            anim1->yPosition = anim->yPosition;
            return anim1;
        }
        else {
            anim1 = AnimCreate(scr2, 0x78);
            anim1->oam2Base = OAM2_PAL(0x2) + OAM2_LAYER(0x2) + OAM2_CHR(VRAMOFF_BANIM_SPELL_OBJ / 0x20);
            anim1->xPosition = anim->xPosition;
            anim1->yPosition = anim->yPosition;
            return anim1;
        }
    } else {
        if (GetAnimPosition(anim) != EKR_POS_L) {
            anim1 = AnimCreate(scr4, 0x78);
            anim1->oam2Base = OAM2_PAL(0x2) + OAM2_LAYER(0x2) + OAM2_CHR(VRAMOFF_BANIM_SPELL_OBJ / 0x20);
            anim1->xPosition = anim->xPosition;
            anim1->yPosition = anim->yPosition;
            return anim1;
        }
        else {
            anim1 = AnimCreate(scr3, 0x78);
            anim1->oam2Base = OAM2_PAL(0x2) + OAM2_LAYER(0x2) + OAM2_CHR(VRAMOFF_BANIM_SPELL_OBJ / 0x20);
            anim1->xPosition = anim->xPosition;
            anim1->yPosition = anim->yPosition;
            return anim1;
        }
    }
}

struct Anim * EfxCreateBackAnim(struct Anim * anim, const u32 * scr1, const u32 *scr2, const u32 * scr3, const u32 * scr4)
{
    struct Anim * anim1;

    if (gEkrDistanceType == EKR_DISTANCE_CLOSE) {
        if (GetAnimPosition(anim) == EKR_POS_L) {
            anim1 = AnimCreate(scr1, 0x14);
            anim1->oam2Base = OAM2_PAL(0x2) + OAM2_LAYER(0x2) + OAM2_CHR(VRAMOFF_BANIM_SPELL_OBJ / 0x20);
            anim1->xPosition = anim->xPosition;
            anim1->yPosition = anim->yPosition;
            return anim1;
        }
        else {
            anim1 = AnimCreate(scr2, 0x14);
            anim1->oam2Base = OAM2_PAL(0x2) + OAM2_LAYER(0x2) + OAM2_CHR(VRAMOFF_BANIM_SPELL_OBJ / 0x20);
            anim1->xPosition = anim->xPosition;
            anim1->yPosition = anim->yPosition;
            return anim1;
        }
    } else {
        if (GetAnimPosition(anim) != EKR_POS_L) {
            anim1 = AnimCreate(scr4, 0x14);
            anim1->oam2Base = OAM2_PAL(0x2) + OAM2_LAYER(0x2) + OAM2_CHR(VRAMOFF_BANIM_SPELL_OBJ / 0x20);
            anim1->xPosition = anim->xPosition;
            anim1->yPosition = anim->yPosition;
            return anim1;
        }
        else {
            anim1 = AnimCreate(scr3, 0x14);
            anim1->oam2Base = OAM2_PAL(0x2) + OAM2_LAYER(0x2) + OAM2_CHR(0x800 / 0x20);
            anim1->xPosition = anim->xPosition;
            anim1->yPosition = anim->yPosition;
            return anim1;
        }
    }
}

void sub_805560C(struct Anim * anim, const u16 * src1, const u16 * src2)
{
    const u16 * buf;

    if (gEkrDistanceType == EKR_DISTANCE_CLOSE)
        buf = src1;
    else
        buf = src2;

    if (GetAnimPosition(anim) == EKR_POS_L)
        EfxTmCpyBgHFlip(buf, gBG1TilemapBuffer, 30, 20, OBJPAL_BANIM_SPELL_BG, 0x100);
    else
        EfxTmCpyBG(buf, gBG1TilemapBuffer, 30, 20, OBJPAL_BANIM_SPELL_BG, 0x100);

    BG_EnableSyncByMask(BG1_SYNC_BIT);
}

void SpellFx_WriteBgMap(struct Anim * anim, const u16 * src1, const u16 * src2)
{
    u16 * buf;

    if (gEkrDistanceType == EKR_DISTANCE_CLOSE)
        LZ77UnCompWram(src1, gEkrTsaBuffer);
    else
        LZ77UnCompWram(src2, gEkrTsaBuffer);

    buf = gEkrTsaBuffer;
    if (GetAnimPosition(anim) == EKR_POS_L)
        EfxTmCpyBgHFlip(buf, gBG1TilemapBuffer, 30, 20, OBJPAL_BANIM_SPELL_BG, 0x100);
    else
        EfxTmCpyBG(buf, gBG1TilemapBuffer, 30, 20, OBJPAL_BANIM_SPELL_BG, 0x100);

    BG_EnableSyncByMask(BG1_SYNC_BIT);
}

void SpellFx_WriteBgMapUnused(u8 pos, const u16 * src1, const u16 * src2)
{
    const u16 * buf;

    if (gEkrDistanceType == EKR_DISTANCE_CLOSE)
        LZ77UnCompWram(src1, gEkrTsaBuffer);
    else
        LZ77UnCompWram(src2, gEkrTsaBuffer);

    buf = gEkrTsaBuffer;
    if (pos == EKR_POS_L)
        EfxTmCpyBgHFlip(buf, gBG1TilemapBuffer, 30, 20, OBJPAL_BANIM_SPELL_BG, 0x100);
    else
        EfxTmCpyBG(buf, gBG1TilemapBuffer, 30, 20, OBJPAL_BANIM_SPELL_BG, 0x100);

    BG_EnableSyncByMask(BG1_SYNC_BIT);
}

void SpellFx_WriteBgMapExt(struct Anim * anim, const u16 * src, int width, int height)
{
    LZ77UnCompWram(src, gEkrTsaBuffer);

    if (GetAnimPosition(anim) == EKR_POS_L)
        EfxTmCpyBgHFlip(gEkrTsaBuffer, gBG1TilemapBuffer, width, height, OBJPAL_BANIM_SPELL_BG, 0x100);
    else
        EfxTmCpyBG(gEkrTsaBuffer, gBG1TilemapBuffer, width, height, OBJPAL_BANIM_SPELL_BG, 0x100);

    BG_EnableSyncByMask(BG1_SYNC_BIT);
}

void SpellFx_RegisterObjGfx(const u16 * img, u32 size)
{
    u16 * dst = OBJ_VRAM0 + VRAMOFF_BANIM_SPELL_OBJ;
    LZ77UnCompWram(img, gBuf_Banim);
    RegisterDataMove(gBuf_Banim, dst, size);
}

void SpellFx_RegisterObjPal(const u16 * pal, u32 size)
{
    CpuFastCopy(pal, PAL_OBJ(OBJPAL_BANIM_SPELL_OBJ), size);
    EnablePaletteSync();
}

void SpellFx_RegisterBgGfx(const u16 * img, u32 size)
{
    u16 *dst = (void *)BG_VRAM + VRAMOFF_BANIM_SPELL_BG;
    LZ77UnCompWram(img, gSpellAnimBgfx);
    RegisterDataMove(gSpellAnimBgfx, dst, size);
}

void SpellFx_RegisterBgPal(const u16 * pal, u32 size)
{
    CpuFastCopy(pal, PAL_BG(OBJPAL_BANIM_SPELL_BG), size);
    EnablePaletteSync();
}

void sub_8055860(const u16 * src, u16 * dst, u32 cur, u32 len_src, u32 len_dst)
{
    u32 i;
    for (i = 0; i < len_dst; i++, cur++) {
        if (cur >= len_src)
            cur = 0;

        dst[i] = src[cur];
    }
}

void sub_805588C(const u16 * src, u16 * dst, u32 cur, u32 len_src, u32 len_dst)
{
    u32 i;
    for (i = 0; i < len_dst; i++, cur++) {
        if (cur >= len_src)
            cur = 0;

        dst[i + 0x10] = src[cur];
    }

    EnablePaletteSync();
}

void sub_80558BC(const u16 *src, u16 *dst, u32 a, u32 b, u32 c)
{
    u32 i;
    for (i = 0; i < c; i++, a++) {
        
        if (a >= b)
            a = 0;

        dst[i + 0x120] = src[a];
    }

    EnablePaletteSync();
}

s16 EfxAdvanceFrameLut(s16 *ptime, s16 *pcount, const s16 lut[])
{
    u16 uframe;
    u16 count;
    u16 time;
    int iframe;
    u16 tmp, time2, count2;
#ifndef NONMATCHING
    register u32 r6 asm("r6");
#else
    u32 r6;
#endif

    time = *ptime;
    r6 = time;
    if (r6 == 0) {
        count = *pcount;
        uframe = lut[count * 2];
        iframe = lut[count * 2];
    
        if (-1 == iframe)
            return -1;
        
        if (-6 == iframe)
            return -6;
    
        if (-5 == iframe)
            return -5;
        
        if (-4 == iframe)
            return -4;
        
        if (-2 == iframe) {
            *pcount = r6;
            uframe = lut[0];
        } else if (-3 == iframe) {
            *pcount = count - 1;
            tmp = *pcount;
            uframe = lut[tmp * 2];
        }
    
        count2 = *pcount;
        time2 = lut[count2 * 2 + 1];
        ++*(vs16 *)pcount;
        *ptime = time2 - 1;
        return uframe;
    } else {
        --*ptime;
        return -7;
    }
}

void sub_8055980(void)
{
    gUnknown_0201775C = true;
}

int EfxGetCamMovDuration(void)
{
    if (gEkrDistanceType == EKR_DISTANCE_FARFAR)
        return 0x18;
    else if (gEkrDistanceType == EKR_DISTANCE_FAR)
        return 0x10;
    else
        return 0x0;
}

void sub_80559B0(u32 val)
{
    u16 * dst = gTmA_Banim;
    CpuFill32(val, dst, sizeof(gTmA_Banim));
}

void EfxTmFill(u32 val)
{
    u16 * dst = gTmB_Banim;
    CpuFill32(val, dst, sizeof(gTmB_Banim));
}

void SetEkrFrontAnimPostion(int pos, s16 x, s16 y)
{
    struct Anim * anim;
    u16 ux = x;
    u16 uy = y;

    if (EKR_POS_L == pos) {
        anim = gAnims[0];
        anim->xPosition = ux;
        anim->yPosition = uy;

        anim = gAnims[1];
        anim->xPosition = ux;
        anim->yPosition = uy;
    } else {
        anim = gAnims[2];
        anim->xPosition = ux;
        anim->yPosition = uy;

        anim = gAnims[3];
        anim->xPosition = ux;
        anim->yPosition = uy;
    }
}

int Get0201FAC8(void)
{
    return gUnknown_0201FAC8;
}

void Set0201FAC8(int a)
{
    gUnknown_0201FAC8 = a;
}

CONST_DATA struct ProcCmd ProcScr_efxSPDQuake[] = {
    PROC_NAME("efxSPDQuake"),
    PROC_REPEAT(sub_8055A64),
    PROC_REPEAT(sub_8055B38),
    PROC_END
};

void NewEfxspdquake(struct Anim *anim)
{
    struct ProcEfxSpdQuake *proc;
    proc = Proc_Start(ProcScr_efxSPDQuake, PROC_TREE_1);
    proc->anim = anim;
    proc->timer = 0;
    proc->vecs = gEfxQuakeVecs;
}

void sub_8055A64(struct ProcEfxSpdQuake *proc)
{
    const s16 * vecs = proc->vecs;
    s16 dx = vecs[proc->timer * 2 + 0];
    s16 dy = vecs[proc->timer * 2 + 1];
    struct Anim *anim;

    anim = gAnims[0];
    anim->xPosition += dx;
    anim->yPosition += dy;
    anim = gAnims[1];
    anim->xPosition += dx;
    anim->yPosition += dy;
    anim = gAnims[2];
    anim->xPosition += dx;
    anim->yPosition += dy;
    anim = gAnims[3];
    anim->xPosition += dx;
    anim->yPosition += dy;

    gLCDControlBuffer.bgoffset[2].y -= dx;
    gLCDControlBuffer.bgoffset[2].x -= dy;

    if (Get0201FAC8() == 0) {
        Proc_Break(proc);
        return;
    }

    if (Get0201FAC8() == 2) {
        proc->vecs = gEfxQuakeVecs2;
        proc->timer = 0;
        Set0201FAC8(3);
        return;
    }

    ++proc->timer;
    if (vecs[proc->timer * 2 + 0] == 0x7FFF)
        proc->timer = 0;
}

void sub_8055B38(struct ProcEfxSpdQuake *proc)
{
    int x1 = gEkrXPosReal[0] - gEkrBgPosition;
    int x2 = gEkrYPosReal[0];
    int y1 = gEkrXPosReal[1] - gEkrBgPosition;
    int y2 = gEkrYPosReal[1];

    SetEkrFrontAnimPostion(EKR_POS_L, x1, x2);
    SetEkrFrontAnimPostion(EKR_POS_R, y1, y2);

    switch (gEkrDistanceType) {
    case EKR_DISTANCE_CLOSE:
        BG_SetPosition(BG_2, 0, 0);
        break;
    
    case EKR_DISTANCE_FAR:
    case EKR_DISTANCE_FARFAR:
        sub_8053618(gEkrBgPosition);
        break;
    }

    Proc_Break(proc);
}
