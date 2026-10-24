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

// Function: entry_0021469c
// Address: 0x21469c - 0x2146a4
void entry_0021469c_0x21469c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021469c_0x21469c");
#endif

    ctx->pc = 0x21469cu;

    // 0x21469c: 0x1000fffd  b           . + 4 + (-0x3 << 2)
    ctx->pc = 0x21469Cu;
    {
        const bool branch_taken_0x21469c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2146A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21469Cu;
        // 0x2146a0: 0x24070068  addiu       $a3, $zero, 0x68 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21469c) {
            ctx->pc = 0x214694u;
            return;
        }
    }
    ctx->pc = 0x2146A4u;
}
