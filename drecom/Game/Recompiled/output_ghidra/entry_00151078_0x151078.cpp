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

// Function: entry_00151078
// Address: 0x151078 - 0x1510b0
void entry_00151078_0x151078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00151078_0x151078");
#endif

    switch (ctx->pc) {
        case 0x151098u: goto label_151098;
        default: break;
    }

    ctx->pc = 0x151078u;

    // 0x151078: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x151078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x15107c: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x15107cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151080: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x151080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x151084: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x151084u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x151088: 0x90661576  lbu         $a2, 0x1576($v1)
    ctx->pc = 0x151088u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5494)));
    // 0x15108c: 0x90471577  lbu         $a3, 0x1577($v0)
    ctx->pc = 0x15108cu;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5495)));
    // 0x151090: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x151090u;
    SET_GPR_U32(ctx, 31, 0x151098u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x151090u, 0x151098u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151098u;
label_151098:
    // 0x151098: 0x2221825  or          $v1, $s1, $v0
    ctx->pc = 0x151098u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x15109c: 0x70608e28  paddub      $s1, $v1, $zero
    ctx->pc = 0x15109cu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1510a0: 0x26020020  addiu       $v0, $s0, 0x20
    ctx->pc = 0x1510a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1510a4: 0x70408628  paddub      $s0, $v0, $zero
    ctx->pc = 0x1510a4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1510a8: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1510a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1510ac: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1510acu;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x1510b0u;
}
