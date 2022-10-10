    .section .data

	.global gUnknown_0859E8E0
gUnknown_0859E8E0:  @ 0x0859E8E0
	.incbin "baserom.gba", 0x59E8E0, 0x490

	.global gUnknown_0859ED70
gUnknown_0859ED70:  @ 0x0859ED70
	.incbin "baserom.gba", 0x59ED70, 0x40

	.global gUnknown_0859EDB0
gUnknown_0859EDB0:  @ 0x0859EDB0
	.incbin "baserom.gba", 0x59EDB0, 0x3C

	.global gUnknown_0859EDEC
gUnknown_0859EDEC:  @ 0x0859EDEC
	.incbin "baserom.gba", 0x59EDEC, 0x34

	.global unit_icon_pal_player
unit_icon_pal_player:
	.incbin "graphics/unit_icon/palette/unit_icon_pal_player.agbpal"

	.global unit_icon_pal_enemy
unit_icon_pal_enemy:
	.incbin "graphics/unit_icon/palette/unit_icon_pal_enemy.agbpal"

	.global unit_icon_pal_npc
unit_icon_pal_npc:
	.incbin "graphics/unit_icon/palette/unit_icon_pal_npc.agbpal"

	.global unit_icon_pal_after_action
unit_icon_pal_after_action:
	.incbin "graphics/unit_icon/palette/unit_icon_pal_after_action.agbpal"

	.global unit_icon_pal_p4
unit_icon_pal_p4:
	.incbin "graphics/unit_icon/palette/unit_icon_pal_p4.agbpal"

	.global gUnknown_0859EEC0
gUnknown_0859EEC0:  @ 0x0859EEC0
	.incbin "baserom.gba", 0x59EEC0, 0x20

	.global gUnknown_0859EEE0
gUnknown_0859EEE0:  @ 0x0859EEE0
	.incbin "baserom.gba", 0x59EEE0, 0x20

	.global gUnknown_0859EF00
gUnknown_0859EF00:  @ 0x0859EF00
	.incbin "baserom.gba", 0x59EF00, 0x20

	.global gUnknown_0859EF20
gUnknown_0859EF20:  @ 0x0859EF20
	.incbin "baserom.gba", 0x59EF20, 0x20

	.global gUnknown_0859EF40
gUnknown_0859EF40:  @ 0x0859EF40
	.incbin "baserom.gba", 0x59EF40, 0x20

	.global gUnknown_0859EF60
gUnknown_0859EF60:  @ 0x0859EF60
	.incbin "baserom.gba", 0x59EF60, 0x20

	.global gUnknown_0859EF80
gUnknown_0859EF80:  @ 0x0859EF80
	.incbin "baserom.gba", 0x59EF80, 0x40

	.global gUnknown_0859EFC0
gUnknown_0859EFC0:  @ 0x0859EFC0
	.incbin "baserom.gba", 0x59EFC0, 0x20

	.global gUnknown_0859EFE0
gUnknown_0859EFE0:  @ 0x0859EFE0
	.incbin "baserom.gba", 0x59EFE0, 0x20

	.global gUnknown_0859F000
gUnknown_0859F000:  @ 0x0859F000
	.incbin "baserom.gba", 0x59F000, 0x20

	.global Img_PhaseChangeUnk
Img_PhaseChangeUnk:  @ 0x0859F020
	.incbin "graphics/bmfx_misc/PhaseChangeUnk.4bpp.lz"

	.global Img_PhaseChangePlayer
Img_PhaseChangePlayer:  @ 0x0859F3F8
	.incbin "graphics/bmfx_misc/PhaseChangePlayer.4bpp.lz"

	.global Pal_PhaseChangePlayer
Pal_PhaseChangePlayer:  @ 0x0859FA2C
	.incbin "graphics/bmfx_misc/PhaseChangePlayer.gbapal", 0x0, 0x20

	.global Img_PhaseChangeEnemy
Img_PhaseChangeEnemy:  @ 0x0859FA4C
	.incbin "graphics/bmfx_misc/PhaseChangeEnemy.4bpp.lz"

	.global Pal_PhaseChangeEnemy
Pal_PhaseChangeEnemy:  @ 0x085A0068
	.incbin "graphics/bmfx_misc/PhaseChangeEnemy.gbapal", 0x0, 0x20

	.global Img_PhaseChangeOther
