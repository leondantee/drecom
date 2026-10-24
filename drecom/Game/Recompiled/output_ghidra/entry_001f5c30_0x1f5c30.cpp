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

// Function: entry_001f5c30
// Address: 0x1f5c30 - 0x1f5c58
void entry_001f5c30_0x1f5c30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f5c30_0x1f5c30");
#endif

    switch (ctx->pc) {
        case 0x1f5c50u: goto label_1f5c50;
        default: break;
    }

    ctx->pc = 0x1f5c30u;

    // 0x1f5c30: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f5c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5c34: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f5c34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f5c38: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f5c38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f5c3c: 0x24060f0d  addiu       $a2, $zero, 0xF0D
    ctx->pc = 0x1f5c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3853));
    // 0x1f5c40: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f5c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5c44: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f5c44u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f5c48: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F5C48u;
    SET_GPR_U32(ctx, 31, 0x1F5C50u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F5C48u, 0x1F5C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F5C50u;
label_1f5c50:
    // 0x1f5c50: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F5C50u;
    {
        const bool branch_taken_0x1f5c50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f5c50) {
            ctx->pc = 0x1F5C78u;
            return;
        }
    }
    ctx->pc = 0x1F5C58u;
}
