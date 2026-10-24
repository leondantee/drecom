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

// Function: entry_0037ac60
// Address: 0x37ac60 - 0x37ac80
void entry_0037ac60_0x37ac60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037ac60_0x37ac60");
#endif

    ctx->pc = 0x37ac60u;

    // 0x37ac60: 0x8fc35dc8  lw          $v1, 0x5DC8($fp)
    ctx->pc = 0x37ac60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 24008)));
    // 0x37ac64: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x37ac64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x37ac68: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x37AC68u;
    {
        const bool branch_taken_0x37ac68 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x37ac68) {
            ctx->pc = 0x37AC80u;
            return;
        }
    }
    ctx->pc = 0x37AC70u;
    // 0x37ac70: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x37ac70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x37ac74: 0xafa300cc  sw          $v1, 0xCC($sp)
    ctx->pc = 0x37ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 3));
    // 0x37ac78: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x37AC78u;
    {
        const bool branch_taken_0x37ac78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37ac78) {
            ctx->pc = 0x37AC98u;
            return;
        }
    }
    ctx->pc = 0x37AC80u;
}
