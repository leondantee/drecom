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

// Function: _quantMatrixExtension
// Address: 0x107b90 - 0x107c3c
void _quantMatrixExtension_0x107b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_quantMatrixExtension_0x107b90");
#endif

    switch (ctx->pc) {
        case 0x107ba8u: goto label_107ba8;
        case 0x107bb8u: goto label_107bb8;
        case 0x107bc0u: goto label_107bc0;
        case 0x107bc8u: goto label_107bc8;
        case 0x107bd4u: goto label_107bd4;
        case 0x107be4u: goto label_107be4;
        case 0x107becu: goto label_107bec;
        case 0x107bf4u: goto label_107bf4;
        case 0x107bfcu: goto label_107bfc;
        case 0x107c0cu: goto label_107c0c;
        case 0x107c14u: goto label_107c14;
        default: break;
    }

    ctx->pc = 0x107b90u;

    // 0x107b90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x107b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x107b94: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107b98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x107b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x107b9c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x107b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x107ba0: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107BA0u;
    SET_GPR_U32(ctx, 31, 0x107BA8u);
    ctx->pc = 0x107BA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BA0u;
    // 0x107ba4: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107BA0u, 0x107BA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BA8u;
label_107ba8:
    // 0x107ba8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x107BA8u;
    {
        const bool branch_taken_0x107ba8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107ba8) {
            ctx->pc = 0x107BC8u;
            goto label_107bc8;
        }
    }
    ctx->pc = 0x107BB0u;
    // 0x107bb0: 0xc041b46  jal         func_106D18
    ctx->pc = 0x107BB0u;
    SET_GPR_U32(ctx, 31, 0x107BB8u);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x107BB0u, 0x107BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BB8u;
label_107bb8:
    // 0x107bb8: 0xc041b3a  jal         func_106CE8
    ctx->pc = 0x107BB8u;
    SET_GPR_U32(ctx, 31, 0x107BC0u);
    ctx->pc = 0x107BBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BB8u;
    // 0x107bbc: 0x3c045000  lui         $a0, 0x5000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)20480 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE8u, 0x107BB8u, 0x107BC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BC0u;
label_107bc0:
    // 0x107bc0: 0xc041b46  jal         func_106D18
    ctx->pc = 0x107BC0u;
    SET_GPR_U32(ctx, 31, 0x107BC8u);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x107BC0u, 0x107BC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BC8u;
label_107bc8:
    // 0x107bc8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107bcc: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107BCCu;
    SET_GPR_U32(ctx, 31, 0x107BD4u);
    ctx->pc = 0x107BD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BCCu;
    // 0x107bd0: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107BCCu, 0x107BD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BD4u;
label_107bd4:
    // 0x107bd4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x107BD4u;
    {
        const bool branch_taken_0x107bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x107bd4) {
            ctx->pc = 0x107BF4u;
            goto label_107bf4;
        }
    }
    ctx->pc = 0x107BDCu;
    // 0x107bdc: 0xc041b46  jal         func_106D18
    ctx->pc = 0x107BDCu;
    SET_GPR_U32(ctx, 31, 0x107BE4u);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x107BDCu, 0x107BE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BE4u;
label_107be4:
    // 0x107be4: 0xc041b3a  jal         func_106CE8
    ctx->pc = 0x107BE4u;
    SET_GPR_U32(ctx, 31, 0x107BECu);
    ctx->pc = 0x107BE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BE4u;
    // 0x107be8: 0x3c045800  lui         $a0, 0x5800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)22528 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x106CE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE8u, 0x107BE4u, 0x107BECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BECu;
label_107bec:
    // 0x107bec: 0xc041b46  jal         func_106D18
    ctx->pc = 0x107BECu;
    SET_GPR_U32(ctx, 31, 0x107BF4u);
    ctx->pc = 0x106D18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D18u, 0x107BECu, 0x107BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BF4u;
label_107bf4:
    // 0x107bf4: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107BF4u;
    SET_GPR_U32(ctx, 31, 0x107BFCu);
    ctx->pc = 0x107BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107BF4u;
    // 0x107bf8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107BF4u, 0x107BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107BFCu;
label_107bfc:
    // 0x107bfc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x107BFCu;
    {
        const bool branch_taken_0x107bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107BFCu;
        // 0x107c00: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107bfc) {
            ctx->pc = 0x107C0Cu;
            goto label_107c0c;
        }
    }
    ctx->pc = 0x107C04u;
    // 0x107c04: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x107C04u;
    SET_GPR_U32(ctx, 31, 0x107C0Cu);
    ctx->pc = 0x107C08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C04u;
    // 0x107c08: 0x2484c790  addiu       $a0, $a0, -0x3870 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x107C04u, 0x107C0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C0Cu;
label_107c0c:
    // 0x107c0c: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107C0Cu;
    SET_GPR_U32(ctx, 31, 0x107C14u);
    ctx->pc = 0x107C10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C0Cu;
    // 0x107c10: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107C0Cu, 0x107C14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107C14u;
label_107c14:
    // 0x107c14: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x107C14u;
    {
        const bool branch_taken_0x107c14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x107C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C14u;
        // 0x107c18: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107c14) {
            ctx->pc = 0x107C30u;
            goto label_107c30;
        }
    }
    ctx->pc = 0x107C1Cu;
    // 0x107c1c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x107c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    // 0x107c20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107c24: 0x2484c7b8  addiu       $a0, $a0, -0x3848
    ctx->pc = 0x107c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952888));
    // 0x107c28: 0x8042b36  j           func_10ACD8
    ctx->pc = 0x107C28u;
    ctx->pc = 0x107C2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107C28u;
    // 0x107c2c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    ps2__Error_0x10acd8(rdram, ctx, runtime); return;
    ctx->pc = 0x107C30u;
label_107c30:
    // 0x107c30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107c30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x107c34: 0x3e00008  jr          $ra
    ctx->pc = 0x107C34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x107C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107C34u;
        // 0x107c38: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107C34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x107C3Cu;
}
