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

// Function: entry_0011e3e0
// Address: 0x11e3e0 - 0x11e3ec
void entry_0011e3e0_0x11e3e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e3e0_0x11e3e0");
#endif

    ctx->pc = 0x11e3e0u;

    // 0x11e3e0: 0xc2402  srl         $a0, $t4, 16
    ctx->pc = 0x11e3e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 12), 16));
    // 0x11e3e4: 0x50a00001  beql        $a1, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x11E3E4u;
    {
        const bool branch_taken_0x11e3e4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x11e3e4) {
            ctx->pc = 0x11E3E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11E3E4u;
            // 0x11e3e8: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11E3ECu;
            return;
        }
    }
    ctx->pc = 0x11E3ECu;
}
