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

// Function: entry_0020a8b0
// Address: 0x20a8b0 - 0x20a8c0
void entry_0020a8b0_0x20a8b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020a8b0_0x20a8b0");
#endif

    ctx->pc = 0x20a8b0u;

    // 0x20a8b0: 0x2a050004  slti        $a1, $s0, 0x4
    ctx->pc = 0x20a8b0u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x20a8b4: 0x14a0ff8a  bnez        $a1, . + 4 + (-0x76 << 2)
    ctx->pc = 0x20A8B4u;
    {
        const bool branch_taken_0x20a8b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x20a8b4) {
            ctx->pc = 0x20A6E0u;
            return;
        }
    }
    ctx->pc = 0x20A8BCu;
    // 0x20a8bc: 0x0  nop
    ctx->pc = 0x20a8bcu;
    // NOP
    ctx->pc = 0x20a8c0u;
}
