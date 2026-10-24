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

// Function: entry_0011bc3c
// Address: 0x11bc3c - 0x11bc44
void entry_0011bc3c_0x11bc3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bc3c_0x11bc3c");
#endif

    ctx->pc = 0x11bc3cu;

    // 0x11bc3c: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11BC3Cu;
    {
        const bool branch_taken_0x11bc3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BC40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BC3Cu;
        // 0x11bc40: 0x2a2a823  subu        $s5, $s5, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11bc3c) {
            ctx->pc = 0x11BC60u;
            return;
        }
    }
    ctx->pc = 0x11BC44u;
}
