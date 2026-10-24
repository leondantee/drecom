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

// Function: entry_001cc404
// Address: 0x1cc404 - 0x1cc43c
void entry_001cc404_0x1cc404(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cc404_0x1cc404");
#endif

    switch (ctx->pc) {
        case 0x1cc40cu: goto label_1cc40c;
        case 0x1cc434u: goto label_1cc434;
        default: break;
    }

    ctx->pc = 0x1cc404u;

    // 0x1cc404: 0xc0bcd40  jal         func_2F3500
    ctx->pc = 0x1CC404u;
    SET_GPR_U32(ctx, 31, 0x1CC40Cu);
    ctx->pc = 0x2F3500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F3500u, 0x1CC404u, 0x1CC40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC40Cu;
label_1cc40c:
    // 0x1cc40c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1cc40cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1cc410: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1cc410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc414: 0x906309df  lbu         $v1, 0x9DF($v1)
    ctx->pc = 0x1cc414u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2527)));
    // 0x1cc418: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x1cc418u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x1cc41c: 0x306300c0  andi        $v1, $v1, 0xC0
    ctx->pc = 0x1cc41cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)192);
    // 0x1cc420: 0x106000bc  beqz        $v1, . + 4 + (0xBC << 2)
    ctx->pc = 0x1CC420u;
    {
        const bool branch_taken_0x1cc420 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc420) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC428u;
    // 0x1cc428: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1cc428u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1cc42c: 0xc09b88c  jal         func_26E230
    ctx->pc = 0x1CC42Cu;
    SET_GPR_U32(ctx, 31, 0x1CC434u);
    ctx->pc = 0x26E230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26E230u, 0x1CC42Cu, 0x1CC434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1CC434u;
label_1cc434:
    // 0x1cc434: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x1CC434u;
    {
        const bool branch_taken_0x1cc434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cc434) {
            ctx->pc = 0x1CC714u;
            return;
        }
    }
    ctx->pc = 0x1CC43Cu;
}
