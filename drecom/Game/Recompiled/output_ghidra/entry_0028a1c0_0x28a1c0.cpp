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

// Function: entry_0028a1c0
// Address: 0x28a1c0 - 0x28a1d0
void entry_0028a1c0_0x28a1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028a1c0_0x28a1c0");
#endif

    ctx->pc = 0x28a1c0u;

    // 0x28a1c0: 0x2ae60004  slti        $a2, $s7, 0x4
    ctx->pc = 0x28a1c0u;
    SET_GPR_U64(ctx, 6, ((int64_t)GPR_S64(ctx, 23) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x28a1c4: 0x14c0ffe8  bnez        $a2, . + 4 + (-0x18 << 2)
    ctx->pc = 0x28A1C4u;
    {
        const bool branch_taken_0x28a1c4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x28a1c4) {
            ctx->pc = 0x28A168u;
            return;
        }
    }
    ctx->pc = 0x28A1CCu;
    // 0x28a1cc: 0x0  nop
    ctx->pc = 0x28a1ccu;
    // NOP
    ctx->pc = 0x28a1d0u;
}
