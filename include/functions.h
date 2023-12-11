#ifndef GUARD_FUNCTIONS_H
#define GUARD_FUNCTIONS_H

#include "gba/types.h"
#include "proc.h"
#include "types.h"

// ??? RomHeaderNintendoLogo(???);
// ??? crt0(???);
void IrqMain(void);
// ??? ARMCodeToCopy_Start(???);
// ??? ColorFadeTick(???);
// ??? ClearOam(???);
// ??? Checksum32(???);
// ??? TmFillRect(???);
// ??? sub_80003E0(???);
// ??? sub_800043C(???);
// ??? PutOamHi(???);
// ??? PutOamLo(???);
// ??? DrawGlyph(???);
// ??? sub_8000620(???);
// ??? DecodeString(???);
// ??? MapFloodCoreStep(???);
// ??? MapFloodCore(???);
// ??? ARMCodeToCopy_End(???);
// ??? AgbMain(???);
// ??? sub_8000B10(???);
// ??? StoreIRQToIRAM(???);
// ??? DummyIRQRoutine(???);
void SetIRQHandler(int index, void *irq);

void EnableKeyComboResetEN();
void DisableKeyComboResetEN();
int CheckCanKeyComboReset(void);
u32 GetGameClock(void);
void SetGameTime(int newTime);
void IncrementGameClock(void);
u8 FormatTime();

void StoreRoutinesToIRAM();
void DrawGlyphRam();
void CallARM_DecompText(const char *, char *);
void CallARM_PushToSecondaryOAM(int a, int b, const u16 *c, int d);
void CallARM_PushToPrimaryOAM(int x, int y, const u16* data, int oam2base);
// ??? CallARM_Func5(???);
void CallARM_FillMovementMap(void);
// ??? ResetIconGraphics_(???);
// ??? ResetIconGraphics(???);
// ??? LoadIconPalettes(???);
// ??? LoadIconPalette(???);
// ??? sub_80035EC(???);
// ??? GetIconGfxTileIndex(???);
// ??? GetIconGfxIndex(???);
// ??? GetIconTileIndex(???);
// ??? DrawIcon(???);
// ??? ClearIconGfx(???);
// ??? LoadIconObjectGraphics(???);
// ??? sub_8008FB4(???);
// ??? nullsub_15(???);
// ??? sub_800903C(???);
// ??? sub_800904C(???);
// ??? sub_8009100(???);
void sub_800915C(int, int, int, int, int, int, int, ProcPtr);
// ??? sub_8009198(???);
// ??? sub_8009200(???);
// ??? sub_8009250(???);
const char * GetStrPrefix(s8 * str, bool capital);
void InsertPrefix(char * str, const char * prefix, bool capital);
void SetMsgTerminator(signed char * str);
char *GetStringFromIndex(int index);
char *GetStringFromIndexInBuffer(int index, char *buffer);
char *StringInsertSpecialPrefixByCtrl(void);
char* StrInsertTact(void);

// ??? ReputConvoBg_unused(???);
void ResetDialogueScreen(void);
// ??? EventShinningCursorAdvance(???);
void ShinningEventCursor(int lo, int hi, int cur);
// ??? ParsePopupInstAndGetLen(???);
// ??? GeneratePopupText(???);
// ??? PopupProc_Init(???);
// ??? PopupProc_PrepareGfx(???);
// ??? PopupProc_MaybeSetVolume(???);
// ??? PopupProc_PlaySound(???);
// ??? PopupProc_MaybeResetVolume(???);
// ??? PopupIconUpdateProc_Loop(???);
// ??? PopupProc_GfxDraw(???);
// ??? PopupProc_WaitForPress(???);
// ??? PopupProc_GfxClear(???);
// ??? SetPopupUnit(???);
// ??? SetPopupItem(???);
// ??? SetPopupNumber(???);
// ??? NewPopup_Simple(???);
// ??? NewPopupCore(???);
// ??? NewPopup_ItemGot_unused(???);
// ??? ItemGot_DisplayLePopup(???);
// ??? ItemGot_GotLeItem(???);
// ??? NewPopup_ItemGot(???);
// ??? NewPopup_GeneralItemGot(???);
// ??? NewGoldNumPopup_unused(???);
// ??? NewNumberPopup_unused(???);
// ??? NewPopup_GoldGot(???);
void NewPopup_ItemStealing(u16 weapon, ProcPtr parent);
void NewPopup_WeaponBroke(u16 weapon, ProcPtr parent);
void NewPopup_WRankIncrease(u16 weapon, ProcPtr parent);
// ??? NewPopup_NewAlly(???);
// ??? NewPopup_VerySimple(???);
// ??? BrownTextBox_Loop(???);
// ??? nullsub_44(???);
// ??? sub_8011A1C(???);
// ??? sub_8011A48(???);
// ??? sub_8011AA0(???);
// ??? sub_8011AF4(???);
// ??? sub_8011B4C(???);
// ??? sub_8011B90(???);
// ??? StartBrownTextBoxCore(???);
void StartBrownTextBox(int, s16, s16, ProcPtr);
void ChangeUnitAi(struct Unit *, u8, u8, u8);
void ChangeAiForCharacter(u8, u8, u8, u8);
// ??? ChangeAiForPositions(???);
// ??? EvtBattleGenerateRealInternal(???);
// ??? EvtBattleGenerateReal(???);
// ??? EvtBattleGenerateBallistaReal(???);
// ??? StartScriptBattleAnim(???);
void StartEventBattle(struct Unit *, struct Unit *, u8, s8, u16, struct BattleHit *, s8);
void EventBattleReloadBmStatus(void);
void sub_8012270(struct Unit *, u8, u8);
void sub_8012324(void);
int GetChapterAllyUnitCount();
void InitPlayerUnitPositionsForPrepScreen(void);
void sub_801240C();
// ??? sub_801247C(???);
// ??? sub_8012578(???);
void sub_80125C0(struct UnitDefinition*);
void StoreUnitWordStructs(void);
void LoadUnitWordStructs(void);
// ??? sub_80126BC(???);
void sub_80127C4(void);
void sub_8012824(void);
void sub_8012890(int, int, int, int, int, ProcPtr);
void StartEventWarpAnim_ret(ProcPtr parent, s16 x, s16 y, s8 kind, s8 flag);
s8 EventWarpAnimExists_ret(void);
// ??? sub_8012984(???);
// ??? sub_8012A2C(???);
// ??? sub_8012A64(???);
// ??? sub_8012AC0(???);
// ??? sub_8012AE0(???);
// ??? sub_8012B24(???);
// ??? sub_8012B3C(???);
// ??? sub_8012B84(???);
// ??? sub_8012B9C(???);
void sub_8012C34(u8 a, u8 b, s8 play_sound);
void sub_8012C88(void);
// ??? StoneShatterEvent_OnEnd(???);
void StartStoneShatterAnim(struct Unit *, ProcPtr);

