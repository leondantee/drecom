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

// Function: entry_0011dd40
// Address: 0x11dd40 - 0x11dd54
void entry_0011dd40_0x11dd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011dd40_0x11dd40");
#endif

    ctx->pc = 0x11dd40u;

    // 0x11dd40: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x11dd40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11dd44: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11dd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11dd48: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11dd48u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11dd4c: 0x10000110  b           . + 4 + (0x110 << 2)
    ctx->pc = 0x11DD4Cu;
    {
        const bool branch_taken_0x11dd4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11DD50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11DD4Cu;
        // 0x11dd50: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11dd4c) {
            ctx->pc = 0x11E190u;
            return;
        }
    }
    ctx->pc = 0x11DD54u;
}
