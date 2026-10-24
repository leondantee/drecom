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

// Function: entry_00303198
// Address: 0x303198 - 0x3031c0
void entry_00303198_0x303198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00303198_0x303198");
#endif

    switch (ctx->pc) {
        case 0x3031b8u: goto label_3031b8;
        default: break;
    }

    ctx->pc = 0x303198u;

    // 0x303198: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x303198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x30319c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x30319cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3031a0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x3031a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x3031a4: 0x24061404  addiu       $a2, $zero, 0x1404
    ctx->pc = 0x3031a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 5124));
    // 0x3031a8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x3031a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3031ac: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x3031acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x3031b0: 0xc0965d0  jal         func_259740
    ctx->pc = 0x3031B0u;
    SET_GPR_U32(ctx, 31, 0x3031B8u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x3031B0u, 0x3031B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3031B8u;
label_3031b8:
    // 0x3031b8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x3031B8u;
    {
        const bool branch_taken_0x3031b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3031b8) {
            ctx->pc = 0x3031E0u;
            return;
        }
    }
    ctx->pc = 0x3031C0u;
}