Img_PhaseChangeOther:  @ 0x085A0088
	.incbin "graphics/bmfx_misc/PhaseChangeOther.4bpp.lz"

	.global Pal_PhaseChangeOther
Pal_PhaseChangeOther:  @ 0x085A0698
	.incbin "graphics/bmfx_misc/PhaseChangeOther.gbapal", 0x0, 0x20
	/* I think that the palette is only 0x20 long, so here may be lie a bug */

unk_85A06B8: @ 0x085A06B8
	.incbin "baserom.gba", 0x5A06B8, 0x20

	.global Img_PhaseChangeSquares
Img_PhaseChangeSquares:  @ 0x085A06D8
	.incbin "graphics/bmfx_misc/PhaseChangeSquares.4bpp.lz"

	.global TSA_unk_085A0838
TSA_unk_085A0838:  @ 0x085A0838
	.incbin "graphics/bmfx_misc/TSA_unk_085A0838.tsa.bin"

	.global TSA_unk_085A08F0
TSA_unk_085A08F0:  @ 0x085A08F0
	.incbin "graphics/bmfx_misc/TSA_unk_085A08F0.tsa.bin"

	.global gTSA_BattleForecastStandard
gTSA_BattleForecastStandard:  @ 0x085A09A8
	.incbin "graphics/bmfx_misc/BattleForecastStandard.tsa.bin"

	.global gTSA_BattleForecastExtended
gTSA_BattleForecastExtended:  @ 0x085A0AEC
	.incbin "graphics/bmfx_misc/BattleForecastExtended.tsa.bin"

	.global gBattleForecast_x2x4Gfx
gBattleForecast_x2x4Gfx:  @ 0x085A0C80
	.incbin "graphics/bmfx_misc/BattleForecast_x2x4.4bpp.lz"

	.global gBattleForecast_x2x4Pal
gBattleForecast_x2x4Pal:  @ 0x085A0D2C
	.incbin "graphics/bmfx_misc/BattleForecast_x2x4.gbapal", 0x0, 0x20

	.global gUnknown_085A0D4C
gUnknown_085A0D4C:  @ 0x085A0D4C
	.incbin "baserom.gba", 0x5A0D4C, 0x154

	.global gUnknown_085A0EA0
gUnknown_085A0EA0:  @ 0x085A0EA0
	.incbin "baserom.gba", 0x5A0EA0, 0x158

	.global SpriteAnim_GasTrapVertical
SpriteAnim_GasTrapVertical:  @ 0x085A0FF8
	.incbin "baserom.gba", 0x5A0FF8, 0x2A4

	.global SpriteAnim_GasTrapHorizontal
SpriteAnim_GasTrapHorizontal:  @ 0x085A129C
	.incbin "baserom.gba", 0x5A129C, 0x274

	.global Img_GasTrapVertical
Img_GasTrapVertical:  @ 0x085A1510
	.incbin "graphics/bmfx_misc/GasTrapVertical.4bpp.lz"

	.global Img_GasTrapHorizontal
Img_GasTrapHorizontal:  @ 0x085A1AF8
	.incbin "graphics/bmfx_misc/GasTrapHorizontal.4bpp.lz"

	.global Pal_GasTrap
Pal_GasTrap:  @ 0x085A206C
	.incbin "graphics/bmfx_misc/GasTrapHorizontal.gbapal", 0x0, 0x20

	.global Pal_ArrowTrap
Pal_ArrowTrap:  @ 0x085A208C
	.incbin "graphics/bmfx_misc/ArrowTrap.gbapal", 0x0, 0x20

	.global Img_ArrowTrap
Img_ArrowTrap:  @ 0x085A20AC
	.incbin "graphics/bmfx_misc/ArrowTrap.4bpp.lz"

	.global SpriteAnim_ArrowTrap
SpriteAnim_ArrowTrap:  @ 0x085A2384
	.incbin "baserom.gba", 0x5A2384, 0x5BC

	.global Img_FireTrap
Img_FireTrap:  @ 0x085A2940
	.incbin "graphics/bmfx_misc/FireTrap.4bpp.lz"

	.global Pal_FireTrap
Pal_FireTrap:  @ 0x085A2DDC
	.incbin "graphics/bmfx_misc/FireTrap.gbapal", 0x0, 0x20

	.global SpriteAnim_FireTrap
SpriteAnim_FireTrap:  @ 0x085A2DFC
	.incbin "baserom.gba", 0x5A2DFC, 0x694

	.global Pal_FireTrap2
