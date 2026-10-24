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

// Function: entry_0011b910
// Address: 0x11b910 - 0x11b924
void entry_0011b910_0x11b910(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b910_0x11b910");
#endif

    ctx->pc = 0x11b910u;

    // 0x11b910: 0xa3102a  slt         $v0, $a1, $v1
    ctx->pc = 0x11b910u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11b914: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11B914u;
    {
        const bool branch_taken_0x11b914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11B918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B914u;
        // 0x11b918: 0x33c20001  andi        $v0, $fp, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 30) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b914) {
            ctx->pc = 0x11B924u;
            return;
        }
    }
    ctx->pc = 0x11B91Cu;
    // 0x11b91c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11B91Cu;
    {
        const bool branch_taken_0x11b91c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11B920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11B91Cu;
        // 0x11b920: 0xa2a821  addu        $s5, $a1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11b91c) {
            ctx->pc = 0x11B934u;
            return;
        }
    }
    ctx->pc = 0x11B924u;
}
