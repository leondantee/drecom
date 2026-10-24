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

// Function: entry_003777b8
// Address: 0x3777b8 - 0x3777ec
void entry_003777b8_0x3777b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003777b8_0x3777b8");
#endif

    ctx->pc = 0x3777b8u;

    // 0x3777b8: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3777b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    // 0x3777bc: 0x90230396  lbu         $v1, 0x396($at)
    ctx->pc = 0x3777bcu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x9A0396u));
    // 0x3777c0: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x3777c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3777c4: 0x223182b  sltu        $v1, $s1, $v1
    ctx->pc = 0x3777c4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3777c8: 0x1460ffb9  bnez        $v1, . + 4 + (-0x47 << 2)
    ctx->pc = 0x3777C8u;
    {
        const bool branch_taken_0x3777c8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3777c8) {
            ctx->pc = 0x3776B0u;
            return;
        }
    }
    ctx->pc = 0x3777D0u;
    // 0x3777d0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3777d0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3777d4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3777d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3777d8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3777d8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3777dc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3777dcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3777e0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x3777e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x3777e4: 0x3e00008  jr          $ra
    ctx->pc = 0x3777E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3777E4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3777ECu;
}
