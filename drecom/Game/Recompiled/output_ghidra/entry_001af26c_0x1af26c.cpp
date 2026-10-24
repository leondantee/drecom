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

// Function: entry_001af26c
// Address: 0x1af26c - 0x1af284
void entry_001af26c_0x1af26c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001af26c_0x1af26c");
#endif

    ctx->pc = 0x1af26cu;

    // 0x1af26c: 0x2ea107d0  sltiu       $at, $s5, 0x7D0
    ctx->pc = 0x1af26cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)2000) ? 1 : 0);
    // 0x1af270: 0x10200004  beqz        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x1AF270u;
    {
        const bool branch_taken_0x1af270 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af270) {
            ctx->pc = 0x1AF284u;
            return;
        }
    }
    ctx->pc = 0x1AF278u;
    // 0x1af278: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x1af278u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1af27c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1AF27Cu;
    {
        const bool branch_taken_0x1af27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1af27c) {
            ctx->pc = 0x1AF288u;
            return;
        }
    }
    ctx->pc = 0x1AF284u;
}
