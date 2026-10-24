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

// Function: entry_0021484c
// Address: 0x21484c - 0x214868
void entry_0021484c_0x21484c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021484c_0x21484c");
#endif

    ctx->pc = 0x21484cu;

    // 0x21484c: 0x27b0001f  addiu       $s0, $sp, 0x1F
    ctx->pc = 0x21484cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 31));
    // 0x214850: 0x16200005  bnez        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x214850u;
    {
        const bool branch_taken_0x214850 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x214854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214850u;
        // 0x214854: 0xa3a0001f  sb          $zero, 0x1F($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 31), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214850) {
            ctx->pc = 0x214868u;
            return;
        }
    }
    ctx->pc = 0x214858u;
    // 0x214858: 0x24020030  addiu       $v0, $zero, 0x30
    ctx->pc = 0x214858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x21485c: 0x27b0001e  addiu       $s0, $sp, 0x1E
    ctx->pc = 0x21485cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 30));
    // 0x214860: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x214860u;
    {
        const bool branch_taken_0x214860 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x214864u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x214860u;
        // 0x214864: 0xa3a2001e  sb          $v0, 0x1E($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 30), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x214860) {
            ctx->pc = 0x2148C8u;
            return;
        }
    }
    ctx->pc = 0x214868u;
}
