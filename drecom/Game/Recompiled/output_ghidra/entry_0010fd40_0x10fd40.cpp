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

// Function: entry_0010fd40
// Address: 0x10fd40 - 0x10fd60
void entry_0010fd40_0x10fd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fd40_0x10fd40");
#endif

    switch (ctx->pc) {
        case 0x10fd58u: goto label_10fd58;
        default: break;
    }

    ctx->pc = 0x10fd40u;

    // 0x10fd40: 0x8ec445a8  lw          $a0, 0x45A8($s6)
    ctx->pc = 0x10fd40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 17832)));
    // 0x10fd44: 0x18800006  blez        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10FD44u;
    {
        const bool branch_taken_0x10fd44 = (GPR_S32(ctx, 4) <= 0);
        ctx->pc = 0x10FD48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FD44u;
        // 0x10fd48: 0x3c02003b  lui         $v0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fd44) {
            ctx->pc = 0x10FD60u;
            return;
        }
    }
    ctx->pc = 0x10FD4Cu;
    // 0x10fd4c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10fd4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10fd50: 0xc046760  jal         func_119D80
    ctx->pc = 0x10FD50u;
    SET_GPR_U32(ctx, 31, 0x10FD58u);
    ctx->pc = 0x10FD54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FD50u;
    // 0x10fd54: 0x2484cfd0  addiu       $a0, $a0, -0x3030 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954960));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10FD58u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FD58u) { return; }
    ctx->pc = 0x10FD58u;
label_10fd58:
    // 0x10fd58: 0x8ec445a8  lw          $a0, 0x45A8($s6)
    ctx->pc = 0x10fd58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 17832)));
    // 0x10fd5c: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x10fd5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x10fd60u;
}
