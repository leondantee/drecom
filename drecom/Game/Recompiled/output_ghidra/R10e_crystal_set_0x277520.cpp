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

// Function: R10e_crystal_set
// Address: 0x277520 - 0x2775a8
void R10e_crystal_set_0x277520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R10e_crystal_set_0x277520");
#endif

    switch (ctx->pc) {
        case 0x277538u: goto label_277538;
        case 0x277544u: goto label_277544;
        case 0x277550u: goto label_277550;
        case 0x27757cu: goto label_27757c;
        case 0x277594u: goto label_277594;
        default: break;
    }

    ctx->pc = 0x277520u;

    // 0x277520: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277520u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x277524: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x277524u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x277528: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x277528u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27752c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x27752cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x277530: 0xc0c79e8  jal         func_31E7A0
    ctx->pc = 0x277530u;
    SET_GPR_U32(ctx, 31, 0x277538u);
    ctx->pc = 0x31E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7A0u, 0x277530u, 0x277538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277538u;
label_277538:
    // 0x277538: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x277538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x27753c: 0xc084964  jal         func_212590
    ctx->pc = 0x27753Cu;
    SET_GPR_U32(ctx, 31, 0x277544u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x27753Cu, 0x277544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277544u;
label_277544:
    // 0x277544: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x277544u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277548: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x277548u;
    {
        const bool branch_taken_0x277548 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277548) {
            ctx->pc = 0x277580u;
            goto label_277580;
        }
    }
    ctx->pc = 0x277550u;
label_277550:
    // 0x277550: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x277550u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x277554: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x277554u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x277558: 0x2442dac0  addiu       $v0, $v0, -0x2540
    ctx->pc = 0x277558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957760));
    // 0x27755c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x27755cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277560: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x277560u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x277564: 0x2442db10  addiu       $v0, $v0, -0x24F0
    ctx->pc = 0x277564u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957840));
    // 0x277568: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x277568u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x27756c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27756cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277570: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x277570u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x277574: 0xc0c7a48  jal         func_31E920
    ctx->pc = 0x277574u;
    SET_GPR_U32(ctx, 31, 0x27757Cu);
    ctx->pc = 0x31E920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E920u, 0x277574u, 0x27757Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27757Cu;
label_27757c:
    // 0x27757c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x27757cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_277580:
    // 0x277580: 0x2e020005  sltiu       $v0, $s0, 0x5
    ctx->pc = 0x277580u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)5) ? 1 : 0);
    // 0x277584: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x277584u;
    {
        const bool branch_taken_0x277584 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x277584) {
            ctx->pc = 0x277550u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277550;
        }
    }
    ctx->pc = 0x27758Cu;
    // 0x27758c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x27758Cu;
    SET_GPR_U32(ctx, 31, 0x277594u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x27758Cu, 0x277594u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277594u;
label_277594:
    // 0x277594: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x277594u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x277598: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x277598u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27759c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x27759cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2775a0: 0x3e00008  jr          $ra
    ctx->pc = 0x2775A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2775A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2775A8u;
}
