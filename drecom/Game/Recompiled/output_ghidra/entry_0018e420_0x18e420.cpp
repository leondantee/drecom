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

// Function: entry_0018e420
// Address: 0x18e420 - 0x18e434
void entry_0018e420_0x18e420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e420_0x18e420");
#endif

    ctx->pc = 0x18e420u;

    // 0x18e420: 0x1600ffa6  bnez        $s0, . + 4 + (-0x5A << 2)
    ctx->pc = 0x18E420u;
    {
        const bool branch_taken_0x18e420 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x18e420) {
            ctx->pc = 0x18E2BCu;
            return;
        }
    }
    ctx->pc = 0x18E428u;
    // 0x18e428: 0x8eb30068  lw          $s3, 0x68($s5)
    ctx->pc = 0x18e428u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 104)));
    // 0x18e42c: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x18E42Cu;
    {
        const bool branch_taken_0x18e42c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18e42c) {
            ctx->pc = 0x18E528u;
            return;
        }
    }
    ctx->pc = 0x18E434u;
}
