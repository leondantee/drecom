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

// Function: entry_0012ade8
// Address: 0x12ade8 - 0x12ae10
void entry_0012ade8_0x12ade8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ade8_0x12ade8");
#endif

    switch (ctx->pc) {
        case 0x12ae08u: goto label_12ae08;
        default: break;
    }

    ctx->pc = 0x12ade8u;

    // 0x12ade8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12ade8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12adec: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12adecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12adf0: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12adf0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12adf4: 0x24063c00  addiu       $a2, $zero, 0x3C00
    ctx->pc = 0x12adf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15360));
    // 0x12adf8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12adf8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12adfc: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12adfcu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12ae00: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12AE00u;
    SET_GPR_U32(ctx, 31, 0x12AE08u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12AE00u, 0x12AE08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE08u;
label_12ae08:
    // 0x12ae08: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x12AE08u;
    {
        const bool branch_taken_0x12ae08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ae08) {
            ctx->pc = 0x12AE80u;
            return;
        }
    }
    ctx->pc = 0x12AE10u;
}
