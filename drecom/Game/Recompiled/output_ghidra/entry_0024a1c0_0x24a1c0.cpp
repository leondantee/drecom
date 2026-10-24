#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: entry_0024a1c0
// Address: 0x24a1c0 - 0x24a45c
void entry_0024a1c0_0x24a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0024a1c0_0x24a1c0");
#endif

    switch (ctx->pc) {
        case 0x24a1d0u: goto label_24a1d0;
        case 0x24a1f4u: goto label_24a1f4;
        case 0x24a21cu: goto label_24a21c;
        case 0x24a238u: goto label_24a238;
        case 0x24a270u: goto label_24a270;
        case 0x24a284u: goto label_24a284;
        case 0x24a2a4u: goto label_24a2a4;
        case 0x24a2c0u: goto label_24a2c0;
        case 0x24a2fcu: goto label_24a2fc;
        case 0x24a334u: goto label_24a334;
        case 0x24a344u: goto label_24a344;
        case 0x24a3b8u: goto label_24a3b8;
        case 0x24a430u: goto label_24a430;
        case 0x24a43cu: goto label_24a43c;
        default: break;
    }

    ctx->pc = 0x24a1c0u;

    // 0x24a1c0: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x24a1c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24a1c4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x24a1c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x24a1c8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24A1C8u;
    SET_GPR_U32(ctx, 31, 0x24A1D0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24A1D0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A1D0u) { return; }
    ctx->pc = 0x24A1D0u;
label_24a1d0:
    // 0x24a1d0: 0x26040150  addiu       $a0, $s0, 0x150
    ctx->pc = 0x24a1d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a1d4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x24a1d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a1d8: 0x3c033ec9  lui         $v1, 0x3EC9
    ctx->pc = 0x24a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16073 << 16));
    // 0x24a1dc: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x24a1dcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x24a1e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24a1e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a1e4: 0x0  nop
    ctx->pc = 0x24a1e4u;
    // NOP
    // 0x24a1e8: 0x46010300  add.s       $f12, $f0, $f1
    ctx->pc = 0x24a1e8u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x24a1ec: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24A1ECu;
    SET_GPR_U32(ctx, 31, 0x24A1F4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24A1ECu, 0x24A1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A1F4u;
label_24a1f4:
    // 0x24a1f4: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24a1f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a1f8: 0xe4a00000  swc1        $f0, 0x0($a1)
    ctx->pc = 0x24a1f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 0), bits); }
    // 0x24a1fc: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x24a1fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a200: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x24a200u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24a204: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x24a204u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x24a208: 0x27a300a0  addiu       $v1, $sp, 0xA0
    ctx->pc = 0x24a208u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24a20c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x24a20cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x24a210: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x24a210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24a214: 0xc040ce4  jal         func_103390
    ctx->pc = 0x24A214u;
    SET_GPR_U32(ctx, 31, 0x24A21Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x24A21Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A21Cu) { return; }
    ctx->pc = 0x24A21Cu;
label_24a21c:
    // 0x24a21c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a21cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a220: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a224: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x24a224u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24a228: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x24a228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24a22c: 0xc46c0004  lwc1        $f12, 0x4($v1)
    ctx->pc = 0x24a22cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24a230: 0xc040d0e  jal         func_103438
    ctx->pc = 0x24A230u;
    SET_GPR_U32(ctx, 31, 0x24A238u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x24A238u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A238u) { return; }
    ctx->pc = 0x24A238u;
label_24a238:
    // 0x24a238: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x24a238u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a23c: 0x26070150  addiu       $a3, $s0, 0x150
    ctx->pc = 0x24a23cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a240: 0x26060150  addiu       $a2, $s0, 0x150
    ctx->pc = 0x24a240u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a244: 0x26030030  addiu       $v1, $s0, 0x30
    ctx->pc = 0x24a244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
    // 0x24a248: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x24a248u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x24a24c: 0xc4ec0008  lwc1        $f12, 0x8($a3)
    ctx->pc = 0x24a24cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24a250: 0xc4cd000c  lwc1        $f13, 0xC($a2)
    ctx->pc = 0x24a250u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x24a254: 0x26850030  addiu       $a1, $s4, 0x30
    ctx->pc = 0x24a254u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 48));
    // 0x24a258: 0xc7ae01b4  lwc1        $f14, 0x1B4($sp)
    ctx->pc = 0x24a258u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x24a25c: 0xc7af01b4  lwc1        $f15, 0x1B4($sp)
    ctx->pc = 0x24a25cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
    // 0x24a260: 0x27a601ac  addiu       $a2, $sp, 0x1AC
    ctx->pc = 0x24a260u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 428));
    // 0x24a264: 0x27a701b0  addiu       $a3, $sp, 0x1B0
    ctx->pc = 0x24a264u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x24a268: 0xc05c968  jal         func_1725A0
    ctx->pc = 0x24A268u;
    SET_GPR_U32(ctx, 31, 0x24A270u);
    ctx->pc = 0x1725A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1725A0u, 0x24A268u, 0x24A270u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A270u;
