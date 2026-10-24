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

// Function: caseD_6
// Address: 0x1c7788 - 0x1c77c0
void caseD_6_0x1c7788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x1c7788");
#endif

    switch (ctx->pc) {
        case 0x1c77acu: goto label_1c77ac;
        default: break;
    }

    ctx->pc = 0x1c7788u;

    // 0x1c7788: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c7788u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c778c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x1c778cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c7790: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x1c7790u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x1c7794: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c7794u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1c7798: 0x24060f41  addiu       $a2, $zero, 0xF41
    ctx->pc = 0x1c7798u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3905));
    // 0x1c779c: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1c779cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1c77a0: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c77a0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c77a4: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C77A4u;
    SET_GPR_U32(ctx, 31, 0x1C77ACu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C77A4u, 0x1C77ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C77ACu;
label_1c77ac:
    // 0x1c77ac: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x1c77acu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c77b0: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x1c77b0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1c77b4: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1c77b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c77b8: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1c77b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c77bc: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1c77bcu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c77c0u;
}
