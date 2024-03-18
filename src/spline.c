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
