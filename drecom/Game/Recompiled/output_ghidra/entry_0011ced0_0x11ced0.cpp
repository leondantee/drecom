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

// Function: entry_0011ced0
// Address: 0x11ced0 - 0x11cee4
void entry_0011ced0_0x11ced0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ced0_0x11ced0");
#endif

    ctx->pc = 0x11ced0u;

    // 0x11ced0: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x11ced0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11ced4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11ced4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11ced8: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11ced8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11cedc: 0x1000010e  b           . + 4 + (0x10E << 2)
    ctx->pc = 0x11CEDCu;
    {
        const bool branch_taken_0x11cedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CEDCu;
        // 0x11cee0: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cedc) {
            ctx->pc = 0x11D318u;
            return;
        }
    }
    ctx->pc = 0x11CEE4u;
}
