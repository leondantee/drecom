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

// Function: entry_0010fcb0
// Address: 0x10fcb0 - 0x10fcc8
void entry_0010fcb0_0x10fcb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010fcb0_0x10fcb0");
#endif

    ctx->pc = 0x10fcb0u;

    // 0x10fcb0: 0x8c4345a8  lw          $v1, 0x45A8($v0)
    ctx->pc = 0x10fcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17832)));
    // 0x10fcb4: 0x18600004  blez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x10FCB4u;
    {
        const bool branch_taken_0x10fcb4 = (GPR_S32(ctx, 3) <= 0);
        ctx->pc = 0x10FCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10FCB4u;
        // 0x10fcb8: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10fcb4) {
            ctx->pc = 0x10FCC8u;
            return;
        }
    }
    ctx->pc = 0x10FCBCu;
    // 0x10fcbc: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10fcbcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x10fcc0: 0xc046760  jal         func_119D80
    ctx->pc = 0x10FCC0u;
    SET_GPR_U32(ctx, 31, 0x10FCC8u);
    ctx->pc = 0x10FCC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10FCC0u;
    // 0x10fcc4: 0x2484cfb8  addiu       $a0, $a0, -0x3048 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294954936));
    ctx->in_delay_slot = false;
    ctx->pc = 0x119D80u;
    {
        ctx->pc = 0x10FCC8u;
        ps2_stubs::printf(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x10FCC8u) { return; }
    ctx->pc = 0x10FCC8u;
}
