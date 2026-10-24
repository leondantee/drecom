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

// Function: caseD_7
// Address: 0x14300c - 0x143020
void caseD_7_0x14300c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_7_0x14300c");
#endif

    ctx->pc = 0x14300cu;

    // 0x14300c: 0x2e610080  sltiu       $at, $s3, 0x80
    ctx->pc = 0x14300cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x143010: 0x10200003  beqz        $at, . + 4 + (0x3 << 2)
    ctx->pc = 0x143010u;
    {
        const bool branch_taken_0x143010 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x143010) {
            ctx->pc = 0x143020u;
            return;
        }
    }
    ctx->pc = 0x143018u;
    // 0x143018: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x143018u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x14301c: 0x0  nop
    ctx->pc = 0x14301cu;
    // NOP
    ctx->pc = 0x143020u;
}
