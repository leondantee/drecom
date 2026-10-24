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

// Function: $L22
// Address: 0x11b004 - 0x11b018
void ps2__L22_0x11b004(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L22_0x11b004");
#endif

    ctx->pc = 0x11b004u;

    // 0x11b004: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x11B004u;
    {
        const bool branch_taken_0x11b004 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B004u;
        // 0x11b008: 0x24c6ffff  addiu       $a2, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b004) {
            ctx->pc = 0x11B040u;
            return;
        }
    }
    ctx->pc = 0x11B00Cu;
    // 0x11b00c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x11B00Cu;
    {
        const bool branch_taken_0x11b00c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B00Cu;
        // 0x11b010: 0x80830000  lb          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b00c) {
            ctx->pc = 0x11B034u;
            return;
        }
    }
    ctx->pc = 0x11B014u;
    // 0x11b014: 0x0  nop
    ctx->pc = 0x11b014u;
    // NOP
    ctx->pc = 0x11b018u;
}
