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
// Address: 0x2ddb88 - 0x2ddbc4
void caseD_6_0x2ddb88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x2ddb88");
#endif

    switch (ctx->pc) {
        case 0x2ddbb0u: goto label_2ddbb0;
        default: break;
    }

    ctx->pc = 0x2ddb88u;

    // 0x2ddb88: 0xa20000d6  sb          $zero, 0xD6($s0)
    ctx->pc = 0x2ddb88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 214), (uint8_t)GPR_U32(ctx, 0));
    // 0x2ddb8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2ddb8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddb90: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddb90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddb94: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x2ddb94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x2ddb98: 0x24061e23  addiu       $a2, $zero, 0x1E23
    ctx->pc = 0x2ddb98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7715));
    // 0x2ddb9c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2ddb9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2ddba0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x2ddba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2ddba4: 0x70404628  paddub      $t0, $v0, $zero
    ctx->pc = 0x2ddba4u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ddba8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DDBA8u;
    SET_GPR_U32(ctx, 31, 0x2DDBB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DDBA8u, 0x2DDBB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DDBB0u;
label_2ddbb0:
    // 0x2ddbb0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2ddbb0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2ddbb4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x2ddbb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2ddbb8: 0x90850002  lbu         $a1, 0x2($a0)
    ctx->pc = 0x2ddbb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x2ddbbc: 0x24a30001  addiu       $v1, $a1, 0x1
    ctx->pc = 0x2ddbbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x2ddbc0: 0xa0830002  sb          $v1, 0x2($a0)
    ctx->pc = 0x2ddbc0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2ddbc4u;
}
