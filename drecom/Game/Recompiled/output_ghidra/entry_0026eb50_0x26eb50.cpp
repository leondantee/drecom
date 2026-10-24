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

// Function: entry_0026eb50
// Address: 0x26eb50 - 0x26eb88
void entry_0026eb50_0x26eb50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026eb50_0x26eb50");
#endif

    switch (ctx->pc) {
        case 0x26eb80u: goto label_26eb80;
        default: break;
    }

    ctx->pc = 0x26eb50u;

    // 0x26eb50: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26eb50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb54: 0x8c421b64  lw          $v0, 0x1B64($v0)
    ctx->pc = 0x26eb54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 7012)));
    // 0x26eb58: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x26EB58u;
    {
        const bool branch_taken_0x26eb58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb58) {
            ctx->pc = 0x26EB88u;
            return;
        }
    }
    ctx->pc = 0x26EB60u;
    // 0x26eb60: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x26eb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb64: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x26eb64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x26eb68: 0x8c450368  lw          $a1, 0x368($v0)
    ctx->pc = 0x26eb68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 872)));
    // 0x26eb6c: 0x24060079  addiu       $a2, $zero, 0x79
    ctx->pc = 0x26eb6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 121));
    // 0x26eb70: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x26eb70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x26eb74: 0x24080100  addiu       $t0, $zero, 0x100
    ctx->pc = 0x26eb74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x26eb78: 0xc0965d0  jal         func_259740
    ctx->pc = 0x26EB78u;
    SET_GPR_U32(ctx, 31, 0x26EB80u);
    ctx->pc = 0x259740u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259740u, 0x26EB78u, 0x26EB80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26EB80u;
label_26eb80:
    // 0x26eb80: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x26EB80u;
    {
        const bool branch_taken_0x26eb80 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26eb80) {
            ctx->pc = 0x26EBA8u;
            return;
        }
    }
    ctx->pc = 0x26EB88u;
}
