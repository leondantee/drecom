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

// Function: entry_0035880c
// Address: 0x35880c - 0x358824
void entry_0035880c_0x35880c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035880c_0x35880c");
#endif

    ctx->pc = 0x35880cu;

    // 0x35880c: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x35880cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x358810: 0x8c850014  lw          $a1, 0x14($a0)
    ctx->pc = 0x358810u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x358814: 0x24a60001  addiu       $a2, $a1, 0x1
    ctx->pc = 0x358814u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x358818: 0xac860014  sw          $a2, 0x14($a0)
    ctx->pc = 0x358818u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 6));
    // 0x35881c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x35881Cu;
    {
        const bool branch_taken_0x35881c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x35881c) {
            ctx->pc = 0x358858u;
            return;
        }
    }
    ctx->pc = 0x358824u;
}
