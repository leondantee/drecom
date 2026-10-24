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

// Function: entry_00115c14
// Address: 0x115c14 - 0x115c30
void entry_00115c14_0x115c14(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115c14_0x115c14");
#endif

    ctx->pc = 0x115c14u;

    // 0x115c14: 0x228102b  sltu        $v0, $s1, $t0
    ctx->pc = 0x115c14u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x115c18: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x115C18u;
    {
        const bool branch_taken_0x115c18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x115c18) {
            ctx->pc = 0x115C1Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x115C18u;
            // 0x115c1c: 0xae900010  sw          $s0, 0x10($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x115C30u;
            return;
        }
    }
    ctx->pc = 0x115C20u;
    // 0x115c20: 0x8d020000  lw          $v0, 0x0($t0)
    ctx->pc = 0x115c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x115c24: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x115C24u;
    {
        const bool branch_taken_0x115c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x115C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115C24u;
        // 0x115c28: 0x2508fffc  addiu       $t0, $t0, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115c24) {
            ctx->pc = 0x115C10u;
            return;
        }
    }
    ctx->pc = 0x115C2Cu;
    // 0x115c2c: 0xae900010  sw          $s0, 0x10($s4)
    ctx->pc = 0x115c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 16), GPR_U32(ctx, 16));
    ctx->pc = 0x115c30u;
}
