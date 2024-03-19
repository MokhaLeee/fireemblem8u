#ifndef GUARD_SPLINE_H
#define GUARD_SPLINE_H

struct Struct0859E7D4
{
    int x;
    int y;
};

struct Struct02003BE8
{
    /* 00 */ u16 unk_00;
    /* 02 */ u16 unk_02;
    /* 04 */ u16 * unk_04;
    /* 08 */ struct Struct0859E7D4 * unk_08;
    /* 0C */ int * unk_0C;
    /* 10 */ int * unk_10;
};

int sub_800A42C(int val, int start, int end);

struct SplineUnkStruct1;
struct SplineUnkStruct2;
struct SplineUnkStruct3;

struct SplineUnkStruct1 {
    u16 unk00;
    u16 unk02;
    int unk04;
    struct SplineUnkStruct3 * unk08;

};

struct SplineUnkStruct2 {
    s16 unk00;
    s16 unk02;
    s16 unk04;
    s16 unk06;
    int unk08;
    int unk0C;
    int unk10;
    struct SplineUnkStruct3 * unk14;
    struct SplineUnkStruct3 * unk18;
    struct SplineUnkStruct3 * unk1C;
};

struct SplineUnkStruct3 {
    s16 unk00;
    s16 unk02;
    s16 unk04;
};

void sub_800A4E8(struct SplineUnkStruct1 * src, struct SplineUnkStruct2 * dst);
void sub_800A518(struct SplineUnkStruct2 * dst, int * buf2, int num);
// ??? sub_800A680(???);
// ??? sub_800A7D8(???);
// ??? sub_800A8D8(???);
void sub_800A950(struct Struct02003BE8 *, int, int *);
// ??? sub_800AB58(???);
// ??? sub_800ACEC(???);
// ??? sub_800AE7C(???);
// ??? sub_800AF64(???);
// ??? sub_800B16C(???);
// ??? sub_800B198(???);
// ??? sub_800B388(???);
// ??? sub_800B574(???);
// ??? sub_800B764(???);
int sub_800B7E0(int, int, int);
int sub_800B84C(int, int, int);

#endif // GUARD_SPLINE_H