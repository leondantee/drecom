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

// Function: Em06_R1_atk_ele_walk
// Address: 0x19a2c0 - 0x19a764
void Em06_R1_atk_ele_walk_0x19a2c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_atk_ele_walk_0x19a2c0");
#endif

    switch (ctx->pc) {
        case 0x19a340u: goto label_19a340;
        case 0x19a3c8u: goto label_19a3c8;
        case 0x19a3ecu: goto label_19a3ec;
        case 0x19a450u: goto label_19a450;
        case 0x19a470u: goto label_19a470;
        case 0x19a658u: goto label_19a658;
        case 0x19a674u: goto label_19a674;
        case 0x19a69cu: goto label_19a69c;
        case 0x19a6acu: goto label_19a6ac;
        case 0x19a6ccu: goto label_19a6cc;
        case 0x19a6d8u: goto label_19a6d8;
        case 0x19a6e8u: goto label_19a6e8;
        case 0x19a6f4u: goto label_19a6f4;
        default: break;
    }

    ctx->pc = 0x19a2c0u;

    // 0x19a2c0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19a2c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19a2c4: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x19a2c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x19a2c8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19a2c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19a2cc: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x19a2ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x19a2d0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x19a2d0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x19a2d4: 0x246373f0  addiu       $v1, $v1, 0x73F0
    ctx->pc = 0x19a2d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29680));
    // 0x19a2d8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19a2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19a2dc: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x19a2dcu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x3873F0u));
    // 0x19a2e0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x19a2e0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x19a2e4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x19a2e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x19a2e8: 0x24637400  addiu       $v1, $v1, 0x7400
    ctx->pc = 0x19a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29696));
    // 0x19a2ec: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x19a2ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19a2f0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x19a2f0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x387400u));
    // 0x19a2f4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x19a2f4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x19a2f8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a2f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a2fc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x19a2fcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19a300: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x19a300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19a304: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a308: 0x10830023  beq         $a0, $v1, . + 4 + (0x23 << 2)
    ctx->pc = 0x19A308u;
    {
        const bool branch_taken_0x19a308 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a308) {
            ctx->pc = 0x19A398u;
            goto label_19a398;
        }
    }
    ctx->pc = 0x19A310u;
    // 0x19a310: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A310u;
    {
        const bool branch_taken_0x19a310 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a310) {
            ctx->pc = 0x19A320u;
            goto label_19a320;
        }
    }
    ctx->pc = 0x19A318u;
    // 0x19a318: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x19A318u;
    {
        const bool branch_taken_0x19a318 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a318) {
            ctx->pc = 0x19A750u;
            goto label_19a750;
        }
    }
    ctx->pc = 0x19A320u;
label_19a320:
    // 0x19a320: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a320u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a324: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a324u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a328: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19a328u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19a32c: 0x24061e23  addiu       $a2, $zero, 0x1E23
    ctx->pc = 0x19a32cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7715));
    // 0x19a330: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19a330u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a334: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19a334u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19a338: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19A338u;
    SET_GPR_U32(ctx, 31, 0x19A340u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19A338u, 0x19A340u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A340u;
label_19a340:
    // 0x19a340: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a340u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a344: 0xa4601278  sh          $zero, 0x1278($v1)
    ctx->pc = 0x19a344u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a348: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a348u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a34c: 0xa460127a  sh          $zero, 0x127A($v1)
    ctx->pc = 0x19a34cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a350: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a350u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a354: 0x90830002  lbu         $v1, 0x2($a0)
    ctx->pc = 0x19a354u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x19a358: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a35c: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x19a35cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x19a360: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19a360u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a364: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a364u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a368: 0xa4640096  sh          $a0, 0x96($v1)
    ctx->pc = 0x19a368u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 150), (uint16_t)GPR_U32(ctx, 4));
    // 0x19a36c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a36cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a370: 0xa4600094  sh          $zero, 0x94($v1)
    ctx->pc = 0x19a370u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a374: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a374u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a378: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a378u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a37c: 0xe4600090  swc1        $f0, 0x90($v1)
    ctx->pc = 0x19a37cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 144), bits); }
    // 0x19a380: 0x3c034361  lui         $v1, 0x4361
    ctx->pc = 0x19a380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17249 << 16));
    // 0x19a384: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x19a384u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a388: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a388u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a38c: 0xe420d360  swc1        $f0, -0x2CA0($at)
    ctx->pc = 0x19a38cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD360u, _value); } while (0); }
    // 0x19a390: 0x100000ef  b           . + 4 + (0xEF << 2)
    ctx->pc = 0x19A390u;
    {
        const bool branch_taken_0x19a390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a390) {
            ctx->pc = 0x19A750u;
            goto label_19a750;
        }
    }
    ctx->pc = 0x19A398u;
