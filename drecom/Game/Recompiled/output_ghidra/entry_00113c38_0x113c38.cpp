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

// Function: entry_00113c38
// Address: 0x113c38 - 0x113c44
void entry_00113c38_0x113c38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113c38_0x113c38");
#endif

    ctx->pc = 0x113c38u;

    // 0x113c38: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x113c38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x113c3c: 0x14c0fff6  bnez        $a2, . + 4 + (-0xA << 2)
    ctx->pc = 0x113C3Cu;
    {
        const bool branch_taken_0x113c3c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x113C40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C3Cu;
        // 0x113c40: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c3c) {
            ctx->pc = 0x113C18u;
            return;
        }
    }
    ctx->pc = 0x113C44u;
}
