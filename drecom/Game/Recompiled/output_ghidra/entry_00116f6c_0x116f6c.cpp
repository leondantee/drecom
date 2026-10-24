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

// Function: entry_00116f6c
// Address: 0x116f6c - 0x116f74
void entry_00116f6c_0x116f6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116f6c_0x116f6c");
#endif

    ctx->pc = 0x116f6cu;

    // 0x116f6c: 0x5620fff2  bnel        $s1, $zero, . + 4 + (-0xE << 2)
    ctx->pc = 0x116F6Cu;
    {
        const bool branch_taken_0x116f6c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x116f6c) {
            ctx->pc = 0x116F70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116F6Cu;
            // 0x116f70: 0x8e300004  lw          $s0, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116F38u;
            return;
        }
    }
    ctx->pc = 0x116F74u;
}