label_24a270:
    // 0x24a270: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a270u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a274: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x24a274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24a278: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x24a278u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x24a27c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x24A27Cu;
    SET_GPR_U32(ctx, 31, 0x24A284u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x24A284u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A284u) { return; }
    ctx->pc = 0x24A284u;
label_24a284:
    // 0x24a284: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a284u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a288: 0x26160150  addiu       $s6, $s0, 0x150
    ctx->pc = 0x24a288u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a28c: 0xc6c10008  lwc1        $f1, 0x8($s6)
    ctx->pc = 0x24a28cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x24a290: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x24a290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a294: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x24a294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a298: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x24a298u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x24a29c: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x24A29Cu;
    SET_GPR_U32(ctx, 31, 0x24A2A4u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x24A29Cu, 0x24A2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A2A4u;
label_24a2a4:
    // 0x24a2a4: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x24a2a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
    // 0x24a2a8: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x24a2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24a2ac: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x24a2acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24a2b0: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x24a2b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x24a2b4: 0xc7ac01ac  lwc1        $f12, 0x1AC($sp)
    ctx->pc = 0x24a2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x24a2b8: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x24A2B8u;
    SET_GPR_U32(ctx, 31, 0x24A2C0u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x24A2C0u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A2C0u) { return; }
    ctx->pc = 0x24A2C0u;
label_24a2c0:
    // 0x24a2c0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x24a2c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a2c4: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x24a2c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a2c8: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x24a2c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x24a2cc: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x24a2ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a2d0: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x24a2d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x24a2d4: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x24a2d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a2d8: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x24a2d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x24a2dc: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x24a2dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a2e0: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x24a2e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x24a2e4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24a2e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24a2e8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x24a2e8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x24a2ec: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24a2ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24a2f0: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24a2f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24a2f4: 0xc040c00  jal         func_103000
    ctx->pc = 0x24A2F4u;
    SET_GPR_U32(ctx, 31, 0x24A2FCu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24A2FCu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A2FCu) { return; }
    ctx->pc = 0x24A2FCu;
label_24a2fc:
    // 0x24a2fc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24a2fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a300: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x24a300u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a304: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x24a304u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x24a308: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x24a308u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a30c: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x24a30cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x24a310: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x24a310u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a314: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x24a314u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x24a318: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x24a318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a31c: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x24a31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x24a320: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x24a320u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x24a324: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24a324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24a328: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x24a328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24a32c: 0xc040c00  jal         func_103000
    ctx->pc = 0x24A32Cu;
    SET_GPR_U32(ctx, 31, 0x24A334u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24A334u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A334u) { return; }
    ctx->pc = 0x24A334u;
label_24a334:
    // 0x24a334: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a334u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a338: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x24a338u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24a33c: 0xc06ce3c  jal         func_1B38F0
    ctx->pc = 0x24A33Cu;
    SET_GPR_U32(ctx, 31, 0x24A344u);
    ctx->pc = 0x1B38F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B38F0u, 0x24A33Cu, 0x24A344u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A344u;
label_24a344:
    // 0x24a344: 0x7040b628  paddub      $s6, $v0, $zero
    ctx->pc = 0x24a344u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a348: 0x32c3ffff  andi        $v1, $s6, 0xFFFF
    ctx->pc = 0x24a348u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)65535);
    // 0x24a34c: 0x1460008c  bnez        $v1, . + 4 + (0x8C << 2)
    ctx->pc = 0x24A34Cu;
    {
        const bool branch_taken_0x24a34c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a34c) {
            ctx->pc = 0x24A580u;
            return;
        }
    }
    ctx->pc = 0x24A354u;
    // 0x24a354: 0xafb20170  sw          $s2, 0x170($sp)
    ctx->pc = 0x24a354u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 368), GPR_U32(ctx, 18));
    // 0x24a358: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a358u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a35c: 0x0  nop
    ctx->pc = 0x24a35cu;
    // NOP
    // 0x24a360: 0xe7a00180  swc1        $f0, 0x180($sp)
    ctx->pc = 0x24a360u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 384), bits); }
    // 0x24a364: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a364u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a368: 0x0  nop
    ctx->pc = 0x24a368u;
    // NOP
    // 0x24a36c: 0xe7a00184  swc1        $f0, 0x184($sp)
    ctx->pc = 0x24a36cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 388), bits); }
    // 0x24a370: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x24a370u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a374: 0x0  nop
    ctx->pc = 0x24a374u;
    // NOP
    // 0x24a378: 0xe7a00188  swc1        $f0, 0x188($sp)
    ctx->pc = 0x24a378u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 392), bits); }
    // 0x24a37c: 0x3c173f80  lui         $s7, 0x3F80
    ctx->pc = 0x24a37cu;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)16256 << 16));
    // 0x24a380: 0x44970000  mtc1        $s7, $f0
    ctx->pc = 0x24a380u;
    { uint32_t bits = GPR_U32(ctx, 23); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a384: 0x0  nop
    ctx->pc = 0x24a384u;
    // NOP
    // 0x24a388: 0xe7a0018c  swc1        $f0, 0x18C($sp)
    ctx->pc = 0x24a388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 396), bits); }
    // 0x24a38c: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x24a38cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x24a390: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24a390u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a394: 0x0  nop
    ctx->pc = 0x24a394u;
    // NOP
    // 0x24a398: 0xe7a00190  swc1        $f0, 0x190($sp)
    ctx->pc = 0x24a398u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x24a39c: 0xa7a00194  sh          $zero, 0x194($sp)
    ctx->pc = 0x24a39cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 404), (uint16_t)GPR_U32(ctx, 0));
    // 0x24a3a0: 0xa3a00196  sb          $zero, 0x196($sp)
    ctx->pc = 0x24a3a0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 406), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a3a4: 0xa3a00197  sb          $zero, 0x197($sp)
    ctx->pc = 0x24a3a4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 407), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a3a8: 0x8fa401c8  lw          $a0, 0x1C8($sp)
    ctx->pc = 0x24a3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24a3ac: 0x27a50170  addiu       $a1, $sp, 0x170
    ctx->pc = 0x24a3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 368));
    // 0x24a3b0: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x24A3B0u;
    SET_GPR_U32(ctx, 31, 0x24A3B8u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x24A3B0u, 0x24A3B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A3B8u;
label_24a3b8:
    // 0x24a3b8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a3b8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a3bc: 0x10600070  beqz        $v1, . + 4 + (0x70 << 2)
    ctx->pc = 0x24A3BCu;
    {
        const bool branch_taken_0x24a3bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a3bc) {
            ctx->pc = 0x24A580u;
            return;
        }
    }
    ctx->pc = 0x24A3C4u;
    // 0x24a3c4: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a3c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24a3c8: 0x3283c  dsll32      $a1, $v1, 0
    ctx->pc = 0x24a3c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    // 0x24a3cc: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x24a3ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x24a3d0: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x24a3d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x24a3d4: 0x41c38  dsll        $v1, $a0, 16
    ctx->pc = 0x24a3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << 16);
    // 0x24a3d8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x24a3d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x24a3dc: 0xa33824  and         $a3, $a1, $v1
    ctx->pc = 0x24a3dcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x24a3e0: 0x7283c  dsll32      $a1, $a3, 0
    ctx->pc = 0x24a3e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 7) << (32 + 0));
    // 0x24a3e4: 0x34be0006  ori         $fp, $a1, 0x6
    ctx->pc = 0x24a3e4u;
    SET_GPR_U64(ctx, 30, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x24a3e8: 0x112880  sll         $a1, $s1, 2
    ctx->pc = 0x24a3e8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x24a3ec: 0x3c040039  lui         $a0, 0x39
    ctx->pc = 0x24a3ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)57 << 16));
    // 0x24a3f0: 0x2483b420  addiu       $v1, $a0, -0x4BE0
    ctx->pc = 0x24a3f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947872));
    // 0x24a3f4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x24a3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x24a3f8: 0x90650001  lbu         $a1, 0x1($v1)
    ctx->pc = 0x24a3f8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 1)));
    // 0x24a3fc: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x24a3fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x24a400: 0x32180  sll         $a0, $v1, 6
    ctx->pc = 0x24a400u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 6));
    // 0x24a404: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a404u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24a408: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x24a408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x24a40c: 0x649021  addu        $s2, $v1, $a0
    ctx->pc = 0x24a40cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x24a410: 0x73c02628  paddub      $a0, $fp, $zero
    ctx->pc = 0x24a410u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 30), GPR_VEC(ctx, 0)));
    // 0x24a414: 0x27b40180  addiu       $s4, $sp, 0x180
    ctx->pc = 0x24a414u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 384));
    // 0x24a418: 0x72802e28  paddub      $a1, $s4, $zero
    ctx->pc = 0x24a418u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 20), GPR_VEC(ctx, 0)));
    // 0x24a41c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x24a41cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24a420: 0x72403e28  paddub      $a3, $s2, $zero
    ctx->pc = 0x24a420u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x24a424: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x24a424u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x24a428: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x24A428u;
    SET_GPR_U32(ctx, 31, 0x24A430u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x24A428u, 0x24A430u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A430u;
label_24a430:
    // 0x24a430: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x24a430u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a434: 0xc067694  jal         func_19DA50
    ctx->pc = 0x24A434u;
    SET_GPR_U32(ctx, 31, 0x24A43Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x24A434u, 0x24A43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A43Cu;
label_24a43c:
    // 0x24a43c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a43cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a440: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x24A440u;
    {
        const bool branch_taken_0x24a440 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x24a440) {
            ctx->pc = 0x24A45Cu;
            return;
        }
    }
    ctx->pc = 0x24A448u;
    // 0x24a448: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x24a448u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x24a44c: 0x0  nop
    ctx->pc = 0x24a44cu;
    // NOP
    // 0x24a450: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x24a450u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x24a454: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x24A454u;
    {
        const bool branch_taken_0x24a454 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a454) {
            ctx->pc = 0x24A478u;
            return;
        }
    }
    ctx->pc = 0x24A45Cu;
}
