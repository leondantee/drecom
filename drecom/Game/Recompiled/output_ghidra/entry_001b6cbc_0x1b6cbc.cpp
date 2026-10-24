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

// Function: entry_001b6cbc
// Address: 0x1b6cbc - 0x1b6cd8
void entry_001b6cbc_0x1b6cbc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b6cbc_0x1b6cbc");
#endif

    ctx->pc = 0x1b6cbcu;

    // 0x1b6cbc: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b6cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6cc0: 0x8c6313e8  lw          $v1, 0x13E8($v1)
    ctx->pc = 0x1b6cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 5096)));
    // 0x1b6cc4: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B6CC4u;
    {
        const bool branch_taken_0x1b6cc4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b6cc4) {
            ctx->pc = 0x1B6CD8u;
            return;
        }
    }
    ctx->pc = 0x1B6CCCu;
    // 0x1b6ccc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b6cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6cd0: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1B6CD0u;
    SET_GPR_U32(ctx, 31, 0x1B6CD8u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1B6CD0u, 0x1B6CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B6CD8u;
}
