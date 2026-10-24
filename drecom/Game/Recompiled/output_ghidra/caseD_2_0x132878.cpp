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
// Address: 0x132878 - 0x1328a8
void caseD_2_0x132878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x132878");
#endif

    switch (ctx->pc) {
        case 0x132898u: goto label_132898;
        default: break;
    }

    ctx->pc = 0x132878u;

    // 0x132878: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13287c: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x13287cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132880: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x132880u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x132884: 0x24060055  addiu       $a2, $zero, 0x55
    ctx->pc = 0x132884u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 85));
    // 0x132888: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x132888u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13288c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x13288cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x132890: 0xc0965d0  jal         func_259740
    ctx->pc = 0x132890u;
    SET_GPR_U32(ctx, 31, 0x132898u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x132890u, 0x132898u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132898u;
label_132898:
    // 0x132898: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x13289c: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x13289cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1328a0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1328a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1328a4: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1328a4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1328a8u;
}
