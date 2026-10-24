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

// Function: Em06_R1_atk_ele_fly
// Address: 0x19a790 - 0x19adb0
void Em06_R1_atk_ele_fly_0x19a790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em06_R1_atk_ele_fly_0x19a790");
#endif

    switch (ctx->pc) {
        case 0x19a810u: goto label_19a810;
        case 0x19a890u: goto label_19a890;
        case 0x19a8b4u: goto label_19a8b4;
        case 0x19a9acu: goto label_19a9ac;
        case 0x19a9ccu: goto label_19a9cc;
        case 0x19abb4u: goto label_19abb4;
        case 0x19abd0u: goto label_19abd0;
        case 0x19abf8u: goto label_19abf8;
        case 0x19ac44u: goto label_19ac44;
        case 0x19ac68u: goto label_19ac68;
        case 0x19acd0u: goto label_19acd0;
        case 0x19acdcu: goto label_19acdc;
        case 0x19acecu: goto label_19acec;
        case 0x19ad18u: goto label_19ad18;
        case 0x19ad2cu: goto label_19ad2c;
        case 0x19ad40u: goto label_19ad40;
        default: break;
    }

    ctx->pc = 0x19a790u;

    // 0x19a790: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x19a790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x19a794: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x19a794u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x19a798: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x19a798u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x19a79c: 0xafa40088  sw          $a0, 0x88($sp)
    ctx->pc = 0x19a79cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 4));
    // 0x19a7a0: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x19a7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x19a7a4: 0x24637410  addiu       $v1, $v1, 0x7410
    ctx->pc = 0x19a7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29712));
    // 0x19a7a8: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x19a7a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19a7ac: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x19a7acu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x387410u));
    // 0x19a7b0: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x19a7b0u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x19a7b4: 0x3c030038  lui         $v1, 0x38
    ctx->pc = 0x19a7b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)56 << 16));
    // 0x19a7b8: 0x24637420  addiu       $v1, $v1, 0x7420
    ctx->pc = 0x19a7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 29728));
    // 0x19a7bc: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x19a7bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19a7c0: 0x78630000  lq          $v1, 0x0($v1)
    ctx->pc = 0x19a7c0u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x387420u));
    // 0x19a7c4: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x19a7c4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x19a7c8: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a7cc: 0x90630002  lbu         $v1, 0x2($v1)
    ctx->pc = 0x19a7ccu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19a7d0: 0x306400ff  andi        $a0, $v1, 0xFF
    ctx->pc = 0x19a7d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x19a7d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a7d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a7d8: 0x10830021  beq         $a0, $v1, . + 4 + (0x21 << 2)
    ctx->pc = 0x19A7D8u;
    {
        const bool branch_taken_0x19a7d8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x19a7d8) {
            ctx->pc = 0x19A860u;
            goto label_19a860;
        }
    }
    ctx->pc = 0x19A7E0u;
    // 0x19a7e0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x19A7E0u;
    {
        const bool branch_taken_0x19a7e0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a7e0) {
            ctx->pc = 0x19A7F0u;
            goto label_19a7f0;
        }
    }
    ctx->pc = 0x19A7E8u;
    // 0x19a7e8: 0x1000016c  b           . + 4 + (0x16C << 2)
    ctx->pc = 0x19A7E8u;
    {
        const bool branch_taken_0x19a7e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a7e8) {
            ctx->pc = 0x19AD9Cu;
            goto label_19ad9c;
        }
    }
    ctx->pc = 0x19A7F0u;
