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

// Function: entry_001a1490
// Address: 0x1a1490 - 0x1a14b0
void entry_001a1490_0x1a1490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a1490_0x1a1490");
#endif

    ctx->pc = 0x1a1490u;

    // 0x1a1490: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1a1490u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1a1494: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x1a1494u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x1a1498: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x1a1498u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x1a149c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1a149cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1a14a0: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x1A14A0u;
    {
        const bool branch_taken_0x1a14a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a14a0) {
            ctx->pc = 0x1A1540u;
            return;
        }
    }
    ctx->pc = 0x1A14A8u;
    // 0x1a14a8: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1A14A8u;
    {
        const bool branch_taken_0x1a14a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a14a8) {
            ctx->pc = 0x1A1530u;
            return;
        }
    }
    ctx->pc = 0x1A14B0u;
}
