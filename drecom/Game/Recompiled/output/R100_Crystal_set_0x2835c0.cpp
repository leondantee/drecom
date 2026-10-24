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

// Function: R100_Crystal_set
// Address: 0x2835c0 - 0x283648
void R100_Crystal_set_0x2835c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R100_Crystal_set_0x2835c0");
#endif

    switch (ctx->pc) {
        case 0x2835d8u: goto label_2835d8;
        case 0x2835e4u: goto label_2835e4;
        case 0x2835f0u: goto label_2835f0;
        case 0x28361cu: goto label_28361c;
        case 0x283634u: goto label_283634;
        default: break;
    }

    ctx->pc = 0x2835c0u;

    // 0x2835c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2835c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2835c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2835c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2835c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2835c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2835cc: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2835ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2835d0: 0xc0c79e8  jal         func_31E7A0
    ctx->pc = 0x2835D0u;
    SET_GPR_U32(ctx, 31, 0x2835D8u);
    ctx->pc = 0x31E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7A0u, 0x2835D0u, 0x2835D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2835D8u;
label_2835d8:
    // 0x2835d8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x2835d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2835dc: 0xc084964  jal         func_212590
    ctx->pc = 0x2835DCu;
    SET_GPR_U32(ctx, 31, 0x2835E4u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x2835DCu, 0x2835E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2835E4u;
label_2835e4:
    // 0x2835e4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2835e4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2835e8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2835E8u;
    {
        const bool branch_taken_0x2835e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2835e8) {
            ctx->pc = 0x283620u;
            goto label_283620;
        }
    }
    ctx->pc = 0x2835F0u;
label_2835f0:
    // 0x2835f0: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2835f0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2835f4: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2835f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2835f8: 0x24425360  addiu       $v0, $v0, 0x5360
    ctx->pc = 0x2835f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21344));
    // 0x2835fc: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x2835fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x283600: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x283600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x283604: 0x24425440  addiu       $v0, $v0, 0x5440
    ctx->pc = 0x283604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 21568));
    // 0x283608: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x283608u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x28360c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x28360cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x283610: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x283610u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x283614: 0xc0c7a48  jal         func_31E920
    ctx->pc = 0x283614u;
    SET_GPR_U32(ctx, 31, 0x28361Cu);
    ctx->pc = 0x31E920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E920u, 0x283614u, 0x28361Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x28361Cu;
label_28361c:
    // 0x28361c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28361cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_283620:
    // 0x283620: 0x2e02000e  sltiu       $v0, $s0, 0xE
    ctx->pc = 0x283620u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)14) ? 1 : 0);
    // 0x283624: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x283624u;
    {
        const bool branch_taken_0x283624 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x283624) {
            ctx->pc = 0x2835F0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2835f0;
        }
    }
    ctx->pc = 0x28362Cu;
    // 0x28362c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x28362Cu;
    SET_GPR_U32(ctx, 31, 0x283634u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x28362Cu, 0x283634u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x283634u;
label_283634:
    // 0x283634: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x283634u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x283638: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x283638u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28363c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x28363cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x283640: 0x3e00008  jr          $ra
    ctx->pc = 0x283640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x283640u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x283648u;
}