void DeleteAllPaletteAnimator(void);
// ??? NewPaletteAnimator(???);
void sub_80144CC(const u16 * pal, int off, int len, int unk, ProcPtr proc);
void NewPaletteAnimator_(const u16 * pal, int off, int len, int unk, ProcPtr proc);
// ??? sub_80144FC(???);
void sub_8014560(u16 * tilemap, int x, int y, int tileref, int, int);
// ??? sub_80145C8(???);
// ??? sub_80146A0(???);
// ??? sub_801474C(???);
// ??? sub_8014804(???);
// ??? FutureCall2_Loop(???);
// ??? FutureCall_Loop(???);
void SetupFutureCall2(void*, int);
void SetupFutureCall(void(*func)(int), int arg, int time);
// ??? sub_8014904(???);
// ??? sub_801491C(???);
// ??? sub_8014930(???);
void sub_8014944(ProcPtr);
// ??? sub_8014968(???);
void VramCopy(u8 *src, u8 *dst, int size);
// ??? sub_80149C4(???);
void PutTmLinear(u16 *src, u16 *dst, int size, u16 tileref);
// ??? GetTmOffsetById(???);
// ??? sub_8014A78(???);
int RerangeSomething(int);
void PlaySeSpacial(unsigned, int);
void sub_8014B88(int, int);
// ??? sub_8014BA0(???);
void sub_8014BC0(ProcPtr, int);
void sub_8014BD0(ProcPtr, int);
// ??? sub_8014BE0(???);
// ??? sub_8014C38(???);
// ??? sub_8014C54(???);
// ??? sub_8014CA4(???);
// ??? sub_8014CC4(???);
// ??? sub_8014DA8(???);
// ??? sub_8014E3C(???);
// ??? sub_8014E74(???);
// ??? sub_8014EA8(???);
// ??? sub_8014EC4(???);
// ??? sub_8014EDC(???);
// ??? sub_8014EF4(???);
// ??? sub_8014F10(???);
// ??? sub_8014F30(???);
// ??? sub_8014F50(???);
// ??? sub_8014F9C(???);
// ??? sub_801510C(???);
// ??? sub_801512C(???);
// ??? sub_8015160(???);
// ??? sub_80151AC(???);
// ??? sub_80151F4(???);
// ??? sub_801523C(???);
// ??? sub_8015240(???);
// ??? sub_8015264(???);
// ??? sub_801529C(???);
int GetSomeFacingDirection(int, int, int, int);
// ??? Make6CMOVEUNITForUnitBeingRescued(???);
// ??? Loop6C_KOIDO(???);
void Make6CKOIDO(struct Unit*, int, int, ProcPtr);
void Make6CKOIDOAMM(struct Unit*, int);
// ??? bmxfade_init(???);
// ??? bmxfade_loop(???);
// ??? Destruct6CBMXFADE(???);
void NewBMXFADE(s8 strongLock);
void MakeNew6CBMXFADE2(s8 lock_game, ProcPtr parent);
bool8 DoesBMXFADEExist(void);
// ??? GetPlayerStartCursorPosition(???);
// ??? GetEnemyStartCursorPosition(???);
// ??? ProcFun_ResetCursorPosition(???);
// ??? ADJUSTFROMXI_MoveCameraOnSomeUnit(???);
int ConvoyMenuProc_StarMenu(ProcPtr proc);
int ConvoyMenuProc_MenuEnd(ProcPtr proc);
int ConvoyMenuProc_MaybeStartSelectConvoyItem(ProcPtr proc);
int ConvoyMenuProc_SendToConvoyReal(ProcPtr proc);
void ConvoyMenuProc_SetupActiveUnit(ProcPtr proc);
void ConvoyMenuProc_ExecBootlegPopup(ProcPtr proc);
// ??? HandleNewItemGetFromDrop(???);
// ??? SendToConvoyMenu_Draw(???);
// ??? MenuCommand_DrawExtraItem(???);
// ??? SendToConvoyMenu_NormalEffect(???);
// ??? sub_801E1DC(???);
// ??? sub_801E1FC(???);
// ??? sub_801E250(???);
// ??? sub_801E294(???);
void UpdateMapViewWithFog(int vision_range);
// ??? FastUpdateMapViewWithFog(???);
void FillWarpRangeMap(struct Unit* caster, struct Unit* target);

// ??? PrepUnitSwapProc_Init(???);
// ??? PrepUnitSwapProc_MainLoop(???);
// ??? PrepUnitSwapProc_OnEnd(???);
void StartPrepUnitSwap(ProcPtr parent, struct Unit *unit, int x_dest, int y_dest);
int PrepUnitSwapProcExits();
// ??? PhaseIntroVMatchHi(???);
// ??? PhaseIntroVMatchMid(???);
// ??? PhaseIntroVMatchLo(???);
// ??? PhaseIntroText_PutText(???);
// ??? PhaseIntroInitText(???);
// ??? PhaseIntroText_InLoop(???);
// ??? PhaseIntroText_OutLoop(???);
// ??? PhaseIntroClearText(???);
// ??? PhaseIntroUnk_Init(???);
// ??? PhaseIntroUnk_Loop(???);
// ??? PhaseIntroSquares_Init(???);
// ??? PhaseIntroSquares_InLoop(???);
// ??? PhaseIntroSquares_OutLoop(???);
// ??? PhaseIntroBlendBox_Init(???);
// ??? PhaseIntroBlendBox_InLoop(???);
// ??? PhaseIntroBlendBox_OutLoop(???);
// ??? PhaseIntro_EndIfNoUnits(???);
// ??? PhaseIntro_InitGraphics(???);
// ??? PhaseIntro_InitDisp(???);
// ??? PhaseIntro_WaitForEnd(???);
void ChangeActiveUnitFacing(int xLook, int yLook);
// ??? GasTrapSpriteAnim_Init(???);
// ??? StartGasTrapAnim(???);
// ??? FireTrapSpriteAnim_Init(???);
// ??? StartFireTrapAnim(???);
// ??? StartFireTrapAnim2(???);
// ??? ProcUnkTrapAnimFunc(???);
// ??? StartUnkTrapAnim(???);
// ??? ArrowTrapSpriteAnim_Init(???);
// ??? StartArrowTrapAnim(???);
// ??? ProcShowMapChange_MoveCamera(???);
// ??? ProcShowMapChange_UpdateGame(???);
// ??? StartShowMapChangeAnim(???);
// ??? PikeTrapSpriteAnim_Init(???);
// ??? sub_801F978(???);
// ??? ProcPopup2_Init(???);
// ??? ProcPopup2_Loop(???);
// ??? NewPopup2_PlanA(???);
// ??? NewPopup2_PlanB(???);
// ??? NewPopup2_PlanC(???);
// ??? NewPopup2_PlanD(???);
void NewPopup2_DropItem(ProcPtr, int);
void NewPopup2_SendItem(ProcPtr, int);
void PutScreenFogEffect(void);
void PutScreenFogEffectOverlayed(void);
// ??? GameOverScreen_RandomScroll_Init(???);
// ??? GameOverScreen_RandomScroll_Loop(???);
// ??? GameOverScreenHBlank(???);
// ??? GameOverScreen_Init(???);
// ??? GameOverScreen_LoopFadeIn(???);
// ??? GameOverScreen_BeginIdle(???);
// ??? GameOverScreen_LoopIdle(???);
// ??? GameOverScreen_BeginFadeOut(???);
// ??? GameOverScreen_LoopFadeOut(???);
// ??? GameOverScreen_End(???);
void StartGameOverScreen(ProcPtr parent);
// ??? ProcLightRuneAnim_Init(???);
// ??? ProcLightRuneAnim_Loop(???);
// ??? ProcBmFx_CommonEnd(???);
void StartLightRuneAnim(ProcPtr parent, int x, int y);
// ??? ProcLightRuneAnim2_Init(???);
// ??? ProcLightRuneAnim2_Loop(???);
// ??? ProcLightRuneAnim2_End(???);
void StartLightRuneAnim2(ProcPtr parent, int x, int y);
// ??? ProcLightRuneAnim3_Init(???);
// ??? ProcLightRuneAnim3_Loop(???);
// ??? ProcLightRuneAnim3_End(???);
void StartLightRuneAnim3(ProcPtr parent, int x, int y);
// ??? ProcDanceAnim_Init(???);
// ??? ProcDanceAnim_Loop(???);
// ??? ProcDanceAnim_ResetTimer(???);
// ??? ProcDanceAnim_Loop_Blend(???);
void StartDanceringAnim(ProcPtr parent);
// ??? ProcEventWrapAnim_Init(???);
// ??? ProcEventWrapAnim_Loop(???);
// ??? ProcEventWrapAnim_End(???);
// ??? StartEventWarpAnim(???);
// ??? StartEventWarpAnim_unused(???);
// ??? EventWarpAnimExists(???);
// ??? ProcWhiteCircleFx_Loop(???);
// ??? ProcWhiteCircleFx_End(???);
// ??? StartCircularFadeAnim(???);
// ??? ProcEmitSingleStar_Init(???);
// ??? ProcEmitSingleStar_Loop(???);
// ??? Calcs_Interpolate(???);
// ??? LetsEmitStars(???);
// ??? StarsBlinking(???);
// ??? StartEmitStarsAnim(???);
// ??? ClearEmitedStars(???);
// ??? EndEmitStars(???);
// ??? ProcMineFxFunc(???);
// ??? StartMineAnim(???);
// ??? ChapterIntroTitle_InitBgImg(???);
// ??? ChapterIntroTitle_ResetBg(???);
// ??? ChapterIntroTitle_End(???);
// ??? GetPhaseAbleUnitCount(???);
u32 GetPartyGoldAmount(void);
void SetPartyGoldAmount(s32);
void sub_8024E20(u32);
struct Proc* StartTradeMenu(struct Unit* lUnit, struct Unit* rUnit, int unused);
void InitPlayConfig(int isDifficult, s8);
char* GetTacticianName(void);
void SetTacticianName(const char* newName);
void InitUnitStack(void* buff);
void PushUnit(struct Unit* unit);
void LoadPlayerUnitsFromUnitStack();
void LoadPlayerUnitsFromUnitStack2();
// ??? sub_8032E28(???);
// ??? sub_80330D4(???);
// ??? sub_803318C(???);
// ??? CanUnitUseVisit(???);
// ??? CanUnitUseSeize(???);
// ??? CanUnitUseAttack(???);
// ??? CanActiveUnitUseRescue(???);
// ??? CanActiveUnitUseTrade(???);
// ??? GetUnitCommandUseFlags(???);
// ??? sub_80344E8(???);
// ??? sub_8034514(???);
// ??? sub_8034550(???);

