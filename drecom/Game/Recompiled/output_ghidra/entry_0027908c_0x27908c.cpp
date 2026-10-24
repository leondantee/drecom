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

// Function: entry_0027908c
// Address: 0x27908c - 0x2790a4
void entry_0027908c_0x27908c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027908c_0x27908c");
#endif

    ctx->pc = 0x27908cu;

    // 0x27908c: 0x2e6100a0  sltiu       $at, $s3, 0xA0
    ctx->pc = 0x27908cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)160) ? 1 : 0);
    // 0x279090: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x279090u;
    {
        const bool branch_taken_0x279090 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x279090) {
            ctx->pc = 0x2790A4u;
            return;
        }
    }
    ctx->pc = 0x279098u;
    // 0x279098: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x279098u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27909c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x27909Cu;
    {
        const bool branch_taken_0x27909c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27909c) {
            ctx->pc = 0x2790A8u;
            return;
        }
    }
    ctx->pc = 0x2790A4u;
}
