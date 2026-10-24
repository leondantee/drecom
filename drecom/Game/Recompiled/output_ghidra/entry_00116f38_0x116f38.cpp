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

// Function: entry_00116f38
// Address: 0x116f38 - 0x116f50
void entry_00116f38_0x116f38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116f38_0x116f38");
#endif

    ctx->pc = 0x116f38u;

    // 0x116f38: 0x2610ffff  addiu       $s0, $s0, -0x1
    ctx->pc = 0x116f38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x116f3c: 0x602000b  bltzl       $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x116F3Cu;
    {
        const bool branch_taken_0x116f3c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x116f3c) {
            ctx->pc = 0x116F40u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116F3Cu;
            // 0x116f40: 0x8e310000  lw          $s1, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116F6Cu;
            return;
        }
    }
    ctx->pc = 0x116F44u;
    // 0x116f44: 0x26320008  addiu       $s2, $s1, 0x8
    ctx->pc = 0x116f44u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 8));
    // 0x116f48: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x116f48u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x116f4c: 0x0  nop
    ctx->pc = 0x116f4cu;
    // NOP
    ctx->pc = 0x116f50u;
}