u32 sub_8042DC8(void const * src, void * dst);
// ??? sub_8042DE8(???);
// ??? sub_8042E0C(???);
// ??? sub_8042E2C(???);
// ??? sub_8042E78(???);
// ??? sub_8042E88(???);
// ??? CheckInLinkArena(???);    <!> This function is defined as different types by files, maybe a bug.
void sub_8042EA8();
// ??? sub_8042EB4(???);
// ??? sub_8042EF0(???);
// ??? sub_8042F44(???);
// ??? sub_8042F58(???);
// ??? sub_8042F84(???);
// ??? sub_8042F98(???);
// ??? sub_8042FE0(???);
// ??? sub_8042FFC(???);
// ??? sub_804302C(???);
// ??? sub_804303C(???);
// ??? sub_8043044(???);
// ??? sub_804309C(???);
// ??? sub_8043100(???);
// ??? sub_8043164(???);
// ??? sub_80431B4(???);
// ??? sub_804320C(???);
// ??? sub_8043244(???);
// ??? sub_8043268(???);
// ??? sub_80432F4(???);
// ??? sub_8043308(???);
// ??? sub_804331C(???);
// ??? sub_804335C(???);
// ??? sub_8043394(???);
// ??? sub_80433C0(???);
// ??? sub_80434B4(???);
// ??? sub_804352C(???);
// ??? sub_8043548(???);
// ??? sub_80435F0(???);
// ??? sub_80436C0(???);
// ??? sub_80437C0(???);
// ??? sub_80438C0(???);
// ??? sub_8043904(???);
// ??? sub_8043B08(???);
// ??? sub_8043B6C(???);
// ??? sub_8043CF4(???);
// ??? sub_8043D3C(???);
// ??? sub_8043D5C(???);
// ??? sub_8043D8C(???);
// ??? sub_8044280(???);
// ??? sub_804429C(???);
// ??? sub_8044324(???);
// ??? sub_80443B0(???);
// ??? sub_8044430(???);
// ??? sub_8044530(???);
// ??? sub_8044550(???);
// ??? sub_8044560(???);
// ??? sub_8044614(???);
// ??? sub_8044700(???);
// ??? sub_8044750(???);
// ??? sub_8044768(???);
// ??? sub_8044968(???);
// ??? sub_80449E8(???);
// ??? sub_8044A40(???);
// ??? sub_8044AD4(???);
// ??? sub_8044B2C(???);
// ??? sub_8044B78(???);
// ??? sub_8044C54(???);
// ??? sub_8044ED8(???);
// ??? sub_8044F84(???);
// ??? sub_8044FE4(???);
// ??? sub_8044FFC(???);
// ??? sub_804503C(???);
// ??? sub_8045068(???);
// ??? NameSelect_DrawName(???);
// ??? sub_8045108(???);
// ??? sub_80451F0(???);
// ??? sub_8045208(???);
// ??? sub_8045234(???);
// ??? sub_804538C(???);
// ??? sub_8045494(???);
// ??? sub_80454E4(???);
// ??? sub_804556C(???);
// ??? sub_8045610(???);
// ??? sub_8045640(???);
// ??? sub_80457F8(???);
// ??? sub_804589C(???);
// ??? sub_80458E8(???);
// ??? sub_8045920(???);
// ??? sub_8045930(???);
// ??? sub_8045A64(???);
// ??? sub_8045AF4(???);
// ??? New6C_SIOMAIN2(???);
// ??? sub_8045C28(???);
// ??? sub_8045C68(???);
// ??? sub_8045CBC(???);
// ??? sub_8045CE0(???);
// ??? sub_8045CEC(???);
// ??? sub_8045DC0(???);
// ??? sub_8045F00(???);
// ??? sub_8045F48(???);
// ??? sub_804619C(???);
// ??? sub_8046234(???);
// ??? sub_80462D4(???);
// ??? sub_80463A8(???);
// ??? sub_804645C(???);
// ??? sub_8046478(???);
// ??? sub_80464B0(???);
// ??? sub_8046580(???);
// ??? sub_8046704(???);
// ??? sub_80467AC(???);
// ??? sub_8046838(???);
// ??? sub_80469AC(???);
// ??? sub_80469B8(???);
// ??? sub_80469C4(???);
// ??? sub_8046C64(???);
// ??? sub_8046CF0(???);
// ??? sub_8046D6C(???);
// ??? sub_8046DB4(???);
// ??? sub_8046DD0(???);
// ??? sub_8046DEC(???);
// ??? sub_8046E0C(???);
// ??? sub_8046E4C(???);
// ??? sub_8046E5C(???);
// ??? sub_8046E94(???);
// ??? sub_8046EB8(???);
// ??? sub_8046F68(???);
// ??? sub_8047008(???);
// ??? sub_804720C(???);
// ??? sub_8047308(???);
// ??? sub_8047324(???);
// ??? sub_8047570(???);
// ??? sub_804762C(???);
// ??? sub_8047654(???);
// ??? sub_804766C(???);
// ??? sub_804768C(???);
// ??? sub_80476CC(???);
// ??? sub_8047780(???);
// ??? sub_8047928(???);
// ??? sub_8047A54(???);
// ??? sub_8047AB8(???);
// ??? sub_8047AF4(???);
// ??? sub_8047B34(???);
// ??? sub_8047C60(???);
// ??? sub_8047CF0(???);
// ??? sub_8047D88(???);
// ??? sub_8047EF8(???);
// ??? sub_8047FF8(???);
// ??? sub_80480B4(???);
// ??? sub_8048168(???);
void sub_80481E0(ProcPtr);
void sub_8048260(ProcPtr); // StartNameSelect
// ??? sub_8048280(???);
// ??? sub_80482E0(???);
// ??? sub_80483F8(???);
// ??? sub_8048418(???);
// ??? sub_8048460(???);
// ??? sub_80484D8(???);
// ??? sub_8048524(???);
// ??? sub_8048594(???);
// ??? sub_8048604(???);
// ??? sub_804867C(???);
// ??? sub_80486D4(???);
// ??? sub_80486E8(???);
// ??? sub_8048730(???);
// ??? sub_804879C(???);
// ??? sub_80487C0(???);
// ??? sub_804881C(???);
// ??? sub_8048838(???);
void CallEraseSaveEvent(ProcPtr);
// ??? sub_8048864(???);
// ??? sub_8048884(???);
// ??? sub_8048934(???);
// ??? sub_8048988(???);
// ??? nullsub_43(???);
// ??? sub_8048A6C(???);
// ??? sub_8048A94(???);
// ??? sub_8048AA8(???);
// ??? sub_8048B78(???);
// ??? sub_8048CB8(???);
// ??? sub_8048D1C(???);
// ??? sub_8048D64(???);
// ??? sub_8048DD0(???);
// ??? sub_8048E6C(???);
// ??? sub_8048E84(???);
// ??? sub_8048EB8(???);
// ??? sub_8048FD4(???);
// ??? sub_80490EC(???);
// ??? sub_8049238(???);
// ??? sub_804926C(???);
// ??? sub_8049298(???);
// ??? sub_80492B8(???);
// ??? sub_80492D8(???);
// ??? sub_80492E8(???);
// ??? sub_804933C(???);
// ??? sub_8049350(???);
// ??? sub_80493A8(???);
// ??? sub_80493D0(???);
// ??? sub_80494D4(???);
// ??? sub_80494F0(???);
// ??? sub_8049594(???);
// ??? sub_80495F4(???);
// ??? sub_80496A4(???);
// ??? sub_804970C(???);
// ??? sub_8049744(???);
void sub_8049788(void);
// ??? sub_80497A0(???);
// ??? sub_80497CC(???);
// ??? sub_8049828(???);
// ??? sub_80498F4(???);
// ??? sub_8049940(???);
// ??? sub_8049964(???);
// ??? sub_80499D0(???);
// ??? sub_8049A60(???);
// ??? sub_8049B04(???);
// ??? sub_8049B24(???);
// ??? sub_8049C18(???);
// ??? sub_8049C94(???);
// ??? sub_8049CD4(???);
// ??? sub_8049D0C(???);
// ??? sub_8049D24(???);
// ??? sub_8049F38(???);
// ??? sub_8049F44(???);
// ??? sub_804A108(???);
// ??? sub_804A158(???);
// ??? sub_804A1D0(???);
// ??? sub_804A298(???);
// ??? sub_804A3A8(???);
// ??? sub_804A430(???);
// ??? sub_804A44C(???);
// ??? sub_804A51C(???);
// ??? sub_804A5A4(???);
// ??? sub_804A614(???);
// ??? sub_804A6A4(???);
// ??? sub_804A7C0(???);
// ??? sub_804A914(???);
// ??? sub_804A9A4(???);
// ??? sub_804AA88(???);
// ??? sub_804AAA4(???);
// ??? sub_804AADC(???);
// ??? sub_804AAFC(???);
// ??? sub_804ABB4(???);
// ??? sub_804ABCC(???);
// ??? sub_804AC68(???);
// ??? sub_804ACAC(???);
// ??? sub_804ACC4(???);
// ??? sub_804ADA0(???);
// ??? sub_804AE08(???);
// ??? sub_804AE7C(???);
// ??? sub_804AEC4(???);
// ??? ITEMRANGEDONE_sub_804AF2C(???);
// ??? sub_804AF5C(???);
// ??? sub_804B190(???);
// ??? sub_804B1C0(???);
// ??? sub_804B250(???);
// ??? sub_804B278(???);
// ??? sub_804B38C(???);
// ??? sub_804B3A0(???);
// ??? sub_804B3B0(???);
// ??? sub_804B3D0(???);
// ??? sub_804B408(???);
// ??? sub_804B43C(???);
// ??? sub_804B480(???);
// ??? sub_804B518(???);
// ??? sub_804B554(???);
// ??? sub_804B5E0(???);
// ??? sub_804B604(???);
// ??? sub_804B624(???);
// ??? sub_804B6AC(???);
// ??? sub_804B6B8(???);
// ??? sub_804B6CC(???);
// ??? sub_804B6F4(???);
// ??? sub_804B708(???);
// ??? sub_804B71C(???);
// ??? sub_804B76C(???);
// ??? sub_804B7E4(???);
// ??? sub_804B800(???);
// ??? sub_804B850(???);
// ??? sub_804B8D0(???);
// ??? sub_804B920(???);
// ??? sub_804B92C(???);
// ??? sub_804B938(???);
// ??? sub_804B964(???);
// ??? sub_804B9A4(???);
// ??? sub_804B9BC(???);
// ??? sub_804B9E4(???);
// ??? sub_804BB54(???);
// ??? sub_804BBA0(???);
// ??? sub_804BC3C(???);
// ??? sub_804BC84(???);
// ??? sub_804BD2C(???);
// ??? sub_804BD3C(???);
// ??? sub_804BDD8(???);
// ??? sub_804BDFC(???);
// ??? sub_804BE88(???);
// ??? sub_804BE98(???);
// ??? sub_804BEB8(???);
// ??? sub_804BED8(???);
// ??? sub_804BF30(???);
// ??? sub_804BF4C(???);
// ??? sub_804BFAC(???);
// ??? sub_804BFF8(???);
// ??? sub_804C02C(???);
// ??? sub_804C078(???);
// ??? sub_804C12C(???);
// ??? sub_804C148(???);
// ??? sub_804C178(???);
// ??? sub_804C188(???);
// ??? sub_804C194(???);
// ??? sub_804C1B8(???);
// ??? sub_804C1D8(???);
// ??? sub_804C1E4(???);
// ??? sub_804C208(???);
// ??? sub_804C260(???);
// ??? sub_804C2B8(???);
// ??? sub_804C2DC(???);
// ??? sub_804C2EC(???);
// ??? sub_804C31C(???);
// ??? sub_804C33C(???);
// ??? sub_804C3A0(???);
// ??? sub_804C3A4(???);
// ??? nullsub_13(???);
// ??? sub_804C3AC(???);
// ??? sub_804C3EC(???);
// ??? sub_804C47C(???);
// ??? sub_804C49C(???);
// ??? sub_804C4F8(???);
// ??? sub_804C508(???);
// ??? sub_804C558(???);
// ??? sub_804C590(???);
// ??? sub_804C5A4(???);
// ??? sub_804C5F8(???);
// ??? sub_804C758(???);
// ??? sub_804C7C8(???);
// ??? sub_804C7DC(???);
// ??? sub_804C7E4(???);
// ??? sub_804C83C(???);
// ??? sub_804C894(???);
// ??? sub_804CAEC(???);
// ??? sub_804CB94(???);
// ??? sub_804CC14(???);
// ??? sub_804CC5C(???);
// ??? sub_804CC78(???);
// ??? sub_804CCCC(???);
// ??? sub_804CD90(???);
// ??? sub_804CDD0(???);
// ??? sub_804CDE8(???);
// ??? sub_804CE5C(???);
// ??? sub_804CE8C(???);
// ??? sub_804CEB0(???);
// ??? sub_804CEC4(???);
// ??? sub_804CECC(???);
// ??? sub_804CF04(???);
// ??? sub_804CFB8(???);
// ??? sub_804CFE0(???);
// ??? sub_804D01C(???);
// ??? sub_804D1E0(???);
// ??? sub_804D24C(???);
// ??? sub_804D2A4(???);
// ??? sub_804D37C(???);
// ??? StopBGM2(???);
// ??? sub_804D3F0(???);
// ??? sub_804D40C(???);
// ??? sub_804D428(???);
// ??? sub_804D47C(???);
// ??? sub_804D664(???);
// ??? sub_804D6B4(???);
// ??? sub_804D6C4(???);
// ??? sub_804D6D4(???);
// ??? sub_804D724(???);
// ??? sub_804D778(???);
// ??? sub_804D7B0(???);
// ??? sub_804D7DC(???);
// ??? sub_804D80C(???);
// ??? sub_804D834(???);
// ??? sub_804D858(???);
// ??? sub_804D8A4(???);
// ??? sub_804D8C8(???);
// ??? sub_804D8DC(???);
// ??? sub_804D940(???);
// ??? sub_804D950(???);
// ??? sub_804D9C4(???);
// ??? sub_804DA00(???);
// ??? sub_804DDF0(???);
// ??? sub_804DE3C(???);
// ??? sub_804DE60(???);
// ??? sub_804DF24(???);
// ??? sub_804DF38(???);
// ??? sub_804E024(???);
// ??? sub_804E03C(???);

