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

// Function: entry_001bd100
// Address: 0x1bd100 - 0x1bd124
void entry_001bd100_0x1bd100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd100_0x1bd100");
#endif

    switch (ctx->pc) {
        case 0x1bd120u: goto label_1bd120;
        default: break;
    }

    ctx->pc = 0x1bd100u;

    // 0x1bd100: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1bd100u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd104: 0x8ca613e8  lw          $a2, 0x13E8($a1)
    ctx->pc = 0x1bd104u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5096)));
    // 0x1bd108: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x1BD108u;
    {
        const bool branch_taken_0x1bd108 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x1bd108) {
            ctx->pc = 0x1BD124u;
            return;
        }
    }
    ctx->pc = 0x1BD110u;
    // 0x1bd110: 0x8fa70068  lw          $a3, 0x68($sp)
    ctx->pc = 0x1bd110u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd114: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1bd114u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1bd118: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1BD118u;
    SET_GPR_U32(ctx, 31, 0x1BD120u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1BD118u, 0x1BD120u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BD120u;
label_1bd120:
    // 0x1bd120: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x1bd120u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1bd124u;
}
