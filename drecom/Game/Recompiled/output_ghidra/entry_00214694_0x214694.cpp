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

// Function: entry_00214694
// Address: 0x214694 - 0x21469c
void entry_00214694_0x214694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214694_0x214694");
#endif

    ctx->pc = 0x214694u;

    // 0x214694: 0x1000ffcf  b           . + 4 + (-0x31 << 2)
    ctx->pc = 0x214694u;
    {
        const bool branch_taken_0x214694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214694u;
        // 0x214698: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214694) {
            ctx->pc = 0x2145D4u;
            return;
        }
    }
    ctx->pc = 0x21469Cu;
}
