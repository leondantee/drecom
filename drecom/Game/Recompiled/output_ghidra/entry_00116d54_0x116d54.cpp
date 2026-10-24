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

// Function: entry_00116d54
// Address: 0x116d54 - 0x116d60
void entry_00116d54_0x116d54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116d54_0x116d54");
#endif

    ctx->pc = 0x116d54u;

    // 0x116d54: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x116D54u;
    {
        const bool branch_taken_0x116d54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116D54u;
        // 0x116d58: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116d54) {
            ctx->pc = 0x116D7Cu;
            return;
        }
    }
    ctx->pc = 0x116D5Cu;
    // 0x116d5c: 0x0  nop
    ctx->pc = 0x116d5cu;
    // NOP
    ctx->pc = 0x116d60u;
}
