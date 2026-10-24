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

// Function: entry_00116ad8
// Address: 0x116ad8 - 0x116ae8
void entry_00116ad8_0x116ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116ad8_0x116ad8");
#endif

    ctx->pc = 0x116ad8u;

    // 0x116ad8: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x116ad8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x116adc: 0x49827  nor         $s3, $zero, $a0
    ctx->pc = 0x116adcu;
    SET_GPR_U64(ctx, 19, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 4)));
    // 0x116ae0: 0x100000db  b           . + 4 + (0xDB << 2)
    ctx->pc = 0x116AE0u;
    {
        const bool branch_taken_0x116ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116AE0u;
        // 0x116ae4: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116ae0) {
            ctx->pc = 0x116E50u;
            return;
        }
    }
    ctx->pc = 0x116AE8u;
}
