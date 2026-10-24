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

// Function: entry_00113c18
// Address: 0x113c18 - 0x113c30
void entry_00113c18_0x113c18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113c18_0x113c18");
#endif

    ctx->pc = 0x113c18u;

    // 0x113c18: 0x14e00005  bnez        $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x113C18u;
    {
        const bool branch_taken_0x113c18 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x113C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C18u;
        // 0x113c1c: 0x8c650000  lw          $a1, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c18) {
            ctx->pc = 0x113C30u;
            return;
        }
    }
    ctx->pc = 0x113C20u;
    // 0x113c20: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x113C20u;
    {
        const bool branch_taken_0x113c20 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C20u;
        // 0x113c24: 0x1051023  subu        $v0, $t0, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c20) {
            ctx->pc = 0x113C38u;
            return;
        }
    }
    ctx->pc = 0x113C28u;
    // 0x113c28: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x113C28u;
    {
        const bool branch_taken_0x113c28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113C2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113C28u;
        // 0x113c2c: 0x24070001  addiu       $a3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113c28) {
            ctx->pc = 0x113C34u;
            return;
        }
    }
    ctx->pc = 0x113C30u;
}
