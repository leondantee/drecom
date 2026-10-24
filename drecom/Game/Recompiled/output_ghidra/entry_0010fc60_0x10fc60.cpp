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

// Function: entry_0010fc60
// Address: 0x10fc60 - 0x10fc7c
void entry_0010fc60_0x10fc60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fc60_0x10fc60");
#endif

    ctx->pc = 0x10fc60u;

    // 0x10fc60: 0x8c6545a8  lw          $a1, 0x45A8($v1)
    ctx->pc = 0x10fc60u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17832)));
    // 0x10fc64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10fc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10fc68: 0x18a00004  blez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FC68u;
    {
        const bool branch_taken_0x10fc68 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x10FC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FC68u;
        // 0x10fc6c: 0xac8245f0  sw          $v0, 0x45F0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 17904), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fc68) {
            ctx->pc = 0x10FC7Cu;
            return;
        }
    }
    ctx->pc = 0x10FC70u;
    // 0x10fc70: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10fc70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10fc74: 0xc046760  jal         func_119D80
    ctx->pc = 0x10FC74u;
    SET_GPR_U32(ctx, 31, 0x10FC7Cu);
    ctx->pc = 0x10FC78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FC74u;
    // 0x10fc78: 0x2484cfa0  addiu       $a0, $a0, -0x3060 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10FC7Cu;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FC7Cu) { return; }
    ctx->pc = 0x10FC7Cu;
}
