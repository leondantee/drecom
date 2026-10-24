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

// Function: entry_00379d58
// Address: 0x379d58 - 0x379d78
void entry_00379d58_0x379d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00379d58_0x379d58");
#endif

    ctx->pc = 0x379d58u;

    // 0x379d58: 0x8e035dc0  lw          $v1, 0x5DC0($s0)
    ctx->pc = 0x379d58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24000)));
    // 0x379d5c: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x379D5Cu;
    {
        const bool branch_taken_0x379d5c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x379d5c) {
            ctx->pc = 0x379D78u;
            return;
        }
    }
    ctx->pc = 0x379D64u;
    // 0x379d64: 0x8e035dc8  lw          $v1, 0x5DC8($s0)
    ctx->pc = 0x379d64u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x379d68: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x379D68u;
    {
        const bool branch_taken_0x379d68 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x379d68) {
            ctx->pc = 0x379D78u;
            return;
        }
    }
    ctx->pc = 0x379D70u;
    // 0x379d70: 0xc0de854  jal         func_37A150
    ctx->pc = 0x379D70u;
    SET_GPR_U32(ctx, 31, 0x379D78u);
    ctx->pc = 0x37A150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37A150u, 0x379D70u, 0x379D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x379D78u;
}
