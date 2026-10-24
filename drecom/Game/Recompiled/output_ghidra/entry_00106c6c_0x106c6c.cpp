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

// Function: entry_00106c6c
// Address: 0x106c6c - 0x106c80
void entry_00106c6c_0x106c6c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00106c6c_0x106c6c");
#endif

    ctx->pc = 0x106c6cu;

    // 0x106c6c: 0x12a00004  beqz        $s5, . + 4 + (0x4 << 2)
    ctx->pc = 0x106C6Cu;
    {
        const bool branch_taken_0x106c6c = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x106C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x106C6Cu;
        // 0x106c70: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x106c6c) {
            ctx->pc = 0x106C80u;
            return;
        }
    }
    ctx->pc = 0x106C74u;
    // 0x106c74: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x106c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x106c78: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x106c78u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x106c7c: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x106c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    ctx->pc = 0x106c80u;
}