label_19a7f0:
    // 0x19a7f0: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a7f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a7f4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19a7f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a7f8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x19a7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x19a7fc: 0x24061e2e  addiu       $a2, $zero, 0x1E2E
    ctx->pc = 0x19a7fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7726));
    // 0x19a800: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19a800u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a804: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x19a804u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x19a808: 0xc0965d0  jal         func_259740
    ctx->pc = 0x19A808u;
    SET_GPR_U32(ctx, 31, 0x19A810u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x19A808u, 0x19A810u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A810u;
label_19a810:
    // 0x19a810: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a814: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x19a814u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a818: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a81c: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x19a81cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a820: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a824: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x19a824u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x19a828: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x19a828u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x19a82c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x19a82cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x19a830: 0x3c024361  lui         $v0, 0x4361
    ctx->pc = 0x19a830u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17249 << 16));
    // 0x19a834: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a834u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a838: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a838u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a83c: 0xe420d380  swc1        $f0, -0x2C80($at)
    ctx->pc = 0x19a83cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD380u, _value); } while (0); }
    // 0x19a840: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19a840u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19a844: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a848: 0xa4430096  sh          $v1, 0x96($v0)
    ctx->pc = 0x19a848u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 150), (uint16_t)GPR_U32(ctx, 3));
    // 0x19a84c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a84cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a850: 0xa4400094  sh          $zero, 0x94($v0)
    ctx->pc = 0x19a850u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 148), (uint16_t)GPR_U32(ctx, 0));
    // 0x19a854: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a854u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a858: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a85c: 0xe4400090  swc1        $f0, 0x90($v0)
    ctx->pc = 0x19a85cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 144), bits); }
label_19a860:
    // 0x19a860: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a864: 0x24420120  addiu       $v0, $v0, 0x120
    ctx->pc = 0x19a864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 288));
    // 0x19a868: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x19a868u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x19a86c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a86cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a870: 0x2442d2f0  addiu       $v0, $v0, -0x2D10
    ctx->pc = 0x19a870u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19a874: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x19a874u;
    do { __m128i _value = (GPR_VEC(ctx, 3)); const uint64_t _lo = static_cast<uint64_t>(PS2_EXTRACT_EPI64_0(_value)); const uint64_t _hi = static_cast<uint64_t>(PS2_EXTRACT_EPI64_1(_value)); ps2TraceGuestWrite(rdram, 0x5CD2F0u, 16u, _lo, _hi, "WRITE128", ctx); FAST_WRITE128(0x5CD2F0u, _value); } while (0);
    // 0x19a878: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19a878u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a87c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a87cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a880: 0x2444d300  addiu       $a0, $v0, -0x2D00
    ctx->pc = 0x19a880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
    // 0x19a884: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x19a884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a888: 0xc067844  jal         func_19E110
    ctx->pc = 0x19A888u;
    SET_GPR_U32(ctx, 31, 0x19A890u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x19A888u, 0x19A890u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19A890u;
label_19a890:
    // 0x19a890: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a890u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a894: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x19a894u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x19a898: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a89c: 0x2444d300  addiu       $a0, $v0, -0x2D00
    ctx->pc = 0x19a89cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
    // 0x19a8a0: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a8a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a8a4: 0x2445d300  addiu       $a1, $v0, -0x2D00
    ctx->pc = 0x19a8a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
    // 0x19a8a8: 0xc46c0440  lwc1        $f12, 0x440($v1)
    ctx->pc = 0x19a8a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 1088)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19a8ac: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x19A8ACu;
    SET_GPR_U32(ctx, 31, 0x19A8B4u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x19A8B4u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A8B4u) { return; }
    ctx->pc = 0x19A8B4u;
label_19a8b4:
    // 0x19a8b4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a8b4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a8b8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a8b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a8bc: 0xe420d37c  swc1        $f0, -0x2C84($at)
    ctx->pc = 0x19a8bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD37Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD37Cu, _value); } while (0); }
    // 0x19a8c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a8c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a8c4: 0xe420d370  swc1        $f0, -0x2C90($at)
    ctx->pc = 0x19a8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD370u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD370u, _value); } while (0); }
    // 0x19a8c8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a8cc: 0xc4410124  lwc1        $f1, 0x124($v0)
    ctx->pc = 0x19a8ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a8d0: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x19a8d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x19a8d4: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x19a8d4u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a8d8: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x19a8d8u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x19a8dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a8dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a8e0: 0xe420d374  swc1        $f0, -0x2C8C($at)
    ctx->pc = 0x19a8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD374u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD374u, _value); } while (0); }
    // 0x19a8e4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a8e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a8e8: 0xc441128c  lwc1        $f1, 0x128C($v0)
    ctx->pc = 0x19a8e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a8ec: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x19a8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x19a8f0: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x19a8f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x19a8f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a8f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a8f8: 0x0  nop
    ctx->pc = 0x19a8f8u;
    // NOP
    // 0x19a8fc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19a8fcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a900: 0x0  nop
    ctx->pc = 0x19a900u;
    // NOP
    // 0x19a904: 0x45000008  bc1f        . + 4 + (0x8 << 2)
    ctx->pc = 0x19A904u;
    {
        const bool branch_taken_0x19a904 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a904) {
            ctx->pc = 0x19A928u;
            goto label_19a928;
        }
    }
    ctx->pc = 0x19A90Cu;
    // 0x19a90c: 0x3c02461c  lui         $v0, 0x461C
    ctx->pc = 0x19a90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17948 << 16));
    // 0x19a910: 0x34424000  ori         $v0, $v0, 0x4000
    ctx->pc = 0x19a910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)16384);
    // 0x19a914: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a914u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a918: 0x0  nop
    ctx->pc = 0x19a918u;
    // NOP
    // 0x19a91c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x19a91cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x19a920: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x19A920u;
    {
        const bool branch_taken_0x19a920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a920) {
            ctx->pc = 0x19A980u;
            goto label_19a980;
        }
    }
    ctx->pc = 0x19A928u;
