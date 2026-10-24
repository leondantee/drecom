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

// Function: entry_00184dec
// Address: 0x184dec - 0x184e08
void entry_00184dec_0x184dec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184dec_0x184dec");
#endif

    ctx->pc = 0x184decu;

    // 0x184dec: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x184decu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x184df0: 0x8c24006c  lw          $a0, 0x6C($at)
    ctx->pc = 0x184df0u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D006Cu));
    // 0x184df4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x184df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x184df8: 0x10830003  beq         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x184DF8u;
    {
        const bool branch_taken_0x184df8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x184df8) {
            ctx->pc = 0x184E08u;
            return;
        }
    }
    ctx->pc = 0x184E00u;
    // 0x184e00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x184E00u;
    {
        const bool branch_taken_0x184e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x184e00) {
            ctx->pc = 0x184E14u;
            return;
        }
    }
    ctx->pc = 0x184E08u;
}
