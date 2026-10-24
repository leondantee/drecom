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

// Function: entry_0027acb0
// Address: 0x27acb0 - 0x27ace4
void entry_0027acb0_0x27acb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027acb0_0x27acb0");
#endif

    switch (ctx->pc) {
        case 0x27acc8u: goto label_27acc8;
        default: break;
    }

    ctx->pc = 0x27acb0u;

    // 0x27acb0: 0x92020062  lbu         $v0, 0x62($s0)
    ctx->pc = 0x27acb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 98)));
    // 0x27acb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27acb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x27acb8: 0x1440ffd5  bnez        $v0, . + 4 + (-0x2B << 2)
    ctx->pc = 0x27ACB8u;
    {
        const bool branch_taken_0x27acb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27acb8) {
            ctx->pc = 0x27AC10u;
            return;
        }
    }
    ctx->pc = 0x27ACC0u;
    // 0x27acc0: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27ACC0u;
    SET_GPR_U32(ctx, 31, 0x27ACC8u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27ACC0u, 0x27ACC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27ACC8u;
label_27acc8:
    // 0x27acc8: 0x7bbf0030  lq          $ra, 0x30($sp)
    ctx->pc = 0x27acc8u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x27accc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x27acccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27acd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x27acd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27acd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x27acd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27acd8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x27acd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x27acdc: 0x3e00008  jr          $ra
    ctx->pc = 0x27ACDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27ACDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27ACE4u;
}
