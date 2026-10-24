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

// Function: R10e_effect_set
// Address: 0x277440 - 0x2774e0
void R10e_effect_set_0x277440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10e_effect_set_0x277440");
#endif

    switch (ctx->pc) {
        case 0x277458u: goto label_277458;
        case 0x27747cu: goto label_27747c;
        case 0x277488u: goto label_277488;
        case 0x2774acu: goto label_2774ac;
        case 0x2774b8u: goto label_2774b8;
        default: break;
    }

    ctx->pc = 0x277440u;

    // 0x277440: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277440u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x277444: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x277444u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x277448: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x277448u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27744c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27744cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277450: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x277450u;
    {
        const bool branch_taken_0x277450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277450) {
            ctx->pc = 0x2774C0u;
            goto label_2774c0;
        }
    }
    ctx->pc = 0x277458u;
label_277458:
    // 0x277458: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x277458u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27745c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27745cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x277460: 0x2442da60  addiu       $v0, $v0, -0x25A0
    ctx->pc = 0x277460u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957664));
    // 0x277464: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x277464u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277468: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x277468u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x27746c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27746cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277470: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x277470u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277474: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x277474u;
    SET_GPR_U32(ctx, 31, 0x27747Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x277474u, 0x27747Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27747Cu;
label_27747c:
    // 0x27747c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27747cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x277480: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x277480u;
    SET_GPR_U32(ctx, 31, 0x277488u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x277480u, 0x277488u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277488u;
label_277488:
    // 0x277488: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x277488u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27748c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27748cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x277490: 0x2442da60  addiu       $v0, $v0, -0x25A0
    ctx->pc = 0x277490u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957664));
    // 0x277494: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x277494u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277498: 0x24045a02  addiu       $a0, $zero, 0x5A02
    ctx->pc = 0x277498u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23042));
    // 0x27749c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27749cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2774a0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2774a0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2774a4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2774A4u;
    SET_GPR_U32(ctx, 31, 0x2774ACu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2774A4u, 0x2774ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2774ACu;
label_2774ac:
    // 0x2774ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2774acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2774b0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2774B0u;
    SET_GPR_U32(ctx, 31, 0x2774B8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2774B0u, 0x2774B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2774B8u;
label_2774b8:
    // 0x2774b8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2774b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2774bc: 0x0  nop
    ctx->pc = 0x2774bcu;
    // NOP
label_2774c0:
    // 0x2774c0: 0x2e030006  sltiu       $v1, $s0, 0x6
    ctx->pc = 0x2774c0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2774c4: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2774C4u;
    {
        const bool branch_taken_0x2774c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2774c4) {
            ctx->pc = 0x277458u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277458;
        }
    }
    ctx->pc = 0x2774CCu;
    // 0x2774cc: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2774ccu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2774d0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2774d0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2774d4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2774d4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2774d8: 0x3e00008  jr          $ra
    ctx->pc = 0x2774D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2774D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2774E0u;
}
