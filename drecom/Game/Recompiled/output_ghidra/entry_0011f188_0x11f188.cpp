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

// Function: entry_0011f188
// Address: 0x11f188 - 0x11f190
void entry_0011f188_0x11f188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f188_0x11f188");
#endif

    ctx->pc = 0x11f188u;

    // 0x11f188: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11F188u;
    {
        const bool branch_taken_0x11f188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F188u;
        // 0x11f18c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f188) {
            ctx->pc = 0x11F194u;
            return;
        }
    }
    ctx->pc = 0x11F190u;
}
