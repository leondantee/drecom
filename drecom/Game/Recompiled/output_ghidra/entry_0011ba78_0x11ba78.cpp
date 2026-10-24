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

// Function: entry_0011ba78
// Address: 0x11ba78 - 0x11ba80
void entry_0011ba78_0x11ba78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011ba78_0x11ba78");
#endif

    ctx->pc = 0x11ba78u;

    // 0x11ba78: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x11BA78u;
    {
        const bool branch_taken_0x11ba78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11BA7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11BA78u;
        // 0x11ba7c: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ba78) {
            ctx->pc = 0x11BAD8u;
            return;
        }
    }
    ctx->pc = 0x11BA80u;
}