label_19a398:
    // 0x19a398: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a398u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a39c: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x19a39cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x19a3a0: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19a3a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a3a4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a3a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a3a8: 0x2442d2f0  addiu       $v0, $v0, -0x2D10
    ctx->pc = 0x19a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19a3ac: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19a3acu;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5CD2F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5CD2F0u, _value); } while (0);
    // 0x19a3b0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a3b4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a3b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a3b8: 0x2444d300  addiu       $a0, $v0, -0x2D00
    ctx->pc = 0x19a3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
    // 0x19a3bc: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x19a3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a3c0: 0xc067844  jal         func_19E110
    ctx->pc = 0x19A3C0u;
    SET_GPR_U32(ctx, 31, 0x19A3C8u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x19A3C0u, 0x19A3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A3C8u;
label_19a3c8:
    // 0x19a3c8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a3c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a3cc: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x19a3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x19a3d0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a3d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a3d4: 0x2444d300  addiu       $a0, $v0, -0x2D00
    ctx->pc = 0x19a3d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
    // 0x19a3d8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a3d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a3dc: 0x2445d300  addiu       $a1, $v0, -0x2D00
    ctx->pc = 0x19a3dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
    // 0x19a3e0: 0xc46c0440  lwc1        $f12, 0x440($v1)
    ctx->pc = 0x19a3e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a3e4: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x19A3E4u;
    SET_GPR_U32(ctx, 31, 0x19A3ECu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x19A3ECu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A3ECu) { return; }
    ctx->pc = 0x19A3ECu;
label_19a3ec:
    // 0x19a3ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a3ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a3f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a3f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a3f4: 0xe420d35c  swc1        $f0, -0x2CA4($at)
    ctx->pc = 0x19a3f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD35Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD35Cu, _value); } while (0); }
    // 0x19a3f8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a3f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a3fc: 0xe420d350  swc1        $f0, -0x2CB0($at)
    ctx->pc = 0x19a3fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD350u, _value); } while (0); }
    // 0x19a400: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a404: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19a404u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a408: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x19a408u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x19a40c: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x19a40cu;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a410: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19a410u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19a414: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a414u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a418: 0xe420d354  swc1        $f0, -0x2CAC($at)
    ctx->pc = 0x19a418u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD354u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD354u, _value); } while (0); }
    // 0x19a41c: 0x3c0245ea  lui         $v0, 0x45EA
    ctx->pc = 0x19a41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17898 << 16));
    // 0x19a420: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x19a420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x19a424: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a424u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a428: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a428u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a42c: 0xe420d358  swc1        $f0, -0x2CA8($at)
    ctx->pc = 0x19a42cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD358u, _value); } while (0); }
    // 0x19a430: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a430u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a434: 0x2444d350  addiu       $a0, $v0, -0x2CB0
    ctx->pc = 0x19a434u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955856));
    // 0x19a438: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a43c: 0x2445d300  addiu       $a1, $v0, -0x2D00
    ctx->pc = 0x19a43cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
    // 0x19a440: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a444: 0x2446d350  addiu       $a2, $v0, -0x2CB0
    ctx->pc = 0x19a444u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955856));
    // 0x19a448: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x19A448u;
    SET_GPR_U32(ctx, 31, 0x19A450u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x19A450u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A450u) { return; }
    ctx->pc = 0x19A450u;