// ??? sub_8084880(???);
// ??? sub_80848E0(???);
// ??? sub_8084940(???);
// ??? sub_80849A0(???);
// ??? sub_80849D8(???);
// ??? sub_8084A10(???);
// ??? sub_8084A48(???);
// ??? sub_8084A68(???);
// ??? sub_8084A80(???);
// ??? sub_8084A84(???);
// ??? sub_8084A88(???);
// ??? sub_8084A8C(???);
// ??? sub_8084A90(???);
// ??? sub_8084A94(???);
// ??? sub_8084A98(???);
// ??? sub_8084A9C(???);
// ??? sub_8084AA0(???);
// ??? sub_8084AA4(???);
// ??? sub_8084AA8(???);
// ??? sub_8084AAC(???);
// ??? sub_8084AB0(???);
// ??? sub_8084AB4(???);
// ??? sub_8084AB8(???);
// ??? sub_8084ABC(???);
// ??? sub_8084AC0(???);
// ??? sub_8084AC4(???);
// ??? sub_8084AC8(???);
// ??? sub_8084ACC(???);
// ??? sub_8084AD0(???);
// ??? sub_8084AD4(???);
// ??? sub_8084AD8(???);
// ??? sub_8084ADC(???);
// ??? sub_8084AF4(???);
// ??? sub_8084B0C(???);
// ??? sub_8084B34(???);
// ??? sub_8084B40(???);
// ??? sub_8084B60(???);
// ??? sub_8084B6C(???);
// ??? sub_8084B8C(???);
// ??? sub_8084B98(???);
// ??? sub_8084BB0(???);
// ??? sub_8084BCC(???);
// ??? sub_8084C38(???);
// ??? sub_8084C4C(???);
// ??? sub_8084C8C(???);
// ??? sub_8084C9C(???);
// ??? sub_8084CAC(???);
// ??? sub_8084CE8(???);
// ??? sub_8084CF8(???);
// ??? sub_8084D08(???);
// ??? sub_8084D18(???);
// ??? sub_8084D28(???);
// ??? sub_8084D38(???);
// ??? sub_8084D48(???);
// ??? sub_8084D58(???);
// ??? sub_8084D68(???);
// ??? sub_8084D78(???);
// ??? sub_8084D88(???);
// ??? sub_8084D98(???);
// ??? sub_8084DA8(???);
// ??? sub_8084DB8(???);
// ??? sub_8084DC8(???);
// ??? sub_8084DD8(???);
// ??? sub_8084DE8(???);
// ??? sub_8084DF8(???);
// ??? sub_8084E08(???);
// ??? sub_8084E18(???);
// ??? sub_8084E28(???);
// ??? sub_8084E38(???);
// ??? sub_8084E48(???);
// ??? sub_8084E58(???);
// ??? sub_8084E68(???);
// ??? sub_8084E78(???);
// ??? sub_8084E88(???);
// ??? sub_8084EB8(???);
// ??? sub_8084EC8(???);
// ??? sub_8084ED8(???);
int AreAnyEnemyUnitDead(void);
// ??? GetDeadEnemyAmount(???);
// ??? sub_8084F54(???);
// ??? IsCharDeadAsNonPlayerUnit(???);
// ??? sub_8084FA8(???);
// ??? sub_8084FE4(???);
// ??? sub_8085018(???);
// ??? sub_8085028(???);
// ??? sub_8085038(???);
// ??? sub_8085048(???);
// ??? sub_8085058(???);
// ??? sub_8085068(???);
// ??? sub_8085078(???);
// ??? sub_8085088(???);
// ??? sub_8085098(???);
// ??? sub_80850A8(???);
// ??? sub_80850B8(???);
// ??? sub_80850C8(???);
// ??? sub_80850D8(???);
// ??? sub_80850E8(???);
// ??? sub_80850F8(???);
// ??? sub_8085108(???);
// ??? sub_8085118(???);
// ??? sub_8085128(???);
// ??? sub_808513C(???);
// ??? sub_8085150(???);
// ??? sub_8085164(???);
// ??? sub_8085178(???);
// ??? sub_808518C(???);
// ??? sub_80851A0(???);
// ??? sub_80851E4(???);
// ??? sub_8085220(???);
// ??? sub_8085238(???);
// ??? sub_8085250(???);
// ??? sub_8085268(???);
// ??? sub_8085280(???);
// ??? sub_8085298(???);
// ??? sub_80852B4(???);
// ??? sub_80852D0(???);
// ??? sub_80852EC(???);
// ??? sub_8085308(???);
// ??? sub_8085324(???);
// ??? sub_8085338(???);
// ??? sub_8085350(???);
// ??? sub_8085354(???);
// ??? sub_8085370(???);

