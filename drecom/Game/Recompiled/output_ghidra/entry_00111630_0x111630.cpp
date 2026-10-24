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

// Function: entry_00111630
// Address: 0x111630 - 0x111640
void entry_00111630_0x111630(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00111630_0x111630");
#endif

    ctx->pc = 0x111630u;

    // 0x111630: 0xc21024  and         $v0, $a2, $v0
    ctx->pc = 0x111630u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x111634: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x111634u;
    {
        const bool branch_taken_0x111634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x111638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x111634u;
        // 0x111638: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x111634) {
            ctx->pc = 0x111664u;
            return;
        }
    }
    ctx->pc = 0x11163Cu;
    // 0x11163c: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x11163cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    ctx->pc = 0x111640u;
}
