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

// Function: entry_001512c0
// Address: 0x1512c0 - 0x151300
void entry_001512c0_0x1512c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001512c0_0x1512c0");
#endif

    switch (ctx->pc) {
        case 0x1512e0u: goto label_1512e0;
        default: break;
    }

    ctx->pc = 0x1512c0u;

    // 0x1512c0: 0x8fa400e8  lw          $a0, 0xE8($sp)
    ctx->pc = 0x1512c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1512c4: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x1512c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1512c8: 0x8fa200e8  lw          $v0, 0xE8($sp)
    ctx->pc = 0x1512c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x1512cc: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1512ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1512d0: 0x90661576  lbu         $a2, 0x1576($v1)
    ctx->pc = 0x1512d0u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 5494)));
    // 0x1512d4: 0x90471577  lbu         $a3, 0x1577($v0)
    ctx->pc = 0x1512d4u;
    SET_GPR_ZE32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5495)));
    // 0x1512d8: 0xc06cb4c  jal         func_1B2D30
    ctx->pc = 0x1512D8u;
    SET_GPR_U32(ctx, 31, 0x1512E0u);
    ctx->pc = 0x1B2D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B2D30u, 0x1512D8u, 0x1512E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1512E0u;
label_1512e0:
    // 0x1512e0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1512e0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1512e4: 0x2242825  or          $a1, $s1, $a0
    ctx->pc = 0x1512e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x1512e8: 0x70a08e28  paddub      $s1, $a1, $zero
    ctx->pc = 0x1512e8u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1512ec: 0x26060020  addiu       $a2, $s0, 0x20
    ctx->pc = 0x1512ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
    // 0x1512f0: 0x70c08628  paddub      $s0, $a2, $zero
    ctx->pc = 0x1512f0u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x1512f4: 0x26420001  addiu       $v0, $s2, 0x1
    ctx->pc = 0x1512f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1512f8: 0x70409628  paddub      $s2, $v0, $zero
    ctx->pc = 0x1512f8u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1512fc: 0x0  nop
    ctx->pc = 0x1512fcu;
    // NOP
    ctx->pc = 0x151300u;
}
