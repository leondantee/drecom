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
// Address: 0x2deed8 - 0x2def08
void caseD_6_0x2deed8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_6_0x2deed8");
#endif

    switch (ctx->pc) {
        case 0x2deef8u: goto label_2deef8;
        default: break;
    }

    ctx->pc = 0x2deed8u;

    // 0x2deed8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2deed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2deedc: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x2deedcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2deee0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2deee0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2deee4: 0x2406002e  addiu       $a2, $zero, 0x2E
    ctx->pc = 0x2deee4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 46));
    // 0x2deee8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2deee8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2deeec: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2deeecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2deef0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2DEEF0u;
    SET_GPR_U32(ctx, 31, 0x2DEEF8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2DEEF0u, 0x2DEEF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DEEF8u;
label_2deef8:
    // 0x2deef8: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x2deef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2deefc: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2deefcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2def00: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2def00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2def04: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2def04u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2def08u;
}