label_19a928:
    // 0x19a928: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a92c: 0xc441128c  lwc1        $f1, 0x128C($v0)
    ctx->pc = 0x19a92cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a930: 0x3c02463b  lui         $v0, 0x463B
    ctx->pc = 0x19a930u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17979 << 16));
    // 0x19a934: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x19a934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x19a938: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a938u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a93c: 0x0  nop
    ctx->pc = 0x19a93cu;
    // NOP
    // 0x19a940: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x19a940u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a944: 0x0  nop
    ctx->pc = 0x19a944u;
    // NOP
    // 0x19a948: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x19A948u;
    {
        const bool branch_taken_0x19a948 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a948) {
            ctx->pc = 0x19A96Cu;
            goto label_19a96c;
        }
    }
    ctx->pc = 0x19A950u;
    // 0x19a950: 0x3c02463b  lui         $v0, 0x463B
    ctx->pc = 0x19a950u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17979 << 16));
    // 0x19a954: 0x34428000  ori         $v0, $v0, 0x8000
    ctx->pc = 0x19a954u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32768);
    // 0x19a958: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19a958u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a95c: 0x0  nop
    ctx->pc = 0x19a95cu;
    // NOP
    // 0x19a960: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x19a960u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
    // 0x19a964: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19A964u;
    {
        const bool branch_taken_0x19a964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a964) {
            ctx->pc = 0x19A978u;
            goto label_19a978;
        }
    }
    ctx->pc = 0x19A96Cu;
label_19a96c:
    // 0x19a96c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a96cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a970: 0xc440128c  lwc1        $f0, 0x128C($v0)
    ctx->pc = 0x19a970u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4748)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a974: 0xe7a00074  swc1        $f0, 0x74($sp)
    ctx->pc = 0x19a974u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 116), bits); }
label_19a978:
    // 0x19a978: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x19a978u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a97c: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x19a97cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
label_19a980:
    // 0x19a980: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x19a980u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19a984: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a984u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a988: 0xe420d378  swc1        $f0, -0x2C88($at)
    ctx->pc = 0x19a988u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD378u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD378u, _value); } while (0); }
    // 0x19a98c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a990: 0x2444d370  addiu       $a0, $v0, -0x2C90
    ctx->pc = 0x19a990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955888));
    // 0x19a994: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a994u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a998: 0x2445d300  addiu       $a1, $v0, -0x2D00
    ctx->pc = 0x19a998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955776));
    // 0x19a99c: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a99cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a9a0: 0x2446d370  addiu       $a2, $v0, -0x2C90
    ctx->pc = 0x19a9a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955888));
    // 0x19a9a4: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x19A9A4u;
    SET_GPR_U32(ctx, 31, 0x19A9ACu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x19A9ACu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A9ACu) { return; }
    ctx->pc = 0x19A9ACu;
