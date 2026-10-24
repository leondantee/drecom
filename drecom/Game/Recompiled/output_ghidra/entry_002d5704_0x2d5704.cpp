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

// Function: entry_002d5704
// Address: 0x2d5704 - 0x2d5730
void entry_002d5704_0x2d5704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002d5704_0x2d5704");
#endif

    switch (ctx->pc) {
        case 0x2d5714u: goto label_2d5714;
        default: break;
    }

    ctx->pc = 0x2d5704u;

    // 0x2d5704: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d5704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5708: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2d5708u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2d570c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x2D570Cu;
    SET_GPR_U32(ctx, 31, 0x2D5714u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x2D570Cu, 0x2D5714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5714u;
label_2d5714:
    // 0x2d5714: 0x3c010086  lui         $at, 0x86
    ctx->pc = 0x2d5714u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)134 << 16));
    // 0x2d5718: 0x8c22add0  lw          $v0, -0x5230($at)
    ctx->pc = 0x2d5718u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x85ADD0u));
    // 0x2d571c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2D571Cu;
    {
        const bool branch_taken_0x2d571c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2d571c) {
            ctx->pc = 0x2D5730u;
            return;
        }
    }
    ctx->pc = 0x2D5724u;
    // 0x2d5724: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2d5724u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2d5728: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x2D5728u;
    SET_GPR_U32(ctx, 31, 0x2D5730u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x2D5728u, 0x2D5730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D5730u;
}