void sub_8086690(u8 a, int b, int c, int d, int e, int f);
// ??? sub_808679C(???);
// ??? sub_808683C(???);
// ??? sub_8086928(???);
void sub_8086934(u8 *buf, int a2, int a3);
void sub_8086960(u8 *buf, int a2, int a3);
void sub_8086984(u8 *buf, int a2, int a3);
void sub_80869AC(u8 *buf, int a2, int a3);
void sub_80869D8(u8 *buf, int a2, int a3);
void sub_8086A08(u8 *buf, int a2, int a3);
void sub_8086A24(u8 *buf, int a2, int a3);
void sub_8086A40(int a1, int a2, int a3, int a4, int a5, int a6);
void DrawStatBarGfx(int arg0, int arg1, u16* tilemap, int arg3, int arg4, int arg5, int arg6);
// ??? BackgroundSlide_Init(???);
// ??? BackgroundSlide_Loop(???);
ProcPtr StartMuralBackground(ProcPtr, void*, int);
// ??? StartMuralBackgroundAlt(???);
ProcPtr StartMuralBackgroundExt(ProcPtr, void*, int, int, int);
void EndMuralBackground(void);

void sub_80895B4(int, int);
void sub_8089624(int, u32);
// ??? sub_808966C(???);
void sub_8089678(int);
// ??? sub_80896A8(???);
void sub_80896D8(u16 bg[], int);
// ??? sub_80896FC(???);
// ??? sub_8089720(???);
// ??? sub_8089744(???);
int sub_8089768(struct PlaySt*);
int sub_808979C(struct PlaySt*);
void LoadHelpBoxGfx(void* dest, int pal);
// ??? sub_80898C4(???);
void DisplayHelpBoxObj(int x, int y, int w, int h, int unk);
// ??? DrawHelpBoxWeaponLabels(???);
// ??? DrawHelpBoxWeaponStats(???);
// ??? DrawHelpBoxStaffLabels(???);
// ??? DrawHelpBoxSaveMenuLabels(???);
// ??? DrawHelpBoxSaveMenuStats(???);
// ??? HelpBoxTextScroll_OnLoop(???);
// ??? sub_8089EEC(???);
// ??? sub_8089F58(???);
// ??? sub_8089FCC(???);
// ??? sub_808A00C(???);
void StartHelpBoxTextInit(int item, int mid);
void ClearHelpBoxText(void);
// ??? sub_808A160(???);
// ??? sub_808A188(???);
// ??? sub_808A1B8(???);
// ??? sub_808A1E0(???);
// ??? sub_808A200(???);
// ??? sub_808A2D0(???);
// ??? sub_808A2FC(???);
// ??? sub_808A320(???);
// ??? sub_808A340(???);
// ??? sub_808A354(???);
// ??? sub_808A36C(???);
// ??? sub_808A384(???);
// ??? sub_808A3C4(???);
// ??? sub_808A43C(???);
// ??? sub_808A444(???);
// ??? sub_808A454(???);
// ??? sub_808A4A4(???);
// ??? sub_808A4C4(???);
// ??? sub_808A4FC(???);
void SetDialogueBoxConfig(u16);
// ??? GetDialogueBoxConfig(???);
// ??? sub_808A530(???);
// ??? sub_808A5D0(???);
// ??? sub_808A7B0(???);
// ??? sub_808A838(???);
// ??? sub_808A848(???);
// ??? sub_808A87C(???);
// ??? sub_808A8AC(???);
// ??? sub_808A8E4(???);
// ??? sub_808A974(???);
// ??? sub_808A99C(???);
// ??? sub_808A9C0(???);
// ??? sub_808A9F0(???);
void sub_808AA04(int x_tile, int y_tile, int unk_index, ProcPtr parent);
// ??? sub_808AA6C(???);
void sub_808AADC(const char*, int*, int*);
// ??? sub_808AB98(???);
// ??? sub_808AC0C(???);
// ??? sub_808ACFC(???);
// ??? sub_808B09C(???);
// ??? sub_808B0D4(???);
// ??? sub_808B0F8(???);
// ??? sub_808B11C(???);
// ??? BoxDialogueInterpreter_Main(???);
// ??? sub_808B788(???);
// ??? sub_808B7B8(???);
// ??? sub_808B804(???);
// ??? sub_808B844(???);
// ??? sub_808B870(???);
// ??? sub_808B904(???);
// ??? sub_808B928(???);
// ??? sub_808BA60(???);
// ??? sub_808BAA4(???);
// ??? sub_808BB44(???);
// ??? sub_808BB58(???);
void sub_808BB74(void); // ??? (also text related)