label_19a450:
    // 0x19a450: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a450u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a454: 0x2444d2f0  addiu       $a0, $v0, -0x2D10
    ctx->pc = 0x19a454u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19a458: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a458u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a45c: 0x2445d2f0  addiu       $a1, $v0, -0x2D10
    ctx->pc = 0x19a45cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19a460: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a464: 0x2446d350  addiu       $a2, $v0, -0x2CB0
    ctx->pc = 0x19a464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955856));
    // 0x19a468: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x19A468u;
    SET_GPR_U32(ctx, 31, 0x19A470u);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x19A470u;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A470u) { return; }
    ctx->pc = 0x19A470u;
label_19a470:
    // 0x19a470: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a474: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x19a474u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x19a478: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19A478u;
    {
        const bool branch_taken_0x19a478 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a478) {
            ctx->pc = 0x19A4F4u;
            goto label_19a4f4;
        }
    }
    ctx->pc = 0x19A480u;
    // 0x19a480: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a480u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a484: 0xc421d360  lwc1        $f1, -0x2CA0($at)
    ctx->pc = 0x19a484u;
    { uint32_t bits = FAST_READ32(0x5CD360u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a488: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a488u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a48c: 0x0  nop
    ctx->pc = 0x19a48cu;
    // NOP
    // 0x19a490: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19a490u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a494: 0x0  nop
    ctx->pc = 0x19a494u;
    // NOP
    // 0x19a498: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x19A498u;
    {
        const bool branch_taken_0x19a498 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a498) {
            ctx->pc = 0x19A4C0u;
            goto label_19a4c0;
        }
    }
    ctx->pc = 0x19A4A0u;
    // 0x19a4a0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a4a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a4a4: 0xc421d360  lwc1        $f1, -0x2CA0($at)
    ctx->pc = 0x19a4a4u;
    { uint32_t bits = FAST_READ32(0x5CD360u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a4a8: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x19a4a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x19a4ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a4acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a4b0: 0x0  nop
    ctx->pc = 0x19a4b0u;
    // NOP
    // 0x19a4b4: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19a4b4u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19a4b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a4b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a4bc: 0xe420d360  swc1        $f0, -0x2CA0($at)
    ctx->pc = 0x19a4bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD360u, _value); } while (0); }
label_19a4c0:
    // 0x19a4c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a4c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a4c4: 0xc421d360  lwc1        $f1, -0x2CA0($at)
    ctx->pc = 0x19a4c4u;
    { uint32_t bits = FAST_READ32(0x5CD360u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a4c8: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x19a4c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x19a4cc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a4ccu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a4d0: 0x0  nop
    ctx->pc = 0x19a4d0u;
    // NOP
    // 0x19a4d4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a4d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a4d8: 0x0  nop
    ctx->pc = 0x19a4d8u;
    // NOP
    // 0x19a4dc: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19A4DCu;
    {
        const bool branch_taken_0x19a4dc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a4dc) {
            ctx->pc = 0x19A4F4u;
            goto label_19a4f4;
        }
    }
    ctx->pc = 0x19A4E4u;
    // 0x19a4e4: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x19a4e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x19a4e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a4e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a4ec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a4ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a4f0: 0xe420d360  swc1        $f0, -0x2CA0($at)
    ctx->pc = 0x19a4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD360u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD360u, _value); } while (0); }
