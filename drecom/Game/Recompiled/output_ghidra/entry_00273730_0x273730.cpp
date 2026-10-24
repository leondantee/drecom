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

// Function: entry_00273730
// Address: 0x273730 - 0x273778
void entry_00273730_0x273730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00273730_0x273730");
#endif

    switch (ctx->pc) {
        case 0x273760u: goto label_273760;
        default: break;
    }

    ctx->pc = 0x273730u;

    // 0x273730: 0x26020001  addiu       $v0, $s0, 0x1
    ctx->pc = 0x273730u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x273734: 0x2843c  dsll32      $s0, $v0, 16
    ctx->pc = 0x273734u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 16));
    // 0x273738: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x273738u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x27373c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27373cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x273740: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x273740u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x273744: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x273744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x273748: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x273748u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27374c: 0x284201e0  slti        $v0, $v0, 0x1E0
    ctx->pc = 0x27374cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)480) ? 1 : 0);
    // 0x273750: 0x1440ffa8  bnez        $v0, . + 4 + (-0x58 << 2)
    ctx->pc = 0x273750u;
    {
        const bool branch_taken_0x273750 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x273750) {
            ctx->pc = 0x2735F4u;
            return;
        }
    }
    ctx->pc = 0x273758u;
    // 0x273758: 0xc084934  jal         func_2124D0
    ctx->pc = 0x273758u;
    SET_GPR_U32(ctx, 31, 0x273760u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x273758u, 0x273760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x273760u;
label_273760:
    // 0x273760: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x273760u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x273764: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x273764u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x273768: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x273768u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27376c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x27376cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x273770: 0x3e00008  jr          $ra
    ctx->pc = 0x273770u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x273770u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x273778u;
}
