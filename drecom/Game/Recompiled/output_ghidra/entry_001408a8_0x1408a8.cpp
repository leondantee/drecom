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

// Function: entry_001408a8
// Address: 0x1408a8 - 0x1408c8
void entry_001408a8_0x1408a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001408a8_0x1408a8");
#endif

    ctx->pc = 0x1408a8u;

    // 0x1408a8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1408a8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1408ac: 0x8c231a48  lw          $v1, 0x1A48($at)
    ctx->pc = 0x1408acu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x1408b0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x1408b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x1408b4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1408b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1408b8: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1408B8u;
    {
        const bool branch_taken_0x1408b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1408b8) {
            ctx->pc = 0x1408C8u;
            return;
        }
    }
    ctx->pc = 0x1408C0u;
    // 0x1408c0: 0xc06b8cc  jal         func_1AE330
    ctx->pc = 0x1408C0u;
    SET_GPR_U32(ctx, 31, 0x1408C8u);
    ctx->pc = 0x1AE330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AE330u, 0x1408C0u, 0x1408C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1408C8u;
}
