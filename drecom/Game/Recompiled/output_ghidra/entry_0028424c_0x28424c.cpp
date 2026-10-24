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

// Function: entry_0028424c
// Address: 0x28424c - 0x284260
void entry_0028424c_0x28424c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028424c_0x28424c");
#endif

    ctx->pc = 0x28424cu;

    // 0x28424c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x28424cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x284250: 0x2463dbc0  addiu       $v1, $v1, -0x2440
    ctx->pc = 0x284250u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958016));
    // 0x284254: 0xae031334  sw          $v1, 0x1334($s0)
    ctx->pc = 0x284254u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 3));
    // 0x284258: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x284258u;
    {
        const bool branch_taken_0x284258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284258) {
            ctx->pc = 0x284458u;
            return;
        }
    }
    ctx->pc = 0x284260u;
}
