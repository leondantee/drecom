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

// Function: entry_00264228
// Address: 0x264228 - 0x264244
void entry_00264228_0x264228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00264228_0x264228");
#endif

    ctx->pc = 0x264228u;

    // 0x264228: 0x2e030080  sltiu       $v1, $s0, 0x80
    ctx->pc = 0x264228u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)128) ? 1 : 0);
    // 0x26422c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x26422Cu;
    {
        const bool branch_taken_0x26422c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x26422c) {
            ctx->pc = 0x264210u;
            return;
        }
    }
    ctx->pc = 0x264234u;
    // 0x264234: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x264234u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x264238: 0x8c241b20  lw          $a0, 0x1B20($at)
    ctx->pc = 0x264238u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1B20u));
    // 0x26423c: 0x2403fffe  addiu       $v1, $zero, -0x2
    ctx->pc = 0x26423cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x264240: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x264240u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    ctx->pc = 0x264244u;
}
