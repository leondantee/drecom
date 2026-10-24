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

// Function: entry_00272970
// Address: 0x272970 - 0x2729c4
void entry_00272970_0x272970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00272970_0x272970");
#endif

    switch (ctx->pc) {
        case 0x2729a0u: goto label_2729a0;
        default: break;
    }

    ctx->pc = 0x272970u;

    // 0x272970: 0x26220001  addiu       $v0, $s1, 0x1
    ctx->pc = 0x272970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x272974: 0x28c3c  dsll32      $s1, $v0, 16
    ctx->pc = 0x272974u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) << (32 + 16));
    // 0x272978: 0x118c3f  dsra32      $s1, $s1, 16
    ctx->pc = 0x272978u;
    SET_GPR_S64(ctx, 17, GPR_S64(ctx, 17) >> (32 + 16));
    // 0x27297c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x27297cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x272980: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x272980u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x272984: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x272984u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x272988: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x272988u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x27298c: 0x28420154  slti        $v0, $v0, 0x154
    ctx->pc = 0x27298cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)340) ? 1 : 0);
    // 0x272990: 0x1440ff99  bnez        $v0, . + 4 + (-0x67 << 2)
    ctx->pc = 0x272990u;
    {
        const bool branch_taken_0x272990 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x272990) {
            ctx->pc = 0x2727F8u;
            return;
        }
    }
    ctx->pc = 0x272998u;
    // 0x272998: 0xc084934  jal         func_2124D0
    ctx->pc = 0x272998u;
    SET_GPR_U32(ctx, 31, 0x2729A0u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x272998u, 0x2729A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2729A0u;
label_2729a0:
    // 0x2729a0: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x2729a0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2729a4: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x2729a4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2729a8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x2729a8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2729ac: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x2729acu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2729b0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2729b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2729b4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2729b4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2729b8: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2729b8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x2729bc: 0x3e00008  jr          $ra
    ctx->pc = 0x2729BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2729BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2729C4u;
}
