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

// Function: entry_001e1988
// Address: 0x1e1988 - 0x1e19cc
void entry_001e1988_0x1e1988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e1988_0x1e1988");
#endif

    switch (ctx->pc) {
        case 0x1e19b0u: goto label_1e19b0;
        default: break;
    }

    ctx->pc = 0x1e1988u;

    // 0x1e1988: 0x27a30118  addiu       $v1, $sp, 0x118
    ctx->pc = 0x1e1988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x1e198c: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x1e198cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1e1990: 0x2c6159d9  sltiu       $at, $v1, 0x59D9
    ctx->pc = 0x1e1990u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)23001) ? 1 : 0);
    // 0x1e1994: 0x1420000d  bnez        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x1E1994u;
    {
        const bool branch_taken_0x1e1994 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e1994) {
            ctx->pc = 0x1E19CCu;
            return;
        }
    }
    ctx->pc = 0x1E199Cu;
    // 0x1e199c: 0x34128000  ori         $s2, $zero, 0x8000
    ctx->pc = 0x1e199cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1e19a0: 0x8e04010c  lw          $a0, 0x10C($s0)
    ctx->pc = 0x1e19a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 268)));
    // 0x1e19a4: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x1e19a4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e19a8: 0xc077fc8  jal         func_1DFF20
    ctx->pc = 0x1E19A8u;
    SET_GPR_U32(ctx, 31, 0x1E19B0u);
    ctx->pc = 0x1DFF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1DFF20u, 0x1E19A8u, 0x1E19B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E19B0u;
label_1e19b0:
    // 0x1e19b0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1e19b0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e19b4: 0x26920001  addiu       $s2, $s4, 0x1
    ctx->pc = 0x1e19b4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1e19b8: 0x7240a628  paddub      $s4, $s2, $zero
    ctx->pc = 0x1e19b8u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x1e19bc: 0x26030110  addiu       $v1, $s0, 0x110
    ctx->pc = 0x1e19bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e19c0: 0x70608628  paddub      $s0, $v1, $zero
    ctx->pc = 0x1e19c0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1e19c4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x1E19C4u;
    {
        const bool branch_taken_0x1e19c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e19c4) {
            ctx->pc = 0x1E1A00u;
            return;
        }
    }
    ctx->pc = 0x1E19CCu;
}
