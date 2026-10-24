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

// Function: entry_00105d9c
// Address: 0x105d9c - 0x105dc0
void entry_00105d9c_0x105d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105d9c_0x105d9c");
#endif

    ctx->pc = 0x105d9cu;

    // 0x105d9c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x105d9cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x105da0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105da4: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x105da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x105da8: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x105da8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x105dac: 0x18c00004  blez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x105DACu;
    {
        const bool branch_taken_0x105dac = (GPR_S32(ctx, 6) <= 0);
        ctx->pc = 0x105DB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DACu;
        // 0x105db0: 0x8ca30000  lw          $v1, 0x0($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105dac) {
            ctx->pc = 0x105DC0u;
            return;
        }
    }
    ctx->pc = 0x105DB4u;
    // 0x105db4: 0x24c20001  addiu       $v0, $a2, 0x1
    ctx->pc = 0x105db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x105db8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x105DB8u;
    {
        const bool branch_taken_0x105db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DB8u;
        // 0x105dbc: 0x21043  sra         $v0, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105db8) {
            ctx->pc = 0x105DC4u;
            return;
        }
    }
    ctx->pc = 0x105DC0u;
}