label_19a4f4:
    // 0x19a4f4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a4f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a4f8: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19a4f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19a4fc: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19a4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19a500: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19a500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x19a504: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x19A504u;
    {
        const bool branch_taken_0x19a504 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a504) {
            ctx->pc = 0x19A69Cu;
            goto label_19a69c;
        }
    }
    ctx->pc = 0x19A50Cu;
    // 0x19a50c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a50cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a510: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a510u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a514: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x19a514u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x19a518: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a518u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a51c: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x19a51cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x19a520: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19a520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19a524: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19a524u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19a528: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x19a528u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x19a52c: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x19A52Cu;
    {
        const bool branch_taken_0x19a52c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19a52c) {
            ctx->pc = 0x19A69Cu;
            goto label_19a69c;
        }
    }
    ctx->pc = 0x19A534u;
    // 0x19a534: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x19a534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x19a538: 0x24508cb0  addiu       $s0, $v0, -0x7350
    ctx->pc = 0x19a538u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937776));
    // 0x19a53c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a53cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a540: 0xc421d360  lwc1        $f1, -0x2CA0($at)
    ctx->pc = 0x19a540u;
    { uint32_t bits = FAST_READ32(0x5CD360u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a544: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x19a544u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x19a548: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a548u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a54c: 0x0  nop
    ctx->pc = 0x19a54cu;
    // NOP
    // 0x19a550: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a550u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a554: 0x0  nop
    ctx->pc = 0x19a554u;
    // NOP
    // 0x19a558: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19A558u;
    {
        const bool branch_taken_0x19a558 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a558) {
            ctx->pc = 0x19A578u;
            goto label_19a578;
        }
    }
    ctx->pc = 0x19A560u;
    // 0x19a560: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x19a560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x19a564: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a564u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a568: 0x0  nop
    ctx->pc = 0x19a568u;
    // NOP
    // 0x19a56c: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x19a56cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x19a570: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19A570u;
    {
        const bool branch_taken_0x19a570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a570) {
            ctx->pc = 0x19A584u;
            goto label_19a584;
        }
    }
    ctx->pc = 0x19A578u;
