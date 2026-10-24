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

// Function: entry_0027ec18
// Address: 0x27ec18 - 0x27ec58
void entry_0027ec18_0x27ec18(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ec18_0x27ec18");
#endif

    switch (ctx->pc) {
        case 0x27ec44u: goto label_27ec44;
        default: break;
    }

    ctx->pc = 0x27ec18u;

    // 0x27ec18: 0x2e020004  sltiu       $v0, $s0, 0x4
    ctx->pc = 0x27ec18u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x27ec1c: 0x1440ff3a  bnez        $v0, . + 4 + (-0xC6 << 2)
    ctx->pc = 0x27EC1Cu;
    {
        const bool branch_taken_0x27ec1c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27ec1c) {
            ctx->pc = 0x27E908u;
            return;
        }
    }
    ctx->pc = 0x27EC24u;
    // 0x27ec24: 0x2404041b  addiu       $a0, $zero, 0x41B
    ctx->pc = 0x27ec24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1051));
    // 0x27ec28: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27ec28u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27ec2c: 0x24451910  addiu       $a1, $v0, 0x1910
    ctx->pc = 0x27ec2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 6416));
    // 0x27ec30: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x27ec30u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ec34: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x27ec34u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ec38: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x27ec38u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x27ec3c: 0xc06371c  jal         func_18DC70
    ctx->pc = 0x27EC3Cu;
    SET_GPR_U32(ctx, 31, 0x27EC44u);
    ctx->pc = 0x18DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC70u, 0x27EC3Cu, 0x27EC44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27EC44u;
label_27ec44:
    // 0x27ec44: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27ec44u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27ec48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27ec48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27ec4c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x27ec4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x27ec50: 0x3e00008  jr          $ra
    ctx->pc = 0x27EC50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27EC50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27EC58u;
}
