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

// Function: entry_0016f94c
// Address: 0x16f94c - 0x16f968
void entry_0016f94c_0x16f94c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016f94c_0x16f94c");
#endif

    ctx->pc = 0x16f94cu;

    // 0x16f94c: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x16f94cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f950: 0x8c63008c  lw          $v1, 0x8C($v1)
    ctx->pc = 0x16f950u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 140)));
    // 0x16f954: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x16F954u;
    {
        const bool branch_taken_0x16f954 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x16f954) {
            ctx->pc = 0x16F968u;
            return;
        }
    }
    ctx->pc = 0x16F95Cu;
    // 0x16f95c: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x16f95cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x16f960: 0xc06bf40  jal         func_1AFD00
    ctx->pc = 0x16F960u;
    SET_GPR_U32(ctx, 31, 0x16F968u);
    ctx->pc = 0x1AFD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AFD00u, 0x16F960u, 0x16F968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16F968u;
}
