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

// Function: entry_001b2270
// Address: 0x1b2270 - 0x1b228c
void entry_001b2270_0x1b2270(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2270_0x1b2270");
#endif

    ctx->pc = 0x1b2270u;

    // 0x1b2270: 0x27c2ffff  addiu       $v0, $fp, -0x1
    ctx->pc = 0x1b2270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 30), 4294967295));
    // 0x1b2274: 0x282102a  slt         $v0, $s4, $v0
    ctx->pc = 0x1b2274u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1b2278: 0x1440ffce  bnez        $v0, . + 4 + (-0x32 << 2)
    ctx->pc = 0x1B2278u;
    {
        const bool branch_taken_0x1b2278 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1b2278) {
            ctx->pc = 0x1B21B4u;
            return;
        }
    }
    ctx->pc = 0x1B2280u;
    // 0x1b2280: 0x7000a628  paddub      $s4, $zero, $zero
    ctx->pc = 0x1b2280u;
    SET_GPR_VEC(ctx, 20, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b2284: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1B2284u;
    {
        const bool branch_taken_0x1b2284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b2284) {
            ctx->pc = 0x1B2318u;
            return;
        }
    }
    ctx->pc = 0x1B228Cu;
}