label_19a9ac:
    // 0x19a9ac: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a9acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a9b0: 0x2444d2f0  addiu       $a0, $v0, -0x2D10
    ctx->pc = 0x19a9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19a9b4: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a9b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a9b8: 0x2445d2f0  addiu       $a1, $v0, -0x2D10
    ctx->pc = 0x19a9b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19a9bc: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19a9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19a9c0: 0x2446d370  addiu       $a2, $v0, -0x2C90
    ctx->pc = 0x19a9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955888));
    // 0x19a9c4: 0xc040c7a  jal         func_1031E8
    ctx->pc = 0x19A9C4u;
    SET_GPR_U32(ctx, 31, 0x19A9CCu);
    ctx->pc = 0x1031E8u;
    {
        ctx->pc = 0x19A9CCu;
        ps2_stubs::sceVu0AddVector(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19A9CCu) { return; }
    ctx->pc = 0x19A9CCu;
label_19a9cc:
    // 0x19a9cc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19a9ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19a9d0: 0x8442127a  lh          $v0, 0x127A($v0)
    ctx->pc = 0x19a9d0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4730)));
    // 0x19a9d4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x19A9D4u;
    {
        const bool branch_taken_0x19a9d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19a9d4) {
            ctx->pc = 0x19AA50u;
            goto label_19aa50;
        }
    }
    ctx->pc = 0x19A9DCu;
    // 0x19a9dc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a9dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19a9e0: 0xc421d380  lwc1        $f1, -0x2C80($at)
    ctx->pc = 0x19a9e0u;
    { uint32_t bits = FAST_READ32(0x5CD380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19a9e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19a9e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19a9e8: 0x0  nop
    ctx->pc = 0x19a9e8u;
    // NOP
    // 0x19a9ec: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x19a9ecu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19a9f0: 0x0  nop
    ctx->pc = 0x19a9f0u;
    // NOP
    // 0x19a9f4: 0x45010009  bc1t        . + 4 + (0x9 << 2)
    ctx->pc = 0x19A9F4u;
    {
        const bool branch_taken_0x19a9f4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x19a9f4) {
            ctx->pc = 0x19AA1Cu;
            goto label_19aa1c;
        }
    }
    ctx->pc = 0x19A9FCu;
    // 0x19a9fc: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19a9fcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19aa00: 0xc421d380  lwc1        $f1, -0x2C80($at)
    ctx->pc = 0x19aa00u;
    { uint32_t bits = FAST_READ32(0x5CD380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19aa04: 0x3c0240a0  lui         $v0, 0x40A0
    ctx->pc = 0x19aa04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16544 << 16));
    // 0x19aa08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19aa08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aa0c: 0x0  nop
    ctx->pc = 0x19aa0cu;
    // NOP
    // 0x19aa10: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x19aa10u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x19aa14: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19aa14u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19aa18: 0xe420d380  swc1        $f0, -0x2C80($at)
    ctx->pc = 0x19aa18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD380u, _value); } while (0); }
label_19aa1c:
    // 0x19aa1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19aa1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19aa20: 0xc421d380  lwc1        $f1, -0x2C80($at)
    ctx->pc = 0x19aa20u;
    { uint32_t bits = FAST_READ32(0x5CD380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19aa24: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x19aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x19aa28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19aa28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aa2c: 0x0  nop
    ctx->pc = 0x19aa2cu;
    // NOP
    // 0x19aa30: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19aa30u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19aa34: 0x0  nop
    ctx->pc = 0x19aa34u;
    // NOP
    // 0x19aa38: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x19AA38u;
    {
        const bool branch_taken_0x19aa38 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19aa38) {
            ctx->pc = 0x19AA50u;
            goto label_19aa50;
        }
    }
    ctx->pc = 0x19AA40u;
    // 0x19aa40: 0x3c0242a0  lui         $v0, 0x42A0
    ctx->pc = 0x19aa40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17056 << 16));
    // 0x19aa44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19aa44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aa48: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19aa48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19aa4c: 0xe420d380  swc1        $f0, -0x2C80($at)
    ctx->pc = 0x19aa4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5CD380u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5CD380u, _value); } while (0); }
