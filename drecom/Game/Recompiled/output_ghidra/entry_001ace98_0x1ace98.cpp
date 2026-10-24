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

// Function: entry_001ace98
// Address: 0x1ace98 - 0x1aceb0
void entry_001ace98_0x1ace98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ace98_0x1ace98");
#endif

    ctx->pc = 0x1ace98u;

    // 0x1ace98: 0x2e2107d0  sltiu       $at, $s1, 0x7D0
    ctx->pc = 0x1ace98u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1ace9c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACE9Cu;
    {
        const bool branch_taken_0x1ace9c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ace9c) {
            ctx->pc = 0x1ACEB0u;
            return;
        }
    }
    ctx->pc = 0x1ACEA4u;
    // 0x1acea4: 0x24130002  addiu       $s3, $zero, 0x2
    ctx->pc = 0x1acea4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1acea8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1ACEA8u;
    {
        const bool branch_taken_0x1acea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acea8) {
            ctx->pc = 0x1ACED0u;
            return;
        }
    }
    ctx->pc = 0x1ACEB0u;
}
