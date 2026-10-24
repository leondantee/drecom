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

// Function: entry_001b7a7c
// Address: 0x1b7a7c - 0x1b7ab0
void entry_001b7a7c_0x1b7a7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b7a7c_0x1b7a7c");
#endif

    switch (ctx->pc) {
        case 0x1b7a88u: goto label_1b7a88;
        default: break;
    }

    ctx->pc = 0x1b7a7cu;

    // 0x1b7a7c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b7a7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b7a80: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B7A80u;
    SET_GPR_U32(ctx, 31, 0x1B7A88u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B7A80u, 0x1B7A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B7A88u;
label_1b7a88:
    // 0x1b7a88: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b7a88u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b7a8c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7a90: 0x8c641b60  lw          $a0, 0x1B60($v1)
    ctx->pc = 0x1b7a90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 7008)));
    // 0x1b7a94: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B7A94u;
    {
        const bool branch_taken_0x1b7a94 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7a94) {
            ctx->pc = 0x1B7AB0u;
            return;
        }
    }
    ctx->pc = 0x1B7A9Cu;
    // 0x1b7a9c: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b7a9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b7aa0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b7aa0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b7aa4: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1b7aa4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b7aa8: 0x10000223  b           . + 4 + (0x223 << 2)
    ctx->pc = 0x1B7AA8u;
    {
        const bool branch_taken_0x1b7aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b7aa8) {
            ctx->pc = 0x1B8338u;
            return;
        }
    }
    ctx->pc = 0x1B7AB0u;
}
