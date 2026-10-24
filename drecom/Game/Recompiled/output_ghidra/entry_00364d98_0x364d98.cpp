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

// Function: entry_00364d98
// Address: 0x364d98 - 0x364dd0
void entry_00364d98_0x364d98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00364d98_0x364d98");
#endif

    switch (ctx->pc) {
        case 0x364dbcu: goto label_364dbc;
        default: break;
    }

    ctx->pc = 0x364d98u;

    // 0x364d98: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364d9c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x364d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364da0: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x364da0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x364da4: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x364da4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x364da8: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x364da8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x364dac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x364dacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x364db0: 0x24478d00  addiu       $a3, $v0, -0x7300
    ctx->pc = 0x364db0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937856));
    // 0x364db4: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x364DB4u;
    SET_GPR_U32(ctx, 31, 0x364DBCu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x364DB4u, 0x364DBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364DBCu;
label_364dbc:
    // 0x364dbc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x364DBCu;
    {
        const bool branch_taken_0x364dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x364dbc) {
            ctx->pc = 0x364DD0u;
            return;
        }
    }
    ctx->pc = 0x364DC4u;
    // 0x364dc4: 0x8fa40048  lw          $a0, 0x48($sp)
    ctx->pc = 0x364dc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x364dc8: 0xc0da0f4  jal         func_3683D0
    ctx->pc = 0x364DC8u;
    SET_GPR_U32(ctx, 31, 0x364DD0u);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x364DC8u, 0x364DD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x364DD0u;
}
