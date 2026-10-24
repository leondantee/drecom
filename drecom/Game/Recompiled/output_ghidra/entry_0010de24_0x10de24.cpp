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

// Function: entry_0010de24
// Address: 0x10de24 - 0x10de38
void entry_0010de24_0x10de24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010de24_0x10de24");
#endif

    ctx->pc = 0x10de24u;

    // 0x10de24: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10DE24u;
    {
        const bool branch_taken_0x10de24 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10DE28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10DE24u;
        // 0x10de28: 0xaee04340  sw          $zero, 0x4340($s7) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 23), 17216), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10de24) {
            ctx->pc = 0x10DE38u;
            return;
        }
    }
    ctx->pc = 0x10DE2Cu;
    // 0x10de2c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10de2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10de30: 0xc046760  jal         func_119D80
    ctx->pc = 0x10DE30u;
    SET_GPR_U32(ctx, 31, 0x10DE38u);
    ctx->pc = 0x10DE34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10DE30u;
    // 0x10de34: 0x2484ccf8  addiu       $a0, $a0, -0x3308 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954232));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10DE38u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10DE38u) { return; }
    ctx->pc = 0x10DE38u;
}
