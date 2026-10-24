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

// Function: set_eff_line
// Address: 0x21c800 - 0x21c95c
void set_eff_line_0x21c800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("set_eff_line_0x21c800");
#endif

    switch (ctx->pc) {
        case 0x21c894u: goto label_21c894;
        case 0x21c8bcu: goto label_21c8bc;
        default: break;
    }

    ctx->pc = 0x21c800u;

    // 0x21c800: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x21c800u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x21c804: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x21c804u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
    // 0x21c808: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x21c808u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x21c80c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x21c80cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x21c810: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x21c810u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x21c814: 0xafa50038  sw          $a1, 0x38($sp)
    ctx->pc = 0x21c814u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 5));
    // 0x21c818: 0xe7ac0040  swc1        $f12, 0x40($sp)
    ctx->pc = 0x21c818u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    // 0x21c81c: 0xe7ad0048  swc1        $f13, 0x48($sp)
    ctx->pc = 0x21c81cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x21c820: 0xe7ae0050  swc1        $f14, 0x50($sp)
    ctx->pc = 0x21c820u;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x21c824: 0xe7af0058  swc1        $f15, 0x58($sp)
    ctx->pc = 0x21c824u;
    { float f = ctx->f[15]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x21c828: 0xe7b00060  swc1        $f16, 0x60($sp)
    ctx->pc = 0x21c828u;
    { float f = ctx->f[16]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x21c82c: 0xe7b10068  swc1        $f17, 0x68($sp)
    ctx->pc = 0x21c82cu;
    { float f = ctx->f[17]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x21c830: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x21c830u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x21c834: 0xafa70078  sw          $a3, 0x78($sp)
    ctx->pc = 0x21c834u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 7));
    // 0x21c838: 0xafa80080  sw          $t0, 0x80($sp)
    ctx->pc = 0x21c838u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 8));
    // 0x21c83c: 0xafa90088  sw          $t1, 0x88($sp)
    ctx->pc = 0x21c83cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 136), GPR_U32(ctx, 9));
    // 0x21c840: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x21c840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21c844: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21c844u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c848: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21c848u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21c84c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21c84cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21c850: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21c850u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21c854: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21c854u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21c858: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21c858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21c85c: 0x2203c  dsll32      $a0, $v0, 0
    ctx->pc = 0x21c85cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c860: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x21c860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x21c864: 0x2183c  dsll32      $v1, $v0, 0
    ctx->pc = 0x21c864u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 0));
    // 0x21c868: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x21c868u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x21c86c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x21c86cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x21c870: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x21c870u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x21c874: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x21c874u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x21c878: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x21c878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x21c87c: 0x822825  or          $a1, $a0, $v0
    ctx->pc = 0x21c87cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x21c880: 0x24041c00  addiu       $a0, $zero, 0x1C00
    ctx->pc = 0x21c880u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7168));
    // 0x21c884: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x21c884u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c888: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x21c888u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x21c88c: 0xc0631f0  jal         func_18C7C0
    ctx->pc = 0x21C88Cu;
    SET_GPR_U32(ctx, 31, 0x21C894u);
    ctx->pc = 0x18C7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C7C0u, 0x21C88Cu, 0x21C894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C894u;
label_21c894:
    // 0x21c894: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x21c894u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21c898: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x21c898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x21c89c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21c89cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21c8a0: 0xa2220347  sb          $v0, 0x347($s1)
    ctx->pc = 0x21c8a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 839), (uint8_t)GPR_U32(ctx, 2));
    // 0x21c8a4: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x21c8a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x21c8a8: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x21c8a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x21c8ac: 0xa2220344  sb          $v0, 0x344($s1)
    ctx->pc = 0x21c8acu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 836), (uint8_t)GPR_U32(ctx, 2));
    // 0x21c8b0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x21c8b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x21c8b4: 0xc06332c  jal         func_18CCB0
    ctx->pc = 0x21C8B4u;
    SET_GPR_U32(ctx, 31, 0x21C8BCu);
    ctx->pc = 0x18CCB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18CCB0u, 0x21C8B4u, 0x21C8BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21C8BCu;
