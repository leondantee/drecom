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

// Function: entry_001f3bd0
// Address: 0x1f3bd0 - 0x1f3bf8
void entry_001f3bd0_0x1f3bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f3bd0_0x1f3bd0");
#endif

    switch (ctx->pc) {
        case 0x1f3bf0u: goto label_1f3bf0;
        default: break;
    }

    ctx->pc = 0x1f3bd0u;

    // 0x1f3bd0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1f3bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3bd4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x1f3bd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f3bd8: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x1f3bd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x1f3bdc: 0x2406780b  addiu       $a2, $zero, 0x780B
    ctx->pc = 0x1f3bdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 30731));
    // 0x1f3be0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x1f3be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f3be4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x1f3be4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x1f3be8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x1F3BE8u;
    SET_GPR_U32(ctx, 31, 0x1F3BF0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x1F3BE8u, 0x1F3BF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F3BF0u;
label_1f3bf0:
    // 0x1f3bf0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1F3BF0u;
    {
        const bool branch_taken_0x1f3bf0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f3bf0) {
            ctx->pc = 0x1F3C58u;
            return;
        }
    }
    ctx->pc = 0x1F3BF8u;
}
