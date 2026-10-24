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

// Function: entry_0028433c
// Address: 0x28433c - 0x284350
void entry_0028433c_0x28433c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0028433c_0x28433c");
#endif

    ctx->pc = 0x28433cu;

    // 0x28433c: 0x3c03003f  lui         $v1, 0x3F
    ctx->pc = 0x28433cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)63 << 16));
    // 0x284340: 0x24639240  addiu       $v1, $v1, -0x6DC0
    ctx->pc = 0x284340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294939200));
    // 0x284344: 0xae031334  sw          $v1, 0x1334($s0)
    ctx->pc = 0x284344u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4916), GPR_U32(ctx, 3));
    // 0x284348: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x284348u;
    {
        const bool branch_taken_0x284348 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x284348) {
            ctx->pc = 0x284458u;
            return;
        }
    }
    ctx->pc = 0x284350u;
}
