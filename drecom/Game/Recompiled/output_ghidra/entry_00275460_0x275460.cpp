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

// Function: entry_00275460
// Address: 0x275460 - 0x275478
void entry_00275460_0x275460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00275460_0x275460");
#endif

    ctx->pc = 0x275460u;

    // 0x275460: 0x2a410002  slti        $at, $s2, 0x2
    ctx->pc = 0x275460u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x275464: 0x14200004  bnez        $at, . + 4 + (0x4 << 2)
    ctx->pc = 0x275464u;
    {
        const bool branch_taken_0x275464 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x275464) {
            ctx->pc = 0x275478u;
            return;
        }
    }
    ctx->pc = 0x27546Cu;
    // 0x27546c: 0xafa000d4  sw          $zero, 0xD4($sp)
    ctx->pc = 0x27546cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 0));
    // 0x275470: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x275470u;
    {
        const bool branch_taken_0x275470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275470) {
            ctx->pc = 0x275480u;
            return;
        }
    }
    ctx->pc = 0x275478u;
}
