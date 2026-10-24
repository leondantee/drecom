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

// Function: entry_0034f844
// Address: 0x34f844 - 0x34f8a4
void entry_0034f844_0x34f844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034f844_0x34f844");
#endif

    switch (ctx->pc) {
        case 0x34f854u: goto label_34f854;
        case 0x34f860u: goto label_34f860;
        case 0x34f89cu: goto label_34f89c;
        default: break;
    }

    ctx->pc = 0x34f844u;

    // 0x34f844: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f844u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f848: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x34f848u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34f84c: 0xc0d0704  jal         func_341C10
    ctx->pc = 0x34F84Cu;
    SET_GPR_U32(ctx, 31, 0x34F854u);
    ctx->pc = 0x341C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x341C10u, 0x34F84Cu, 0x34F854u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F854u;
label_34f854:
    // 0x34f854: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f854u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f858: 0xc0974dc  jal         func_25D370
    ctx->pc = 0x34F858u;
    SET_GPR_U32(ctx, 31, 0x34F860u);
    ctx->pc = 0x25D370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D370u, 0x34F858u, 0x34F860u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F860u;
label_34f860:
    // 0x34f860: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x34f860u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f864: 0x906309e7  lbu         $v1, 0x9E7($v1)
    ctx->pc = 0x34f864u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2535)));
    // 0x34f868: 0x1060009b  beqz        $v1, . + 4 + (0x9B << 2)
    ctx->pc = 0x34F868u;
    {
        const bool branch_taken_0x34f868 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f868) {
            ctx->pc = 0x34FAD8u;
            return;
        }
    }
    ctx->pc = 0x34F870u;
    // 0x34f870: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34f870u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34f874: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f878: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x34f878u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x34f87c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x34f87cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f880: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x34f880u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x34f884: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x34f884u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x34f888: 0x24061e34  addiu       $a2, $zero, 0x1E34
    ctx->pc = 0x34f888u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7732));
    // 0x34f88c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x34f88cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34f890: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x34f890u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x34f894: 0xc0965d0  jal         func_259740
    ctx->pc = 0x34F894u;
    SET_GPR_U32(ctx, 31, 0x34F89Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x34F894u, 0x34F89Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34F89Cu;
label_34f89c:
    // 0x34f89c: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x34F89Cu;
    {
        const bool branch_taken_0x34f89c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34f89c) {
            ctx->pc = 0x34FAD8u;
            return;
        }
    }
    ctx->pc = 0x34F8A4u;
}