label_19a578:
    // 0x19a578: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a578u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a57c: 0xc420d360  lwc1        $f0, -0x2CA0($at)
    ctx->pc = 0x19a57cu;
    { uint32_t bits = FAST_READ32(0x5CD360u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a580: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x19a580u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_19a584:
    // 0x19a584: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a584u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a588: 0xc421d360  lwc1        $f1, -0x2CA0($at)
    ctx->pc = 0x19a588u;
    { uint32_t bits = FAST_READ32(0x5CD360u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a58c: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x19a58cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x19a590: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a590u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a594: 0x0  nop
    ctx->pc = 0x19a594u;
    // NOP
    // 0x19a598: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a59c: 0x0  nop
    ctx->pc = 0x19a59cu;
    // NOP
    // 0x19a5a0: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19A5A0u;
    {
        const bool branch_taken_0x19a5a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a5a0) {
            ctx->pc = 0x19A5C0u;
            goto label_19a5c0;
        }
    }
    ctx->pc = 0x19A5A8u;
    // 0x19a5a8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x19a5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x19a5ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a5acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a5b0: 0x0  nop
    ctx->pc = 0x19a5b0u;
    // NOP
    // 0x19a5b4: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x19a5b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x19a5b8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19A5B8u;
    {
        const bool branch_taken_0x19a5b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a5b8) {
            ctx->pc = 0x19A5CCu;
            goto label_19a5cc;
        }
    }
    ctx->pc = 0x19A5C0u;
label_19a5c0:
    // 0x19a5c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a5c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a5c4: 0xc420d360  lwc1        $f0, -0x2CA0($at)
    ctx->pc = 0x19a5c4u;
    { uint32_t bits = FAST_READ32(0x5CD360u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a5c8: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x19a5c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_19a5cc:
    // 0x19a5cc: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x19a5ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x19a5d0: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19a5d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19a5d4: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x19a5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x19a5d8: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19a5d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19a5dc: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a5e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19a5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19a5e4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19a5e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19a5e8: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19a5e8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19a5ec: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19a5ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19a5f0: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x19a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x19a5f4: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19a5f4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19a5f8: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19a5f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19a5fc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19a5fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19a600: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x19a600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x19a604: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x19a604u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x19a608: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19a608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19a60c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19a60cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19a610: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x19a610u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x19a614: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19a614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19a618: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19a618u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19a61c: 0x304b00ff  andi        $t3, $v0, 0xFF
    ctx->pc = 0x19a61cu;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19a620: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a620u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a624: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19a624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19a628: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x19a628u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19a62c: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x19a62cu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19a630: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x19a630u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19a634: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a634u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a638: 0x2449d2f0  addiu       $t1, $v0, -0x2D10
    ctx->pc = 0x19a638u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19a63c: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x19a63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a640: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a640u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a644: 0xc42dd360  lwc1        $f13, -0x2CA0($at)
    ctx->pc = 0x19a644u;
    { uint32_t bits = FAST_READ32(0x5CD360u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19a648: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x19a648u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x19a64c: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x19a64cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19a650: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x19A650u;
    SET_GPR_U32(ctx, 31, 0x19A658u);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x19A650u, 0x19A658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A658u;
label_19a658:
    // 0x19a658: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a658u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a65c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19a660: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x19a660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19a664: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x19a664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19a668: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x19a668u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19a66c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x19A66Cu;
    SET_GPR_U32(ctx, 31, 0x19A674u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x19A674u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A674u) { return; }
    ctx->pc = 0x19A674u;
label_19a674:
    // 0x19a674: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x19a674u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19a678: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19a678u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19a67c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a67cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a680: 0x2442d2f0  addiu       $v0, $v0, -0x2D10
    ctx->pc = 0x19a680u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19a684: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x19a684u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x19a688: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a68c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19a68cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19a690: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x19a690u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19a694: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x19A694u;
    SET_GPR_U32(ctx, 31, 0x19A69Cu);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x19A694u, 0x19A69Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A69Cu;
label_19a69c:
    // 0x19a69c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a69cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a6a0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19a6a0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19a6a4: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x19A6A4u;
    SET_GPR_U32(ctx, 31, 0x19A6ACu);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x19A6A4u, 0x19A6ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6ACu;
label_19a6ac:
    // 0x19a6ac: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a6acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a6b0: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a6b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a6b4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a6b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a6b8: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x19a6b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x19a6bc: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19a6bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x19a6c0: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x19a6c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a6c4: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x19A6C4u;
    SET_GPR_U32(ctx, 31, 0x19A6CCu);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19A6CCu;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A6CCu) { return; }
    ctx->pc = 0x19A6CCu;
label_19a6cc:
    // 0x19a6cc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a6ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a6d0: 0xc05cd10  jal         func_173440
    ctx->pc = 0x19A6D0u;
    SET_GPR_U32(ctx, 31, 0x19A6D8u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19A6D0u, 0x19A6D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6D8u;
label_19a6d8:
    // 0x19a6d8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a6d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a6dc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x19a6dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19a6e0: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x19A6E0u;
    SET_GPR_U32(ctx, 31, 0x19A6E8u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19A6E0u, 0x19A6E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6E8u;
label_19a6e8:
    // 0x19a6e8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a6ec: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19A6ECu;
    SET_GPR_U32(ctx, 31, 0x19A6F4u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19A6ECu, 0x19A6F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A6F4u;
label_19a6f4:
    // 0x19a6f4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a6f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a6f8: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x19a6f8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x19a6fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19a6fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19a700: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x19a700u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x19a704: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a704u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a708: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19a708u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19a70c: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19A70Cu;
    {
        const bool branch_taken_0x19a70c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a70c) {
            ctx->pc = 0x19A750u;
            goto label_19a750;
        }
    }
    ctx->pc = 0x19A714u;
    // 0x19a714: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x19a714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x19a718: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a718u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a71c: 0xac641330  sw          $a0, 0x1330($v1)
    ctx->pc = 0x19a71cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 4));
    // 0x19a720: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19a720u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a724: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a724u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a728: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19a728u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19a72c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19a72cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a730: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a730u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a734: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x19a734u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x19a738: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a738u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a73c: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19a73cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a740: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a740u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a744: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19a744u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19a748: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a748u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a74c: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19a74cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_19a750:
    // 0x19a750: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x19a750u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19a754: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19a754u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19a758: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x19a758u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x19a75c: 0x3e00008  jr          $ra
    ctx->pc = 0x19A75Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19A75Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19A764u;
}