label_19aa50:
    // 0x19aa50: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19aa50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19aa54: 0x904209db  lbu         $v0, 0x9DB($v0)
    ctx->pc = 0x19aa54u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2523)));
    // 0x19aa58: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19aa58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19aa5c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x19aa5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x19aa60: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x19AA60u;
    {
        const bool branch_taken_0x19aa60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aa60) {
            ctx->pc = 0x19ABF8u;
            goto label_19abf8;
        }
    }
    ctx->pc = 0x19AA68u;
    // 0x19aa68: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19aa68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19aa6c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19aa6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19aa70: 0xa443127a  sh          $v1, 0x127A($v0)
    ctx->pc = 0x19aa70u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 3));
    // 0x19aa74: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19aa74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19aa78: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x19aa78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x19aa7c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x19aa7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x19aa80: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x19aa80u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x19aa84: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x19aa84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x19aa88: 0x1440005b  bnez        $v0, . + 4 + (0x5B << 2)
    ctx->pc = 0x19AA88u;
    {
        const bool branch_taken_0x19aa88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x19aa88) {
            ctx->pc = 0x19ABF8u;
            goto label_19abf8;
        }
    }
    ctx->pc = 0x19AA90u;
    // 0x19aa90: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x19aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x19aa94: 0x24508cb0  addiu       $s0, $v0, -0x7350
    ctx->pc = 0x19aa94u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937776));
    // 0x19aa98: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19aa98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19aa9c: 0xc421d380  lwc1        $f1, -0x2C80($at)
    ctx->pc = 0x19aa9cu;
    { uint32_t bits = FAST_READ32(0x5CD380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19aaa0: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x19aaa0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x19aaa4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19aaa4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aaa8: 0x0  nop
    ctx->pc = 0x19aaa8u;
    // NOP
    // 0x19aaac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19aaacu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19aab0: 0x0  nop
    ctx->pc = 0x19aab0u;
    // NOP
    // 0x19aab4: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19AAB4u;
    {
        const bool branch_taken_0x19aab4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19aab4) {
            ctx->pc = 0x19AAD4u;
            goto label_19aad4;
        }
    }
    ctx->pc = 0x19AABCu;
    // 0x19aabc: 0x3c0242f0  lui         $v0, 0x42F0
    ctx->pc = 0x19aabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17136 << 16));
    // 0x19aac0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19aac0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aac4: 0x0  nop
    ctx->pc = 0x19aac4u;
    // NOP
    // 0x19aac8: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x19aac8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
    // 0x19aacc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19AACCu;
    {
        const bool branch_taken_0x19aacc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19aacc) {
            ctx->pc = 0x19AAE0u;
            goto label_19aae0;
        }
    }
    ctx->pc = 0x19AAD4u;
label_19aad4:
    // 0x19aad4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19aad4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19aad8: 0xc420d380  lwc1        $f0, -0x2C80($at)
    ctx->pc = 0x19aad8u;
    { uint32_t bits = FAST_READ32(0x5CD380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19aadc: 0xe7a00078  swc1        $f0, 0x78($sp)
    ctx->pc = 0x19aadcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 120), bits); }
label_19aae0:
    // 0x19aae0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19aae0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19aae4: 0xc421d380  lwc1        $f1, -0x2C80($at)
    ctx->pc = 0x19aae4u;
    { uint32_t bits = FAST_READ32(0x5CD380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19aae8: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x19aae8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x19aaec: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19aaecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aaf0: 0x0  nop
    ctx->pc = 0x19aaf0u;
    // NOP
    // 0x19aaf4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x19aaf4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x19aaf8: 0x0  nop
    ctx->pc = 0x19aaf8u;
    // NOP
    // 0x19aafc: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x19AAFCu;
    {
        const bool branch_taken_0x19aafc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x19aafc) {
            ctx->pc = 0x19AB1Cu;
            goto label_19ab1c;
        }
    }
    ctx->pc = 0x19AB04u;
    // 0x19ab04: 0x3c0242b4  lui         $v0, 0x42B4
    ctx->pc = 0x19ab04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17076 << 16));
    // 0x19ab08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19ab08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ab0c: 0x0  nop
    ctx->pc = 0x19ab0cu;
    // NOP
    // 0x19ab10: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x19ab10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
    // 0x19ab14: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x19AB14u;
    {
        const bool branch_taken_0x19ab14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ab14) {
            ctx->pc = 0x19AB28u;
            goto label_19ab28;
        }
    }
    ctx->pc = 0x19AB1Cu;