// ??? sub_809014C(???);
// ??? sub_80901BC(???);
// ??? sub_8090238(???);
// ??? sub_8090324(???);
// ??? sub_8090358(???);
// ??? sub_8090418(???);
// ??? sub_8090514(???);
// ??? sub_8090620(???);
// ??? sub_80906AC(???);
// ??? sub_80906D8(???);
// ??? sub_80906F8(???);
// ??? sub_8090784(???);
// ??? nullsub_63(???);
// ??? sub_8090B48(???);
// ??? sub_8090C58(???);
// ??? sub_8090D00(???);
// ??? sub_8090D80(???);
// ??? sub_8091180(???);
// ??? sub_80911E4(???);
// ??? sub_8091288(???);
// ??? sub_809132C(???);
// ??? sub_80913D8(???);
// ??? sub_809144C(???);
// ??? sub_80917D8(???);
// ??? sub_8091AB4(???);
// ??? sub_8091AEC(???);
// ??? sub_8091C00(???);
// ??? sub_8091CC0(???);
// ??? sub_8091D54(???);
// ??? sub_8091F10(???);
void sub_80920C4(void); // StartUnitListMenu
void sub_80920DC(ProcPtr);
void sub_8092134(ProcPtr);
// ??? sub_8092164(???);
void sub_8092194(ProcPtr);
// ??? sub_80921CC(???);
// ??? sub_8092298(???);
// ??? sub_80922F0(???);
// ??? sub_8092BE4(???);
// ??? sub_8092BF0(???);
u8 CanPrepScreenSave();
int sub_8095024();
int sub_8095094(int, int);
int sub_80950C4(int);
void sub_80950E8(int, int);
// ??? sub_8095138(???);
void PrepScreenMenu_OnPickUnits(struct ProcAtMenu* proc);
void PrepScreenMenu_OnItems(struct ProcAtMenu* proc);
void PrepScreenMenu_OnSupport(struct ProcAtMenu* proc);
void PrepScreenMenu_OnSave(struct ProcAtMenu* proc);
int PrepScreenMenu_OnStartPress(struct ProcAtMenu* proc);
int Prep_HasUnitDeployed();
void sub_8095284(ProcPtr proc);
int PrepScreenMenu_OnBPress(struct ProcAtMenu* proc);
void PrepScreenMenu_OnCheckMap(struct ProcAtMenu* proc);
// ??? sub_80952CC(???);
// ??? __malloc_unlock_1(???);
void Reset203E87C();
void Reset203E87C_WithVal(u8 val);
void Modify203E87C(u8 val);

