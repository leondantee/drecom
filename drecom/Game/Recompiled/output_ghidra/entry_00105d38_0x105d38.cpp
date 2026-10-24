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

// Function: entry_00105d38
// Address: 0x105d38 - 0x105d58
void entry_00105d38_0x105d38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105d38_0x105d38");
#endif

    ctx->pc = 0x105d38u;

    // 0x105d38: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x105d38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x105d3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105d40: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x105d40u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x105d44: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x105d44u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x105d48: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x105d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x105d4c: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x105D4Cu;
    {
        const bool branch_taken_0x105d4c = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x105D50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D4Cu;
        // 0x105d50: 0x8ca50004  lw          $a1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d4c) {
            ctx->pc = 0x105D58u;
            return;
        }
    }
    ctx->pc = 0x105D54u;
    // 0x105d54: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105d54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x105d58u;
}