label_21c8bc:
    // 0x21c8bc: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x21c8bcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x21c8c0: 0x3c030800  lui         $v1, 0x800
    ctx->pc = 0x21c8c0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2048 << 16));
    // 0x21c8c4: 0x34630011  ori         $v1, $v1, 0x11
    ctx->pc = 0x21c8c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)17);
    // 0x21c8c8: 0x1203001c  beq         $s0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x21C8C8u;
    {
        const bool branch_taken_0x21c8c8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        if (branch_taken_0x21c8c8) {
            ctx->pc = 0x21C93Cu;
            goto label_21c93c;
        }
    }
    ctx->pc = 0x21C8D0u;
    // 0x21c8d0: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21c8d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21c8d4: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x21c8d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x21c8d8: 0xa20302a8  sb          $v1, 0x2A8($s0)
    ctx->pc = 0x21c8d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 680), (uint8_t)GPR_U32(ctx, 3));
    // 0x21c8dc: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x21c8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c8e0: 0xe60002d0  swc1        $f0, 0x2D0($s0)
    ctx->pc = 0x21c8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 720), bits); }
    // 0x21c8e4: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x21c8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c8e8: 0xe60002d4  swc1        $f0, 0x2D4($s0)
    ctx->pc = 0x21c8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 724), bits); }
    // 0x21c8ec: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x21c8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c8f0: 0xe60002d8  swc1        $f0, 0x2D8($s0)
    ctx->pc = 0x21c8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 728), bits); }
    // 0x21c8f4: 0x3c034300  lui         $v1, 0x4300
    ctx->pc = 0x21c8f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17152 << 16));
    // 0x21c8f8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x21c8f8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21c8fc: 0x0  nop
    ctx->pc = 0x21c8fcu;
    // NOP
    // 0x21c900: 0xe60002dc  swc1        $f0, 0x2DC($s0)
    ctx->pc = 0x21c900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 732), bits); }
    // 0x21c904: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x21c904u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c908: 0xe60002ec  swc1        $f0, 0x2EC($s0)
    ctx->pc = 0x21c908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 748), bits); }
    // 0x21c90c: 0xc7a00060  lwc1        $f0, 0x60($sp)
    ctx->pc = 0x21c90cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c910: 0xe6000338  swc1        $f0, 0x338($s0)
    ctx->pc = 0x21c910u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 824), bits); }
    // 0x21c914: 0xc7a00068  lwc1        $f0, 0x68($sp)
    ctx->pc = 0x21c914u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x21c918: 0xe600033c  swc1        $f0, 0x33C($s0)
    ctx->pc = 0x21c918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 828), bits); }
    // 0x21c91c: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x21c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x21c920: 0xa203034f  sb          $v1, 0x34F($s0)
    ctx->pc = 0x21c920u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 847), (uint8_t)GPR_U32(ctx, 3));
    // 0x21c924: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x21c924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x21c928: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x21c928u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x21c92c: 0x831818  mult        $v1, $a0, $v1
    ctx->pc = 0x21c92cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x21c930: 0xae030364  sw          $v1, 0x364($s0)
    ctx->pc = 0x21c930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 868), GPR_U32(ctx, 3));
    // 0x21c934: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x21C934u;
    {
        const bool branch_taken_0x21c934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c934) {
            ctx->pc = 0x21C944u;
            goto label_21c944;
        }
    }
    ctx->pc = 0x21C93Cu;
label_21c93c:
    // 0x21c93c: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x21C93Cu;
    {
        const bool branch_taken_0x21c93c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21c93c) {
            ctx->pc = 0x21C944u;
            goto label_21c944;
        }
    }
    ctx->pc = 0x21C944u;
label_21c944:
    // 0x21c944: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x21c944u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x21c948: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x21c948u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x21c94c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x21c94cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x21c950: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x21c950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x21c954: 0x3e00008  jr          $ra
    ctx->pc = 0x21C954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21C954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x21C95Cu;
}
