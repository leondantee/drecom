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

// Function: entry_0011d140
// Address: 0x11d140 - 0x11d154
void entry_0011d140_0x11d140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011d140_0x11d140");
#endif

    ctx->pc = 0x11d140u;

    // 0x11d140: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x11d140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x11d144: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x11d144u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x11d148: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x11d148u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x11d14c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x11D14Cu;
    {
        const bool branch_taken_0x11d14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D14Cu;
        // 0x11d150: 0x452825  or          $a1, $v0, $a1 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d14c) {
            ctx->pc = 0x11D320u;
            return;
        }
    }
    ctx->pc = 0x11D154u;
}
