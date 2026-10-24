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

// Function: caseD_2
// Address: 0x1c9704 - 0x1c9740
void caseD_2_0x1c9704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x1c9704");
#endif

    switch (ctx->pc) {
        case 0x1c9724u: goto label_1c9724;
        default: break;
    }

    ctx->pc = 0x1c9704u;

    // 0x1c9704: 0x8fa40088  lw          $a0, 0x88($sp)
    ctx->pc = 0x1c9704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9708: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9708u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c970c: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x1c970cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x1c9710: 0x240600a0  addiu       $a2, $zero, 0xA0
    ctx->pc = 0x1c9710u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x1c9714: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1c9714u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c9718: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1c9718u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1c971c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1C971Cu;
    SET_GPR_U32(ctx, 31, 0x1C9724u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1C971Cu, 0x1C9724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C9724u;
label_1c9724:
    // 0x1c9724: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x1c9724u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1c9728: 0x8fa30088  lw          $v1, 0x88($sp)
    ctx->pc = 0x1c9728u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c972c: 0xac601b60  sw          $zero, 0x1B60($v1)
    ctx->pc = 0x1c972cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 7008), GPR_U32(ctx, 0));
    // 0x1c9730: 0x8fa50088  lw          $a1, 0x88($sp)
    ctx->pc = 0x1c9730u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c9734: 0x90a40002  lbu         $a0, 0x2($a1)
    ctx->pc = 0x1c9734u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x1c9738: 0x24830001  addiu       $v1, $a0, 0x1
    ctx->pc = 0x1c9738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1c973c: 0xa0a30002  sb          $v1, 0x2($a1)
    ctx->pc = 0x1c973cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c9740u;
}
