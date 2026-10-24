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

// Function: entry_00340980
// Address: 0x340980 - 0x3409e8
void entry_00340980_0x340980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340980_0x340980");
#endif

    switch (ctx->pc) {
        case 0x3409b0u: goto label_3409b0;
        case 0x3409d4u: goto label_3409d4;
        default: break;
    }

    ctx->pc = 0x340980u;

    // 0x340980: 0x2e03000d  sltiu       $v1, $s0, 0xD
    ctx->pc = 0x340980u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x340984: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x340984u;
    {
        const bool branch_taken_0x340984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340984) {
            ctx->pc = 0x340944u;
            return;
        }
    }
    ctx->pc = 0x34098Cu;
    // 0x34098c: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x34098cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340990: 0x2405000d  addiu       $a1, $zero, 0xD
    ctx->pc = 0x340990u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x340994: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x340994u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340998: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x340998u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34099c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x34099cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3409a0: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x3409a0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x3409a4: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x3409a4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3409a8: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x3409A8u;
    SET_GPR_U32(ctx, 31, 0x3409B0u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x3409A8u, 0x3409B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3409B0u;
label_3409b0:
    // 0x3409b0: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3409b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3409b4: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x3409b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3409b8: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x3409b8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3409bc: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x3409bcu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3409c0: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x3409c0u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3409c4: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x3409c4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x3409c8: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x3409c8u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x3409cc: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x3409CCu;
    SET_GPR_U32(ctx, 31, 0x3409D4u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x3409CCu, 0x3409D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3409D4u;
label_3409d4:
    // 0x3409d4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x3409d4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3409d8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3409d8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3409dc: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x3409dcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x3409e0: 0x3e00008  jr          $ra
    ctx->pc = 0x3409E0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3409E0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3409E8u;
}
