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

// Function: entry_001009e0
// Address: 0x1009e0 - 0x1009fc
void entry_001009e0_0x1009e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001009e0_0x1009e0");
#endif

    ctx->pc = 0x1009e0u;

label_1009e0:
    // 0x1009e0: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1009e0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1009e4: 0x14400047  bnez        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1009E4u;
    {
        const bool branch_taken_0x1009e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1009E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009E4u;
        // 0x1009e8: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009e4) {
            ctx->pc = 0x100B04u;
            return;
        }
    }
    ctx->pc = 0x1009ECu;
    // 0x1009ec: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x1009ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1009f0: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1009f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1009f4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1009F4u;
    {
        const bool branch_taken_0x1009f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1009F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1009F4u;
        // 0x1009f8: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1009f4) {
            ctx->pc = 0x1009E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1009e0;
        }
    }
    ctx->pc = 0x1009FCu;
}
