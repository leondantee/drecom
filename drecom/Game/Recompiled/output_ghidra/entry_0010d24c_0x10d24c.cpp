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

// Function: entry_0010d24c
// Address: 0x10d24c - 0x10d260
void entry_0010d24c_0x10d24c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d24c_0x10d24c");
#endif

    ctx->pc = 0x10d24cu;

    // 0x10d24c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10D24Cu;
    {
        const bool branch_taken_0x10d24c = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x10D250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D24Cu;
        // 0x10d250: 0x2684cbe8  addiu       $a0, $s4, -0x3418 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 20), 4294953960));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d24c) {
            ctx->pc = 0x10D260u;
            return;
        }
    }
    ctx->pc = 0x10D254u;
    // 0x10d254: 0x8e2545f4  lw          $a1, 0x45F4($s1)
    ctx->pc = 0x10d254u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 17908)));
    // 0x10d258: 0xc046760  jal         func_119D80
    ctx->pc = 0x10D258u;
    SET_GPR_U32(ctx, 31, 0x10D260u);
    ctx->pc = 0x10D25Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D258u;
    // 0x10d25c: 0x8e0645fc  lw          $a2, 0x45FC($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 17916)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10D260u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10D260u) { return; }
    ctx->pc = 0x10D260u;
}
