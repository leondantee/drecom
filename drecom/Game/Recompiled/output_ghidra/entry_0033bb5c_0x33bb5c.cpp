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

// Function: entry_0033bb5c
// Address: 0x33bb5c - 0x33bb70
void entry_0033bb5c_0x33bb5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033bb5c_0x33bb5c");
#endif

    ctx->pc = 0x33bb5cu;

    // 0x33bb5c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x33bb5cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x33bb60: 0x2e210020  sltiu       $at, $s1, 0x20
    ctx->pc = 0x33bb60u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)32) ? 1 : 0);
    // 0x33bb64: 0x102001c1  beqz        $at, . + 4 + (0x1C1 << 2)
    ctx->pc = 0x33BB64u;
    {
        const bool branch_taken_0x33bb64 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x33bb64) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33BB6Cu;
    // 0x33bb6c: 0x0  nop
    ctx->pc = 0x33bb6cu;
    // NOP
    ctx->pc = 0x33bb70u;
}
