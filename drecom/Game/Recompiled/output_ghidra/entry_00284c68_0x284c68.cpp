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

// Function: entry_00284c68
// Address: 0x284c68 - 0x284c7c
void entry_00284c68_0x284c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00284c68_0x284c68");
#endif

    ctx->pc = 0x284c68u;

    // 0x284c68: 0x8e025dc8  lw          $v0, 0x5DC8($s0)
    ctx->pc = 0x284c68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24008)));
    // 0x284c6c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x284C6Cu;
    {
        const bool branch_taken_0x284c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x284c6c) {
            ctx->pc = 0x284C7Cu;
            return;
        }
    }
    ctx->pc = 0x284C74u;
    // 0x284c74: 0xc0a19f0  jal         func_2867C0
    ctx->pc = 0x284C74u;
    SET_GPR_U32(ctx, 31, 0x284C7Cu);
    ctx->pc = 0x2867C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2867C0u, 0x284C74u, 0x284C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x284C7Cu;
}
