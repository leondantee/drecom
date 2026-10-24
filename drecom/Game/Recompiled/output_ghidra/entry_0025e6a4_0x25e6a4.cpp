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

// Function: entry_0025e6a4
// Address: 0x25e6a4 - 0x25e6fc
void entry_0025e6a4_0x25e6a4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e6a4_0x25e6a4");
#endif

    switch (ctx->pc) {
        case 0x25e6b0u: goto label_25e6b0;
        case 0x25e6bcu: goto label_25e6bc;
        case 0x25e6ccu: goto label_25e6cc;
        default: break;
    }

    ctx->pc = 0x25e6a4u;

    // 0x25e6a4: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25e6a4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25e6a8: 0xc097a0c  jal         func_25E830
    ctx->pc = 0x25E6A8u;
    SET_GPR_U32(ctx, 31, 0x25E6B0u);
    ctx->pc = 0x25E830u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E830u, 0x25E6A8u, 0x25E6B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6B0u;
label_25e6b0:
    // 0x25e6b0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25e6b0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25e6b4: 0xc097dc0  jal         func_25F700
    ctx->pc = 0x25E6B4u;
    SET_GPR_U32(ctx, 31, 0x25E6BCu);
    ctx->pc = 0x25F700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25F700u, 0x25E6B4u, 0x25E6BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6BCu;
label_25e6bc:
    // 0x25e6bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x25e6bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25e6c0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x25e6c0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x25e6c4: 0xc0979c0  jal         func_25E700
    ctx->pc = 0x25E6C4u;
    SET_GPR_U32(ctx, 31, 0x25E6CCu);
    ctx->pc = 0x25E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25E700u, 0x25E6C4u, 0x25E6CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x25E6CCu;
label_25e6cc:
    // 0x25e6cc: 0x7bbf0080  lq          $ra, 0x80($sp)
    ctx->pc = 0x25e6ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x25e6d0: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x25e6d0u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x25e6d4: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x25e6d4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x25e6d8: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x25e6d8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x25e6dc: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x25e6dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x25e6e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x25e6e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x25e6e4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x25e6e4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x25e6e8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x25e6e8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x25e6ec: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x25e6ecu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x25e6f0: 0x27bd0230  addiu       $sp, $sp, 0x230
    ctx->pc = 0x25e6f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 560));
    // 0x25e6f4: 0x3e00008  jr          $ra
    ctx->pc = 0x25E6F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25E6F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x25E6FCu;
}
