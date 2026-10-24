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

// Function: entry_003653ac
// Address: 0x3653ac - 0x3653e4
void entry_003653ac_0x3653ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003653ac_0x3653ac");
#endif

    switch (ctx->pc) {
        case 0x3653d0u: goto label_3653d0;
        default: break;
    }

    ctx->pc = 0x3653acu;

    // 0x3653ac: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3653acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3653b0: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3653b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3653b4: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3653b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3653b8: 0x24450180  addiu       $a1, $v0, 0x180
    ctx->pc = 0x3653b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 384));
    // 0x3653bc: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3653bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3653c0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3653c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3653c4: 0x24478d18  addiu       $a3, $v0, -0x72E8
    ctx->pc = 0x3653c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937880));
    // 0x3653c8: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x3653C8u;
    SET_GPR_U32(ctx, 31, 0x3653D0u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x3653C8u, 0x3653D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3653D0u;
label_3653d0:
    // 0x3653d0: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3653D0u;
    {
        const bool branch_taken_0x3653d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3653d0) {
            ctx->pc = 0x3653E4u;
            return;
        }
    }
    ctx->pc = 0x3653D8u;
    // 0x3653d8: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3653d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3653dc: 0xc0da0f4  jal         func_3683D0
    ctx->pc = 0x3653DCu;
    SET_GPR_U32(ctx, 31, 0x3653E4u);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x3653DCu, 0x3653E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3653E4u;
}
