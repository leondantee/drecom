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

// Function: entry_0011cc78
// Address: 0x11cc78 - 0x11cc84
void entry_0011cc78_0x11cc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011cc78_0x11cc78");
#endif

    ctx->pc = 0x11cc78u;

    // 0x11cc78: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11CC78u;
    {
        const bool branch_taken_0x11cc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC78u;
        // 0x11cc7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc78) {
            ctx->pc = 0x11CC84u;
            return;
        }
    }
    ctx->pc = 0x11CC80u;
    // 0x11cc80: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x11cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->pc = 0x11cc84u;
}
