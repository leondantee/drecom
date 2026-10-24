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

// Function: caseD_3
// Address: 0x20bb74 - 0x20bbb0
void caseD_3_0x20bb74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x20bb74");
#endif

    switch (ctx->pc) {
        case 0x20bb94u: goto label_20bb94;
        case 0x20bba0u: goto label_20bba0;
        default: break;
    }

    ctx->pc = 0x20bb74u;

    // 0x20bb74: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x20bb74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bb78: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bb78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bb7c: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x20bb7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x20bb80: 0x2406780f  addiu       $a2, $zero, 0x780F
    ctx->pc = 0x20bb80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30735));
    // 0x20bb84: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x20bb84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x20bb88: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x20bb88u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x20bb8c: 0xc0965d0  jal         func_259740
    ctx->pc = 0x20BB8Cu;
    SET_GPR_U32(ctx, 31, 0x20BB94u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x20BB8Cu, 0x20BB94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BB94u;
label_20bb94:
    // 0x20bb94: 0x8fa40108  lw          $a0, 0x108($sp)
    ctx->pc = 0x20bb94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bb98: 0xc0974c8  jal         func_25D320
    ctx->pc = 0x20BB98u;
    SET_GPR_U32(ctx, 31, 0x20BBA0u);
    ctx->pc = 0x25D320u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25D320u, 0x20BB98u, 0x20BBA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x20BBA0u;
label_20bba0:
    // 0x20bba0: 0x8fa30108  lw          $v1, 0x108($sp)
    ctx->pc = 0x20bba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x20bba4: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x20bba4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x20bba8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x20bba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x20bbac: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x20bbacu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x20bbb0u;
}
