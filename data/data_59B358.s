    .section .data

	.global gUnknown_0859B358
gUnknown_0859B358:  @ 0x0859B358
        @ PROC_SET_END_CB
        .short 0x4, 0x0
        .word sub_80214D4
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_80212C0
        @ PROC_CALL
        .short 0x2, 0x0
        .word MU_EndAll
        @ PROC_START_CHILD
        .short 0x5, 0x0
        .word sProcScr_GameOverSomething
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_80213F4
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_8021428
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_8021434
        @ PROC_LABEL
        .short 0xb, 0x63
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_8021470
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_80214A8
        @ PROC_END
        .short 0x0, 0x0
        .word 0x0


	.global gUnknown_0859B3B0
gUnknown_0859B3B0:  @ 0x0859B3B0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_802153C
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_80215F0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_8021668
        @ PROC_END
        .short 0x0, 0x0
        .word 0x0


	.global gUnknown_0859B3D0
gUnknown_0859B3D0:  @ 0x0859B3D0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_80216D0
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_8021784
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_80217FC
        @ PROC_END
        .short 0x0, 0x0
        .word 0x0


	.global gUnknown_0859B3F0
gUnknown_0859B3F0:  @ 0x0859B3F0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_80216D0
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_8021784
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_80217FC
        @ PROC_END
        .short 0x0, 0x0
        .word 0x0


	.global gUnknown_0859B410
gUnknown_0859B410:  @ 0x0859B410
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_80219F8
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_8021A94
        @ PROC_SLEEP
        .short 0xe, 0x19
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_8021AFC
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_8021B04
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_8021668
        @ PROC_END
        .short 0x0, 0x0
        .word 0x0


	.global gUnknown_0859B448
gUnknown_0859B448:  @ 0x0859B448
	.incbin "baserom.gba", 0x59B448, 0x44

	.global gUnknown_0859B48C
gUnknown_0859B48C:  @ 0x0859B48C
	.incbin "baserom.gba", 0x59B48C, 0x44

	.global gUnknown_0859B4D0
gUnknown_0859B4D0:  @ 0x0859B4D0
        @ PROC_YIELD
        .short 0xe, 0x0
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_8021B9C
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_8021C68
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_8021D04
        @ PROC_END
        .short 0x0, 0x0
        .word 0x0


	.global gUnknown_0859B4F8
gUnknown_0859B4F8:  @ 0x0859B4F8
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_8021E10
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_8021ECC
        @ PROC_END
        .short 0x0, 0x0
        .word 0x0


	.global gUnknown_0859B510
gUnknown_0859B510:  @ 0x0859B510
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_8021FB8
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_8021FEC
        @ PROC_END
        .short 0x0, 0x0
        .word 0x0


	.global gUnknown_0859B528
gUnknown_0859B528:  @ 0x0859B528
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_80220A8
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word sub_8022200
        @ PROC_END
        .short 0x0, 0x0
        .word 0x0


	.global gUnknown_0859B540
gUnknown_0859B540:  @ 0x0859B540
	.incbin "baserom.gba", 0x59B540, 0x20

	.global gUnknown_0859B560
gUnknown_0859B560:  @ 0x0859B560
        @ PROC_SLEEP
        .short 0xe, 0x18
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_80222E0
        @ PROC_END
        .short 0x0, 0x0
        .word 0x0


	.global gUnknown_0859B578
gUnknown_0859B578:  @ 0x0859B578
        @ PROC_CALL
        .short 0x2, 0x0
        .word BMapDispSuspend
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_802237C
        @ PROC_START_CHILD
        .short 0x5, 0x0
        .word sProcScr_ChapterIntro_KeyListen
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_8013D8C
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word ContinueUntilSomeTransistion6CExists
        @ PROC_CALL_ARG
        .short 0x18, 0x63
        .word ChapterIntro_SetSkipTarget
        @ PROC_SLEEP
        .short 0xe, 0xb4
        .word 0x0
        @ PROC_LABEL
        .short 0xb, 0x63
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_8013D68
        @ PROC_REPEAT
        .short 0x3, 0x0
        .word ContinueUntilSomeTransistion6CExists
        @ PROC_LABEL
        .short 0xb, 0x3e7
        .word 0x0
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_80224EC
        @ PROC_CALL
        .short 0x2, 0x0
        .word ChapterIntro_8020B20
        @ PROC_CALL
        .short 0x2, 0x0
        .word BMapDispResume
        @ PROC_CALL
        .short 0x2, 0x0
        .word sub_8022528
        @ PROC_YIELD
        .short 0xe, 0x0
        .word 0x0
        @ PROC_END
        .short 0x0, 0x0
        .word 0x0


	.global gProcScr_0859B600
gProcScr_0859B600:  @ 0x0859B600
	.incbin "baserom.gba", 0x59B600, 0x30

	.global gUnknown_0859B630
gUnknown_0859B630:  @ 0x0859B630
	.incbin "baserom.gba", 0x59B630, 0x38

	.global gUnknown_0859B668
gUnknown_0859B668:  @ 0x0859B668
	.incbin "baserom.gba", 0x59B668, 0x4

	.global gUnknown_0859B66C
gUnknown_0859B66C:  @ 0x0859B66C
	.incbin "baserom.gba", 0x59B66C, 0x10

	.global gUnknown_0859B67C
gUnknown_0859B67C:  @ 0x0859B67C
	.incbin "baserom.gba", 0x59B67C, 0xC0

	.global gUnknown_0859B73C
gUnknown_0859B73C:  @ 0x0859B73C
	.incbin "baserom.gba", 0x59B73C, 0xB8

	.global gUnknown_0859B7F4
gUnknown_0859B7F4:  @ 0x0859B7F4
	.incbin "baserom.gba", 0x59B7F4, 0x64

	.global gUnknown_0859B858
gUnknown_0859B858:  @ 0x0859B858
	.incbin "baserom.gba", 0x59B858, 0x40

	.global gUnknown_0859B898
gUnknown_0859B898:  @ 0x0859B898
	.incbin "baserom.gba", 0x59B898, 0xA0

	.global gUnknown_0859B938
gUnknown_0859B938:  @ 0x0859B938
	.incbin "baserom.gba", 0x59B938, 0x30

	.global gUnknown_0859B968
gUnknown_0859B968:  @ 0x0859B968
	.incbin "baserom.gba", 0x59B968, 0xE

	.global gUnknown_0859B976
gUnknown_0859B976:  @ 0x0859B976
	.incbin "baserom.gba", 0x59B976, 0x8

	.global gUnknown_0859B97E
gUnknown_0859B97E:  @ 0x0859B97E
	.incbin "baserom.gba", 0x59B97E, 0x8

	.global gUnknown_0859B986
gUnknown_0859B986:  @ 0x0859B986
	.incbin "baserom.gba", 0x59B986, 0x8

	.global gUnknown_0859B98E
gUnknown_0859B98E:  @ 0x0859B98E
	.incbin "baserom.gba", 0x59B98E, 0x8

	.global gUnknown_0859B996
gUnknown_0859B996:  @ 0x0859B996
	.incbin "baserom.gba", 0x59B996, 0x8

	.global gUnknown_0859B99E
gUnknown_0859B99E:  @ 0x0859B99E
	.incbin "baserom.gba", 0x59B99E, 0xA
