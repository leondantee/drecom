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

// Function: entry_00277378
// Address: 0x277378 - 0x277390
void entry_00277378_0x277378(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00277378_0x277378");
#endif

    ctx->pc = 0x277378u;

    // 0x277378: 0x2a2100a0  slti        $at, $s1, 0xA0
    ctx->pc = 0x277378u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)160) ? 1 : 0);
    // 0x27737c: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x27737Cu;
    {
        const bool branch_taken_0x27737c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x27737c) {
            ctx->pc = 0x277390u;
            return;
        }
    }
    ctx->pc = 0x277384u;
    // 0x277384: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x277384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x277388: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x277388u;
    {
        const bool branch_taken_0x277388 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277388) {
            ctx->pc = 0x277394u;
            return;
        }
    }
    ctx->pc = 0x277390u;
}
