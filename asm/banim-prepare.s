	.INCLUDE "macro.inc"

	.SYNTAX UNIFIED

	THUMB_FUNC_START GetBanimTriUnitPaletteID
GetBanimTriUnitPaletteID: @ 0x08057CAC
	push {r4, r5, r6, r7, lr}
	mov r7, sl
	mov r6, r9
	mov r5, r8
	push {r5, r6, r7}
	sub sp, #0xc
	adds r5, r0, #0
	adds r4, r1, #0
	mov r9, r3
	lsls r2, r2, #0x10
	lsrs r2, r2, #0x10
	mov r8, r2
	movs r0, #0
	mov sl, r0
	cmp r4, #0
	beq _08057CE2
	mov r0, r8
	bl GetItemType
	cmp r0, #9
	bne _08057CEC
	mov r0, r8
	bl IsItemDisplayedInBattle
	lsls r0, r0, #0x10
	cmp r0, #0
	bne _08057CEC
_08057CE2:
	ldr r0, _08057CE8  @ 0x0000FFFF
	b _08057D98
	.align 2, 0
_08057CE8: .4byte 0x0000FFFF
_08057CEC:
	mov r1, r8
	cmp r1, #0
	bne _08057CF6
	movs r3, #9
	b _08057D00
_08057CF6:
	mov r0, r8
	bl GetItemType
	lsls r0, r0, #0x10
	lsrs r3, r0, #0x10
