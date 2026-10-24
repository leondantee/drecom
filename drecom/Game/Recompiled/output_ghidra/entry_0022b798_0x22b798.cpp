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

// Function: entry_0022b798
// Address: 0x22b798 - 0x22b868
void entry_0022b798_0x22b798(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022b798_0x22b798");
#endif

    switch (ctx->pc) {
        case 0x22b7bcu: goto label_22b7bc;
        case 0x22b840u: goto label_22b840;
        case 0x22b848u: goto label_22b848;
        default: break;
    }

    ctx->pc = 0x22b798u;

    // 0x22b798: 0xa3a00086  sb          $zero, 0x86($sp)
    ctx->pc = 0x22b798u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 134), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b79c: 0xa3a00087  sb          $zero, 0x87($sp)
    ctx->pc = 0x22b79cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 135), (uint8_t)GPR_U32(ctx, 0));
    // 0x22b7a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x22b7a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x22b7a4: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b7a8: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x22b7a8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    // 0x22b7ac: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x22b7acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b7b0: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x22b7b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x22b7b4: 0xc06ce90  jal         func_1B3A40
    ctx->pc = 0x22B7B4u;
    SET_GPR_U32(ctx, 31, 0x22B7BCu);
    ctx->pc = 0x1B3A40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B3A40u, 0x22B7B4u, 0x22B7BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B7BCu;
label_22b7bc:
    // 0x22b7bc: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x22B7BCu;
    {
        const bool branch_taken_0x22b7bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b7bc) {
            ctx->pc = 0x22B920u;
            return;
        }
    }
    ctx->pc = 0x22B7C4u;
    // 0x22b7c4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b7c4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b7c8: 0x0  nop
    ctx->pc = 0x22b7c8u;
    // NOP
    // 0x22b7cc: 0xe7a00090  swc1        $f0, 0x90($sp)
    ctx->pc = 0x22b7ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 144), bits); }
    // 0x22b7d0: 0x3c044396  lui         $a0, 0x4396
    ctx->pc = 0x22b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17302 << 16));
    // 0x22b7d4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22b7d4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b7d8: 0x0  nop
    ctx->pc = 0x22b7d8u;
    // NOP
    // 0x22b7dc: 0xe7a00094  swc1        $f0, 0x94($sp)
    ctx->pc = 0x22b7dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 148), bits); }
    // 0x22b7e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x22b7e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b7e4: 0x0  nop
    ctx->pc = 0x22b7e4u;
    // NOP
    // 0x22b7e8: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x22b7e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    // 0x22b7ec: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x22b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x22b7f0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x22b7f0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b7f4: 0x0  nop
    ctx->pc = 0x22b7f4u;
    // NOP
    // 0x22b7f8: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x22b7f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    // 0x22b7fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x22b7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b800: 0x2283c  dsll32      $a1, $v0, 0
    ctx->pc = 0x22b800u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) << (32 + 0));
    // 0x22b804: 0x5283e  dsrl32      $a1, $a1, 0
    ctx->pc = 0x22b804u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) >> (32 + 0));
    // 0x22b808: 0x3407ffff  ori         $a3, $zero, 0xFFFF
    ctx->pc = 0x22b808u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x22b80c: 0x71438  dsll        $v0, $a3, 16
    ctx->pc = 0x22b80cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << 16);
    // 0x22b810: 0x3444ffff  ori         $a0, $v0, 0xFFFF
    ctx->pc = 0x22b810u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x22b814: 0xa42824  and         $a1, $a1, $a0
    ctx->pc = 0x22b814u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 4));
    // 0x22b818: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x22b818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x22b81c: 0x34440006  ori         $a0, $v0, 0x6
    ctx->pc = 0x22b81cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)6);
    // 0x22b820: 0x8fa500b8  lw          $a1, 0xB8($sp)
    ctx->pc = 0x22b820u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x22b824: 0x8ca20130  lw          $v0, 0x130($a1)
    ctx->pc = 0x22b824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 304)));
    // 0x22b828: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x22b828u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x22b82c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x22b82cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b830: 0x24470880  addiu       $a3, $v0, 0x880
    ctx->pc = 0x22b830u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 2176));
    // 0x22b834: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x22b834u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x22b838: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x22B838u;
    SET_GPR_U32(ctx, 31, 0x22B840u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x22B838u, 0x22B840u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B840u;
label_22b840:
    // 0x22b840: 0xc067694  jal         func_19DA50
    ctx->pc = 0x22B840u;
    SET_GPR_U32(ctx, 31, 0x22B848u);
    ctx->pc = 0x19DA50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DA50u, 0x22B840u, 0x22B848u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B848u;
label_22b848:
    // 0x22b848: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x22b848u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x22b84c: 0x4800006  bltz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22B84Cu;
    {
        const bool branch_taken_0x22b84c = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x22b84c) {
            ctx->pc = 0x22B868u;
            return;
        }
    }
    ctx->pc = 0x22B854u;
    // 0x22b854: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x22b854u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x22b858: 0x0  nop
    ctx->pc = 0x22b858u;
    // NOP
    // 0x22b85c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x22b85cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x22b860: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22B860u;
    {
        const bool branch_taken_0x22b860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22b860) {
            ctx->pc = 0x22B884u;
            return;
        }
    }
    ctx->pc = 0x22B868u;
}
