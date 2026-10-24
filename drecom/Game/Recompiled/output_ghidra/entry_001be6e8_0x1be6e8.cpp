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

// Function: entry_001be6e8
// Address: 0x1be6e8 - 0x1be704
void entry_001be6e8_0x1be6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be6e8_0x1be6e8");
#endif

    ctx->pc = 0x1be6e8u;

    // 0x1be6e8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x1be6e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6ec: 0x8ca313e8  lw          $v1, 0x13E8($a1)
    ctx->pc = 0x1be6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 5096)));
    // 0x1be6f0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1BE6F0u;
    {
        const bool branch_taken_0x1be6f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1be6f0) {
            ctx->pc = 0x1BE704u;
            return;
        }
    }
    ctx->pc = 0x1BE6F8u;
    // 0x1be6f8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be6fc: 0xc0571d0  jal         func_15C740
    ctx->pc = 0x1BE6FCu;
    SET_GPR_U32(ctx, 31, 0x1BE704u);
    ctx->pc = 0x15C740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15C740u, 0x1BE6FCu, 0x1BE704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1BE704u;
}
