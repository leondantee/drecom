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

// Function: entry_003653e4
// Address: 0x3653e4 - 0x36541c
void entry_003653e4_0x3653e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003653e4_0x3653e4");
#endif

    switch (ctx->pc) {
        case 0x365408u: goto label_365408;
        default: break;
    }

    ctx->pc = 0x3653e4u;

    // 0x3653e4: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x3653e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3653e8: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x3653e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3653ec: 0x8c420130  lw          $v0, 0x130($v0)
    ctx->pc = 0x3653ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 304)));
    // 0x3653f0: 0x244500c0  addiu       $a1, $v0, 0xC0
    ctx->pc = 0x3653f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 192));
    // 0x3653f4: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x3653f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3653f8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x3653f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x3653fc: 0x24478d18  addiu       $a3, $v0, -0x72E8
    ctx->pc = 0x3653fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937880));
    // 0x365400: 0xc06d02c  jal         func_1B40B0
    ctx->pc = 0x365400u;
    SET_GPR_U32(ctx, 31, 0x365408u);
    ctx->pc = 0x1B40B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B40B0u, 0x365400u, 0x365408u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x365408u;
label_365408:
    // 0x365408: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x365408u;
    {
        const bool branch_taken_0x365408 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x365408) {
            ctx->pc = 0x36541Cu;
            return;
        }
    }
    ctx->pc = 0x365410u;
    // 0x365410: 0x8fa40038  lw          $a0, 0x38($sp)
    ctx->pc = 0x365410u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x365414: 0xc0da0f4  jal         func_3683D0
    ctx->pc = 0x365414u;
    SET_GPR_U32(ctx, 31, 0x36541Cu);
    ctx->pc = 0x3683D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3683D0u, 0x365414u, 0x36541Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36541Cu;
}
