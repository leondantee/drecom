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

// Function: entry_00216dc4
// Address: 0x216dc4 - 0x216dd8
void entry_00216dc4_0x216dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216dc4_0x216dc4");
#endif

    ctx->pc = 0x216dc4u;

    // 0x216dc4: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x216DC4u;
    {
        const bool branch_taken_0x216dc4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x216DC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DC4u;
        // 0x216dc8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216dc4) {
            ctx->pc = 0x216DD8u;
            return;
        }
    }
    ctx->pc = 0x216DCCu;
    // 0x216dcc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x216dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x216dd0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x216DD0u;
    {
        const bool branch_taken_0x216dd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x216DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x216DD0u;
        // 0x216dd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x216dd0) {
            ctx->pc = 0x216DF0u;
            return;
        }
    }
    ctx->pc = 0x216DD8u;
}
