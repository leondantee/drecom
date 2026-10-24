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

// Function: entry_0027ba38
// Address: 0x27ba38 - 0x27ba58
void entry_0027ba38_0x27ba38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ba38_0x27ba38");
#endif

    ctx->pc = 0x27ba38u;

    // 0x27ba38: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x27ba38u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x27ba3c: 0x8c241ae4  lw          $a0, 0x1AE4($at)
    ctx->pc = 0x27ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1AE4u));
    // 0x27ba40: 0x3c032000  lui         $v1, 0x2000
    ctx->pc = 0x27ba40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)8192 << 16));
    // 0x27ba44: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x27ba44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x27ba48: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x27BA48u;
    {
        const bool branch_taken_0x27ba48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ba48) {
            ctx->pc = 0x27BA58u;
            return;
        }
    }
    ctx->pc = 0x27BA50u;
    // 0x27ba50: 0xc09f738  jal         func_27DCE0
    ctx->pc = 0x27BA50u;
    SET_GPR_U32(ctx, 31, 0x27BA58u);
    ctx->pc = 0x27DCE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27DCE0u, 0x27BA50u, 0x27BA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27BA58u;
}
