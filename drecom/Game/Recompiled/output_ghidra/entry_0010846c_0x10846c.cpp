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

// Function: entry_0010846c
// Address: 0x10846c - 0x108474
void entry_0010846c_0x10846c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010846c_0x10846c");
#endif

    ctx->pc = 0x10846cu;

    // 0x10846c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x10846Cu;
    {
        const bool branch_taken_0x10846c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x108470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10846Cu;
        // 0x108470: 0x24190001  addiu       $t9, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 25, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10846c) {
            ctx->pc = 0x108498u;
            return;
        }
    }
    ctx->pc = 0x108474u;
}
