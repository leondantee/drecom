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

// Function: caseD_0
// Address: 0x132c80 - 0x132cb0
void caseD_0_0x132c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x132c80");
#endif

    switch (ctx->pc) {
        case 0x132ca0u: goto label_132ca0;
        default: break;
    }

    ctx->pc = 0x132c80u;

    // 0x132c80: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x132c80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132c84: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x132c84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132c88: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x132c88u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x132c8c: 0x2406000f  addiu       $a2, $zero, 0xF
    ctx->pc = 0x132c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x132c90: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x132c90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x132c94: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x132c94u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x132c98: 0xc0965d0  jal         func_259740
    ctx->pc = 0x132C98u;
    SET_GPR_U32(ctx, 31, 0x132CA0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x132C98u, 0x132CA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x132CA0u;
label_132ca0:
    // 0x132ca0: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x132ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x132ca4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x132ca4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x132ca8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x132ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x132cac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x132cacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x132cb0u;
}
