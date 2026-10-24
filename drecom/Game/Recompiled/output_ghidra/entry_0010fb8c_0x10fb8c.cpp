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

// Function: entry_0010fb8c
// Address: 0x10fb8c - 0x10fb9c
void entry_0010fb8c_0x10fb8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fb8c_0x10fb8c");
#endif

    ctx->pc = 0x10fb8cu;

    // 0x10fb8c: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10FB8Cu;
    {
        const bool branch_taken_0x10fb8c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10FB90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FB8Cu;
        // 0x10fb90: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fb8c) {
            ctx->pc = 0x10FB9Cu;
            return;
        }
    }
    ctx->pc = 0x10FB94u;
    // 0x10fb94: 0xc046760  jal         func_119D80
    ctx->pc = 0x10FB94u;
    SET_GPR_U32(ctx, 31, 0x10FB9Cu);
    ctx->pc = 0x10FB98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FB94u;
    // 0x10fb98: 0x2484cf68  addiu       $a0, $a0, -0x3098 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10FB9Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FB9Cu) { return; }
    ctx->pc = 0x10FB9Cu;
}