Pal_FireTrap2:  @ 0x085A3490
	.incbin "graphics/bmfx_misc/FireTrap2.gbapal", 0x0, 0x20

	.global Img_PikeTrap
Img_PikeTrap:  @ 0x085A34B0
	.incbin "graphics/bmfx_misc/PikeTrap.4bpp.lz"

	.global SpriteAnim_PikeTrap
SpriteAnim_PikeTrap:  @ 0x085A3730
	.incbin "baserom.gba", 0x5A3730, 0x214

	.global Pal_PikeTrap
Pal_PikeTrap:  @ 0x085A3944
	.incbin "graphics/bmfx_misc/PikeTrap.gbapal", 0x0, 0x20

	.global Img_WfxSnowStorm1
Img_WfxSnowStorm1:  @ 0x085A3964
	.incbin "baserom.gba", 0x5A3964, 0x88

	.global Img_WfxSnowStorm2
Img_WfxSnowStorm2:  @ 0x085A39EC
	.incbin "baserom.gba", 0x5A39EC, 0x98

	.global Img_WfxFrame
Img_WfxFrame:  @ 0x085A3A84
	.incbin "graphics/bmfx_misc/WfxFrame.4bpp.lz"

	.global Pal_WfxFrame
Pal_WfxFrame:  @ 0x085A3AC0
	.incbin "graphics/bmfx_misc/WfxFrame.gbapal", 0x0, 0x20

unk_85A3AE0: @ 0x085A3AE0
	.incbin "baserom.gba", 0x5A3AE0, 0x20

	.global Img_WfxClouds
Img_WfxClouds:  @ 0x085A3B00
	.incbin "graphics/bmfx_misc/WfxClouds.4bpp.lz"

	.global Pal_WfxClouds
Pal_WfxClouds:  @ 0x085A401C
	.incbin "graphics/bmfx_misc/WfxClouds.gbapal", 0x0, 0x20

	.global Img_LightRune
Img_LightRune:  @ 0x085A403C
	.incbin "baserom.gba", 0x5A403C, 0x1724

	.global Pal_LightRune
Pal_LightRune:  @ 0x085A5760
	.incbin "baserom.gba", 0x5A5760, 0x20

	.global Tsa_LightRune
Tsa_LightRune:  @ 0x085A5780
	.incbin "baserom.gba", 0x5A5780, 0x2E0

	.global Img_EventWarp
Img_EventWarp:  @ 0x085A5A60
	.incbin "baserom.gba", 0x5A5A60, 0x748

	.global Pal_EventWarp
Pal_EventWarp:  @ 0x085A61A8
	.incbin "baserom.gba", 0x5A61A8, 0x20

	.global Tsa_EventWarp
Tsa_EventWarp:  @ 0x085A61C8
	.incbin "baserom.gba", 0x5A61C8, 0x1C4

	.global gUnknown_085A638C
gUnknown_085A638C:  @ 0x085A638C
	.incbin "baserom.gba", 0x5A638C, 0xB0

	.global gUnknown_085A643C
gUnknown_085A643C:  @ 0x085A643C
	.incbin "baserom.gba", 0x5A643C, 0x40

	.global gUnknown_085A647C
gUnknown_085A647C:  @ 0x085A647C
	.incbin "baserom.gba", 0x5A647C, 0x804

	.global Img_DanceringFx
Img_DanceringFx:  @ 0x085A6C80
	.incbin "baserom.gba", 0x5A6C80, 0xDE4

	.global Tsa_DanceringFx
Tsa_DanceringFx:  @ 0x085A7A64
	.incbin "baserom.gba", 0x5A7A64, 0x23C

	.global Pal_DanceringFx
Pal_DanceringFx:  @ 0x085A7CA0
	.incbin "baserom.gba", 0x5A7CA0, 0x20

	.global Img_MineFx
Img_MineFx:  @ 0x085A7CC0
	.incbin "baserom.gba", 0x5A7CC0, 0x174

	.global SpritAnim_MineFx
SpritAnim_MineFx:  @ 0x085A7E34
	.incbin "baserom.gba", 0x5A7E34, 0x94

	.global Pal_MineFx
Pal_MineFx:  @ 0x085A7EC8
	.incbin "baserom.gba", 0x5A7EC8, 0x20

	.global gUnknown_085A7EE8
gUnknown_085A7EE8:  @ 0x085A7EE8
	.incbin "baserom.gba", 0x5A7EE8, 0x20
