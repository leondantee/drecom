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

// Function: entry_00174118
// Address: 0x174118 - 0x174148
void entry_00174118_0x174118(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00174118_0x174118");
#endif

    ctx->pc = 0x174118u;

    // 0x174118: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x174118u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17411c: 0x8c22bb40  lw          $v0, -0x44C0($at)
    ctx->pc = 0x17411cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x47BB40u));
    // 0x174120: 0x202102b  sltu        $v0, $s0, $v0
    ctx->pc = 0x174120u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x174124: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x174124u;
    {
        const bool branch_taken_0x174124 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x174124) {
            ctx->pc = 0x1740E0u;
            return;
        }
    }
    ctx->pc = 0x17412Cu;
    // 0x17412c: 0x72401628  paddub      $v0, $s2, $zero
    ctx->pc = 0x17412cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x174130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x174130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x174134: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x174134u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x174138: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x174138u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17413c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17413cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x174140: 0x3e00008  jr          $ra
    ctx->pc = 0x174140u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x174140u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x174148u;
}
