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

// Function: entry_0010fb84
// Address: 0x10fb84 - 0x10fb8c
void entry_0010fb84_0x10fb84(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fb84_0x10fb84");
#endif

    ctx->pc = 0x10fb84u;

    // 0x10fb84: 0x1672ffe6  bne         $s3, $s2, . + 4 + (-0x1A << 2)
    ctx->pc = 0x10FB84u;
    {
        const bool branch_taken_0x10fb84 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 18));
        ctx->pc = 0x10FB88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB84u;
        // 0x10fb88: 0x8ee245a8  lw          $v0, 0x45A8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 17832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb84) {
            ctx->pc = 0x10FB20u;
            return;
        }
    }
    ctx->pc = 0x10FB8Cu;
}
