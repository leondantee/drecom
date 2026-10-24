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
// Address: 0x2d4d08 - 0x2d4d40
void caseD_2_0x2d4d08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_2_0x2d4d08");
#endif

    switch (ctx->pc) {
        case 0x2d4d28u: goto label_2d4d28;
        default: break;
    }

    ctx->pc = 0x2d4d08u;

    // 0x2d4d08: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d4d08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4d0c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4d10: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x2d4d10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x2d4d14: 0x24060a11  addiu       $a2, $zero, 0xA11
    ctx->pc = 0x2d4d14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2577));
    // 0x2d4d18: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x2d4d18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2d4d1c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x2d4d1cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x2d4d20: 0xc0965d0  jal         func_259740
    ctx->pc = 0x2D4D20u;
    SET_GPR_U32(ctx, 31, 0x2D4D28u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x2D4D20u, 0x2D4D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4D28u;
label_2d4d28:
    // 0x2d4d28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d4d28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4d2c: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x2d4d2cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    // 0x2d4d30: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2d4d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4d34: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x2d4d34u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x2d4d38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x2d4d38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x2d4d3c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x2d4d3cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2d4d40u;
}
