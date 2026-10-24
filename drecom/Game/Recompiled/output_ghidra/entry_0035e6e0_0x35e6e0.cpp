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

// Function: entry_0035e6e0
// Address: 0x35e6e0 - 0x35e728
void entry_0035e6e0_0x35e6e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0035e6e0_0x35e6e0");
#endif

    switch (ctx->pc) {
        case 0x35e700u: goto label_35e700;
        default: break;
    }

    ctx->pc = 0x35e6e0u;

    // 0x35e6e0: 0x213102a  slt         $v0, $s0, $s3
    ctx->pc = 0x35e6e0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 19)) ? 1 : 0);
    // 0x35e6e4: 0x1440ffa4  bnez        $v0, . + 4 + (-0x5C << 2)
    ctx->pc = 0x35E6E4u;
    {
        const bool branch_taken_0x35e6e4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x35e6e4) {
            ctx->pc = 0x35E578u;
            return;
        }
    }
    ctx->pc = 0x35E6ECu;
    // 0x35e6ec: 0x27a4007c  addiu       $a0, $sp, 0x7C
    ctx->pc = 0x35e6ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x35e6f0: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x35e6f0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35e6f4: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x35e6f4u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x35e6f8: 0xc040ad2  jal         func_102B48
    ctx->pc = 0x35E6F8u;
    SET_GPR_U32(ctx, 31, 0x35E700u);
    ctx->pc = 0x102B48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102B48u, 0x35E6F8u, 0x35E700u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x35E700u;
label_35e700:
    // 0x35e700: 0x7bbf0060  lq          $ra, 0x60($sp)
    ctx->pc = 0x35e700u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x35e704: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x35e704u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x35e708: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x35e708u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x35e70c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x35e70cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x35e710: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x35e710u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x35e714: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x35e714u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x35e718: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x35e718u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x35e71c: 0x27bd00c0  addiu       $sp, $sp, 0xC0
    ctx->pc = 0x35e71cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x35e720: 0x3e00008  jr          $ra
    ctx->pc = 0x35E720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x35E720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x35E728u;
}
