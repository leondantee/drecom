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

// Function: entry_00118d58
// Address: 0x118d58 - 0x118d78
void entry_00118d58_0x118d58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00118d58_0x118d58");
#endif

    ctx->pc = 0x118d58u;

    // 0x118d58: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x118d58u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x118d5c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x118d5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x118d60: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x118d60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x118d64: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x118D64u;
    {
        const bool branch_taken_0x118d64 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D64u;
        // 0x118d68: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d64) {
            ctx->pc = 0x118D78u;
            return;
        }
    }
    ctx->pc = 0x118D6Cu;
    // 0x118d6c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x118d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x118d70: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x118D70u;
    {
        const bool branch_taken_0x118d70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x118D74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x118D70u;
        // 0x118d74: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x118d70) {
            ctx->pc = 0x118DA8u;
            return;
        }
    }
    ctx->pc = 0x118D78u;
}