label_19ab1c:
    // 0x19ab1c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19ab1cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19ab20: 0xc420d380  lwc1        $f0, -0x2C80($at)
    ctx->pc = 0x19ab20u;
    { uint32_t bits = FAST_READ32(0x5CD380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19ab24: 0xe7a0007c  swc1        $f0, 0x7C($sp)
    ctx->pc = 0x19ab24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 124), bits); }
label_19ab28:
    // 0x19ab28: 0xffa00000  sd          $zero, 0x0($sp)
    ctx->pc = 0x19ab28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 0));
    // 0x19ab2c: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19ab2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19ab30: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x19ab30u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x19ab34: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19ab34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19ab38: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19ab38u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19ab3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ab3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ab40: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ab40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ab44: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x19ab44u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x19ab48: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19ab48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19ab4c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x19ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x19ab50: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x19ab50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x19ab54: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x19ab54u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x19ab58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x19ab58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x19ab5c: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x19ab5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x19ab60: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x19ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x19ab64: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x19ab64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x19ab68: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x19ab68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x19ab6c: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x19ab6cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x19ab70: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x19ab70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ab74: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x19ab74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x19ab78: 0x304b00ff  andi        $t3, $v0, 0xFF
    ctx->pc = 0x19ab78u;
    SET_GPR_U64(ctx, 11, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x19ab7c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19ab7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ab80: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19ab80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19ab84: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x19ab84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19ab88: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x19ab88u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19ab8c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x19ab8cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19ab90: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19ab94: 0x2449d2f0  addiu       $t1, $v0, -0x2D10
    ctx->pc = 0x19ab94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19ab98: 0xc7ac007c  lwc1        $f12, 0x7C($sp)
    ctx->pc = 0x19ab98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 124)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19ab9c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x19ab9cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x19aba0: 0xc42dd380  lwc1        $f13, -0x2C80($at)
    ctx->pc = 0x19aba0u;
    { uint32_t bits = FAST_READ32(0x5CD380u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19aba4: 0xc7ae0078  lwc1        $f14, 0x78($sp)
    ctx->pc = 0x19aba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
    // 0x19aba8: 0x27aa0040  addiu       $t2, $sp, 0x40
    ctx->pc = 0x19aba8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x19abac: 0xc0bb544  jal         func_2ED510
    ctx->pc = 0x19ABACu;
    SET_GPR_U32(ctx, 31, 0x19ABB4u);
    ctx->pc = 0x2ED510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2ED510u, 0x19ABACu, 0x19ABB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ABB4u;
label_19abb4:
    // 0x19abb4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19abb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19abb8: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x19abb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x19abbc: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x19abbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19abc0: 0x24450100  addiu       $a1, $v0, 0x100
    ctx->pc = 0x19abc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 256));
    // 0x19abc4: 0x27a60030  addiu       $a2, $sp, 0x30
    ctx->pc = 0x19abc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x19abc8: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x19ABC8u;
    SET_GPR_U32(ctx, 31, 0x19ABD0u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x19ABD0u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19ABD0u) { return; }
    ctx->pc = 0x19ABD0u;
label_19abd0:
    // 0x19abd0: 0x27a20050  addiu       $v0, $sp, 0x50
    ctx->pc = 0x19abd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x19abd4: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x19abd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x19abd8: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x19abd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    // 0x19abdc: 0x2442d2f0  addiu       $v0, $v0, -0x2D10
    ctx->pc = 0x19abdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955760));
    // 0x19abe0: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x19abe0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x19abe4: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19abe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19abe8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x19abe8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x19abec: 0x27a60060  addiu       $a2, $sp, 0x60
    ctx->pc = 0x19abecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x19abf0: 0xc06c8e0  jal         func_1B2380
    ctx->pc = 0x19ABF0u;
    SET_GPR_U32(ctx, 31, 0x19ABF8u);
    ctx->pc = 0x1B2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2380u, 0x19ABF0u, 0x19ABF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ABF8u;
