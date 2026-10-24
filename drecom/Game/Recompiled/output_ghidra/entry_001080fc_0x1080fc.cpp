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

// Function: entry_001080fc
// Address: 0x1080fc - 0x108108
void entry_001080fc_0x1080fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001080fc_0x1080fc");
#endif

    ctx->pc = 0x1080fcu;

    // 0x1080fc: 0x8c433e30  lw          $v1, 0x3E30($v0)
    ctx->pc = 0x1080fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 15920)));
    // 0x108100: 0x1060004e  beqz        $v1, . + 4 + (0x4E << 2)
    ctx->pc = 0x108100u;
    {
        const bool branch_taken_0x108100 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x108104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x108100u;
        // 0x108104: 0x8e433dac  lw          $v1, 0x3DAC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 15788)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x108100) {
            ctx->pc = 0x10823Cu;
            return;
        }
    }
    ctx->pc = 0x108108u;
}