// ??? WmSell_DrawSupplyDialogueSpriteText(???);
// ??? sub_809FDD4(???);
// ??? sub_809FE1C(???);
// ??? WmSell_Init(???);
// ??? sub_809FE68(???);
// ??? WmSell_DrawSellOptionSpriteText(???);
// ??? WmSell_DrawValueSpriteText(???);
// ??? WmSell_DrawItemGoldValue(???);
// ??? WmSell_DrawPartyFunds(???);
// ??? WmSell_PutSupplyFaceAndText(???);
// ??? WmSell_Setup(???);
// ??? WmSell_MainLoop_HandleDpadKeys(???);
// ??? sub_80A03C4(???);
// ??? WmSell_OnLoop_MainKeyHandler(???);
// ??? sub_80A0570(???);
// ??? WmSell_ConfirmSellItem(???);
// ??? WmSell_OnLoop_ConfirmSellKeyHandler(???);
// ??? WmSell_OnEnd(???);
// ??? StartWorldMapSellScreen(???);
// ??? sub_80A0724(???);
// ??? FortuneSubMenu_Init_Null(???);
// ??? __malloc_unlock_2(???);
// ??? FortuneSubMenu_Unused_SetAvailableOptions(???);
// ??? FortuneSubMenu_Unused_SetupText(???);
// ??? FortuneSubMenu_Unused_KeyHandler(???);
// ??? FortuneSubMenu_OnOptionSelected(???);
// ??? FortuneSubMenu_HandleOptionSwitch(???);
void StartFortuneSubMenu(int, ProcPtr);
int sub_80A095C(int);
// ??? GetChapterDivinationTextIdHectorStory(???);
// ??? GetChapterDivinationTextIdBeginning(???);
// ??? GetChapterDivinationTextIdEnding(???);
// ??? GetChapterDivinationFee(???);
// ??? GetChapterDivinationPortrait(???);
// ??? sub_80A0A18(???);
// ??? sub_80A0A34(???);
// ??? sub_80A0A5C(???);
// ??? sub_80A0A70(???);
// ??? sub_80A0A74(???);

// ??? sub_80A6544(???);

// ??? sub_80AC6AC(???);
// ??? sub_80AC784(???);
void sub_80AC844(u16 *, int, int, int, int, int, int, int);
// ??? UiCursorHand_Init(???);
// ??? UiCursorHand_Loop(???);
ProcPtr StartUiCursorHand(ProcPtr);
void SetUiCursorHandConfig(int, int, int, u8);
void UiCursorHand_80ACA4C(int, int, int, int, int);
void sub_80ACA84(u32 a);
void sub_80ACAA4(void);
void BlockUiCursorHand(void);
void UnblockUiCursorHand(void);
void EndUiCursorHand(void);
// ??? UiSpinningArrows_Init(???);
// ??? UiSpinningArrows_Loop(???);
ProcPtr StartUiSpinningArrows(ProcPtr);
ProcPtr LoadUiSpinningArrowGfx(int, int, int);
void SetUiSpinningArrowConfig(int mask);
void SetUiSpinningArrowPositions(int, int, int, int);
void SetUiSpinningArrowFastMaybe(int);
void EndUiSpinningArrows(void);

// ??? sub_80AE86C(???);
// ??? sub_80AE930(???);
// ??? sub_80AE938(???);
// ??? sub_80AE964(???);
// ??? sub_80AE99C(???);
// ??? sub_80AE9B0(???);
int GetBgXOffset(int);
// ??? GetBgYOffset(???);
char* AppendTextBuffer_80AEABC(const char*, char*);
char* AppendCharAndTerminate(int, char*);
// ??? sub_80AEAE8(???);
// ??? sub_80AEB1C(???);
// ??? sub_80AEB28(???);
// ??? sub_80AEB44(???);
// ??? BonusClaimHelp_Init(???);
// ??? BonusClaimHelp_Loop(???);
void StartBonusClaimHelpBox(int, int, int, ProcPtr);
int CountDigits(int number);
// ??? sub_80AEC04(???);
// ??? sub_80AEC54(???);
// ??? sub_80AEC68(???);

// ??? sub_80B0458(???);
// ??? sub_80B04BC(???);
// ??? sub_80B04F8(???);
// ??? nullsub_66(???);
// ??? sub_80B05C4(???);
// ??? sub_80B060C(???);
// ??? sub_80B0620(???);
// ??? sub_80B169C(???);
// ??? sub_80B24DC(???);
// ??? nullsub_67(???);
// ??? sub_80B251C(???);
// ??? sub_80B2608(???);
void NewColFadeOut(int, int, int, ProcPtr);
void NewColFadeIn(int, int, int, ProcPtr);
// ??? sub_80B5730(???);
void StartArenaScreen(void);
void StartArenaResultsScreen(void);
// ??? ArenaUi_Init(???);
// ??? sub_80B5970(???);
// ??? ArenaUi_WelcomeDialogue(???);
// ??? ArenaUi_WagerGoldDialogue(???);
// ??? ArenaUi_CheckConfirmation(???);
// ??? ArenaUi_ConfirmWager(???);
// ??? ArenaUi_InstructionsDialogue(???);
// ??? ArenaUi_GoodLuckDialogue(???);
// ??? ArenaUi_FadeOutBgm(???);
// ??? ArenaUi_StartArenaBattle(???);
// ??? sub_80B5B00(???);
// ??? sub_80B5B0C(???);
// ??? ArenaUi_ResultsDialogue(???);
// ??? ArenaUi_ShowGoldBoxOnVictoryOrDraw(???);
// ??? ArenaUi_OnEnd(???);
// ??? StartArenaDialogue(???);
// ??? DrawArenaOpponentDetailsText(???);
// ??? Arena_PlayResultSong(???);
// ??? Arena_PlayArenaSong(???);
void sub_80B5D3C(void);
// ??? sub_80B5D48(???);
// ??? sub_80B5D5C(???);
int GetGameTacticsRank();
int GetGameSurvivalRank();
int GetGameExpRank();
int GetGameCombatRank();
int GetGameFundsRank();
int GetOverallRank(int, int, int, int, int);
// ??? sub_80B60C8(???);
// ??? sub_80B6104(???);
// ??? GetChapterTacticsRank(???);
// ??? GetChapterSurvivalRank(???);
// ??? sub_80B61FC(???);
// ??? GetGameDeathCount(???);
// ??? GetGameWinPerc(???);
// ??? GetChapterDeathCount(???);
// ??? sub_80B62D8(???);
// ??? GetChapterFundsRank(???);
// ??? GetChapterWinPerc(???);
// ??? GetChapterCombatRank(???);
// ??? GetChapterExpRank(???);
void ComputeChapterRankings(void);
// ??? sub_80B65EC(???);
// ??? sub_80B65F4(???);
void sub_80B65F8(u16* buf, int offset, int, int, int);
void sub_80B8188(int, int, int);
void nullsub_7(void);
// ??? sub_80B8190(???);
void nullsub_5(int unused);
// ??? sub_80B8200(???);

