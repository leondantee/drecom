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

// Function: entry_00364c54
// Address: 0x364c54 - 0x364c8c
void entry_00364c54_0x364c54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364c54_0x364c54");
#endif

    switch (ctx->pc) {
        case 0x364c64u: goto label_364c64;
        case 0x364c70u: goto label_364c70;
        case 0x364c80u: goto label_364c80;
        default: break;
    }

    ctx->pc = 0x364c54u;

    // 0x364c54: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364c54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364c58: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x364c58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x364c5c: 0xc096b40  jal         func_25AD00
    ctx->pc = 0x364C5Cu;
    SET_GPR_U32(ctx, 31, 0x364C64u);
    ctx->pc = 0x25AD00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25AD00u, 0x364C5Cu, 0x364C64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C64u;
label_364c64:
    // 0x364c64: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364c68: 0xc05cd10  jal         func_173440
    ctx->pc = 0x364C68u;
    SET_GPR_U32(ctx, 31, 0x364C70u);
    ctx->pc = 0x173440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173440u, 0x364C68u, 0x364C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C70u;
label_364c70:
    // 0x364c70: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364c74: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x364c74u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x364c78: 0xc05cec4  jal         func_173B10
    ctx->pc = 0x364C78u;
    SET_GPR_U32(ctx, 31, 0x364C80u);
    ctx->pc = 0x173B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173B10u, 0x364C78u, 0x364C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C80u;
label_364c80:
    // 0x364c80: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x364c80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x364c84: 0xc097478  jal         func_25D1E0
    ctx->pc = 0x364C84u;
    SET_GPR_U32(ctx, 31, 0x364C8Cu);
    ctx->pc = 0x25D1E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D1E0u, 0x364C84u, 0x364C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364C8Cu;
}
