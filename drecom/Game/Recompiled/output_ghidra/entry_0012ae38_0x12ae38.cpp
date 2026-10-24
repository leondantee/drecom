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

// Function: entry_0012ae38
// Address: 0x12ae38 - 0x12ae60
void entry_0012ae38_0x12ae38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012ae38_0x12ae38");
#endif

    switch (ctx->pc) {
        case 0x12ae58u: goto label_12ae58;
        default: break;
    }

    ctx->pc = 0x12ae38u;

    // 0x12ae38: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x12ae38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ae3c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x12ae3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x12ae40: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x12ae40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x12ae44: 0x24063c02  addiu       $a2, $zero, 0x3C02
    ctx->pc = 0x12ae44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 15362));
    // 0x12ae48: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x12ae48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x12ae4c: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x12ae4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x12ae50: 0xc0965d0  jal         func_259740
    ctx->pc = 0x12AE50u;
    SET_GPR_U32(ctx, 31, 0x12AE58u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x12AE50u, 0x12AE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x12AE58u;
label_12ae58:
    // 0x12ae58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x12AE58u;
    {
        const bool branch_taken_0x12ae58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12ae58) {
            ctx->pc = 0x12AE80u;
            return;
        }
    }
    ctx->pc = 0x12AE60u;
}
