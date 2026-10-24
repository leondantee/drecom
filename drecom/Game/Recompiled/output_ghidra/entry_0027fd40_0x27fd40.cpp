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

// Function: entry_0027fd40
// Address: 0x27fd40 - 0x27fd80
void entry_0027fd40_0x27fd40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027fd40_0x27fd40");
#endif

    switch (ctx->pc) {
        case 0x27fd58u: goto label_27fd58;
        case 0x27fd60u: goto label_27fd60;
        default: break;
    }

    ctx->pc = 0x27fd40u;

    // 0x27fd40: 0x2e02010e  sltiu       $v0, $s0, 0x10E
    ctx->pc = 0x27fd40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)270) ? 1 : 0);
    // 0x27fd44: 0x1440ffef  bnez        $v0, . + 4 + (-0x11 << 2)
    ctx->pc = 0x27FD44u;
    {
        const bool branch_taken_0x27fd44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27fd44) {
            ctx->pc = 0x27FD04u;
            return;
        }
    }
    ctx->pc = 0x27FD4Cu;
    // 0x27fd4c: 0x72602628  paddub      $a0, $s3, $zero
    ctx->pc = 0x27fd4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 19), GPR_VEC(ctx, 0)));
    // 0x27fd50: 0xc096558  jal         func_259560
    ctx->pc = 0x27FD50u;
    SET_GPR_U32(ctx, 31, 0x27FD58u);
    ctx->pc = 0x259560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x259560u, 0x27FD50u, 0x27FD58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD58u;
label_27fd58:
    // 0x27fd58: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27FD58u;
    SET_GPR_U32(ctx, 31, 0x27FD60u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27FD58u, 0x27FD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27FD60u;
label_27fd60:
    // 0x27fd60: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x27fd60u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x27fd64: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x27fd64u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27fd68: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27fd68u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27fd6c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27fd6cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27fd70: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27fd70u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27fd74: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x27fd74u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x27fd78: 0x3e00008  jr          $ra
    ctx->pc = 0x27FD78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27FD78u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27FD80u;
}
