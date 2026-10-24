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

// Function: entry_0010e128
// Address: 0x10e128 - 0x10e138
void entry_0010e128_0x10e128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e128_0x10e128");
#endif

    ctx->pc = 0x10e128u;

    // 0x10e128: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E128u;
    {
        const bool branch_taken_0x10e128 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10E12Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E128u;
        // 0x10e12c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e128) {
            ctx->pc = 0x10E138u;
            return;
        }
    }
    ctx->pc = 0x10E130u;
    // 0x10e130: 0xc046760  jal         func_119D80
    ctx->pc = 0x10E130u;
    SET_GPR_U32(ctx, 31, 0x10E138u);
    ctx->pc = 0x10E134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E130u;
    // 0x10e134: 0x2484cd58  addiu       $a0, $a0, -0x32A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10E138u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E138u) { return; }
    ctx->pc = 0x10E138u;
}
