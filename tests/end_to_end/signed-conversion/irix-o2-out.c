s32 test(s32 arg0) {
    s32 temp_v0;

    temp_v0 = arg0 * 2;
    D_410110 = (s32) ((s32) (arg0 << 0x18) >> 0x18);
    D_410110 = (s32) ((s32) (temp_v0 << 0x18) >> 0x18);
    D_410110 = (s32) ((s32) (arg0 * 0x3000000) >> 0x18);
    D_410110 = (s32) ((s32) (arg0 << 0x10) >> 0x10);
    D_410110 = (s32) ((s32) (temp_v0 << 0x10) >> 0x10);
    D_410110 = (s32) ((s32) (arg0 * 0x30000) >> 0x10);
    return temp_v0;
}
