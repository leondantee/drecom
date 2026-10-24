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

// Function: entry_0010ef7c
// Address: 0x10ef7c - 0x10ef8c
void entry_0010ef7c_0x10ef7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ef7c_0x10ef7c");
#endif

    ctx->pc = 0x10ef7cu;

    // 0x10ef7c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10EF7Cu;
    {
        const bool branch_taken_0x10ef7c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10EF80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10EF7Cu;
        // 0x10ef80: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10ef7c) {
            ctx->pc = 0x10EF8Cu;
            return;
        }
    }
    ctx->pc = 0x10EF84u;
    // 0x10ef84: 0xc046760  jal         func_119D80
    ctx->pc = 0x10EF84u;
    SET_GPR_U32(ctx, 31, 0x10EF8Cu);
    ctx->pc = 0x10EF88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10EF84u;
    // 0x10ef88: 0x2484ce40  addiu       $a0, $a0, -0x31C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954560));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10EF8Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10EF8Cu) { return; }
    ctx->pc = 0x10EF8Cu;
}
