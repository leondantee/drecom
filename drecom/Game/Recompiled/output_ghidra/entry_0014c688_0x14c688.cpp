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

// Function: entry_0014c688
// Address: 0x14c688 - 0x14c6b4
void entry_0014c688_0x14c688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c688_0x14c688");
#endif

    switch (ctx->pc) {
        case 0x14c698u: goto label_14c698;
        default: break;
    }

    ctx->pc = 0x14c688u;

    // 0x14c688: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c688u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c68c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x14c68cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x14c690: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x14C690u;
    SET_GPR_U32(ctx, 31, 0x14C698u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x14C690u, 0x14C698u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C698u;
label_14c698:
    // 0x14c698: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x14c698u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x14c69c: 0x8c229230  lw          $v0, -0x6DD0($at)
    ctx->pc = 0x14c69cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x3E9230u));
    // 0x14c6a0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x14C6A0u;
    {
        const bool branch_taken_0x14c6a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x14c6a0) {
            ctx->pc = 0x14C6B4u;
            return;
        }
    }
    ctx->pc = 0x14C6A8u;
    // 0x14c6a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x14c6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x14c6ac: 0xc05cd34  jal         func_1734D0
    ctx->pc = 0x14C6ACu;
    SET_GPR_U32(ctx, 31, 0x14C6B4u);
    ctx->pc = 0x1734D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1734D0u, 0x14C6ACu, 0x14C6B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x14C6B4u;
}
