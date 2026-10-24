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

// Function: entry_0010e274
// Address: 0x10e274 - 0x10e288
void entry_0010e274_0x10e274(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e274_0x10e274");
#endif

    ctx->pc = 0x10e274u;

    // 0x10e274: 0x8c4345a8  lw          $v1, 0x45A8($v0)
    ctx->pc = 0x10e274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17832)));
    // 0x10e278: 0x18600003  blez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x10E278u;
    {
        const bool branch_taken_0x10e278 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10E27Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10E278u;
        // 0x10e27c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10e278) {
            ctx->pc = 0x10E288u;
            return;
        }
    }
    ctx->pc = 0x10E280u;
    // 0x10e280: 0xc046760  jal         func_119D80
    ctx->pc = 0x10E280u;
    SET_GPR_U32(ctx, 31, 0x10E288u);
    ctx->pc = 0x10E284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10E280u;
    // 0x10e284: 0x2484cd58  addiu       $a0, $a0, -0x32A8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954328));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10E288u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10E288u) { return; }
    ctx->pc = 0x10E288u;
}
