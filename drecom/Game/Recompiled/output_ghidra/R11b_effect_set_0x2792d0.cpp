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

// Function: R11b_effect_set
// Address: 0x2792d0 - 0x279370
void R11b_effect_set_0x2792d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R11b_effect_set_0x2792d0");
#endif

    switch (ctx->pc) {
        case 0x2792e8u: goto label_2792e8;
        case 0x27930cu: goto label_27930c;
        case 0x279318u: goto label_279318;
        case 0x27933cu: goto label_27933c;
        case 0x279348u: goto label_279348;
        default: break;
    }

    ctx->pc = 0x2792d0u;

    // 0x2792d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2792d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2792d4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2792d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2792d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2792d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2792dc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2792dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2792e0: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x2792E0u;
    {
        const bool branch_taken_0x2792e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2792e0) {
            ctx->pc = 0x279350u;
            goto label_279350;
        }
    }
    ctx->pc = 0x2792E8u;
label_2792e8:
    // 0x2792e8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2792e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2792ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2792ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2792f0: 0x2442ef30  addiu       $v0, $v0, -0x10D0
    ctx->pc = 0x2792f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962992));
    // 0x2792f4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2792f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2792f8: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x2792f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x2792fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2792fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279300: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279300u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279304: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x279304u;
    SET_GPR_U32(ctx, 31, 0x27930Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x279304u, 0x27930Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27930Cu;
label_27930c:
    // 0x27930c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27930cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x279310: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x279310u;
    SET_GPR_U32(ctx, 31, 0x279318u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x279310u, 0x279318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279318u;
label_279318:
    // 0x279318: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x279318u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27931c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27931cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x279320: 0x2442ef30  addiu       $v0, $v0, -0x10D0
    ctx->pc = 0x279320u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294962992));
    // 0x279324: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x279324u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x279328: 0x24045a02  addiu       $a0, $zero, 0x5A02
    ctx->pc = 0x279328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23042));
    // 0x27932c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27932cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279330: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x279330u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x279334: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x279334u;
    SET_GPR_U32(ctx, 31, 0x27933Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x279334u, 0x27933Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27933Cu;
label_27933c:
    // 0x27933c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27933cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x279340: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x279340u;
    SET_GPR_U32(ctx, 31, 0x279348u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x279340u, 0x279348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x279348u;
label_279348:
    // 0x279348: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x279348u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27934c: 0x0  nop
    ctx->pc = 0x27934cu;
    // NOP
label_279350:
    // 0x279350: 0x2e03000b  sltiu       $v1, $s0, 0xB
    ctx->pc = 0x279350u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x279354: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x279354u;
    {
        const bool branch_taken_0x279354 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x279354) {
            ctx->pc = 0x2792E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2792e8;
        }
    }
    ctx->pc = 0x27935Cu;
    // 0x27935c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27935cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x279360: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x279360u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x279364: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x279364u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x279368: 0x3e00008  jr          $ra
    ctx->pc = 0x279368u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x279368u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x279370u;
}
