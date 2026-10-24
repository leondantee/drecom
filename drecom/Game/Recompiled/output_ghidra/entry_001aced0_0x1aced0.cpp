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

// Function: entry_001aced0
// Address: 0x1aced0 - 0x1acee8
void entry_001aced0_0x1aced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aced0_0x1aced0");
#endif

    ctx->pc = 0x1aced0u;

    // 0x1aced0: 0x2e211801  sltiu       $at, $s1, 0x1801
    ctx->pc = 0x1aced0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)6145) ? 1 : 0);
    // 0x1aced4: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACED4u;
    {
        const bool branch_taken_0x1aced4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x1aced4) {
            ctx->pc = 0x1ACEE8u;
            return;
        }
    }
    ctx->pc = 0x1ACEDCu;
    // 0x1acedc: 0x24171800  addiu       $s7, $zero, 0x1800
    ctx->pc = 0x1acedcu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 6144));
    // 0x1acee0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACEE0u;
    {
        const bool branch_taken_0x1acee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acee0) {
            ctx->pc = 0x1ACEF0u;
            return;
        }
    }
    ctx->pc = 0x1ACEE8u;
}
