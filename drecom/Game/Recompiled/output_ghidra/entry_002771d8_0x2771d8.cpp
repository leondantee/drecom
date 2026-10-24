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

// Function: entry_002771d8
// Address: 0x2771d8 - 0x277218
void entry_002771d8_0x2771d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002771d8_0x2771d8");
#endif

    switch (ctx->pc) {
        case 0x277204u: goto label_277204;
        default: break;
    }

    ctx->pc = 0x2771d8u;

    // 0x2771d8: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x2771d8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x2771dc: 0x1440fff0  bnez        $v0, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2771DCu;
    {
        const bool branch_taken_0x2771dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2771dc) {
            ctx->pc = 0x2771A0u;
            return;
        }
    }
    ctx->pc = 0x2771E4u;
    // 0x2771e4: 0x2404001b  addiu       $a0, $zero, 0x1B
    ctx->pc = 0x2771e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x2771e8: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2771e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2771ec: 0x2445d2b0  addiu       $a1, $v0, -0x2D50
    ctx->pc = 0x2771ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955696));
    // 0x2771f0: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x2771f0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2771f4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2771f4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2771f8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2771f8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2771fc: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x2771FCu;
    SET_GPR_U32(ctx, 31, 0x277204u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x2771FCu, 0x277204u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277204u;
label_277204:
    // 0x277204: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x277204u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277208: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277208u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27720c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27720cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x277210: 0x3e00008  jr          $ra
    ctx->pc = 0x277210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x277210u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x277218u;
}
