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

// Function: entry_0015b318
// Address: 0x15b318 - 0x15b340
void entry_0015b318_0x15b318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b318_0x15b318");
#endif

    switch (ctx->pc) {
        case 0x15b338u: goto label_15b338;
        default: break;
    }

    ctx->pc = 0x15b318u;

    // 0x15b318: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x15b318u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b31c: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x15b31cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b320: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x15b320u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x15b324: 0x8c220140  lw          $v0, 0x140($at)
    ctx->pc = 0x15b324u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D0140u));
    // 0x15b328: 0x304600ff  andi        $a2, $v0, 0xFF
    ctx->pc = 0x15b328u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x15b32c: 0x906511ec  lbu         $a1, 0x11EC($v1)
    ctx->pc = 0x15b32cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4588)));
    // 0x15b330: 0xc096234  jal         func_2588D0
    ctx->pc = 0x15B330u;
    SET_GPR_U32(ctx, 31, 0x15B338u);
    ctx->pc = 0x2588D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2588D0u, 0x15B330u, 0x15B338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15B338u;
label_15b338:
    // 0x15b338: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x15B338u;
    {
        const bool branch_taken_0x15b338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15b338) {
            ctx->pc = 0x15B3B0u;
            return;
        }
    }
    ctx->pc = 0x15B340u;
}
