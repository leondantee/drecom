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

// Function: Om8b_R1_end
// Address: 0x340920 - 0x3409e8
void Om8b_R1_end_0x340920(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Om8b_R1_end_0x340920");
#endif

    switch (ctx->pc) {
        case 0x340944u: goto label_340944;
        case 0x340968u: goto label_340968;
        case 0x340978u: goto label_340978;
        case 0x3409b0u: goto label_3409b0;
        case 0x3409d4u: goto label_3409d4;
        default: break;
    }

    ctx->pc = 0x340920u;

    // 0x340920: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x340920u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x340924: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x340924u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x340928: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x340928u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34092c: 0xafa40028  sw          $a0, 0x28($sp)
    ctx->pc = 0x34092cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 4));
    // 0x340930: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x340930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340934: 0xa46010a6  sh          $zero, 0x10A6($v1)
    ctx->pc = 0x340934u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4262), (uint16_t)GPR_U32(ctx, 0));
    // 0x340938: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x340938u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x34093c: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x34093Cu;
    {
        const bool branch_taken_0x34093c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34093c) {
            ctx->pc = 0x340980u;
            goto label_340980;
        }
    }
    ctx->pc = 0x340944u;
label_340944:
    // 0x340944: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x340944u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x340948: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x340948u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x34094c: 0x70003628  paddub      $a2, $zero, $zero
    ctx->pc = 0x34094cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340950: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x340950u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340954: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x340954u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x340958: 0x240900fe  addiu       $t1, $zero, 0xFE
    ctx->pc = 0x340958u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 254));
    // 0x34095c: 0x240a0080  addiu       $t2, $zero, 0x80
    ctx->pc = 0x34095cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x340960: 0xc0cfd1c  jal         func_33F470
    ctx->pc = 0x340960u;
    SET_GPR_U32(ctx, 31, 0x340968u);
    ctx->pc = 0x33F470u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F470u, 0x340960u, 0x340968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340968u;
label_340968:
    // 0x340968: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x340968u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x34096c: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x34096cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x340970: 0xc0cfcbc  jal         func_33F2F0
    ctx->pc = 0x340970u;
    SET_GPR_U32(ctx, 31, 0x340978u);
    ctx->pc = 0x33F2F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x33F2F0u, 0x340970u, 0x340978u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x340978u;
label_340978:
    // 0x340978: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x340978u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x34097c: 0x0  nop
    ctx->pc = 0x34097cu;
    // NOP
label_340980:
    // 0x340980: 0x2e03000d  sltiu       $v1, $s0, 0xD
    ctx->pc = 0x340980u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)13) ? 1 : 0);
    // 0x340984: 0x1460ffef  bnez        $v1, . + 4 + (-0x11 << 2)
    ctx->pc = 0x340984u;
    {
        const bool branch_taken_0x340984 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x340984) {
            ctx->pc = 0x340944u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_340944;
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
