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

// Function: entry_001acc70
// Address: 0x1acc70 - 0x1acc80
void entry_001acc70_0x1acc70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001acc70_0x1acc70");
#endif

    ctx->pc = 0x1acc70u;

    // 0x1acc70: 0x2e0307d0  sltiu       $v1, $s0, 0x7D0
    ctx->pc = 0x1acc70u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1acc74: 0x1460ff4e  bnez        $v1, . + 4 + (-0xB2 << 2)
    ctx->pc = 0x1ACC74u;
    {
        const bool branch_taken_0x1acc74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1acc74) {
            ctx->pc = 0x1AC9B0u;
            return;
        }
    }
    ctx->pc = 0x1ACC7Cu;
    // 0x1acc7c: 0x0  nop
    ctx->pc = 0x1acc7cu;
    // NOP
    ctx->pc = 0x1acc80u;
}
