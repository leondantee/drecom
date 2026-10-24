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

// Function: entry_0010f5e4
// Address: 0x10f5e4 - 0x10f5f8
void entry_0010f5e4_0x10f5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010f5e4_0x10f5e4");
#endif

    ctx->pc = 0x10f5e4u;

    // 0x10f5e4: 0x8e6245a8  lw          $v0, 0x45A8($s3)
    ctx->pc = 0x10f5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 17832)));
    // 0x10f5e8: 0x18400003  blez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10F5E8u;
    {
        const bool branch_taken_0x10f5e8 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10F5ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10F5E8u;
        // 0x10f5ec: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10f5e8) {
            ctx->pc = 0x10F5F8u;
            return;
        }
    }
    ctx->pc = 0x10F5F0u;
    // 0x10f5f0: 0xc046760  jal         func_119D80
    ctx->pc = 0x10F5F0u;
    SET_GPR_U32(ctx, 31, 0x10F5F8u);
    ctx->pc = 0x10F5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10F5F0u;
    // 0x10f5f4: 0x2484ce68  addiu       $a0, $a0, -0x3198 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954600));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10F5F8u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10F5F8u) { return; }
    ctx->pc = 0x10F5F8u;
}
