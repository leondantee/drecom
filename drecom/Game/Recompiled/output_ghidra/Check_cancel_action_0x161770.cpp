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

// Function: Check_cancel_action
// Address: 0x161770 - 0x161814
void Check_cancel_action_0x161770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Check_cancel_action_0x161770");
#endif

    switch (ctx->pc) {
        case 0x16178cu: goto label_16178c;
        case 0x1617a8u: goto label_1617a8;
        case 0x1617c4u: goto label_1617c4;
        case 0x1617e0u: goto label_1617e0;
        default: break;
    }

    ctx->pc = 0x161770u;

    // 0x161770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x161770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x161774: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x161774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x161778: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x161778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x16177c: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x16177cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    // 0x161780: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x161780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x161784: 0xc058478  jal         func_1611E0
    ctx->pc = 0x161784u;
    SET_GPR_U32(ctx, 31, 0x16178Cu);
    ctx->pc = 0x1611E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1611E0u, 0x161784u, 0x16178Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x16178Cu;
label_16178c:
    // 0x16178c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16178Cu;
    {
        const bool branch_taken_0x16178c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x16178c) {
            ctx->pc = 0x1617A0u;
            goto label_1617a0;
        }
    }
    ctx->pc = 0x161794u;
    // 0x161794: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x161794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x161798: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x161798u;
    {
        const bool branch_taken_0x161798 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x161798) {
            ctx->pc = 0x161800u;
            goto label_161800;
        }
    }
    ctx->pc = 0x1617A0u;
label_1617a0:
    // 0x1617a0: 0xc058348  jal         func_160D20
    ctx->pc = 0x1617A0u;
    SET_GPR_U32(ctx, 31, 0x1617A8u);
    ctx->pc = 0x160D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x160D20u, 0x1617A0u, 0x1617A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617A8u;
label_1617a8:
    // 0x1617a8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1617A8u;
    {
        const bool branch_taken_0x1617a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1617a8) {
            ctx->pc = 0x1617BCu;
            goto label_1617bc;
        }
    }
    ctx->pc = 0x1617B0u;
    // 0x1617b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1617b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1617b4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1617B4u;
    {
        const bool branch_taken_0x1617b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1617b4) {
            ctx->pc = 0x161800u;
            goto label_161800;
        }
    }
    ctx->pc = 0x1617BCu;
label_1617bc:
    // 0x1617bc: 0xc05843c  jal         func_1610F0
    ctx->pc = 0x1617BCu;
    SET_GPR_U32(ctx, 31, 0x1617C4u);
    ctx->pc = 0x1610F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1610F0u, 0x1617BCu, 0x1617C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617C4u;
label_1617c4:
    // 0x1617c4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1617C4u;
    {
        const bool branch_taken_0x1617c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1617c4) {
            ctx->pc = 0x1617D8u;
            goto label_1617d8;
        }
    }
    ctx->pc = 0x1617CCu;
    // 0x1617cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1617ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1617d0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1617D0u;
    {
        const bool branch_taken_0x1617d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1617d0) {
            ctx->pc = 0x161800u;
            goto label_161800;
        }
    }
    ctx->pc = 0x1617D8u;
label_1617d8:
    // 0x1617d8: 0xc057acc  jal         func_15EB30
    ctx->pc = 0x1617D8u;
    SET_GPR_U32(ctx, 31, 0x1617E0u);
    ctx->pc = 0x15EB30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x15EB30u, 0x1617D8u, 0x1617E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1617E0u;
label_1617e0:
    // 0x1617e0: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1617E0u;
    {
        const bool branch_taken_0x1617e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1617e0) {
            ctx->pc = 0x1617FCu;
            goto label_1617fc;
        }
    }
    ctx->pc = 0x1617E8u;
    // 0x1617e8: 0x2402000a  addiu       $v0, $zero, 0xA
    ctx->pc = 0x1617e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1617ec: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1617ecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1617f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1617f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1617f4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1617F4u;
    {
        const bool branch_taken_0x1617f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1617f4) {
            ctx->pc = 0x161800u;
            goto label_161800;
        }
    }
    ctx->pc = 0x1617FCu;
label_1617fc:
    // 0x1617fc: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1617fcu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_161800:
    // 0x161800: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x161800u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x161804: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x161804u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x161808: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x161808u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x16180c: 0x3e00008  jr          $ra
    ctx->pc = 0x16180Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16180Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x161814u;
}
