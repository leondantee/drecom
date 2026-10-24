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

// Function: entry_00365df8
// Address: 0x365df8 - 0x365e30
void entry_00365df8_0x365df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00365df8_0x365df8");
#endif

    switch (ctx->pc) {
        case 0x365e1cu: goto label_365e1c;
        default: break;
    }

    ctx->pc = 0x365df8u;

    // 0x365df8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365df8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365dfc: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x365dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365e00: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x365e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x365e04: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x365e04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x365e08: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x365e08u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x365e0c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x365e0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x365e10: 0x24478d00  addiu       $a3, $v0, -0x7300
    ctx->pc = 0x365e10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937856));
    // 0x365e14: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x365E14u;
    SET_GPR_U32(ctx, 31, 0x365E1Cu);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x365E14u, 0x365E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E1Cu;
label_365e1c:
    // 0x365e1c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x365E1Cu;
    {
        const bool branch_taken_0x365e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365e1c) {
            ctx->pc = 0x365E30u;
            return;
        }
    }
    ctx->pc = 0x365E24u;
    // 0x365e24: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365e24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365e28: 0xc0da0f4  jal         func_3683D0
    ctx->pc = 0x365E28u;
    SET_GPR_U32(ctx, 31, 0x365E30u);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x365E28u, 0x365E30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365E30u;
}
