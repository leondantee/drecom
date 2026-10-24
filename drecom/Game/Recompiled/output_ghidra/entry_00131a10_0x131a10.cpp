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

// Function: entry_00131a10
// Address: 0x131a10 - 0x131a38
void entry_00131a10_0x131a10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131a10_0x131a10");
#endif

    switch (ctx->pc) {
        case 0x131a30u: goto label_131a30;
        default: break;
    }

    ctx->pc = 0x131a10u;

    // 0x131a10: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131a14: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131a18: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131a18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x131a1c: 0x24060038  addiu       $a2, $zero, 0x38
    ctx->pc = 0x131a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 56));
    // 0x131a20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131a20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131a24: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x131a24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131a28: 0xc0965d0  jal         func_259740
    ctx->pc = 0x131A28u;
    SET_GPR_U32(ctx, 31, 0x131A30u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131A28u, 0x131A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131A30u;
label_131a30:
    // 0x131a30: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x131A30u;
    {
        const bool branch_taken_0x131a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131a30) {
            ctx->pc = 0x131AA8u;
            return;
        }
    }
    ctx->pc = 0x131A38u;
}
