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

// Function: entry_0011f670
// Address: 0x11f670 - 0x11f694
void entry_0011f670_0x11f670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011f670_0x11f670");
#endif

    ctx->pc = 0x11f670u;

label_11f670:
    // 0x11f670: 0xa1042  srl         $v0, $t2, 1
    ctx->pc = 0x11f670u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 10), 1));
    // 0x11f674: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x11f674u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x11f678: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x11f678u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x11f67c: 0x107202a  slt         $a0, $t0, $a3
    ctx->pc = 0x11f67cu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x11f680: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x11f680u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11f684: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F684u;
    {
        const bool branch_taken_0x11f684 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f684) {
            ctx->pc = 0x11F670u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f670;
        }
    }
    ctx->pc = 0x11F68Cu;
    // 0x11f68c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11F68Cu;
    {
        const bool branch_taken_0x11f68c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F690u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F68Cu;
        // 0x11f690: 0xe8102a  slt         $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f68c) {
            ctx->pc = 0x11F69Cu;
            return;
        }
    }
    ctx->pc = 0x11F694u;
}
