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

// Function: entry_0011306c
// Address: 0x11306c - 0x113074
void entry_0011306c_0x11306c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011306c_0x11306c");
#endif

    ctx->pc = 0x11306cu;

    // 0x11306c: 0x1000fefc  b           . + 4 + (-0x104 << 2)
    ctx->pc = 0x11306Cu;
    {
        const bool branch_taken_0x11306c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113070u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11306Cu;
        // 0x113070: 0x8fb70250  lw          $s7, 0x250($sp) (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11306c) {
            ctx->pc = 0x112C60u;
            return;
        }
    }
    ctx->pc = 0x113074u;
}
