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

// Function: entry_0011b704
// Address: 0x11b704 - 0x11b70c
void entry_0011b704_0x11b704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b704_0x11b704");
#endif

    ctx->pc = 0x11b704u;

    // 0x11b704: 0x1000ff91  b           . + 4 + (-0x6F << 2)
    ctx->pc = 0x11B704u;
    {
        const bool branch_taken_0x11b704 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B704u;
        // 0x11b708: 0x37de0010  ori         $fp, $fp, 0x10 (Delay Slot)
        SET_GPR_U64(ctx, 30, GPR_U64(ctx, 30) | (uint64_t)(uint16_t)16);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b704) {
            ctx->pc = 0x11B54Cu;
            return;
        }
    }
    ctx->pc = 0x11B70Cu;
}
