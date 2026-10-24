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

// Function: entry_00105dc4
// Address: 0x105dc4 - 0x105ddc
void entry_00105dc4_0x105dc4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105dc4_0x105dc4");
#endif

    ctx->pc = 0x105dc4u;

    // 0x105dc4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105dc8: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x105dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x105dcc: 0x18e00003  blez        $a3, . + 4 + (0x3 << 2)
    ctx->pc = 0x105DCCu;
    {
        const bool branch_taken_0x105dcc = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x105DD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DCCu;
        // 0x105dd0: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105dcc) {
            ctx->pc = 0x105DDCu;
            return;
        }
    }
    ctx->pc = 0x105DD4u;
    // 0x105dd4: 0x1000ffe0  b           . + 4 + (-0x20 << 2)
    ctx->pc = 0x105DD4u;
    {
        const bool branch_taken_0x105dd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x105DD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105DD4u;
        // 0x105dd8: 0x24e20001  addiu       $v0, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105dd4) {
            ctx->pc = 0x105D58u;
            return;
        }
    }
    ctx->pc = 0x105DDCu;
}
