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

// Function: entry_00113d04
// Address: 0x113d04 - 0x113d28
void entry_00113d04_0x113d04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113d04_0x113d04");
#endif

    ctx->pc = 0x113d04u;

    // 0x113d04: 0x14a00042  bnez        $a1, . + 4 + (0x42 << 2)
    ctx->pc = 0x113D04u;
    {
        const bool branch_taken_0x113d04 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x113D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D04u;
        // 0x113d08: 0x2682ffff  addiu       $v0, $s4, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d04) {
            ctx->pc = 0x113E10u;
            return;
        }
    }
    ctx->pc = 0x113D0Cu;
    // 0x113d0c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x113d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x113d10: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x113d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x113d14: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x113d14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x113d18: 0x1480000c  bnez        $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x113D18u;
    {
        const bool branch_taken_0x113d18 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x113D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113D18u;
        // 0x113d1c: 0x24080001  addiu       $t0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113d18) {
            ctx->pc = 0x113D4Cu;
            return;
        }
    }
    ctx->pc = 0x113D20u;
    // 0x113d20: 0x26050001  addiu       $a1, $s0, 0x1
    ctx->pc = 0x113d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x113d24: 0x0  nop
    ctx->pc = 0x113d24u;
    // NOP
    ctx->pc = 0x113d28u;
}
