	.INCLUDE "macro.inc"

	.SYNTAX UNIFIED

/** 
 * Need help!
 * https://decomp.me/scratch/Jkolu
 */

	THUMB_FUNC_START ParseBattleHitToBanimCmd
ParseBattleHitToBanimCmd: @ 0x080581EC
	push {r4, r5, r6, r7, lr}
	mov r7, sl
	mov r6, r9
	mov r5, r8
	push {r5, r6, r7}
	sub sp, #0x20
	ldr r7, _08058244  @ gBattleHitArray
	movs r2, #0
	ldr r4, _08058248  @ gAnimRoundData
	ldr r5, _0805824C  @ gpEkrTriangleUnits
	ldr r6, _08058250  @ gEkrDistanceType
	ldr r0, _08058254  @ 0x0000FFFF
	adds r3, r0, #0
	adds r1, r4, #0
_08058208:
	ldrh r0, [r1]
	orrs r0, r3
	strh r0, [r1]
	adds r1, #2
	adds r2, #1
	cmp r2, #0x13
	bls _08058208
	movs r2, #0
	ldr r0, _08058258  @ gEfxHpLut
	ldr r1, _08058254  @ 0x0000FFFF
	adds r3, r1, #0
	adds r1, r0, #4
_08058220:
	ldrh r0, [r1]
	orrs r0, r3
	strh r0, [r1]
	adds r1, #2
	adds r2, #1
	cmp r2, #0x13
	bls _08058220
	movs r2, #0
	str r2, [r5, #4]
	str r2, [r5]
	movs r3, #0
	ldrsh r0, [r6, r3]
	cmp r0, #4
	bne _0805825C
	strh r0, [r4]
	strh r0, [r4, #2]
	b _08058834
	.align 2, 0
_08058244: .4byte gBattleHitArray
_08058248: .4byte gAnimRoundData
_0805824C: .4byte gpEkrTriangleUnits
_08058250: .4byte gEkrDistanceType
_08058254: .4byte 0x0000FFFF
_08058258: .4byte gEfxHpLut
_0805825C:
	ldr r0, _08058270  @ gBattleStats
	ldrh r1, [r0]
	movs r0, #0x40
	ands r0, r1
	cmp r0, #0
	beq _08058274
	movs r0, #6
	strh r0, [r4]
	strh r2, [r4, #2]
	b _08058834
	.align 2, 0
_08058270: .4byte gBattleStats
_08058274:
	ldrh r6, [r6]
	str r6, [sp, #0x14]
	str r6, [sp, #0x18]
	ldr r0, _08058348  @ gpEkrBattleUnitLeft
	ldr r0, [r0]
	str r0, [sp, #4]
	ldr r0, _0805834C  @ gpEkrBattleUnitRight
	ldr r0, [r0]
	str r0, [sp, #8]
	ldr r0, [sp, #4]
	adds r0, #0x4a
	ldrh r0, [r0]
	bl GetItemIndex
	cmp r0, #0x11
	bne _0805829C
	cmp r6, #0
	bne _0805829C
	movs r5, #1
	str r5, [sp, #0x14]
_0805829C:
	ldr r4, [sp, #8]
	adds r4, #0x4a
	ldrh r0, [r4]
	bl GetItemIndex
	adds r5, r4, #0
	cmp r0, #0x11
	bne _080582B6
	ldr r0, [sp, #0x18]
	cmp r0, #0
	bne _080582B6
	movs r1, #1
	str r1, [sp, #0x18]
_080582B6:
	ldr r4, [sp, #4]
	adds r4, #0x4a
	ldrh r0, [r4]
	bl GetItemIndex
	cmp r0, #0x28
	bne _080582CE
	ldr r2, [sp, #0x14]
	cmp r2, #0
	bne _080582CE
	movs r3, #1
	str r3, [sp, #0x14]
_080582CE:
	ldrh r0, [r5]
	bl GetItemIndex
	cmp r0, #0x28
	bne _080582E2
	ldr r0, [sp, #0x18]
	cmp r0, #0
	bne _080582E2
	movs r1, #1
	str r1, [sp, #0x18]
_080582E2:
	ldrh r0, [r4]
	bl GetItemIndex
	cmp r0, #0x29
	bne _080582F6
	ldr r2, [sp, #0x14]
	cmp r2, #0
	bne _080582F6
	movs r3, #1
	str r3, [sp, #0x14]
_080582F6:
	ldrh r0, [r5]
	bl GetItemIndex
	cmp r0, #0x29
	bne _0805830A
	ldr r0, [sp, #0x18]
	cmp r0, #0
	bne _0805830A
	movs r1, #1
	str r1, [sp, #0x18]
_0805830A:
	ldrh r0, [r4]
	bl GetItemIndex
	cmp r0, #0x2c
	bne _0805831E
	ldr r2, [sp, #0x14]
	cmp r2, #0
	bne _0805831E
	movs r3, #1
	str r3, [sp, #0x14]
_0805831E:
	ldrh r0, [r5]
	bl GetItemIndex
	cmp r0, #0x2c
	bne _08058332
	ldr r5, [sp, #0x18]
	cmp r5, #0
	bne _08058332
	movs r0, #1
	str r0, [sp, #0x18]
_08058332:
	ldr r3, _08058350  @ gEfxHpLut
	ldr r1, _08058354  @ gEkrGaugeHp
	ldrh r0, [r1]
	strh r0, [r3]
	ldrh r0, [r1, #2]
	strh r0, [r3, #2]
	movs r1, #0
	str r1, [sp, #0xc]
	mov sl, r1
	mov r9, r1
	b _08058824
	.align 2, 0
_08058348: .4byte gpEkrBattleUnitLeft
_0805834C: .4byte gpEkrBattleUnitRight
_08058350: .4byte gEfxHpLut
_08058354: .4byte gEkrGaugeHp
_08058358:
	lsls r0, r2, #8
	lsrs r0, r0, #0x1b
	movs r1, #8
	ands r0, r1
	negs r0, r0
	lsrs r0, r0, #0x1f
	str r0, [sp, #0x10]
	ldr r0, _08058390  @ gEkrInitialPosition
	movs r2, #0
	ldrsh r0, [r0, r2]
	ldr r3, [sp, #0x10]
	cmp r0, r3
	bne _08058398
	mov r5, sp
	movs r0, #2
	add r0, sp
	mov r8, r0
	ldr r4, [sp, #0x14]
	ldr r1, [sp, #0x18]
	str r1, [sp, #0x1c]
	ldr r6, [sp, #4]
	movs r3, #0
	ldr r2, [sp, #0xc]
	cmp r2, #0
	bne _080583B4
	ldr r0, _08058394  @ gEkrInitialHitSide
	strh r2, [r0]
	b _080583B4
	.align 2, 0
_08058390: .4byte gEkrInitialPosition
_08058394: .4byte gEkrInitialHitSide
_08058398:
	mov r5, sp
	adds r5, #2
	mov r8, sp
	ldr r4, [sp, #0x18]
	ldr r3, [sp, #0x14]
	str r3, [sp, #0x1c]
	ldr r6, [sp, #8]
	movs r3, #0
	ldr r0, [sp, #0xc]
	cmp r0, #0
	bne _080583B4
	ldr r1, _080583F0  @ gEkrInitialHitSide
	movs r0, #1
	strh r0, [r1]
_080583B4:
	ldr r0, [r7]
	lsls r0, r0, #0xd
	lsrs r0, r0, #0xd
	movs r1, #0x80
	lsls r1, r1, #3
	ands r0, r1
	cmp r0, #0
	beq _080583D0
	ldr r2, _080583F4  @ gpEkrTriangleUnits
	ldr r1, _080583F8  @ gBattleStats
	ldr r0, [r1, #0x10]
	str r0, [r2]
	ldr r0, [r1, #0x14]
	str r0, [r2, #4]
_080583D0:
	ldr r0, [r7]
	lsls r0, r0, #0xd
	lsrs r1, r0, #0xd
	movs r0, #1
	ands r0, r1
	cmp r0, #0
	beq _08058408
	adds r0, r6, #0
	bl UnitHasMagicRank
	lsls r0, r0, #0x18
	cmp r0, #0
	bne _08058400
	ldr r0, _080583FC  @ gUnknown_080DAEA0
	b _08058482
	.align 2, 0
_080583F0: .4byte gEkrInitialHitSide
_080583F4: .4byte gpEkrTriangleUnits
_080583F8: .4byte gBattleStats
_080583FC: .4byte gUnknown_080DAEA0
_08058400:
	ldr r0, _08058404  @ gUnknown_080DAEC8
	b _08058482
	.align 2, 0
_08058404: .4byte gUnknown_080DAEC8
_08058408:
	movs r0, #0x80
	lsls r0, r0, #4
	ands r1, r0
	cmp r1, #0
	beq _08058430
	adds r0, r6, #0
	bl UnitHasMagicRank
	lsls r0, r0, #0x18
	cmp r0, #0
	bne _08058428
	ldr r0, _08058424  @ gUnknown_080DAEA0
	b _08058482
	.align 2, 0
_08058424: .4byte gUnknown_080DAEA0
_08058428:
	ldr r0, _0805842C  @ gUnknown_080DAEC8
	b _08058482
	.align 2, 0
_0805842C: .4byte gUnknown_080DAEC8
_08058430:
	lsls r0, r3, #0x10
	cmp r0, #0
	blt _08058454
	adds r0, r6, #0
	bl UnitHasMagicRank
	lsls r0, r0, #0x18
	cmp r0, #0
	bne _0805844C
	ldr r0, _08058448  @ gUnknown_080DAE8C
	b _08058482
	.align 2, 0
_08058448: .4byte gUnknown_080DAE8C
_0805844C:
	ldr r0, _08058450  @ gUnknown_080DAEBE
	b _08058482
	.align 2, 0
_08058450: .4byte gUnknown_080DAEBE
_08058454:
	movs r0, #2
	bl sub_80716B0
	cmp r0, #1
	beq _08058478
	cmp r0, #1
	bgt _08058468
	cmp r0, #0
	beq _0805846E
	b _0805848C
_08058468:
	cmp r0, #2
	beq _08058480
	b _0805848C
_0805846E:
	ldr r0, _08058474  @ gUnknown_080DAED2
	b _08058482
	.align 2, 0
_08058474: .4byte gUnknown_080DAED2
_08058478:
	ldr r0, _0805847C  @ gUnknown_080DAEDC
	b _08058482
	.align 2, 0
_0805847C: .4byte gUnknown_080DAEDC
_08058480:
	ldr r0, _080584AC  @ gUnknown_080DAEE6
_08058482:
	lsls r1, r4, #0x10
	asrs r1, r1, #0xf
	adds r1, r1, r0
	ldrh r0, [r1]
	strh r0, [r5]
_0805848C:
	ldr r0, [r7]
	lsls r0, r0, #0xd
	lsrs r0, r0, #0xd
	movs r1, #2
	ands r0, r1
	cmp r0, #0
	beq _080584DC
	adds r0, r6, #0
	bl UnitHasMagicRank
	lsls r0, r0, #0x18
	cmp r0, #0
	bne _080584B4
	ldr r0, _080584B0  @ gUnknown_080DAE96
	b _080584B6
	.align 2, 0
_080584AC: .4byte gUnknown_080DAEE6
_080584B0: .4byte gUnknown_080DAE96
_080584B4:
	ldr r0, _080584D4  @ gUnknown_080DAEBE
_080584B6:
	lsls r1, r4, #0x10
	asrs r1, r1, #0xf
	adds r1, r1, r0
	ldrh r0, [r1]
	strh r0, [r5]
	ldr r0, _080584D8  @ gUnknown_080DAEAA
	ldr r2, [sp, #0x1c]
	lsls r1, r2, #0x10
	asrs r1, r1, #0xf
	adds r1, r1, r0
	ldrh r0, [r1]
	mov r3, r8
	strh r0, [r3]
	b _080584EC
	.align 2, 0
_080584D4: .4byte gUnknown_080DAEBE
_080584D8: .4byte gUnknown_080DAEAA
_080584DC:
	ldr r0, _08058560  @ gUnknown_080DAEB4
	ldr r5, [sp, #0x1c]
	lsls r1, r5, #0x10
	asrs r1, r1, #0xf
	adds r1, r1, r0
	ldrh r0, [r1]
	mov r1, r8
	strh r0, [r1]
_080584EC:
	ldr r1, _08058564  @ gAnimRoundData
	ldr r2, [sp, #0xc]
	lsls r0, r2, #2
	adds r5, r0, r1
	mov r0, sp
	ldrh r0, [r0]
	movs r6, #0
	strh r0, [r5]
	lsls r0, r2, #1
	adds r0, #1
	lsls r0, r0, #1
	adds r4, r0, r1
	mov r3, sp
	ldrh r0, [r3, #2]
	strh r0, [r4]
	ldr r0, [r7]
	lsls r0, r0, #0xd
	lsrs r1, r0, #0xd
	movs r0, #2
	ands r0, r1
	cmp r0, #0
	beq _0805851A
	b _0805881C
_0805851A:
	movs r0, #0x80
	ands r0, r1
	cmp r0, #0
	beq _080585B4
	ldr r0, _08058568  @ gEkrInitialPosition
	movs r1, #0
	ldrsh r0, [r0, r1]
	ldr r2, [sp, #0x10]
	cmp r0, r2
	bne _08058574
	mov r3, r9
	lsls r0, r3, #1
	bl GetEfxHp
	movs r1, #3
	ldrsb r1, [r7, r1]
	subs r0, r0, r1
	lsls r0, r0, #0x10
	lsrs r2, r0, #0x10
	cmp r0, #0
	bge _08058546
	movs r2, #0
_08058546:
	mov r0, r9
	adds r0, #1
	lsls r0, r0, #0x10
	lsrs r0, r0, #0x10
	mov r9, r0
	lsls r0, r0, #2
	ldr r1, _0805856C  @ gEfxHpLut
	adds r0, r0, r1
	strh r2, [r0]
	ldrh r0, [r5]
	ldr r2, _08058570  @ 0xFFFF8000
	adds r1, r2, #0
	b _0805875E
	.align 2, 0
_08058560: .4byte gUnknown_080DAEB4
_08058564: .4byte gAnimRoundData
_08058568: .4byte gEkrInitialPosition
_0805856C: .4byte gEfxHpLut
_08058570: .4byte 0xFFFF8000
_08058574:
	mov r3, sl
	lsls r0, r3, #1
	adds r0, #1
	bl GetEfxHp
	movs r1, #3
	ldrsb r1, [r7, r1]
	subs r0, r0, r1
	lsls r0, r0, #0x10
	lsrs r2, r0, #0x10
	cmp r0, #0
	bge _0805858E
	movs r2, #0
_0805858E:
	mov r0, sl
	adds r0, #1
	lsls r0, r0, #0x10
	lsrs r0, r0, #0x10
	mov sl, r0
	lsls r0, r0, #1
	adds r0, #1
	lsls r0, r0, #1
	ldr r5, _080585AC  @ gEfxHpLut
	adds r0, r0, r5
	strh r2, [r0]
	ldrh r0, [r4]
	ldr r2, _080585B0  @ 0xFFFF8000
	b _08058816
	.align 2, 0
_080585AC: .4byte gEfxHpLut
_080585B0: .4byte 0xFFFF8000
_080585B4:
	movs r0, #0x80
	lsls r0, r0, #1
	ands r1, r0
	cmp r1, #0
	beq _080586A0
	ldr r0, _08058628  @ gEkrInitialPosition
	movs r3, #0
	ldrsh r0, [r0, r3]
	ldr r5, [sp, #0x10]
	cmp r0, r5
	bne _08058634
	mov r1, sl
	lsls r0, r1, #1
	adds r0, #1
	bl GetEfxHp
	movs r1, #3
	ldrsb r1, [r7, r1]
	subs r0, r0, r1
	lsls r0, r0, #0x10
	lsrs r2, r0, #0x10
	cmp r0, #0
	bge _080585E4
	movs r2, #0
_080585E4:
	mov r0, sl
	adds r0, #1
	lsls r0, r0, #0x10
	lsrs r0, r0, #0x10
	mov sl, r0
	ldr r4, _0805862C  @ gEfxHpLut
	lsls r0, r0, #1
	adds r0, #1
	lsls r0, r0, #1
	adds r0, r0, r4
	strh r2, [r0]
	mov r2, r9
	lsls r0, r2, #1
	bl GetEfxHp
	movs r1, #3
	ldrsb r1, [r7, r1]
	adds r0, r0, r1
	lsls r0, r0, #0x10
	ldr r3, _08058630  @ gEkrPairMaxHP
	lsrs r2, r0, #0x10
	asrs r0, r0, #0x10
	movs r5, #0
	ldrsh r1, [r3, r5]
	cmp r0, r1
	ble _0805861A
	ldrh r2, [r3]
_0805861A:
	mov r0, r9
	adds r0, #1
	lsls r0, r0, #0x10
	lsrs r0, r0, #0x10
	mov r9, r0
	lsls r0, r0, #2
	b _08058690
	.align 2, 0
_08058628: .4byte gEkrInitialPosition
_0805862C: .4byte gEfxHpLut
_08058630: .4byte gEkrPairMaxHP
_08058634:
	mov r1, r9
	lsls r0, r1, #1
	bl GetEfxHp
	movs r1, #3
	ldrsb r1, [r7, r1]
	subs r0, r0, r1
	lsls r0, r0, #0x10
	lsrs r2, r0, #0x10
	cmp r0, #0
	bge _0805864C
	movs r2, #0
_0805864C:
	mov r0, r9
	adds r0, #1
	lsls r0, r0, #0x10
	lsrs r0, r0, #0x10
	mov r9, r0
	ldr r4, _08058698  @ gEfxHpLut
	lsls r0, r0, #2
	adds r0, r0, r4
	strh r2, [r0]
	mov r2, sl
	lsls r0, r2, #1
	adds r0, #1
	bl GetEfxHp
	movs r1, #3
	ldrsb r1, [r7, r1]
	adds r0, r0, r1
	lsls r0, r0, #0x10
	ldr r3, _0805869C  @ gEkrPairMaxHP
	lsrs r2, r0, #0x10
	asrs r0, r0, #0x10
	movs r5, #2
	ldrsh r1, [r3, r5]
	cmp r0, r1
	ble _08058680
	ldrh r2, [r3, #2]
_08058680:
	mov r0, sl
	adds r0, #1
	lsls r0, r0, #0x10
	lsrs r0, r0, #0x10
	mov sl, r0
	lsls r0, r0, #1
	adds r0, #1
	lsls r0, r0, #1
_08058690:
	adds r0, r0, r4
	strh r2, [r0]
	b _0805881C
	.align 2, 0
_08058698: .4byte gEfxHpLut
_0805869C: .4byte gEkrPairMaxHP
_080586A0:
	ldr r0, _08058764  @ gEkrInitialPosition
	movs r1, #0
	ldrsh r0, [r0, r1]
	ldr r2, [sp, #0x10]
	cmp r0, r2
	bne _0805876C
	mov r3, sl
	lsls r0, r3, #1
	adds r0, #1
	bl GetEfxHp
	movs r1, #3
	ldrsb r1, [r7, r1]
	subs r0, r0, r1
	lsls r0, r0, #0x10
	lsrs r2, r0, #0x10
	cmp r0, #0
	bge _080586C6
	movs r2, #0
_080586C6:
	mov r0, sl
	adds r0, #1
	lsls r0, r0, #0x10
	lsrs r0, r0, #0x10
	mov sl, r0
	lsls r0, r0, #1
	adds r0, #1
	lsls r0, r0, #1
	ldr r1, _08058768  @ gEfxHpLut
	adds r0, r0, r1
	strh r2, [r0]
	ldr r0, [r7]
	lsls r0, r0, #0xd
	lsrs r0, r0, #0xd
	movs r1, #0x40
	ands r0, r1
	cmp r0, #0
	beq _080586F6
	ldrh r0, [r4]
	movs r2, #0x80
	lsls r2, r2, #6
	adds r1, r2, #0
	orrs r0, r1
	strh r0, [r4]
_080586F6:
	ldr r0, [r7]
	lsls r0, r0, #0xd
	lsrs r0, r0, #0xd
	movs r2, #0x80
	lsls r2, r2, #4
	ands r0, r2
	cmp r0, #0
	beq _08058712
	ldrh r0, [r5]
	movs r3, #0x80
	lsls r3, r3, #5
	adds r1, r3, #0
	orrs r0, r1
	strh r0, [r5]
_08058712:
	ldr r0, [r7]
	lsls r0, r0, #0xd
	lsrs r0, r0, #0xd
	movs r1, #0x80
	lsls r1, r1, #7
	ands r0, r1
	cmp r0, #0
	beq _0805872A
	ldrh r1, [r5]
	adds r0, r2, #0
	orrs r0, r1
	strh r0, [r5]
_0805872A:
	ldr r0, [r7]
	lsls r0, r0, #0xd
	lsrs r0, r0, #0xd
	movs r1, #0x80
	lsls r1, r1, #9
	ands r0, r1
	cmp r0, #0
	beq _08058746
	ldrh r0, [r5]
	movs r2, #0x80
	lsls r2, r2, #2
	adds r1, r2, #0
	orrs r0, r1
	strh r0, [r5]
_08058746:
	ldr r0, [r7]
	lsls r0, r0, #0xd
	lsrs r0, r0, #0xd
	movs r1, #0x80
	lsls r1, r1, #8
	ands r0, r1
	cmp r0, #0
	beq _0805881C
	ldrh r0, [r5]
	movs r3, #0x80
	lsls r3, r3, #3
	adds r1, r3, #0
_0805875E:
	orrs r0, r1
	strh r0, [r5]
	b _0805881C
	.align 2, 0
_08058764: .4byte gEkrInitialPosition
_08058768: .4byte gEfxHpLut
_0805876C:
	mov r1, r9
	lsls r0, r1, #1
	bl GetEfxHp
	movs r1, #3
	ldrsb r1, [r7, r1]
	subs r0, r0, r1
	lsls r0, r0, #0x10
	lsrs r2, r0, #0x10
	cmp r0, #0
	bge _08058784
	movs r2, #0
_08058784:
	mov r0, r9
	adds r0, #1
	lsls r0, r0, #0x10
	lsrs r0, r0, #0x10
	mov r9, r0
	lsls r0, r0, #2
	ldr r3, _08058844  @ gEfxHpLut
	adds r0, r0, r3
	strh r2, [r0]
	ldr r0, [r7]
	lsls r0, r0, #0xd
	lsrs r0, r0, #0xd
	movs r1, #0x40
	ands r0, r1
	cmp r0, #0
	beq _080587B0
	ldrh r0, [r5]
	movs r2, #0x80
	lsls r2, r2, #6
	adds r1, r2, #0
	orrs r0, r1
	strh r0, [r5]
_080587B0:
	ldr r0, [r7]
	lsls r0, r0, #0xd
	lsrs r0, r0, #0xd
	movs r2, #0x80
	lsls r2, r2, #4
	ands r0, r2
	cmp r0, #0
	beq _080587CC
	ldrh r0, [r4]
	movs r3, #0x80
	lsls r3, r3, #5
	adds r1, r3, #0
	orrs r0, r1
	strh r0, [r4]
_080587CC:
	ldr r0, [r7]
	lsls r0, r0, #0xd
	lsrs r0, r0, #0xd
	movs r1, #0x80
	lsls r1, r1, #7
	ands r0, r1
	cmp r0, #0
	beq _080587E4
	ldrh r1, [r4]
	adds r0, r2, #0
	orrs r0, r1
	strh r0, [r4]
_080587E4:
	ldr r0, [r7]
	lsls r0, r0, #0xd
	lsrs r0, r0, #0xd
	movs r1, #0x80
	lsls r1, r1, #9
	ands r0, r1
	cmp r0, #0
	beq _08058800
	ldrh r0, [r4]
	movs r5, #0x80
	lsls r5, r5, #2
	adds r1, r5, #0
	orrs r0, r1
	strh r0, [r4]
_08058800:
	ldr r0, [r7]
	lsls r0, r0, #0xd
	lsrs r0, r0, #0xd
	movs r1, #0x80
	lsls r1, r1, #8
	ands r0, r1
	cmp r0, #0
	beq _0805881C
	ldrh r0, [r4]
	movs r2, #0x80
	lsls r2, r2, #3
_08058816:
	adds r1, r2, #0
	orrs r0, r1
	strh r0, [r4]
_0805881C:
	adds r7, #4
	ldr r3, [sp, #0xc]
	adds r3, #1
	str r3, [sp, #0xc]
_08058824:
	ldr r2, [r7]
	lsls r0, r2, #8
	lsrs r0, r0, #0x1b
	movs r1, #0x10
	ands r0, r1
	cmp r0, #0
	bne _08058834
	b _08058358
_08058834:
	add sp, #0x20
	pop {r3, r4, r5}
	mov r8, r3
	mov r9, r4
	mov sl, r5
	pop {r4, r5, r6, r7}
	pop {r0}
	bx r0
	.align 2, 0
_08058844: .4byte gEfxHpLut

	THUMB_FUNC_END ParseBattleHitToBanimCmd
