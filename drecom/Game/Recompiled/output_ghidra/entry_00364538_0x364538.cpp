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

// Function: entry_00364538
// Address: 0x364538 - 0x364570
void entry_00364538_0x364538(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364538_0x364538");
#endif

    switch (ctx->pc) {
        case 0x364548u: goto label_364548;
        case 0x364554u: goto label_364554;
        case 0x364564u: goto label_364564;
        default: break;
    }

    ctx->pc = 0x364538u;

    // 0x364538: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364538u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36453c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x36453cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x364540: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x364540u;
    SET_GPR_U32(ctx, 31, 0x364548u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x364540u, 0x364548u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364548u;
label_364548:
    // 0x364548: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36454c: 0xc05cd10  jal         func_173440
    ctx->pc = 0x36454Cu;
    SET_GPR_U32(ctx, 31, 0x364554u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x36454Cu, 0x364554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364554u;
label_364554:
    // 0x364554: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364558: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x364558u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x36455c: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x36455Cu;
    SET_GPR_U32(ctx, 31, 0x364564u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x36455Cu, 0x364564u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364564u;
label_364564:
    // 0x364564: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364568: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x364568u;
    SET_GPR_U32(ctx, 31, 0x364570u);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x364568u, 0x364570u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364570u;
}
