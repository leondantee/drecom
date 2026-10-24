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

// Function: entry_00216c80
// Address: 0x216c80 - 0x216ca8
void entry_00216c80_0x216c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216c80_0x216c80");
#endif

    ctx->pc = 0x216c80u;

label_216c80:
    // 0x216c80: 0x2051021  addu        $v0, $s0, $a1
    ctx->pc = 0x216c80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 5)));
    // 0x216c84: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x216c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x216c88: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x216c88u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x216c8c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x216c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x216c90: 0xb1102a  slt         $v0, $a1, $s1
    ctx->pc = 0x216c90u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 17)) ? 1 : 0);
    // 0x216c94: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x216c94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x216c98: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x216C98u;
    {
        const bool branch_taken_0x216c98 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x216c98) {
            ctx->pc = 0x216C80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_216c80;
        }
    }
    ctx->pc = 0x216CA0u;
    // 0x216ca0: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x216CA0u;
    {
        const bool branch_taken_0x216ca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x216CA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216CA0u;
        // 0x216ca4: 0x2530c880  addiu       $s0, $t1, -0x3780 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 9), 4294953088));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216ca0) {
            ctx->pc = 0x216CB8u;
            return;
        }
    }
    ctx->pc = 0x216CA8u;
}