// ??? sub_80C40B0(???);
// ??? sub_80C40B8(???);
// ??? sub_80C412C(???);
// ??? sub_80C4158(???);
// ??? sub_80C4184(???);
// ??? sub_80C41E4(???);
// ??? sub_80C41F4(???);
// ??? sub_80C4210(???);
// ??? sub_80C4228(???);
// ??? sub_80C4238(???);
// ??? sub_80C43B4(???);
// ??? sub_80C4460(???);
// ??? sub_80C45E0(???);
// ??? sub_80C4664(???);
// ??? sub_80C46E4(???);
// ??? sub_80C46F0(???);
// ??? sub_80C4738(???);
// ??? sub_80C47B0(???);
// ??? sub_80C47F4(???);
// ??? sub_80C4878(???);
// ??? sub_80C488C(???);
// ??? sub_80C48F0(???);
// ??? OpSubtitle_HandleStartPress(???);
// ??? OpSubtitle_Init(???);
// ??? Subtitle_LightFlareFx_Init(???);
// ??? Subtitle_LightFlareFx_Loop(???);
// ??? Subtitle_LightFlareFx_End(???);
// ??? sub_80C4BB4(???);
// ??? OpSubtitle_AwaitTimer2a(???);
// ??? sub_80C4C60(???);
// ??? sub_80C4CD0(???);
// ??? sub_80C4D54(???);
// ??? sub_80C4DA0(???);
// ??? sub_80C4E18(???);
// ??? sub_80C4EC4(???);
// ??? sub_80C4F60(???);
// ??? sub_80C501C(???);
// ??? sub_80C50A0(???);
// ??? sub_80C5104(???);
// ??? sub_80C51A8(???);
// ??? OpSubtitle_SetupBackgrounds(???);
// ??? sub_80C5218(???);
// ??? sub_80C5328(???);
// ??? sub_80C5370(???);
// ??? sub_80C538C(???);
// ??? sub_80C5400(???);
// ??? sub_80C540C(???);
void StartIntroMonologue(ProcPtr);
// ??? DrawTitleSprites_Init(???);
// ??? DrawTitleSprites_Loop(???);
void sub_80C5548(int);
// ??? SkipTitleFx_Loop_KeyListener(???);
// ??? Title_StartSkipFxListener(???);
// ??? Title_EndSkipFxListener(???);
// ??? Title_Init(???);
// ??? Title_SetupMainGraphics(???);
// ??? TitleScreenTryJumpIntroAnim(???);
// ??? sub_80C5870(???);
// ??? Title_SetupSpecialEffectGraphics(???);
// ??? sub_80C5A44(???);
// ??? Title_Loop_DrawRotatingBlueLights(???);
// ??? sub_80C5BD4(???);
// ??? Title_Loop_DrawRedBlueOrbs(???);
// ??? Title_PrepareMainScreenWithExtendedBgm(???);
// ??? Title_Loop_RevealGreenDragonFlashFx(???);
// ??? Title_Loop_FlashFxExpand(???);
// ??? Title_LoadDemonKingOnBg2(???);
// ??? Title_ShowBg2(???);
// ??? sub_80C5FB4(???);
// ??? Title_PrepareMainLogoZoom(???);
// ??? Title_Loop_MainLogoZoom(???);
// ??? sub_80C60CC(???);
// ??? nullsub_23(???);
// ??? sub_80C6104(???);
// ??? DrawTitleLightBubbleSprites(???);
// ??? Title_Loop_LightExplosionFx(???);
// ??? sub_80C62DC(???);
// ??? Title_IDLE(???);
// ??? Title_EndAllProcChildren(???);
// ??? Title_RestartProc(???);
void StartTitleScreen_WithMusic(ProcPtr);
void StartTitleScreen_FlagFalse(ProcPtr);
void StartTitleScreen_FlagTrue(ProcPtr);

// ??? umul3232H32(???);
// ??? SoundMain(???);
// ??? SoundMainRAM(???);
// ??? sub_80CF6E4(???);
// ??? RealClearChain(???);
// ??? ply_fine(???);
// ??? MPlayJumpTableCopy(???);
// ??? ldrb_r3_r2(???);
// ??? ld_r3_tp_adr_i(???);
// ??? ply_patt(???);
// ??? sub_80CF9D4(???);
// ??? sub_80CF9E8(???);
// ??? sub_80CFA18(???);
// ??? sub_80CFA24(???);
// ??? sub_80CFA38(???);
// ??? sub_80CFA4C(???);
// ??? sub_80CFA7C(???);
// ??? sub_80CFA90(???);
// ??? sub_80CFAA4(???);
// ??? sub_80CFAB8(???);
// ??? sub_80CFACC(???);
// ??? sub_80CFAD8(???);
// ??? sub_80CFAF0(???);
// ??? sub_80CFB04(???);
// ??? m4aSoundVSync(???);
// ??? sub_80CFDC0(???);
// ??? TrackStop(???);
// ??? sub_80CFE14(???);
// ??? ply_note(???);
// ??? ply_endtie(???);
// ??? sub_80D0084(???);
// ??? sub_80D00A0(???);
// ??? ply_lfos(???);
// ??? ply_mod(???);
// ??? MidiKeyToFreq(???);
// ??? MPlayContinue(???);
// ??? MPlayFadeOut(???);
void m4aSoundInit();
// ??? m4aSoundMain(???);
void m4aSongNumStart(u16);
// ??? m4aSongNumStop(???);
// ??? m4aMPlayFadeOut(???);
// ??? m4aMPlayFadeOutTemporarily(???);
// ??? m4aMPlayFadeIn(???);
// ??? m4aMPlayImmInit(???);
// ??? MPlayExtender(???);
// ??? ClearChain(???);
// ??? Clear64byte(???);
// ??? SoundInit(???);
// ??? SampleFreqSet(???);
// ??? m4aSoundMode(???);
// ??? m4aSoundVSyncOff(???);
// ??? m4aSoundVSyncOn(???);
// ??? MPlayOpen(???);
// ??? MPlayStart(???);
// ??? m4aMPlayStop(???);
// ??? FadeOutBody(???);
// ??? TrkVolPitSet(???);
// ??? MidiKeyToCgbFreq(???);
// ??? CgbOscOff(???);
// ??? CgbModVol(???);
// ??? CgbSound(???);
// ??? m4aMPlayVolumeControl(???);
// ??? m4aMPlayPanpotControl(???);
// ??? ClearModM(???);
// ??? ply_memacc(???);
// ??? ply_xcmd(???);
// ??? ply_xxx(???);
// ??? ply_xwave(???);
// ??? ply_xtype(???);
// ??? ply_xatta(???);
// ??? ply_xdeca(???);
// ??? ply_xsust(???);
// ??? ply_xrele(???);
// ??? ply_xiecv(???);
// ??? ply_xiecl(???);
// ??? ply_xleng(???);
// ??? ply_xswee(???);

void ClearOAMBuffer(void * buf, int count);
void TileMap_FillRect(u16 *dest, int width, int height, int fillValue);
void CALLARM_MaybeScreenFadeIn();
void TileMap_CopyRect(u16* src, u16* dst, int width, int height);
void CallARM_FillTileRect(u16* tilemap, const void* tsa, int tileref);
u32 ComputeChecksum32(const u32 * buf, int size);

#endif  // GUARD_FUNCTIONS_H
