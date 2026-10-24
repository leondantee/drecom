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

// Function: entry_00158698
// Address: 0x158698 - 0x1586bc
void entry_00158698_0x158698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00158698_0x158698");
#endif

    switch (ctx->pc) {
        case 0x1586b8u: goto label_1586b8;
        default: break;
    }

    ctx->pc = 0x158698u;

    // 0x158698: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x158698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15869c: 0x8c241a48  lw          $a0, 0x1A48($at)
    ctx->pc = 0x15869cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5D1A48u));
    // 0x1586a0: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x1586a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x1586a4: 0x831824  and         $v1, $a0, $v1
    ctx->pc = 0x1586a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x1586a8: 0x14600009  bnez        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1586A8u;
    {
        const bool branch_taken_0x1586a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1586a8) {
            ctx->pc = 0x1586D0u;
            return;
        }
    }
    ctx->pc = 0x1586B0u;
    // 0x1586b0: 0xc056228  jal         func_1588A0
    ctx->pc = 0x1586B0u;
    SET_GPR_U32(ctx, 31, 0x1586B8u);
    ctx->pc = 0x1588A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1588A0u, 0x1586B0u, 0x1586B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1586B8u;
label_1586b8:
    // 0x1586b8: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x1586b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    ctx->pc = 0x1586bcu;
}
