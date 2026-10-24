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

// Function: entry_0011fb08
// Address: 0x11fb08 - 0x11fb20
void entry_0011fb08_0x11fb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fb08_0x11fb08");
#endif

    ctx->pc = 0x11fb08u;

    // 0x11fb08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FB08u;
    {
        const bool branch_taken_0x11fb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB08u;
        // 0x11fb0c: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb08) {
            ctx->pc = 0x11FB20u;
            return;
        }
    }
    ctx->pc = 0x11FB10u;
    // 0x11fb10: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x11fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x11fb14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11fb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb18: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x11FB18u;
    {
        const bool branch_taken_0x11fb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB18u;
        // 0x11fb1c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb18) {
            ctx->pc = 0x11FBC0u;
            return;
        }
    }
    ctx->pc = 0x11FB20u;
}
