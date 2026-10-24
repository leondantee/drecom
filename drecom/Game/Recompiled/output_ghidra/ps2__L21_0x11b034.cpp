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

// Function: $L21
// Address: 0x11b034 - 0x11b040
void ps2__L21_0x11b034(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L21_0x11b034");
#endif

    ctx->pc = 0x11b034u;

    // 0x11b034: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x11b034u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11b038: 0x1062fff7  beq         $v1, $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11B038u;
    {
        const bool branch_taken_0x11b038 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x11B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B038u;
        // 0x11b03c: 0x90870000  lbu         $a3, 0x0($a0) (Delay Slot)
        SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b038) {
            ctx->pc = 0x11B018u;
            return;
        }
    }
    ctx->pc = 0x11B040u;
}
