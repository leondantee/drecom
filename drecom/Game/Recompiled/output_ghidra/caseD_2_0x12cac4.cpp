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
// Address: 0x12cac4 - 0x12caf8
void caseD_2_0x12cac4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x12cac4");
#endif

    switch (ctx->pc) {
        case 0x12cae4u: goto label_12cae4;
        default: break;
    }

    ctx->pc = 0x12cac4u;

    // 0x12cac4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12cac4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cac8: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x12cac8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12cacc: 0x8c650368  lw          $a1, 0x368($v1)
    ctx->pc = 0x12caccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 872)));
    // 0x12cad0: 0x24060030  addiu       $a2, $zero, 0x30
    ctx->pc = 0x12cad0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x12cad4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12cad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12cad8: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12cad8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12cadc: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12CADCu;
    SET_GPR_U32(ctx, 31, 0x12CAE4u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12CADCu, 0x12CAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12CAE4u;
label_12cae4:
    // 0x12cae4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x12cae4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x12cae8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x12cae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12caec: 0x90a30002  lbu         $v1, 0x2($a1)
    ctx->pc = 0x12caecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 2)));
    // 0x12caf0: 0x24640001  addiu       $a0, $v1, 0x1
    ctx->pc = 0x12caf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x12caf4: 0xa0a40002  sb          $a0, 0x2($a1)
    ctx->pc = 0x12caf4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x12caf8u;
}
