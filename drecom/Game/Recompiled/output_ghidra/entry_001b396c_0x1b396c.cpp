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

// Function: entry_001b396c
// Address: 0x1b396c - 0x1b3988
void entry_001b396c_0x1b396c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b396c_0x1b396c");
#endif

    ctx->pc = 0x1b396cu;

    // 0x1b396c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b396cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b3970: 0x8c221a64  lw          $v0, 0x1A64($at)
    ctx->pc = 0x1b3970u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A64u));
    // 0x1b3974: 0x30420100  andi        $v0, $v0, 0x100
    ctx->pc = 0x1b3974u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)256);
    // 0x1b3978: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B3978u;
    {
        const bool branch_taken_0x1b3978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3978) {
            ctx->pc = 0x1B3988u;
            return;
        }
    }
    ctx->pc = 0x1B3980u;
    // 0x1b3980: 0x3c022000  lui         $v0, 0x2000
    ctx->pc = 0x1b3980u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
    // 0x1b3984: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x1b3984u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    ctx->pc = 0x1b3988u;
}
