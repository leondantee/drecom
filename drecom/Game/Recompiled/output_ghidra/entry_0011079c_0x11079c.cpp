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

// Function: entry_0011079c
// Address: 0x11079c - 0x1107b0
void entry_0011079c_0x11079c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011079c_0x11079c");
#endif

    ctx->pc = 0x11079cu;

    // 0x11079c: 0x11000004  beqz        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11079Cu;
    {
        const bool branch_taken_0x11079c = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1107A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11079Cu;
        // 0x1107a0: 0x26235280  addiu       $v1, $s1, 0x5280 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 21120));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11079c) {
            ctx->pc = 0x1107B0u;
            return;
        }
    }
    ctx->pc = 0x1107A4u;
    // 0x1107a4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1107a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1107a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1107A8u;
    {
        const bool branch_taken_0x1107a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1107ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1107A8u;
        // 0x1107ac: 0xac62000c  sw          $v0, 0xC($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1107a8) {
            ctx->pc = 0x1107B8u;
            return;
        }
    }
    ctx->pc = 0x1107B0u;
}
