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

// Function: R119_effect_set
// Address: 0x278f40 - 0x278fe0
void R119_effect_set_0x278f40(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R119_effect_set_0x278f40");
#endif

    switch (ctx->pc) {
        case 0x278f58u: goto label_278f58;
        case 0x278f7cu: goto label_278f7c;
        case 0x278f88u: goto label_278f88;
        case 0x278facu: goto label_278fac;
        case 0x278fb8u: goto label_278fb8;
        default: break;
    }

    ctx->pc = 0x278f40u;

    // 0x278f40: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x278f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x278f44: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x278f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x278f48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278f48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x278f4c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x278f4cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278f50: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x278F50u;
    {
        const bool branch_taken_0x278f50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278f50) {
            ctx->pc = 0x278FC0u;
            goto label_278fc0;
        }
    }
    ctx->pc = 0x278F58u;
label_278f58:
    // 0x278f58: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x278f58u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x278f5c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x278f60: 0x2442e860  addiu       $v0, $v0, -0x17A0
    ctx->pc = 0x278f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961248));
    // 0x278f64: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x278f64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278f68: 0x24045700  addiu       $a0, $zero, 0x5700
    ctx->pc = 0x278f68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22272));
    // 0x278f6c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x278f6cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278f70: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x278f70u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278f74: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x278F74u;
    SET_GPR_U32(ctx, 31, 0x278F7Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x278F74u, 0x278F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F7Cu;
label_278f7c:
    // 0x278f7c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x278f7cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x278f80: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x278F80u;
    SET_GPR_U32(ctx, 31, 0x278F88u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x278F80u, 0x278F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278F88u;
label_278f88:
    // 0x278f88: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x278f88u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x278f8c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278f8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x278f90: 0x2442e860  addiu       $v0, $v0, -0x17A0
    ctx->pc = 0x278f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961248));
    // 0x278f94: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x278f94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278f98: 0x24047300  addiu       $a0, $zero, 0x7300
    ctx->pc = 0x278f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29440));
    // 0x278f9c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x278f9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278fa0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x278fa0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278fa4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x278FA4u;
    SET_GPR_U32(ctx, 31, 0x278FACu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x278FA4u, 0x278FACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278FACu;
label_278fac:
    // 0x278fac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x278facu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x278fb0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x278FB0u;
    SET_GPR_U32(ctx, 31, 0x278FB8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x278FB0u, 0x278FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278FB8u;
label_278fb8:
    // 0x278fb8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x278fb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x278fbc: 0x0  nop
    ctx->pc = 0x278fbcu;
    // NOP
label_278fc0:
    // 0x278fc0: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x278fc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x278fc4: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x278FC4u;
    {
        const bool branch_taken_0x278fc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x278fc4) {
            ctx->pc = 0x278F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278f58;
        }
    }
    ctx->pc = 0x278FCCu;
    // 0x278fcc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x278fccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278fd0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278fd0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278fd4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x278fd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x278fd8: 0x3e00008  jr          $ra
    ctx->pc = 0x278FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278FE0u;
}
