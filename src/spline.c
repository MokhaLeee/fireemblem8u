#include "global.h"
#include "spline.h"

int sub_800A42C(int val, int start, int end)
{
    int num1;
    register int _start asm("r5");
    int _end;

    _start = start;
    _end = end;
    num1 = _start + _end;

    if (num1 == 0)
        return val;

    if (num1 > 0x1000)
    {
        _start = DivArm(num1, _start * 0x1000);
        _end   = DivArm(num1, _end   * 0x1000);
    }

    num1 = DivArm(0x2000 - _start - _end, 0x1000000);

    if (val < _start)
    {
        if (_start == 0)
            _start = 1;

        return DivArm(0x1000, DivArm(0x1000, DivArm(_start, num1 * 0x1000) * val) * val);
    }
    else
    {
        if (val < (0x1000 - _end))
        {
            return DivArm(0x1000, num1 * (DivArm(0x1000, val * 0x2000) - _start));
        }
        else
        {
            val = 0x1000 - val;
            if (_end == 0)
                _end = 1;

            return 0x1000 - DivArm(0x1000, DivArm(0x1000, DivArm(_end, num1 * 0x1000) * val) * val);
        }
    }
}

void sub_800A4E8(struct SplineUnkStruct1 * src, struct SplineUnkStruct2 * dst)
{
    dst->unk00 = src->unk00;
    dst->unk04 = src->unk02;
    dst->unk0C = src->unk04;
    dst->unk18 = src->unk08;

    src++;
    dst->unk02 = src->unk02;
    dst->unk08 = src->unk04;
    dst->unk14 = src->unk08;

    src++;
    dst->unk06 = src->unk02;
    dst->unk10 = src->unk04;
    dst->unk1C = src->unk08;
}

#if 0
void sub_800A518(struct SplineUnkStruct2 * arg0, int * arg1, int num)
{
    struct SplineUnkStruct2 * buf1 = arg0;
    int * buf2 = arg1;
    int unk00 = buf1->unk00;
    struct SplineUnkStruct3 * unk14 = buf1->unk14;
    int unk02 = buf1->unk02;
    int unk04 = buf1->unk04;
    int unk06 = buf1->unk06;
    int unk08 = buf1->unk08;
    int unk0C = buf1->unk0C;
    int unk10 = buf1->unk10;
    int num1 = 0x1000 - unk14->unk00;
    int num2 = unk14->unk02;
    int num3 = unk14->unk04;
    int num4, num5, num6, num7, num8;
    int tmp1, tmp2, tmp3, tmp4;

    if (unk06 == unk02 || unk06 == unk04)
    {
        num4 = 0;
    }
    else
    {
        num4 = DivArm(num1, DivArm(unk06 - unk04, (unk02 - unk04) * 0x1000) * 0x2000);
    }

    num5 = ABS(num3);
    num6 = num4 + num5 - DivArm(4096, num5 * num4);
    tmp1 = DivArm(4096, num1 * (4096 - num3));
    tmp2 = DivArm(4096, (num2 + 4096) * tmp1);
    num7 = DivArm(4096, tmp2 << 11);
    tmp3 = DivArm(4096, num1 * (num3 + 4096));
    tmp4 = DivArm(4096, (4096 - num2) * tmp3);
    num8 = DivArm(4096, tmp4 << 11);

    while (unk00 > 0)
    {
        unk00 -= 1;
    }
}
#endif
