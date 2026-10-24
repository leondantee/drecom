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

// Function: entry_001d981c
// Address: 0x1d981c - 0x1d9838
void entry_001d981c_0x1d981c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d981c_0x1d981c");
#endif

    ctx->pc = 0x1d981cu;

    // 0x1d981c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d981cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d9820: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9820u;
    {
        const bool branch_taken_0x1d9820 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d9820) {
            ctx->pc = 0x1D9838u;
            return;
        }
    }
    ctx->pc = 0x1D9828u;
    // 0x1d9828: 0x8e031a14  lw          $v1, 0x1A14($s0)
    ctx->pc = 0x1d9828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 6676)));
    // 0x1d982c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x1d982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x1d9830: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1d9830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1d9834: 0xae220000  sw          $v0, 0x0($s1)
    ctx->pc = 0x1d9834u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
    ctx->pc = 0x1d9838u;
}
