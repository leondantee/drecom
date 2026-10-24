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

// Function: caseD_1
// Address: 0x2d4c1c - 0x2d4c60
void caseD_1_0x2d4c1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x2d4c1c");
#endif

    switch (ctx->pc) {
        case 0x2d4c50u: goto label_2d4c50;
        default: break;
    }

    ctx->pc = 0x2d4c1cu;

    // 0x2d4c1c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d4c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4c20: 0x84421278  lh          $v0, 0x1278($v0)
    ctx->pc = 0x2d4c20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4728)));
    // 0x2d4c24: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x2D4C24u;
    {
        const bool branch_taken_0x2d4c24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2d4c24) {
            ctx->pc = 0x2D4C60u;
            return;
        }
    }
    ctx->pc = 0x2D4C2Cu;
    // 0x2d4c2c: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d4c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4c30: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x2d4c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x2d4c34: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x2d4c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4c38: 0x24450200  addiu       $a1, $v0, 0x200
    ctx->pc = 0x2d4c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 512));
    // 0x2d4c3c: 0x27a60010  addiu       $a2, $sp, 0x10
    ctx->pc = 0x2d4c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x2d4c40: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2d4c40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2d4c44: 0x24478c1c  addiu       $a3, $v0, -0x73E4
    ctx->pc = 0x2d4c44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937628));
    // 0x2d4c48: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x2D4C48u;
    SET_GPR_U32(ctx, 31, 0x2D4C50u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x2D4C48u, 0x2D4C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2D4C50u;
label_2d4c50:
    // 0x2d4c50: 0x21c3c  dsll32      $v1, $v0, 16
    ctx->pc = 0x2d4c50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2d4c54: 0x31c3f  dsra32      $v1, $v1, 16
    ctx->pc = 0x2d4c54u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 3) >> (32 + 16));
    // 0x2d4c58: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2d4c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2d4c5c: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2d4c5cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2d4c60u;
}
