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

// Function: entry_0010fb20
// Address: 0x10fb20 - 0x10fb34
void entry_0010fb20_0x10fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fb20_0x10fb20");
#endif

    ctx->pc = 0x10fb20u;

    // 0x10fb20: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FB20u;
    {
        const bool branch_taken_0x10fb20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB20u;
        // 0x10fb24: 0x1332c0  sll         $a2, $s3, 11 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb20) {
            ctx->pc = 0x10FB34u;
            return;
        }
    }
    ctx->pc = 0x10FB28u;
    // 0x10fb28: 0x12200018  beqz        $s1, . + 4 + (0x18 << 2)
    ctx->pc = 0x10FB28u;
    {
        const bool branch_taken_0x10fb28 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10FB2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB28u;
        // 0x10fb2c: 0x8ee245a8  lw          $v0, 0x45A8($s7) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 17832)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb28) {
            ctx->pc = 0x10FB8Cu;
            return;
        }
    }
    ctx->pc = 0x10FB30u;
    // 0x10fb30: 0x1332c0  sll         $a2, $s3, 11
    ctx->pc = 0x10fb30u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 19), 11));
    ctx->pc = 0x10fb34u;
}
