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

// Function: entry_0010d930
// Address: 0x10d930 - 0x10d94c
void entry_0010d930_0x10d930(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d930_0x10d930");
#endif

    ctx->pc = 0x10d930u;

    // 0x10d930: 0x8e8245a8  lw          $v0, 0x45A8($s4)
    ctx->pc = 0x10d930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 17832)));
    // 0x10d934: 0x18400005  blez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10D934u;
    {
        const bool branch_taken_0x10d934 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10D938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D934u;
        // 0x10d938: 0xae100120  sw          $s0, 0x120($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d934) {
            ctx->pc = 0x10D94Cu;
            return;
        }
    }
    ctx->pc = 0x10D93Cu;
    // 0x10d93c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10d93cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10d940: 0x26050020  addiu       $a1, $s0, 0x20
    ctx->pc = 0x10d940u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x10d944: 0xc046760  jal         func_119D80
    ctx->pc = 0x10D944u;
    SET_GPR_U32(ctx, 31, 0x10D94Cu);
    ctx->pc = 0x10D948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D944u;
    // 0x10d948: 0x2484cc50  addiu       $a0, $a0, -0x33B0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954064));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10D94Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D94Cu) { return; }
    ctx->pc = 0x10D94Cu;
}
