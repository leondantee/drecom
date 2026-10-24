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

// Function: R110_effect_set
// Address: 0x277950 - 0x2779f4
void R110_effect_set_0x277950(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R110_effect_set_0x277950");
#endif

    switch (ctx->pc) {
        case 0x277968u: goto label_277968;
        case 0x27798cu: goto label_27798c;
        case 0x277998u: goto label_277998;
        case 0x2779bcu: goto label_2779bc;
        case 0x2779c8u: goto label_2779c8;
        default: break;
    }

    ctx->pc = 0x277950u;

    // 0x277950: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x277950u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x277954: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x277954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x277958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x277958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x27795c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x27795cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277960: 0x1000001b  b           . + 4 + (0x1B << 2)
    ctx->pc = 0x277960u;
    {
        const bool branch_taken_0x277960 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x277960) {
            ctx->pc = 0x2779D0u;
            goto label_2779d0;
        }
    }
    ctx->pc = 0x277968u;
label_277968:
    // 0x277968: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x277968u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27796c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27796cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x277970: 0x2442de40  addiu       $v0, $v0, -0x21C0
    ctx->pc = 0x277970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958656));
    // 0x277974: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x277974u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x277978: 0x24045701  addiu       $a0, $zero, 0x5701
    ctx->pc = 0x277978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22273));
    // 0x27797c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x27797cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277980: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x277980u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x277984: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x277984u;
    SET_GPR_U32(ctx, 31, 0x27798Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x277984u, 0x27798Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27798Cu;
label_27798c:
    // 0x27798c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27798cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x277990: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x277990u;
    SET_GPR_U32(ctx, 31, 0x277998u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x277990u, 0x277998u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x277998u;
label_277998:
    // 0x277998: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x277998u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x27799c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x27799cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2779a0: 0x2442de40  addiu       $v0, $v0, -0x21C0
    ctx->pc = 0x2779a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958656));
    // 0x2779a4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2779a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2779a8: 0x24045a01  addiu       $a0, $zero, 0x5A01
    ctx->pc = 0x2779a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 23041));
    // 0x2779ac: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2779acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2779b0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2779b0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2779b4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2779B4u;
    SET_GPR_U32(ctx, 31, 0x2779BCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2779B4u, 0x2779BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779BCu;
label_2779bc:
    // 0x2779bc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2779bcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2779c0: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2779C0u;
    SET_GPR_U32(ctx, 31, 0x2779C8u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2779C0u, 0x2779C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2779C8u;
label_2779c8:
    // 0x2779c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2779c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2779cc: 0x0  nop
    ctx->pc = 0x2779ccu;
    // NOP
label_2779d0:
    // 0x2779d0: 0x2e030003  sltiu       $v1, $s0, 0x3
    ctx->pc = 0x2779d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
    // 0x2779d4: 0x1460ffe4  bnez        $v1, . + 4 + (-0x1C << 2)
    ctx->pc = 0x2779D4u;
    {
        const bool branch_taken_0x2779d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2779d4) {
            ctx->pc = 0x277968u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_277968;
        }
    }
    ctx->pc = 0x2779DCu;
    // 0x2779dc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2779dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2779e0: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x2779e0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2779e4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2779e4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2779e8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x2779e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x2779ec: 0x3e00008  jr          $ra
    ctx->pc = 0x2779ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2779ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2779F4u;
}
