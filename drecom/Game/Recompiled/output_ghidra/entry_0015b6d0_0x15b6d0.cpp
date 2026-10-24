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

// Function: entry_0015b6d0
// Address: 0x15b6d0 - 0x15b6f0
void entry_0015b6d0_0x15b6d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b6d0_0x15b6d0");
#endif

    ctx->pc = 0x15b6d0u;

    // 0x15b6d0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b6d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b6d4: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x15b6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x15b6d8: 0x3c020080  lui         $v0, 0x80
    ctx->pc = 0x15b6d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)128 << 16));
    // 0x15b6dc: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x15b6dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x15b6e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x15B6E0u;
    {
        const bool branch_taken_0x15b6e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x15b6e0) {
            ctx->pc = 0x15B6F0u;
            return;
        }
    }
    ctx->pc = 0x15B6E8u;
    // 0x15b6e8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x15b6e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b6ec: 0xa2021921  sb          $v0, 0x1921($s0)
    ctx->pc = 0x15b6ecu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6433), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x15b6f0u;
}
