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
// Address: 0x364d0c - 0x364d3c
void caseD_0_0x364d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x364d0c");
#endif

    switch (ctx->pc) {
        case 0x364d2cu: goto label_364d2c;
        default: break;
    }

    ctx->pc = 0x364d0cu;

    // 0x364d0c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364d10: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364d14: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x364d14u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x364d18: 0x24061e05  addiu       $a2, $zero, 0x1E05
    ctx->pc = 0x364d18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7685));
    // 0x364d1c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x364d1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x364d20: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x364d20u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x364d24: 0xc0965d0  jal         func_259740
    ctx->pc = 0x364D24u;
    SET_GPR_U32(ctx, 31, 0x364D2Cu);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x364D24u, 0x364D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364D2Cu;
label_364d2c:
    // 0x364d2c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x364d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364d30: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x364d30u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x364d34: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x364d34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x364d38: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x364d38u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x364d3cu;
}