_08057D00:
	str r4, [sp]
	ldr r2, [r5]
	ldr r1, [r5, #4]
	ldr r0, [r2, #0x28]
	ldr r1, [r1, #0x28]
	orrs r0, r1
	lsrs r0, r0, #8
	movs r1, #1
	ands r0, r1
	adds r2, #0x25
	adds r2, r2, r0
	ldrb r0, [r2]
	cmp r0, #0
	beq _08057D26
	ldr r1, _08057D38  @ gUnknown_088AF834
	lsls r0, r0, #2
	adds r0, r0, r1
	ldr r0, [r0]
	str r0, [sp]
_08057D26:
	movs r0, #0
	mov r2, r9
	str r0, [r2]
	movs r7, #0
	movs r1, #0
_08057D30:
	ldr r5, [sp]
	movs r6, #0
	b _08057D80
	.align 2, 0
_08057D38: .4byte gUnknown_088AF834
_08057D3C:
	cmp r7, #0
	bne _08057D44
	cmp r0, #0xff
	bhi _08057D7C
_08057D44:
	cmp r7, #1
	bne _08057D4E
	ldrh r0, [r5]
	cmp r0, #0xff
	bls _08057D7C
_08057D4E:
	ldrh r4, [r5]
	mov r0, r8
	str r1, [sp, #4]
	str r3, [sp, #8]
	bl GetItemIndex
	ldr r1, [sp, #4]
	ldr r3, [sp, #8]
	cmp r4, r0
	beq _08057D6C
	ldrh r0, [r5]
	ldr r2, _08057D78  @ 0xFFFFFF00
	adds r0, r0, r2
	cmp r0, r3
	bne _08057D7C
_08057D6C:
	ldrh r5, [r5, #2]
	mov sl, r5
	mov r0, r9
	str r6, [r0]
	movs r1, #1
	b _08057D86
	.align 2, 0
_08057D78: .4byte 0xFFFFFF00
_08057D7C:
	adds r5, #4
	adds r6, #1
_08057D80:
	ldrh r0, [r5]
	cmp r0, #0
	bne _08057D3C
_08057D86:
	cmp r1, #1
	beq _08057D90
	adds r7, #1
	cmp r7, #1
	ble _08057D30
_08057D90:
	mov r0, sl
	subs r0, #1
	lsls r0, r0, #0x10
	lsrs r0, r0, #0x10
_08057D98:
	add sp, #0xc
	pop {r3, r4, r5}
	mov r8, r3
	mov r9, r4
	mov sl, r5
	pop {r4, r5, r6, r7}
	pop {r1}
	bx r1

	THUMB_FUNC_END GetBanimTriUnitPaletteID

	THUMB_FUNC_START GetAnimTerrain
GetAnimTerrain: @ 0x08057DA8
	push {lr}
	lsls r0, r0, #0x10
	lsrs r2, r0, #0x10
	lsls r1, r1, #0x10
	lsrs r0, r1, #0x10
	cmp r0, #0x14
	bls _08057DB8
	b _08057EBC
_08057DB8:
	lsls r0, r0, #2
	ldr r1, _08057DC4  @ _08057DC8
	adds r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.align 2, 0
_08057DC4: .4byte _08057DC8
_08057DC8: @ jump table
	.4byte _08057EBC @ case 0
	.4byte _08057E1C @ case 1
	.4byte _08057E24 @ case 2
	.4byte _08057E2C @ case 3
	.4byte _08057E34 @ case 4
	.4byte _08057E3C @ case 5
	.4byte _08057E44 @ case 6
	.4byte _08057E4C @ case 7
	.4byte _08057E54 @ case 8
	.4byte _08057E5C @ case 9
	.4byte _08057E64 @ case 10
	.4byte _08057E6C @ case 11
	.4byte _08057E74 @ case 12
	.4byte _08057E7C @ case 13
	.4byte _08057E84 @ case 14
	.4byte _08057E8C @ case 15
	.4byte _08057E94 @ case 16
	.4byte _08057E9C @ case 17
	.4byte _08057EA4 @ case 18
	.4byte _08057EAC @ case 19
	.4byte _08057EB4 @ case 20
_08057E1C:
	ldr r0, _08057E20  @ gUnknown_0880C807
	b _08057EBE
	.align 2, 0
_08057E20: .4byte gUnknown_0880C807
_08057E24:
	ldr r0, _08057E28  @ gUnknown_0880C848
	b _08057EBE
	.align 2, 0
_08057E28: .4byte gUnknown_0880C848
_08057E2C:
	ldr r0, _08057E30  @ gUnknown_0880C889
	b _08057EBE
	.align 2, 0
_08057E30: .4byte gUnknown_0880C889
_08057E34:
	ldr r0, _08057E38  @ gUnknown_0880C8CA
	b _08057EBE
	.align 2, 0
_08057E38: .4byte gUnknown_0880C8CA
_08057E3C:
	ldr r0, _08057E40  @ gUnknown_0880C90B
	b _08057EBE
	.align 2, 0
_08057E40: .4byte gUnknown_0880C90B
_08057E44:
	ldr r0, _08057E48  @ gUnknown_0880C94C
	b _08057EBE
	.align 2, 0
_08057E48: .4byte gUnknown_0880C94C
_08057E4C:
	ldr r0, _08057E50  @ gUnknown_0880C98D
	b _08057EBE
	.align 2, 0
_08057E50: .4byte gUnknown_0880C98D
_08057E54:
	ldr r0, _08057E58  @ gUnknown_0880C9CE
	b _08057EBE
	.align 2, 0
_08057E58: .4byte gUnknown_0880C9CE
_08057E5C:
	ldr r0, _08057E60  @ gUnknown_0880CA0F
	b _08057EBE
	.align 2, 0
_08057E60: .4byte gUnknown_0880CA0F
_08057E64:
	ldr r0, _08057E68  @ gUnknown_0880CA50
	b _08057EBE
	.align 2, 0
_08057E68: .4byte gUnknown_0880CA50
_08057E6C:
	ldr r0, _08057E70  @ gUnknown_0880CA91
	b _08057EBE
	.align 2, 0
_08057E70: .4byte gUnknown_0880CA91
_08057E74:
	ldr r0, _08057E78  @ gUnknown_0880CAD2
	b _08057EBE
	.align 2, 0
_08057E78: .4byte gUnknown_0880CAD2
_08057E7C:
	ldr r0, _08057E80  @ gUnknown_0880CB13
	b _08057EBE
	.align 2, 0
_08057E80: .4byte gUnknown_0880CB13
_08057E84:
	ldr r0, _08057E88  @ gUnknown_0880CB54
	b _08057EBE
	.align 2, 0
_08057E88: .4byte gUnknown_0880CB54
_08057E8C:
	ldr r0, _08057E90  @ gUnknown_0880CB95
	b _08057EBE
	.align 2, 0
_08057E90: .4byte gUnknown_0880CB95
_08057E94:
	ldr r0, _08057E98  @ gUnknown_0880CBD6
	b _08057EBE
	.align 2, 0
_08057E98: .4byte gUnknown_0880CBD6
_08057E9C:
	ldr r0, _08057EA0  @ gUnknown_0880CC17
	b _08057EBE
	.align 2, 0
_08057EA0: .4byte gUnknown_0880CC17
_08057EA4:
	ldr r0, _08057EA8  @ gUnknown_0880CC58
	b _08057EBE
	.align 2, 0
_08057EA8: .4byte gUnknown_0880CC58
_08057EAC:
	ldr r0, _08057EB0  @ gUnknown_0880CC99
	b _08057EBE
	.align 2, 0
_08057EB0: .4byte gUnknown_0880CC99
_08057EB4:
	ldr r0, _08057EB8  @ gUnknown_0880CCDA
	b _08057EBE
	.align 2, 0
_08057EB8: .4byte gUnknown_0880CCDA
_08057EBC:
	ldr r0, _08057ECC  @ gUnknown_0880C7C6
_08057EBE:
	adds r0, r2, r0
	ldrb r0, [r0]
	lsls r0, r0, #0x18
	asrs r0, r0, #0x18
	subs r0, #1
	pop {r1}
	bx r1
	.align 2, 0
_08057ECC: .4byte gUnknown_0880C7C6

	THUMB_FUNC_END GetAnimTerrain

	THUMB_FUNC_START GetBanimBackGround
GetBanimBackGround: @ 0x08057ED0
	push {lr}
	lsls r0, r0, #0x10
	lsrs r2, r0, #0x10
	lsls r1, r1, #0x10
	lsrs r0, r1, #0x10
	cmp r0, #0x14
	bls _08057EE0
	b _08057FE4
_08057EE0:
	lsls r0, r0, #2
	ldr r1, _08057EEC  @ _08057EF0
	adds r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.align 2, 0
_08057EEC: .4byte _08057EF0
_08057EF0: @ jump table
	.4byte _08057FE4 @ case 0
	.4byte _08057F44 @ case 1
	.4byte _08057F4C @ case 2
	.4byte _08057F54 @ case 3
	.4byte _08057F5C @ case 4
	.4byte _08057F64 @ case 5
	.4byte _08057F6C @ case 6
	.4byte _08057F74 @ case 7
	.4byte _08057F7C @ case 8
	.4byte _08057F84 @ case 9
	.4byte _08057F8C @ case 10
	.4byte _08057F94 @ case 11
	.4byte _08057F9C @ case 12
	.4byte _08057FA4 @ case 13
	.4byte _08057FAC @ case 14
	.4byte _08057FB4 @ case 15
	.4byte _08057FBC @ case 16
	.4byte _08057FC4 @ case 17
	.4byte _08057FCC @ case 18
	.4byte _08057FD4 @ case 19
	.4byte _08057FDC @ case 20
_08057F44:
	ldr r0, _08057F48  @ gUnknown_0880CD5C
	b _08057FE6
	.align 2, 0
_08057F48: .4byte gUnknown_0880CD5C
_08057F4C:
	ldr r0, _08057F50  @ gUnknown_0880CD9D
	b _08057FE6
	.align 2, 0
_08057F50: .4byte gUnknown_0880CD9D
_08057F54:
	ldr r0, _08057F58  @ gUnknown_0880CDDE
	b _08057FE6
	.align 2, 0
_08057F58: .4byte gUnknown_0880CDDE
_08057F5C:
	ldr r0, _08057F60  @ gUnknown_0880CE1F
	b _08057FE6
	.align 2, 0
_08057F60: .4byte gUnknown_0880CE1F
_08057F64:
	ldr r0, _08057F68  @ gUnknown_0880CE60
	b _08057FE6
	.align 2, 0
_08057F68: .4byte gUnknown_0880CE60
_08057F6C:
	ldr r0, _08057F70  @ gUnknown_0880CEA1
	b _08057FE6
	.align 2, 0
_08057F70: .4byte gUnknown_0880CEA1
_08057F74:
	ldr r0, _08057F78  @ gUnknown_0880CEE2
	b _08057FE6
	.align 2, 0
_08057F78: .4byte gUnknown_0880CEE2
_08057F7C:
	ldr r0, _08057F80  @ gUnknown_0880CF23
	b _08057FE6
	.align 2, 0
_08057F80: .4byte gUnknown_0880CF23
_08057F84:
	ldr r0, _08057F88  @ gUnknown_0880CF64
	b _08057FE6
	.align 2, 0
_08057F88: .4byte gUnknown_0880CF64
_08057F8C:
	ldr r0, _08057F90  @ gUnknown_0880CFA5
	b _08057FE6
	.align 2, 0
_08057F90: .4byte gUnknown_0880CFA5
_08057F94:
	ldr r0, _08057F98  @ gUnknown_0880CFE6
	b _08057FE6
	.align 2, 0
_08057F98: .4byte gUnknown_0880CFE6
_08057F9C:
	ldr r0, _08057FA0  @ gUnknown_0880D027
	b _08057FE6
	.align 2, 0
_08057FA0: .4byte gUnknown_0880D027
_08057FA4:
	ldr r0, _08057FA8  @ gUnknown_0880D068
	b _08057FE6
	.align 2, 0
_08057FA8: .4byte gUnknown_0880D068
_08057FAC:
	ldr r0, _08057FB0  @ gUnknown_0880D0A9
	b _08057FE6
	.align 2, 0
_08057FB0: .4byte gUnknown_0880D0A9
_08057FB4:
	ldr r0, _08057FB8  @ gUnknown_0880D0EA
	b _08057FE6
	.align 2, 0
_08057FB8: .4byte gUnknown_0880D0EA
_08057FBC:
	ldr r0, _08057FC0  @ gUnknown_0880D12B
	b _08057FE6
	.align 2, 0
_08057FC0: .4byte gUnknown_0880D12B
_08057FC4:
	ldr r0, _08057FC8  @ gUnknown_0880D16C
	b _08057FE6
	.align 2, 0
_08057FC8: .4byte gUnknown_0880D16C
_08057FCC:
	ldr r0, _08057FD0  @ gUnknown_0880D1AD
	b _08057FE6
	.align 2, 0
_08057FD0: .4byte gUnknown_0880D1AD
_08057FD4:
	ldr r0, _08057FD8  @ gUnknown_0880D1EE
	b _08057FE6
	.align 2, 0
_08057FD8: .4byte gUnknown_0880D1EE
_08057FDC:
	ldr r0, _08057FE0  @ gUnknown_0880D22F
	b _08057FE6
	.align 2, 0
_08057FE0: .4byte gUnknown_0880D22F
_08057FE4:
	ldr r0, _08057FF4  @ gUnknown_0880CD1B
_08057FE6:
	adds r0, r2, r0
	ldrb r0, [r0]
	lsls r0, r0, #0x18
	asrs r0, r0, #0x18
	pop {r1}
	bx r1
	.align 2, 0
_08057FF4: .4byte gUnknown_0880CD1B

	THUMB_FUNC_END GetBanimBackGround

	THUMB_FUNC_START GetSpellAnimId
GetSpellAnimId: @ 0x08057FF8
	push {r4, lr}
	lsls r0, r0, #0x10
	lsrs r4, r0, #0x10
	lsls r1, r1, #0x10
	lsrs r1, r1, #0x10
	adds r0, r1, #0
	bl GetItemIndex
	lsls r0, r0, #0x10
	lsrs r0, r0, #0x10
	ldr r3, _08058014  @ gSpellAssocData
	ldrh r1, [r3]
	ldr r2, _08058018  @ 0x0000FFFF
	b _08058020
	.align 2, 0
_08058014: .4byte gSpellAssocData
_08058018: .4byte 0x0000FFFF
_0805801C:
	adds r3, #0x10
	ldrh r1, [r3]
_08058020:
	cmp r1, r2
	beq _08058028
	cmp r1, r0
	bne _0805801C
_08058028:
	ldrh r2, [r3, #4]
	movs r1, #4
	ldrsh r0, [r3, r1]
	cmp r0, #3
	beq _08058034
	b _08058196
_08058034:
	subs r0, r4, #5
	cmp r0, #0x49
	bls _0805803C
	b _08058196
_0805803C:
	lsls r0, r0, #2
	ldr r1, _08058048  @ _0805804C
	adds r0, r0, r1
	ldr r0, [r0]
	mov pc, r0
	.align 2, 0
_08058048: .4byte _0805804C
_0805804C: @ jump table
	.4byte _08058174 @ case 0
	.4byte _08058174 @ case 1
	.4byte _0805817C @ case 2
	.4byte _08058180 @ case 3
	.4byte _08058196 @ case 4
	.4byte _08058196 @ case 5
	.4byte _08058194 @ case 6
	.4byte _08058194 @ case 7
	.4byte _08058196 @ case 8
	.4byte _08058196 @ case 9
	.4byte _08058196 @ case 10
	.4byte _08058196 @ case 11
	.4byte _08058196 @ case 12
	.4byte _08058196 @ case 13
	.4byte _08058196 @ case 14
	.4byte _08058196 @ case 15
	.4byte _08058196 @ case 16
	.4byte _08058196 @ case 17
	.4byte _08058196 @ case 18
	.4byte _08058196 @ case 19
	.4byte _08058196 @ case 20
	.4byte _08058196 @ case 21
	.4byte _08058196 @ case 22
	.4byte _08058196 @ case 23
	.4byte _08058196 @ case 24
	.4byte _08058196 @ case 25
	.4byte _0805818C @ case 26
	.4byte _0805818C @ case 27
	.4byte _08058190 @ case 28
	.4byte _08058190 @ case 29
	.4byte _08058196 @ case 30
	.4byte _08058196 @ case 31
	.4byte _08058196 @ case 32
	.4byte _08058196 @ case 33
	.4byte _08058196 @ case 34
	.4byte _08058196 @ case 35
	.4byte _08058196 @ case 36
	.4byte _08058196 @ case 37
	.4byte _08058196 @ case 38
	.4byte _08058196 @ case 39
	.4byte _08058196 @ case 40
	.4byte _08058196 @ case 41
	.4byte _08058196 @ case 42
	.4byte _08058196 @ case 43
	.4byte _08058196 @ case 44
	.4byte _08058196 @ case 45
	.4byte _08058196 @ case 46
	.4byte _08058196 @ case 47
	.4byte _08058196 @ case 48
	.4byte _08058196 @ case 49
	.4byte _08058196 @ case 50
	.4byte _08058196 @ case 51
	.4byte _08058196 @ case 52
	.4byte _08058196 @ case 53
	.4byte _08058196 @ case 54
	.4byte _08058196 @ case 55
	.4byte _08058196 @ case 56
	.4byte _08058196 @ case 57
	.4byte _08058196 @ case 58
	.4byte _08058196 @ case 59
	.4byte _08058196 @ case 60
	.4byte _08058196 @ case 61
	.4byte _08058196 @ case 62
	.4byte _08058196 @ case 63
	.4byte _08058196 @ case 64
	.4byte _08058196 @ case 65
	.4byte _08058196 @ case 66
	.4byte _08058184 @ case 67
	.4byte _08058188 @ case 68
	.4byte _08058196 @ case 69
	.4byte _08058196 @ case 70
	.4byte _08058196 @ case 71
	.4byte _08058196 @ case 72
	.4byte _08058178 @ case 73
_08058174:
	movs r2, #4
	b _08058196
_08058178:
	movs r2, #5
	b _08058196
_0805817C:
	movs r2, #6
	b _08058196
_08058180:
	movs r2, #0xd
	b _08058196
_08058184:
	movs r2, #7
	b _08058196
_08058188:
	movs r2, #8
	b _08058196
_0805818C:
	movs r2, #9
	b _08058196
_08058190:
	movs r2, #0xa
	b _08058196
_08058194:
	movs r2, #0xb
_08058196:
	lsls r0, r2, #0x10
	asrs r0, r0, #0x10
	pop {r4}
	pop {r1}
	bx r1

	THUMB_FUNC_END GetSpellAnimId

	THUMB_FUNC_START sub_80581A0
sub_80581A0: @ 0x080581A0
	push {r4, r5, lr}
	adds r4, r0, #0
	adds r0, r2, #0
	lsls r1, r1, #0x10
	lsrs r5, r1, #0x10
	lsls r0, r0, #0x10
	lsrs r0, r0, #0x10
	bl GetItemIndex
	lsls r0, r0, #0x10
	lsrs r2, r0, #0x10
	movs r0, #0
	ldrsh r1, [r4, r0]
	movs r0, #1
	negs r0, r0
	cmp r1, r0
	bne _080581C6
	movs r0, #0
	strh r0, [r4]
_080581C6:
	ldr r0, _080581E8  @ gEkrInitialHitSide
	movs r1, #0
	ldrsh r0, [r0, r1]
	cmp r0, r5
	beq _080581E0
	cmp r2, #0x54
	blt _080581E0
	cmp r2, #0x56
	ble _080581DC
	cmp r2, #0x58
	bne _080581E0
_080581DC:
	movs r0, #0
	strh r0, [r4]
_080581E0:
	pop {r4, r5}
	pop {r0}
	bx r0
	.align 2, 0
_080581E8: .4byte gEkrInitialHitSide

	THUMB_FUNC_END sub_80581A0

.align 2, 0