label_19abf8:
    // 0x19abf8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19abf8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19abfc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19abfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac00: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x19ac00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x19ac04: 0xe440011c  swc1        $f0, 0x11C($v0)
    ctx->pc = 0x19ac04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 284), bits); }
    // 0x19ac08: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ac08u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ac0c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ac0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac10: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x19ac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x19ac14: 0xe4400120  swc1        $f0, 0x120($v0)
    ctx->pc = 0x19ac14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 288), bits); }
    // 0x19ac18: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19ac18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac1c: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x19ac1cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac20: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19ac20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac24: 0x3c023f4c  lui         $v0, 0x3F4C
    ctx->pc = 0x19ac24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16204 << 16));
    // 0x19ac28: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x19ac28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x19ac2c: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19ac2cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19ac30: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x19ac30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x19ac34: 0xc4ac00d4  lwc1        $f12, 0xD4($a1)
    ctx->pc = 0x19ac34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19ac38: 0x24651240  addiu       $a1, $v1, 0x1240
    ctx->pc = 0x19ac38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4672));
    // 0x19ac3c: 0xc05c848  jal         func_172120
    ctx->pc = 0x19AC3Cu;
    SET_GPR_U32(ctx, 31, 0x19AC44u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x19AC3Cu, 0x19AC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC44u;
label_19ac44:
    // 0x19ac44: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x19ac44u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x19ac48: 0x3c023da3  lui         $v0, 0x3DA3
    ctx->pc = 0x19ac48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15779 << 16));
    // 0x19ac4c: 0x3442d70a  ori         $v0, $v0, 0xD70A
    ctx->pc = 0x19ac4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)55050);
    // 0x19ac50: 0x44827000  mtc1        $v0, $f14
    ctx->pc = 0x19ac50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x19ac54: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ac54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac58: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x19ac58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x19ac5c: 0xc44d0124  lwc1        $f13, 0x124($v0)
    ctx->pc = 0x19ac5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x19ac60: 0xc058f50  jal         func_163D40
    ctx->pc = 0x19AC60u;
    SET_GPR_U32(ctx, 31, 0x19AC68u);
    ctx->pc = 0x163D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163D40u, 0x19AC60u, 0x19AC68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AC68u;
label_19ac68:
    // 0x19ac68: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ac68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac6c: 0x8c4202d0  lw          $v0, 0x2D0($v0)
    ctx->pc = 0x19ac6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x19ac70: 0xe4400124  swc1        $f0, 0x124($v0)
    ctx->pc = 0x19ac70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 292), bits); }
    // 0x19ac74: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ac74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac78: 0x8c4302d0  lw          $v1, 0x2D0($v0)
    ctx->pc = 0x19ac78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 720)));
    // 0x19ac7c: 0x94620140  lhu         $v0, 0x140($v1)
    ctx->pc = 0x19ac7cu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 320)));
    // 0x19ac80: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x19ac80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x19ac84: 0xa4620140  sh          $v0, 0x140($v1)
    ctx->pc = 0x19ac84u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x19ac88: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ac88u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ac8c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ac8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac90: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x19ac90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x19ac94: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x19ac94u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19ac98: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ac98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ac9c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x19ac9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x19aca0: 0x3c02437a  lui         $v0, 0x437A
    ctx->pc = 0x19aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17274 << 16));
    // 0x19aca4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x19aca4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x19aca8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19aca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19acac: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x19acacu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x19acb0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19acb0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19acb4: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19acb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19acb8: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19acb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19acbc: 0x24840180  addiu       $a0, $a0, 0x180
    ctx->pc = 0x19acbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 384));
    // 0x19acc0: 0x24650180  addiu       $a1, $v1, 0x180
    ctx->pc = 0x19acc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 384));
    // 0x19acc4: 0xc44c01a8  lwc1        $f12, 0x1A8($v0)
    ctx->pc = 0x19acc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19acc8: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x19ACC8u;
    SET_GPR_U32(ctx, 31, 0x19ACD0u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x19ACD0u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x19ACD0u) { return; }
    ctx->pc = 0x19ACD0u;
label_19acd0:
    // 0x19acd0: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19acd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19acd4: 0xc05cd10  jal         func_173440
    ctx->pc = 0x19ACD4u;
    SET_GPR_U32(ctx, 31, 0x19ACDCu);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x19ACD4u, 0x19ACDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACDCu;
