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

// Function: entry_001b2848
// Address: 0x1b2848 - 0x1b2858
void entry_001b2848_0x1b2848(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2848_0x1b2848");
#endif

    ctx->pc = 0x1b2848u;

    // 0x1b2848: 0x2aa20005  slti        $v0, $s5, 0x5
    ctx->pc = 0x1b2848u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 21) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x1b284c: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x1B284Cu;
    {
        const bool branch_taken_0x1b284c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b284c) {
            ctx->pc = 0x1B27ECu;
            return;
        }
    }
    ctx->pc = 0x1B2854u;
    // 0x1b2854: 0x0  nop
    ctx->pc = 0x1b2854u;
    // NOP
    ctx->pc = 0x1b2858u;
}
