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

// Function: entry_001e18cc
// Address: 0x1e18cc - 0x1e1910
void entry_001e18cc_0x1e18cc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e18cc_0x1e18cc");
#endif

    switch (ctx->pc) {
        case 0x1e18f8u: goto label_1e18f8;
        default: break;
    }

    ctx->pc = 0x1e18ccu;

    // 0x1e18cc: 0x27a20108  addiu       $v0, $sp, 0x108
    ctx->pc = 0x1e18ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 264));
    // 0x1e18d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1e18d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1e18d4: 0x2c4159d9  sltiu       $at, $v0, 0x59D9
    ctx->pc = 0x1e18d4u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e18d8: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1E18D8u;
    {
        const bool branch_taken_0x1e18d8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e18d8) {
            ctx->pc = 0x1E1910u;
            return;
        }
    }
    ctx->pc = 0x1E18E0u;
    // 0x1e18e0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x1e18e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e18e4: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1e18e4u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e18e8: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e18e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e18ec: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1e18ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e18f0: 0xc077fc8  jal         func_1DFF20
    ctx->pc = 0x1E18F0u;
    SET_GPR_U32(ctx, 31, 0x1E18F8u);
    ctx->pc = 0x1DFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF20u, 0x1E18F0u, 0x1E18F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E18F8u;
label_1e18f8:
    // 0x1e18f8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e18f8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e18fc: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1e18fcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e1900: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x1e1900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e1904: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e1904u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e1908: 0x1000003d  b           . + 4 + (0x3D << 2)
    ctx->pc = 0x1E1908u;
    {
        const bool branch_taken_0x1e1908 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e1908) {
            ctx->pc = 0x1E1A00u;
            return;
        }
    }
    ctx->pc = 0x1E1910u;
}
