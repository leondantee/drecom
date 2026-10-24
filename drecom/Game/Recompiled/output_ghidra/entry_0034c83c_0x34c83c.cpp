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

// Function: entry_0034c83c
// Address: 0x34c83c - 0x34c98c
void entry_0034c83c_0x34c83c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034c83c_0x34c83c");
#endif

    switch (ctx->pc) {
        case 0x34c8d8u: goto label_34c8d8;
        case 0x34c960u: goto label_34c960;
        case 0x34c96cu: goto label_34c96c;
        default: break;
    }

    ctx->pc = 0x34c83cu;

    // 0x34c83c: 0xc6010130  lwc1        $f1, 0x130($s0)
    ctx->pc = 0x34c83cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x34c840: 0x3c034120  lui         $v1, 0x4120
    ctx->pc = 0x34c840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16672 << 16));
    // 0x34c844: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c844u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c848: 0x0  nop
    ctx->pc = 0x34c848u;
    // NOP
    // 0x34c84c: 0x46010032  c.eq.s      $f0, $f1
    ctx->pc = 0x34c84cu;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x34c850: 0x0  nop
    ctx->pc = 0x34c850u;
    // NOP
    // 0x34c854: 0x4501019e  bc1t        . + 4 + (0x19E << 2)
    ctx->pc = 0x34C854u;
    {
        const bool branch_taken_0x34c854 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x34c854) {
            ctx->pc = 0x34CED0u;
            return;
        }
    }
    ctx->pc = 0x34C85Cu;
    // 0x34c85c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c85cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c860: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x34c860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x34c864: 0x246401c0  addiu       $a0, $v1, 0x1C0
    ctx->pc = 0x34c864u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x34c868: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x34c868u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
    // 0x34c86c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c86cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c870: 0x0  nop
    ctx->pc = 0x34c870u;
    // NOP
    // 0x34c874: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x34c874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x34c878: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c878u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c87c: 0x0  nop
    ctx->pc = 0x34c87cu;
    // NOP
    // 0x34c880: 0xe7a000c4  swc1        $f0, 0xC4($sp)
    ctx->pc = 0x34c880u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 196), bits); }
    // 0x34c884: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c884u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c888: 0x0  nop
    ctx->pc = 0x34c888u;
    // NOP
    // 0x34c88c: 0xe7a000c8  swc1        $f0, 0xC8($sp)
    ctx->pc = 0x34c88cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 200), bits); }
    // 0x34c890: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34c890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34c894: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c894u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c898: 0x0  nop
    ctx->pc = 0x34c898u;
    // NOP
    // 0x34c89c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x34c89cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    // 0x34c8a0: 0x3c034396  lui         $v1, 0x4396
    ctx->pc = 0x34c8a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17302 << 16));
    // 0x34c8a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c8a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c8a8: 0x0  nop
    ctx->pc = 0x34c8a8u;
    // NOP
    // 0x34c8ac: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x34c8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x34c8b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x34c8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34c8b4: 0xa7a400d4  sh          $a0, 0xD4($sp)
    ctx->pc = 0x34c8b4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 212), (uint16_t)GPR_U32(ctx, 4));
    // 0x34c8b8: 0xa3a000d6  sb          $zero, 0xD6($sp)
    ctx->pc = 0x34c8b8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x34c8bc: 0xa3a000d7  sb          $zero, 0xD7($sp)
    ctx->pc = 0x34c8bcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 215), (uint8_t)GPR_U32(ctx, 0));
    // 0x34c8c0: 0x8fa50128  lw          $a1, 0x128($sp)
    ctx->pc = 0x34c8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c8c4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x34c8c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x34c8c8: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x34c8c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x34c8cc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x34c8ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x34c8d0: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x34C8D0u;
    SET_GPR_U32(ctx, 31, 0x34C8D8u);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x34C8D0u, 0x34C8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C8D8u;
