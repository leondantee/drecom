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

// Function: entry_0011fb20
// Address: 0x11fb20 - 0x11fb38
void entry_0011fb20_0x11fb20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fb20_0x11fb20");
#endif

    ctx->pc = 0x11fb20u;

    // 0x11fb20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FB20u;
    {
        const bool branch_taken_0x11fb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB20u;
        // 0x11fb24: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb20) {
            ctx->pc = 0x11FB38u;
            return;
        }
    }
    ctx->pc = 0x11FB28u;
    // 0x11fb28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11fb2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11fb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb30: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x11FB30u;
    {
        const bool branch_taken_0x11fb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB30u;
        // 0x11fb34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb30) {
            ctx->pc = 0x11FBC0u;
            return;
        }
    }
    ctx->pc = 0x11FB38u;
}
