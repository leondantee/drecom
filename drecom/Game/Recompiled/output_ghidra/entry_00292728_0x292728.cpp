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

// Function: entry_00292728
// Address: 0x292728 - 0x292748
void entry_00292728_0x292728(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00292728_0x292728");
#endif

    switch (ctx->pc) {
        case 0x292730u: goto label_292730;
        default: break;
    }

    ctx->pc = 0x292728u;

    // 0x292728: 0xc0a5568  jal         func_2955A0
    ctx->pc = 0x292728u;
    SET_GPR_U32(ctx, 31, 0x292730u);
    ctx->pc = 0x2955A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2955A0u, 0x292728u, 0x292730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292730u;
label_292730:
    // 0x292730: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x292730u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x292734: 0x8c2267e8  lw          $v0, 0x67E8($at)
    ctx->pc = 0x292734u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3967E8u));
    // 0x292738: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x292738u;
    {
        const bool branch_taken_0x292738 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x292738) {
            ctx->pc = 0x292748u;
            return;
        }
    }
    ctx->pc = 0x292740u;
    // 0x292740: 0xc0a5350  jal         func_294D40
    ctx->pc = 0x292740u;
    SET_GPR_U32(ctx, 31, 0x292748u);
    ctx->pc = 0x294D40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x294D40u, 0x292740u, 0x292748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x292748u;
}
