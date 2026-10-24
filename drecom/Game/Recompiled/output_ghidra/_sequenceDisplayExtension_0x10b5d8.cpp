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

// Function: _sequenceDisplayExtension
// Address: 0x10b5d8 - 0x10b678
void _sequenceDisplayExtension_0x10b5d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sequenceDisplayExtension_0x10b5d8");
#endif

    switch (ctx->pc) {
        case 0x10b5f8u: goto label_10b5f8;
        case 0x10b604u: goto label_10b604;
        case 0x10b618u: goto label_10b618;
        case 0x10b628u: goto label_10b628;
        case 0x10b638u: goto label_10b638;
        case 0x10b648u: goto label_10b648;
        case 0x10b658u: goto label_10b658;
        case 0x10b660u: goto label_10b660;
        default: break;
    }

    ctx->pc = 0x10b5d8u;

    // 0x10b5d8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10b5d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10b5dc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x10b5dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x10b5e0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10b5e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10b5e4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10b5e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10b5e8: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10b5e8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x10b5ec: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x10b5ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x10b5f0: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10B5F0u;
    SET_GPR_U32(ctx, 31, 0x10B5F8u);
    ctx->pc = 0x10B5F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5F0u;
    // 0x10b5f4: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10B5F0u, 0x10B5F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B5F8u;
label_10b5f8:
    // 0x10b5f8: 0xae023d5c  sw          $v0, 0x3D5C($s0)
    ctx->pc = 0x10b5f8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15708), GPR_U32(ctx, 2));
    // 0x10b5fc: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10B5FCu;
    SET_GPR_U32(ctx, 31, 0x10B604u);
    ctx->pc = 0x10B600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B5FCu;
    // 0x10b600: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10B5FCu, 0x10B604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B604u;
label_10b604:
    // 0x10b604: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x10B604u;
    {
        const bool branch_taken_0x10b604 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10B608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B604u;
        // 0x10b608: 0xae223d60  sw          $v0, 0x3D60($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 15712), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10b604) {
            ctx->pc = 0x10B63Cu;
            goto label_10b63c;
        }
    }
    ctx->pc = 0x10B60Cu;
    // 0x10b60c: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x10b60cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x10b610: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10B610u;
    SET_GPR_U32(ctx, 31, 0x10B618u);
    ctx->pc = 0x10B614u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B610u;
    // 0x10b614: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10B610u, 0x10B618u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B618u;
label_10b618:
    // 0x10b618: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10b618u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x10b61c: 0xae023d64  sw          $v0, 0x3D64($s0)
    ctx->pc = 0x10b61cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15716), GPR_U32(ctx, 2));
    // 0x10b620: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10B620u;
    SET_GPR_U32(ctx, 31, 0x10B628u);
    ctx->pc = 0x10B624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B620u;
    // 0x10b624: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10B620u, 0x10B628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B628u;
label_10b628:
    // 0x10b628: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10b628u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10b62c: 0xae223d68  sw          $v0, 0x3D68($s1)
    ctx->pc = 0x10b62cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15720), GPR_U32(ctx, 2));
    // 0x10b630: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10B630u;
    SET_GPR_U32(ctx, 31, 0x10B638u);
    ctx->pc = 0x10B634u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B630u;
    // 0x10b634: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10B630u, 0x10B638u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B638u;
label_10b638:
    // 0x10b638: 0xae023d6c  sw          $v0, 0x3D6C($s0)
    ctx->pc = 0x10b638u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15724), GPR_U32(ctx, 2));
label_10b63c:
    // 0x10b63c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x10b63cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x10b640: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10B640u;
    SET_GPR_U32(ctx, 31, 0x10B648u);
    ctx->pc = 0x10B644u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B640u;
    // 0x10b644: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10B640u, 0x10B648u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B648u;
label_10b648:
    // 0x10b648: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10b648u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x10b64c: 0xae023d70  sw          $v0, 0x3D70($s0)
    ctx->pc = 0x10b64cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15728), GPR_U32(ctx, 2));
    // 0x10b650: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10B650u;
    SET_GPR_U32(ctx, 31, 0x10B658u);
    ctx->pc = 0x10B654u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B650u;
    // 0x10b654: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10B650u, 0x10B658u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B658u;
label_10b658:
    // 0x10b658: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10B658u;
    SET_GPR_U32(ctx, 31, 0x10B660u);
    ctx->pc = 0x10B65Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10B658u;
    // 0x10b65c: 0x2404000e  addiu       $a0, $zero, 0xE (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10B658u, 0x10B660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10B660u;
label_10b660:
    // 0x10b660: 0xae223d74  sw          $v0, 0x3D74($s1)
    ctx->pc = 0x10b660u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15732), GPR_U32(ctx, 2));
    // 0x10b664: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x10b664u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10b668: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10b668u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10b66c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10b66cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10b670: 0x3e00008  jr          $ra
    ctx->pc = 0x10B670u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10B674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10B670u;
        // 0x10b674: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10B670u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10B678u;
}
