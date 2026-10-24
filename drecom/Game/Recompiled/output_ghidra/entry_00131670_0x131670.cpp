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

// Function: entry_00131670
// Address: 0x131670 - 0x131698
void entry_00131670_0x131670(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00131670_0x131670");
#endif

    switch (ctx->pc) {
        case 0x131690u: goto label_131690;
        default: break;
    }

    ctx->pc = 0x131670u;

    // 0x131670: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x131670u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131674: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x131674u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x131678: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x131678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x13167c: 0x24060036  addiu       $a2, $zero, 0x36
    ctx->pc = 0x13167cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 54));
    // 0x131680: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x131680u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x131684: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x131684u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x131688: 0xc0965d0  jal         func_259740
    ctx->pc = 0x131688u;
    SET_GPR_U32(ctx, 31, 0x131690u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x131688u, 0x131690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x131690u;
label_131690:
    // 0x131690: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x131690u;
    {
        const bool branch_taken_0x131690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x131690) {
            ctx->pc = 0x1316B8u;
            return;
        }
    }
    ctx->pc = 0x131698u;
}
