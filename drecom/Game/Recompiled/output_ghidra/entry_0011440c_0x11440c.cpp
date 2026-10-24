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

// Function: entry_0011440c
// Address: 0x11440c - 0x114414
void entry_0011440c_0x11440c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011440c_0x11440c");
#endif

    ctx->pc = 0x11440cu;

    // 0x11440c: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x11440Cu;
    {
        const bool branch_taken_0x11440c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x114410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11440Cu;
        // 0x114410: 0x46006006  mov.s       $f0, $f12 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[12]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11440c) {
            ctx->pc = 0x1145F8u;
            return;
        }
    }
    ctx->pc = 0x114414u;
}
