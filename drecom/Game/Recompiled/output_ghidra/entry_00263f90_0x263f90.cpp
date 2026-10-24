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

// Function: entry_00263f90
// Address: 0x263f90 - 0x263fe8
void entry_00263f90_0x263f90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00263f90_0x263f90");
#endif

    switch (ctx->pc) {
        case 0x263fa0u: goto label_263fa0;
        case 0x263fb4u: goto label_263fb4;
        case 0x263fc8u: goto label_263fc8;
        default: break;
    }

    ctx->pc = 0x263f90u;

    // 0x263f90: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x263f90u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263f94: 0xc60c0104  lwc1        $f12, 0x104($s0)
    ctx->pc = 0x263f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263f98: 0xc0677d8  jal         func_19DF60
    ctx->pc = 0x263F98u;
    SET_GPR_U32(ctx, 31, 0x263FA0u);
    ctx->pc = 0x19DF60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DF60u, 0x263F98u, 0x263FA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FA0u;
label_263fa0:
    // 0x263fa0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x263fa0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263fa4: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x263fa4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263fa8: 0xc60c0108  lwc1        $f12, 0x108($s0)
    ctx->pc = 0x263fa8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 264)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263fac: 0xc067808  jal         func_19E020
    ctx->pc = 0x263FACu;
    SET_GPR_U32(ctx, 31, 0x263FB4u);
    ctx->pc = 0x19E020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E020u, 0x263FACu, 0x263FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FB4u;
label_263fb4:
    // 0x263fb4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x263fb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263fb8: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x263fb8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263fbc: 0xc60c010c  lwc1        $f12, 0x10C($s0)
    ctx->pc = 0x263fbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x263fc0: 0xc0676d0  jal         func_19DB40
    ctx->pc = 0x263FC0u;
    SET_GPR_U32(ctx, 31, 0x263FC8u);
    ctx->pc = 0x19DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DB40u, 0x263FC0u, 0x263FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FC8u;
label_263fc8:
    // 0x263fc8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x263fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x263fcc: 0x171980  sll         $v1, $s7, 6
    ctx->pc = 0x263fccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 23), 6));
    // 0x263fd0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x263fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x263fd4: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x263fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x263fd8: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x263fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x263fdc: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x263fdcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x263fe0: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x263FE0u;
    SET_GPR_U32(ctx, 31, 0x263FE8u);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x263FE0u, 0x263FE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x263FE8u;
}
