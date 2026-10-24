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

// Function: caseD_a
// Address: 0x1c7b18 - 0x1c7b54
void caseD_a_0x1c7b18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x1c7b18");
#endif

    switch (ctx->pc) {
        case 0x1c7b40u: goto label_1c7b40;
        default: break;
    }

    ctx->pc = 0x1c7b18u;

    // 0x1c7b18: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1c7b18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7b1c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c7b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7b20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1c7b20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7b24: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c7b24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1c7b28: 0x24030f41  addiu       $v1, $zero, 0xF41
    ctx->pc = 0x1c7b28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3905));
    // 0x1c7b2c: 0x70603628  paddub      $a2, $v1, $zero
    ctx->pc = 0x1c7b2cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x1c7b30: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c7b30u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c7b34: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c7b34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c7b38: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C7B38u;
    SET_GPR_U32(ctx, 31, 0x1C7B40u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C7B38u, 0x1C7B40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C7B40u;
label_1c7b40:
    // 0x1c7b40: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1c7b40u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c7b44: 0x8fa70048  lw          $a3, 0x48($sp)
    ctx->pc = 0x1c7b44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7b48: 0x90e80002  lbu         $t0, 0x2($a3)
    ctx->pc = 0x1c7b48u;
    SET_GPR_ZE32(ctx, 8, (uint8_t)READ8(ADD32(GPR_U32(ctx, 7), 2)));
    // 0x1c7b4c: 0x25020001  addiu       $v0, $t0, 0x1
    ctx->pc = 0x1c7b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1c7b50: 0xa0e20002  sb          $v0, 0x2($a3)
    ctx->pc = 0x1c7b50u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1c7b54u;
}
