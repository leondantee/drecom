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
// Address: 0x199e00 - 0x199e30
void caseD_0_0x199e00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_0_0x199e00");
#endif

    switch (ctx->pc) {
        case 0x199e20u: goto label_199e20;
        default: break;
    }

    ctx->pc = 0x199e00u;

    // 0x199e00: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x199e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199e04: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x199e04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199e08: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x199e08u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x199e0c: 0x24063c06  addiu       $a2, $zero, 0x3C06
    ctx->pc = 0x199e0cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15366));
    // 0x199e10: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x199e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x199e14: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x199e14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x199e18: 0xc0965d0  jal         func_259740
    ctx->pc = 0x199E18u;
    SET_GPR_U32(ctx, 31, 0x199E20u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x199E18u, 0x199E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x199E20u;
label_199e20:
    // 0x199e20: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x199e20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x199e24: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x199e24u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x199e28: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x199e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x199e2c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x199e2cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x199e30u;
}
