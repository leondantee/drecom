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

// Function: entry_001aceb0
// Address: 0x1aceb0 - 0x1acec8
void entry_001aceb0_0x1aceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aceb0_0x1aceb0");
#endif

    ctx->pc = 0x1aceb0u;

    // 0x1aceb0: 0x2e210fa0  sltiu       $at, $s1, 0xFA0
    ctx->pc = 0x1aceb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)4000) ? 1 : 0);
    // 0x1aceb4: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1ACEB4u;
    {
        const bool branch_taken_0x1aceb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aceb4) {
            ctx->pc = 0x1ACEC8u;
            return;
        }
    }
    ctx->pc = 0x1ACEBCu;
    // 0x1acebc: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x1acebcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1acec0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1ACEC0u;
    {
        const bool branch_taken_0x1acec0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1acec0) {
            ctx->pc = 0x1ACED0u;
            return;
        }
    }
    ctx->pc = 0x1ACEC8u;
}
