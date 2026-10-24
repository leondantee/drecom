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
// Address: 0x12de40 - 0x12de70
void caseD_2_0x12de40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x12de40");
#endif

    switch (ctx->pc) {
        case 0x12de60u: goto label_12de60;
        default: break;
    }

    ctx->pc = 0x12de40u;

    // 0x12de40: 0x8fa20098  lw          $v0, 0x98($sp)
    ctx->pc = 0x12de40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12de44: 0x8fa40098  lw          $a0, 0x98($sp)
    ctx->pc = 0x12de44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12de48: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12de48u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12de4c: 0x24060013  addiu       $a2, $zero, 0x13
    ctx->pc = 0x12de4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x12de50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12de50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12de54: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12de54u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12de58: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12DE58u;
    SET_GPR_U32(ctx, 31, 0x12DE60u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12DE58u, 0x12DE60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12DE60u;
label_12de60:
    // 0x12de60: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x12de60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x12de64: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x12de64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x12de68: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x12de68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x12de6c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x12de6cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12de70u;
}
