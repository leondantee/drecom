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

// Function: caseD_8
// Address: 0x12d06c - 0x12d0b8
void caseD_8_0x12d06c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_8_0x12d06c");
#endif

    switch (ctx->pc) {
        case 0x12d090u: goto label_12d090;
        default: break;
    }

    ctx->pc = 0x12d06cu;

    // 0x12d06c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d070: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12d070u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d074: 0x8c420368  lw          $v0, 0x368($v0)
    ctx->pc = 0x12d074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12d078: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x12d078u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d07c: 0x24060032  addiu       $a2, $zero, 0x32
    ctx->pc = 0x12d07cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x12d080: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12d080u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d084: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12d084u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12d088: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12D088u;
    SET_GPR_U32(ctx, 31, 0x12D090u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12D088u, 0x12D090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12D090u;
label_12d090:
    // 0x12d090: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x12d090u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12d094: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d098: 0xa04010a8  sb          $zero, 0x10A8($v0)
    ctx->pc = 0x12d098u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4264), (uint8_t)GPR_U32(ctx, 0));
    // 0x12d09c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x12d09cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12d0a0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d0a4: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x12d0a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    // 0x12d0a8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x12d0a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12d0ac: 0x90440002  lbu         $a0, 0x2($v0)
    ctx->pc = 0x12d0acu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x12d0b0: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x12d0b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x12d0b4: 0xa0450002  sb          $a1, 0x2($v0)
    ctx->pc = 0x12d0b4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x12d0b8u;
}
