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

// Function: entry_0011fd90
// Address: 0x11fd90 - 0x11fd98
void entry_0011fd90_0x11fd90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fd90_0x11fd90");
#endif

    ctx->pc = 0x11fd90u;

    // 0x11fd90: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11FD90u;
    {
        const bool branch_taken_0x11fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FD90u;
        // 0x11fd94: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fd90) {
            ctx->pc = 0x11FD9Cu;
            return;
        }
    }
    ctx->pc = 0x11FD98u;
}
