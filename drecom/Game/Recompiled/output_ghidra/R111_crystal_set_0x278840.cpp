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

// Function: R111_crystal_set
// Address: 0x278840 - 0x2788c8
void R111_crystal_set_0x278840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R111_crystal_set_0x278840");
#endif

    switch (ctx->pc) {
        case 0x278858u: goto label_278858;
        case 0x278864u: goto label_278864;
        case 0x278870u: goto label_278870;
        case 0x27889cu: goto label_27889c;
        case 0x2788b4u: goto label_2788b4;
        default: break;
    }

    ctx->pc = 0x278840u;

    // 0x278840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x278840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x278844: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x278844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x278848: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x278848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27884c: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x27884cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x278850: 0xc0c79e8  jal         func_31E7A0
    ctx->pc = 0x278850u;
    SET_GPR_U32(ctx, 31, 0x278858u);
    ctx->pc = 0x31E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7A0u, 0x278850u, 0x278858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278858u;
label_278858:
    // 0x278858: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x278858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27885c: 0xc084964  jal         func_212590
    ctx->pc = 0x27885Cu;
    SET_GPR_U32(ctx, 31, 0x278864u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27885Cu, 0x278864u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278864u;
label_278864:
    // 0x278864: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x278864u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278868: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x278868u;
    {
        const bool branch_taken_0x278868 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x278868) {
            ctx->pc = 0x2788A0u;
            goto label_2788a0;
        }
    }
    ctx->pc = 0x278870u;
label_278870:
    // 0x278870: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x278870u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x278874: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278874u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x278878: 0x2442e1c0  addiu       $v0, $v0, -0x1E40
    ctx->pc = 0x278878u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959552));
    // 0x27887c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x27887cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278880: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x278884: 0x2442e260  addiu       $v0, $v0, -0x1DA0
    ctx->pc = 0x278884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959712));
    // 0x278888: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x278888u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27888c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27888cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278890: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x278890u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x278894: 0xc0c7a48  jal         func_31E920
    ctx->pc = 0x278894u;
    SET_GPR_U32(ctx, 31, 0x27889Cu);
    ctx->pc = 0x31E920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E920u, 0x278894u, 0x27889Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27889Cu;
label_27889c:
    // 0x27889c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27889cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_2788a0:
    // 0x2788a0: 0x2e02000a  sltiu       $v0, $s0, 0xA
    ctx->pc = 0x2788a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)10) ? 1 : 0);
    // 0x2788a4: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x2788A4u;
    {
        const bool branch_taken_0x2788a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2788a4) {
            ctx->pc = 0x278870u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_278870;
        }
    }
    ctx->pc = 0x2788ACu;
    // 0x2788ac: 0xc084934  jal         func_2124D0
    ctx->pc = 0x2788ACu;
    SET_GPR_U32(ctx, 31, 0x2788B4u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x2788ACu, 0x2788B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2788B4u;
label_2788b4:
    // 0x2788b4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2788b4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2788b8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2788b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2788bc: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2788bcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2788c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2788C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2788C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2788C8u;
}
