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

// Function: entry_00105d7c
// Address: 0x105d7c - 0x105d9c
void entry_00105d7c_0x105d7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00105d7c_0x105d7c");
#endif

    ctx->pc = 0x105d7cu;

    // 0x105d7c: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x105d7cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x105d80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x105d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x105d84: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x105d84u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x105d88: 0x71040  sll         $v0, $a3, 1
    ctx->pc = 0x105d88u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 7), 1));
    // 0x105d8c: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x105d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x105d90: 0x18e00002  blez        $a3, . + 4 + (0x2 << 2)
    ctx->pc = 0x105D90u;
    {
        const bool branch_taken_0x105d90 = (GPR_S32(ctx, 7) <= 0);
        ctx->pc = 0x105D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x105D90u;
        // 0x105d94: 0x8ca30004  lw          $v1, 0x4($a1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x105d90) {
            ctx->pc = 0x105D9Cu;
            return;
        }
    }
    ctx->pc = 0x105D98u;
    // 0x105d98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x105d98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    ctx->pc = 0x105d9cu;
}
