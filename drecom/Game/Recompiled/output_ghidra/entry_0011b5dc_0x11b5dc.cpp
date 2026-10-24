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

// Function: entry_0011b5dc
// Address: 0x11b5dc - 0x11b5e8
void entry_0011b5dc_0x11b5dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b5dc_0x11b5dc");
#endif

    ctx->pc = 0x11b5dcu;

    // 0x11b5dc: 0x90a40000  lbu         $a0, 0x0($a1)
    ctx->pc = 0x11b5dcu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11b5e0: 0x1000ffda  b           . + 4 + (-0x26 << 2)
    ctx->pc = 0x11B5E0u;
    {
        const bool branch_taken_0x11b5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B5E0u;
        // 0x11b5e4: 0xa3a201d1  sb          $v0, 0x1D1($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 465), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b5e0) {
            ctx->pc = 0x11B54Cu;
            return;
        }
    }
    ctx->pc = 0x11B5E8u;
}
