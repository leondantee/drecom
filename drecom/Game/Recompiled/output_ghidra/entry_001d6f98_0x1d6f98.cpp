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

// Function: entry_001d6f98
// Address: 0x1d6f98 - 0x1d6fbc
void entry_001d6f98_0x1d6f98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d6f98_0x1d6f98");
#endif

    ctx->pc = 0x1d6f98u;

    // 0x1d6f98: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x1d6f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x1d6f9c: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x1d6f9cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1d6fa0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1d6fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d6fa4: 0x1083000e  beq         $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x1D6FA4u;
    {
        const bool branch_taken_0x1d6fa4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x1d6fa4) {
            ctx->pc = 0x1D6FE0u;
            return;
        }
    }
    ctx->pc = 0x1D6FACu;
    // 0x1d6fac: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D6FACu;
    {
        const bool branch_taken_0x1d6fac = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6fac) {
            ctx->pc = 0x1D6FBCu;
            return;
        }
    }
    ctx->pc = 0x1D6FB4u;
    // 0x1d6fb4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1D6FB4u;
    {
        const bool branch_taken_0x1d6fb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d6fb4) {
            ctx->pc = 0x1D7000u;
            return;
        }
    }
    ctx->pc = 0x1D6FBCu;
}
