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

// Function: R103_crystal_set
// Address: 0x271d30 - 0x271db8
void R103_crystal_set_0x271d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R103_crystal_set_0x271d30");
#endif

    switch (ctx->pc) {
        case 0x271d48u: goto label_271d48;
        case 0x271d54u: goto label_271d54;
        case 0x271d60u: goto label_271d60;
        case 0x271d8cu: goto label_271d8c;
        case 0x271da4u: goto label_271da4;
        default: break;
    }

    ctx->pc = 0x271d30u;

    // 0x271d30: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x271d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x271d34: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x271d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x271d38: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x271d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x271d3c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x271d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x271d40: 0xc0c79e8  jal         func_31E7A0
    ctx->pc = 0x271D40u;
    SET_GPR_U32(ctx, 31, 0x271D48u);
    ctx->pc = 0x31E7A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E7A0u, 0x271D40u, 0x271D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D48u;
label_271d48:
    // 0x271d48: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x271d48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x271d4c: 0xc084964  jal         func_212590
    ctx->pc = 0x271D4Cu;
    SET_GPR_U32(ctx, 31, 0x271D54u);
    ctx->pc = 0x212590u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x212590u, 0x271D4Cu, 0x271D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D54u;
label_271d54:
    // 0x271d54: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x271d54u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271d58: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x271D58u;
    {
        const bool branch_taken_0x271d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x271d58) {
            ctx->pc = 0x271D90u;
            goto label_271d90;
        }
    }
    ctx->pc = 0x271D60u;
label_271d60:
    // 0x271d60: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x271d60u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x271d64: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x271d64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x271d68: 0x2442cb60  addiu       $v0, $v0, -0x34A0
    ctx->pc = 0x271d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953824));
    // 0x271d6c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x271d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x271d70: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x271d70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x271d74: 0x2442cb80  addiu       $v0, $v0, -0x3480
    ctx->pc = 0x271d74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953856));
    // 0x271d78: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x271d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x271d7c: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x271d7cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x271d80: 0x90460000  lbu         $a2, 0x0($v0)
    ctx->pc = 0x271d80u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x271d84: 0xc0c7a48  jal         func_31E920
    ctx->pc = 0x271D84u;
    SET_GPR_U32(ctx, 31, 0x271D8Cu);
    ctx->pc = 0x31E920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x31E920u, 0x271D84u, 0x271D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271D8Cu;
label_271d8c:
    // 0x271d8c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x271d8cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_271d90:
    // 0x271d90: 0x2e020002  sltiu       $v0, $s0, 0x2
    ctx->pc = 0x271d90u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x271d94: 0x1440fff2  bnez        $v0, . + 4 + (-0xE << 2)
    ctx->pc = 0x271D94u;
    {
        const bool branch_taken_0x271d94 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x271d94) {
            ctx->pc = 0x271D60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_271d60;
        }
    }
    ctx->pc = 0x271D9Cu;
    // 0x271d9c: 0xc084934  jal         func_2124D0
    ctx->pc = 0x271D9Cu;
    SET_GPR_U32(ctx, 31, 0x271DA4u);
    ctx->pc = 0x2124D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2124D0u, 0x271D9Cu, 0x271DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271DA4u;
label_271da4:
    // 0x271da4: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x271da4u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x271da8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271da8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x271dac: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x271dacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x271db0: 0x3e00008  jr          $ra
    ctx->pc = 0x271DB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271DB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271DB8u;
}