label_19acdc:
    // 0x19acdc: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19acdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ace0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x19ace0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19ace4: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x19ACE4u;
    SET_GPR_U32(ctx, 31, 0x19ACECu);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x19ACE4u, 0x19ACECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19ACECu;
label_19acec:
    // 0x19acec: 0x3c023d13  lui         $v0, 0x3D13
    ctx->pc = 0x19acecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15635 << 16));
    // 0x19acf0: 0x344274bc  ori         $v0, $v0, 0x74BC
    ctx->pc = 0x19acf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29884);
    // 0x19acf4: 0x44826800  mtc1        $v0, $f13
    ctx->pc = 0x19acf4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x19acf8: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19acf8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19acfc: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19acfcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad00: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ad00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad04: 0x24840120  addiu       $a0, $a0, 0x120
    ctx->pc = 0x19ad04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 288));
    // 0x19ad08: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x19ad08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x19ad0c: 0x24451240  addiu       $a1, $v0, 0x1240
    ctx->pc = 0x19ad0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4672));
    // 0x19ad10: 0xc05c848  jal         func_172120
    ctx->pc = 0x19AD10u;
    SET_GPR_U32(ctx, 31, 0x19AD18u);
    ctx->pc = 0x172120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172120u, 0x19AD10u, 0x19AD18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD18u;
label_19ad18:
    // 0x19ad18: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ad18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad1c: 0xc44100d4  lwc1        $f1, 0xD4($v0)
    ctx->pc = 0x19ad1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x19ad20: 0x46000b00  add.s       $f12, $f1, $f0
    ctx->pc = 0x19ad20u;
    ctx->f[12] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x19ad24: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x19AD24u;
    SET_GPR_U32(ctx, 31, 0x19AD2Cu);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x19AD24u, 0x19AD2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD2Cu;
label_19ad2c:
    // 0x19ad2c: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x19ad2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad30: 0xe44000d4  swc1        $f0, 0xD4($v0)
    ctx->pc = 0x19ad30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 212), bits); }
    // 0x19ad34: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19ad34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad38: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x19AD38u;
    SET_GPR_U32(ctx, 31, 0x19AD40u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x19AD38u, 0x19AD40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x19AD40u;
label_19ad40:
    // 0x19ad40: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x19ad40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad44: 0x84831278  lh          $v1, 0x1278($a0)
    ctx->pc = 0x19ad44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 4), 4728)));
    // 0x19ad48: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x19ad48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x19ad4c: 0xa4831278  sh          $v1, 0x1278($a0)
    ctx->pc = 0x19ad4cu;
    WRITE16(ADD32(GPR_U32(ctx, 4), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x19ad50: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19ad50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad54: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x19ad54u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x19ad58: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
    ctx->pc = 0x19AD58u;
    {
        const bool branch_taken_0x19ad58 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x19ad58) {
            ctx->pc = 0x19AD9Cu;
            goto label_19ad9c;
        }
    }
    ctx->pc = 0x19AD60u;
    // 0x19ad60: 0x240400b4  addiu       $a0, $zero, 0xB4
    ctx->pc = 0x19ad60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 180));
    // 0x19ad64: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19ad64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad68: 0xac641330  sw          $a0, 0x1330($v1)
    ctx->pc = 0x19ad68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4912), GPR_U32(ctx, 4));
    // 0x19ad6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x19ad6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19ad70: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19ad70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad74: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x19ad74u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x19ad78: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x19ad78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19ad7c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19ad7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad80: 0xa0640001  sb          $a0, 0x1($v1)
    ctx->pc = 0x19ad80u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 4));
    // 0x19ad84: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19ad84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad88: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x19ad88u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ad8c: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19ad8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad90: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x19ad90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x19ad94: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x19ad94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x19ad98: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x19ad98u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_19ad9c:
    // 0x19ad9c: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x19ad9cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19ada0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x19ada0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19ada4: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x19ada4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x19ada8: 0x3e00008  jr          $ra
    ctx->pc = 0x19ADA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19ADA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x19ADB0u;
}
