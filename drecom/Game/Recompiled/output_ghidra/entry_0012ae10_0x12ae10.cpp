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

// Function: entry_0012ae10
// Address: 0x12ae10 - 0x12ae38
void entry_0012ae10_0x12ae10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ae10_0x12ae10");
#endif

    switch (ctx->pc) {
        case 0x12ae30u: goto label_12ae30;
        default: break;
    }

    ctx->pc = 0x12ae10u;

    // 0x12ae10: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12ae10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ae14: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12ae14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ae18: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12ae18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12ae1c: 0x24063c01  addiu       $a2, $zero, 0x3C01
    ctx->pc = 0x12ae1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15361));
    // 0x12ae20: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12ae20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ae24: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12ae24u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12ae28: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12AE28u;
    SET_GPR_U32(ctx, 31, 0x12AE30u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12AE28u, 0x12AE30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE30u;
label_12ae30:
    // 0x12ae30: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x12AE30u;
    {
        const bool branch_taken_0x12ae30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ae30) {
            ctx->pc = 0x12AE80u;
            return;
        }
    }
    ctx->pc = 0x12AE38u;
}
