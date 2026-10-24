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

// Function: entry_0011b53c
// Address: 0x11b53c - 0x11b544
void entry_0011b53c_0x11b53c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b53c_0x11b53c");
#endif

    ctx->pc = 0x11b53cu;

    // 0x11b53c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11B53Cu;
    {
        const bool branch_taken_0x11b53c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B53Cu;
        // 0x11b540: 0x90440000  lbu         $a0, 0x0($v0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b53c) {
            ctx->pc = 0x11B54Cu;
            return;
        }
    }
    ctx->pc = 0x11B544u;
}
