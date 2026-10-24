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

// Function: caseD_12
// Address: 0x146f68 - 0x146f98
void caseD_12_0x146f68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_12_0x146f68");
#endif

    switch (ctx->pc) {
        case 0x146f88u: goto label_146f88;
        default: break;
    }

    ctx->pc = 0x146f68u;

    // 0x146f68: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146f68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146f6c: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x146f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146f70: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x146f70u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x146f74: 0x24060017  addiu       $a2, $zero, 0x17
    ctx->pc = 0x146f74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 23));
    // 0x146f78: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x146f78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x146f7c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x146f7cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x146f80: 0xc0965d0  jal         func_259740
    ctx->pc = 0x146F80u;
    SET_GPR_U32(ctx, 31, 0x146F88u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x146F80u, 0x146F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x146F88u;
label_146f88:
    // 0x146f88: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x146f88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x146f8c: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x146f8cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x146f90: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x146f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x146f94: 0xa0820002  sb          $v0, 0x2($a0)
    ctx->pc = 0x146f94u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x146f98u;
}
