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

// Function: entry_0011e9a0
// Address: 0x11e9a0 - 0x11e9c4
void entry_0011e9a0_0x11e9a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e9a0_0x11e9a0");
#endif

    ctx->pc = 0x11e9a0u;

label_11e9a0:
    // 0x11e9a0: 0xa107a  dsrl        $v0, $t2, 1
    ctx->pc = 0x11e9a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) >> 1);
    // 0x11e9a4: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x11e9a4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x11e9a8: 0x31430001  andi        $v1, $t2, 0x1
    ctx->pc = 0x11e9a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)1);
    // 0x11e9ac: 0x127202a  slt         $a0, $t1, $a3
    ctx->pc = 0x11e9acu;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 7)) ? 1 : 0);
    // 0x11e9b0: 0x625025  or          $t2, $v1, $v0
    ctx->pc = 0x11e9b0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x11e9b4: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11E9B4u;
    {
        const bool branch_taken_0x11e9b4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x11e9b4) {
            ctx->pc = 0x11E9A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11e9a0;
        }
    }
    ctx->pc = 0x11E9BCu;
    // 0x11e9bc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11E9BCu;
    {
        const bool branch_taken_0x11e9bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11E9C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11E9BCu;
        // 0x11e9c0: 0xe9102a  slt         $v0, $a3, $t1 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)GPR_S64(ctx, 9)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11e9bc) {
            ctx->pc = 0x11E9CCu;
            return;
        }
    }
    ctx->pc = 0x11E9C4u;
}
