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

// Function: entry_0012aa90
// Address: 0x12aa90 - 0x12aab8
void entry_0012aa90_0x12aa90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012aa90_0x12aa90");
#endif

    switch (ctx->pc) {
        case 0x12aab0u: goto label_12aab0;
        default: break;
    }

    ctx->pc = 0x12aa90u;

    // 0x12aa90: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x12aa90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12aa94: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x12aa94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x12aa98: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12aa98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12aa9c: 0x24063c01  addiu       $a2, $zero, 0x3C01
    ctx->pc = 0x12aa9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15361));
    // 0x12aaa0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12aaa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12aaa4: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12aaa4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12aaa8: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12AAA8u;
    SET_GPR_U32(ctx, 31, 0x12AAB0u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12AAA8u, 0x12AAB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AAB0u;
label_12aab0:
    // 0x12aab0: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12AAB0u;
    {
        const bool branch_taken_0x12aab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12aab0) {
            ctx->pc = 0x12AB00u;
            return;
        }
    }
    ctx->pc = 0x12AAB8u;
}