label_34c8d8:
    // 0x34c8d8: 0x70403e28  paddub      $a3, $v0, $zero
    ctx->pc = 0x34c8d8u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c8dc: 0x10e0017c  beqz        $a3, . + 4 + (0x17C << 2)
    ctx->pc = 0x34C8DCu;
    {
        const bool branch_taken_0x34c8dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c8dc) {
            ctx->pc = 0x34CED0u;
            return;
        }
    }
    ctx->pc = 0x34C8E4u;
    // 0x34c8e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c8e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c8e8: 0x0  nop
    ctx->pc = 0x34c8e8u;
    // NOP
    // 0x34c8ec: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x34c8ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    // 0x34c8f0: 0x3c0843c8  lui         $t0, 0x43C8
    ctx->pc = 0x34c8f0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17352 << 16));
    // 0x34c8f4: 0x44880000  mtc1        $t0, $f0
    ctx->pc = 0x34c8f4u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c8f8: 0x0  nop
    ctx->pc = 0x34c8f8u;
    // NOP
    // 0x34c8fc: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x34c8fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    // 0x34c900: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x34c900u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c904: 0x0  nop
    ctx->pc = 0x34c904u;
    // NOP
    // 0x34c908: 0xe7a000e8  swc1        $f0, 0xE8($sp)
    ctx->pc = 0x34c908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 232), bits); }
    // 0x34c90c: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x34c90cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x34c910: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x34c910u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c914: 0x0  nop
    ctx->pc = 0x34c914u;
    // NOP
    // 0x34c918: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x34c918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    // 0x34c91c: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c91cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c920: 0x3303c  dsll32      $a2, $v1, 0
    ctx->pc = 0x34c920u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 3) << (32 + 0));
    // 0x34c924: 0x6303e  dsrl32      $a2, $a2, 0
    ctx->pc = 0x34c924u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> (32 + 0));
    // 0x34c928: 0x3404ffff  ori         $a0, $zero, 0xFFFF
    ctx->pc = 0x34c928u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x34c92c: 0x42c38  dsll        $a1, $a0, 16
    ctx->pc = 0x34c92cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) << 16);
    // 0x34c930: 0x34a3ffff  ori         $v1, $a1, 0xFFFF
    ctx->pc = 0x34c930u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x34c934: 0xc32024  and         $a0, $a2, $v1
    ctx->pc = 0x34c934u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & GPR_U64(ctx, 3));
    // 0x34c938: 0x4183c  dsll32      $v1, $a0, 0
    ctx->pc = 0x34c938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) << (32 + 0));
    // 0x34c93c: 0x34640006  ori         $a0, $v1, 0x6
    ctx->pc = 0x34c93cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)6);
    // 0x34c940: 0x8fa30128  lw          $v1, 0x128($sp)
    ctx->pc = 0x34c940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 296)));
    // 0x34c944: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x34c944u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x34c948: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x34c948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x34c94c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x34c94cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c950: 0x246701c0  addiu       $a3, $v1, 0x1C0
    ctx->pc = 0x34c950u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), 448));
    // 0x34c954: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34c954u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34c958: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x34C958u;
    SET_GPR_U32(ctx, 31, 0x34C960u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x34C958u, 0x34C960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C960u;
label_34c960:
    // 0x34c960: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x34c960u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c964: 0xc067694  jal         func_19DA50
    ctx->pc = 0x34C964u;
    SET_GPR_U32(ctx, 31, 0x34C96Cu);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x34C964u, 0x34C96Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34C96Cu;
label_34c96c:
    // 0x34c96c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x34c96cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x34c970: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x34C970u;
    {
        const bool branch_taken_0x34c970 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x34c970) {
            ctx->pc = 0x34C98Cu;
            return;
        }
    }
    ctx->pc = 0x34C978u;
    // 0x34c978: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x34c978u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x34c97c: 0x0  nop
    ctx->pc = 0x34c97cu;
    // NOP
    // 0x34c980: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x34c980u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x34c984: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x34C984u;
    {
        const bool branch_taken_0x34c984 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34c984) {
            ctx->pc = 0x34C9A8u;
            return;
        }
    }
    ctx->pc = 0x34C98Cu;
}
