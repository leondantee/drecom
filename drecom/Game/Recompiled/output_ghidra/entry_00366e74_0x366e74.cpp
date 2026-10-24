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

// Function: entry_00366e74
// Address: 0x366e74 - 0x366eac
void entry_00366e74_0x366e74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00366e74_0x366e74");
#endif

    switch (ctx->pc) {
        case 0x366e98u: goto label_366e98;
        default: break;
    }

    ctx->pc = 0x366e74u;

    // 0x366e74: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x366e74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366e78: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x366e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366e7c: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x366e7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x366e80: 0x244508c0  addiu       $a1, $v0, 0x8C0
    ctx->pc = 0x366e80u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2240));
    // 0x366e84: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x366e84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x366e88: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x366e88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x366e8c: 0x24478d24  addiu       $a3, $v0, -0x72DC
    ctx->pc = 0x366e8cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937892));
    // 0x366e90: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x366E90u;
    SET_GPR_U32(ctx, 31, 0x366E98u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x366E90u, 0x366E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x366E98u;
label_366e98:
    // 0x366e98: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x366E98u;
    {
        const bool branch_taken_0x366e98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x366e98) {
            ctx->pc = 0x366EACu;
            return;
        }
    }
    ctx->pc = 0x366EA0u;
    // 0x366ea0: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x366ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x366ea4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x366ea4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x366ea8: 0xa0640002  sb          $a0, 0x2($v1)
    ctx->pc = 0x366ea8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x366eacu;
}
