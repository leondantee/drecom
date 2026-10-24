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

// Function: entry_001b684c
// Address: 0x1b684c - 0x1b6880
void entry_001b684c_0x1b684c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b684c_0x1b684c");
#endif

    switch (ctx->pc) {
        case 0x1b6858u: goto label_1b6858;
        default: break;
    }

    ctx->pc = 0x1b684cu;

    // 0x1b684c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x1b684cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b6850: 0xc097530  jal         func_25D4C0
    ctx->pc = 0x1B6850u;
    SET_GPR_U32(ctx, 31, 0x1B6858u);
    ctx->pc = 0x25D4C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D4C0u, 0x1B6850u, 0x1B6858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6858u;
label_1b6858:
    // 0x1b6858: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1b6858u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1b685c: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1b685cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6860: 0x8ca31b60  lw          $v1, 0x1B60($a1)
    ctx->pc = 0x1b6860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 7008)));
    // 0x1b6864: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1B6864u;
    {
        const bool branch_taken_0x1b6864 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6864) {
            ctx->pc = 0x1B6880u;
            return;
        }
    }
    ctx->pc = 0x1B686Cu;
    // 0x1b686c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1b686cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1b6870: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6870u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6874: 0xa0640003  sb          $a0, 0x3($v1)
    ctx->pc = 0x1b6874u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b6878: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x1B6878u;
    {
        const bool branch_taken_0x1b6878 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6878) {
            ctx->pc = 0x1B6CE0u;
            return;
        }
    }
    ctx->pc = 0x1B6880u;
}
