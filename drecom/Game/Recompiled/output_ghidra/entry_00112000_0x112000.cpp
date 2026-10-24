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

// Function: entry_00112000
// Address: 0x112000 - 0x11200c
void entry_00112000_0x112000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00112000_0x112000");
#endif

    ctx->pc = 0x112000u;

    // 0x112000: 0x1e200002  bgtz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x112000u;
    {
        const bool branch_taken_0x112000 = (GPR_S32(ctx, 17) > 0);
        ctx->pc = 0x112004u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x112000u;
        // 0x112004: 0x4600a006  mov.s       $f0, $f20 (Delay Slot)
        ctx->f[0] = FPU_MOV_S(ctx->f[20]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x112000) {
            ctx->pc = 0x11200Cu;
            return;
        }
    }
    ctx->pc = 0x112008u;
    // 0x112008: 0x4600a007  neg.s       $f0, $f20
    ctx->pc = 0x112008u;
    ctx->f[0] = FPU_NEG_S(ctx->f[20]);
    ctx->pc = 0x11200cu;
}
