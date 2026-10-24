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

// Function: entry_00119828
// Address: 0x119828 - 0x119838
void entry_00119828_0x119828(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00119828_0x119828");
#endif

    ctx->pc = 0x119828u;

    // 0x119828: 0x8ce20000  lw          $v0, 0x0($a3)
    ctx->pc = 0x119828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x11982c: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x11982Cu;
    {
        const bool branch_taken_0x11982c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11982c) {
            ctx->pc = 0x119830u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11982Cu;
            // 0x119830: 0xad6c0010  sw          $t4, 0x10($t3) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 11), 16), GPR_U32(ctx, 12));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119858u;
            return;
        }
    }
    ctx->pc = 0x119834u;
    // 0x119834: 0x0  nop
    ctx->pc = 0x119834u;
    // NOP
    ctx->pc = 0x119838u;
}
