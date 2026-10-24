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

// Function: _extensionAndUserData
// Address: 0x1076b0 - 0x107760
void _extensionAndUserData_0x1076b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_extensionAndUserData_0x1076b0");
#endif

    switch (ctx->pc) {
        case 0x1076b0u: goto label_1076b0;
        case 0x1076b4u: goto label_1076b4;
        case 0x1076b8u: goto label_1076b8;
        case 0x1076bcu: goto label_1076bc;
        case 0x1076c0u: goto label_1076c0;
        case 0x1076c4u: goto label_1076c4;
        case 0x1076c8u: goto label_1076c8;
        case 0x1076ccu: goto label_1076cc;
        case 0x1076d0u: goto label_1076d0;
        case 0x1076d4u: goto label_1076d4;
        case 0x1076d8u: goto label_1076d8;
        case 0x1076dcu: goto label_1076dc;
        case 0x1076e0u: goto label_1076e0;
        case 0x1076e4u: goto label_1076e4;
        case 0x1076e8u: goto label_1076e8;
        case 0x1076ecu: goto label_1076ec;
        case 0x1076f0u: goto label_1076f0;
        case 0x1076f4u: goto label_1076f4;
        case 0x1076f8u: goto label_1076f8;
        case 0x1076fcu: goto label_1076fc;
        case 0x107700u: goto label_107700;
        case 0x107704u: goto label_107704;
        case 0x107708u: goto label_107708;
        case 0x10770cu: goto label_10770c;
        case 0x107710u: goto label_107710;
        case 0x107714u: goto label_107714;
        case 0x107718u: goto label_107718;
        case 0x10771cu: goto label_10771c;
        case 0x107720u: goto label_107720;
        case 0x107724u: goto label_107724;
        case 0x107728u: goto label_107728;
        case 0x10772cu: goto label_10772c;
        case 0x107730u: goto label_107730;
        case 0x107734u: goto label_107734;
        case 0x107738u: goto label_107738;
        case 0x10773cu: goto label_10773c;
        case 0x107740u: goto label_107740;
        case 0x107744u: goto label_107744;
        case 0x107748u: goto label_107748;
        case 0x10774cu: goto label_10774c;
        case 0x107750u: goto label_107750;
        case 0x107754u: goto label_107754;
        case 0x107758u: goto label_107758;
        case 0x10775cu: goto label_10775c;
        default: break;
    }

    ctx->pc = 0x1076b0u;

label_1076b0:
    // 0x1076b0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1076b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1076b4:
    // 0x1076b4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1076b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1076b8:
    // 0x1076b8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1076b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_1076bc:
    // 0x1076bc: 0xc041cf8  jal         func_1073E0
label_1076c0:
    if (ctx->pc == 0x1076C0u) {
        ctx->pc = 0x1076C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076BCu;
        // 0x1076c0: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1076C4u;
        goto label_1076c4;
    }
    ctx->pc = 0x1076BCu;
    SET_GPR_U32(ctx, 31, 0x1076C4u);
    ctx->pc = 0x1076C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1076BCu;
    // 0x1076c0: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1073E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1073E0u, 0x1076BCu, 0x1076C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1076C4u;
label_1076c4:
    // 0x1076c4: 0x10000019  b           . + 4 + (0x19 << 2)
label_1076c8:
    if (ctx->pc == 0x1076C8u) {
        ctx->pc = 0x1076CCu;
        goto label_1076cc;
    }
    ctx->pc = 0x1076C4u;
    {
        const bool branch_taken_0x1076c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1076c4) {
            ctx->pc = 0x10772Cu;
            goto label_10772c;
        }
    }
    ctx->pc = 0x1076CCu;
label_1076cc:
    // 0x1076cc: 0x0  nop
    ctx->pc = 0x1076ccu;
    // NOP
label_1076d0:
    // 0x1076d0: 0x14660012  bne         $v1, $a2, . + 4 + (0x12 << 2)
label_1076d4:
    if (ctx->pc == 0x1076D4u) {
        ctx->pc = 0x1076D8u;
        goto label_1076d8;
    }
    ctx->pc = 0x1076D0u;
    {
        const bool branch_taken_0x1076d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 6));
        if (branch_taken_0x1076d0) {
            ctx->pc = 0x10771Cu;
            goto label_10771c;
        }
    }
    ctx->pc = 0x1076D8u;
label_1076d8:
    // 0x1076d8: 0xc041c58  jal         func_107160
label_1076dc:
    if (ctx->pc == 0x1076DCu) {
        ctx->pc = 0x1076E0u;
        goto label_1076e0;
    }
    ctx->pc = 0x1076D8u;
    SET_GPR_U32(ctx, 31, 0x1076E0u);
    ctx->pc = 0x107160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107160u, 0x1076D8u, 0x1076E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1076E0u;
label_1076e0:
    // 0x1076e0: 0xc041c9e  jal         func_107278
label_1076e4:
    if (ctx->pc == 0x1076E4u) {
        ctx->pc = 0x1076E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1076E0u;
        // 0x1076e4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1076E8u;
        goto label_1076e8;
    }
    ctx->pc = 0x1076E0u;
    SET_GPR_U32(ctx, 31, 0x1076E8u);
    ctx->pc = 0x1076E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1076E0u;
    // 0x1076e4: 0x24040004  addiu       $a0, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x1076E0u, 0x1076E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1076E8u;
label_1076e8:
    // 0x1076e8: 0x2403000a  addiu       $v1, $zero, 0xA
    ctx->pc = 0x1076e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
label_1076ec:
    // 0x1076ec: 0x26043aa8  addiu       $a0, $s0, 0x3AA8
    ctx->pc = 0x1076ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 15016));
label_1076f0:
    // 0x1076f0: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x1076f0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1076f4:
    // 0x1076f4: 0x3100b  movn        $v0, $zero, $v1
    ctx->pc = 0x1076f4u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 0));
label_1076f8:
    // 0x1076f8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1076f8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1076fc:
    // 0x1076fc: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x1076fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_107700:
    // 0x107700: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x107700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_107704:
    // 0x107704: 0x60f809  jalr        $v1
label_107708:
    if (ctx->pc == 0x107708u) {
        ctx->pc = 0x10770Cu;
        goto label_10770c;
    }
    ctx->pc = 0x107704u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x10770Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107704u, 0x10770Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x10770Cu;
label_10770c:
    // 0x10770c: 0xc041cf8  jal         func_1073E0
label_107710:
    if (ctx->pc == 0x107710u) {
        ctx->pc = 0x107714u;
        goto label_107714;
    }
    ctx->pc = 0x10770Cu;
    SET_GPR_U32(ctx, 31, 0x107714u);
    ctx->pc = 0x1073E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1073E0u, 0x10770Cu, 0x107714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107714u;
label_107714:
    // 0x107714: 0x10000005  b           . + 4 + (0x5 << 2)
label_107718:
    if (ctx->pc == 0x107718u) {
        ctx->pc = 0x10771Cu;
        goto label_10771c;
    }
    ctx->pc = 0x107714u;
    {
        const bool branch_taken_0x107714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x107714) {
            ctx->pc = 0x10772Cu;
            goto label_10772c;
        }
    }
    ctx->pc = 0x10771Cu;
label_10771c:
    // 0x10771c: 0xc041c58  jal         func_107160
label_107720:
    if (ctx->pc == 0x107720u) {
        ctx->pc = 0x107720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10771Cu;
        // 0x107720: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107724u;
        goto label_107724;
    }
    ctx->pc = 0x10771Cu;
    SET_GPR_U32(ctx, 31, 0x107724u);
    ctx->pc = 0x107720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10771Cu;
    // 0x107720: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107160u, 0x10771Cu, 0x107724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107724u;
label_107724:
    // 0x107724: 0xc041cf8  jal         func_1073E0
label_107728:
    if (ctx->pc == 0x107728u) {
        ctx->pc = 0x10772Cu;
        goto label_10772c;
    }
    ctx->pc = 0x107724u;
    SET_GPR_U32(ctx, 31, 0x10772Cu);
    ctx->pc = 0x1073E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1073E0u, 0x107724u, 0x10772Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10772Cu;
label_10772c:
    // 0x10772c: 0xc041c0a  jal         func_107028
label_107730:
    if (ctx->pc == 0x107730u) {
        ctx->pc = 0x107730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10772Cu;
        // 0x107730: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107734u;
        goto label_107734;
    }
    ctx->pc = 0x10772Cu;
    SET_GPR_U32(ctx, 31, 0x107734u);
    ctx->pc = 0x107730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10772Cu;
    // 0x107730: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107028u, 0x10772Cu, 0x107734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107734u;
label_107734:
    // 0x107734: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x107734u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_107738:
    // 0x107738: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x107738u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
label_10773c:
    // 0x10773c: 0x240201b5  addiu       $v0, $zero, 0x1B5
    ctx->pc = 0x10773cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_107740:
    // 0x107740: 0x240601b5  addiu       $a2, $zero, 0x1B5
    ctx->pc = 0x107740u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 437));
label_107744:
    // 0x107744: 0x1062ffe4  beq         $v1, $v0, . + 4 + (-0x1C << 2)
label_107748:
    if (ctx->pc == 0x107748u) {
        ctx->pc = 0x107748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107744u;
        // 0x107748: 0x240501b2  addiu       $a1, $zero, 0x1B2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
        ctx->in_delay_slot = false;
        ctx->pc = 0x10774Cu;
        goto label_10774c;
    }
    ctx->pc = 0x107744u;
    {
        const bool branch_taken_0x107744 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x107748u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107744u;
        // 0x107748: 0x240501b2  addiu       $a1, $zero, 0x1B2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 434));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107744) {
            ctx->pc = 0x1076D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1076d8;
        }
    }
    ctx->pc = 0x10774Cu;
label_10774c:
    // 0x10774c: 0x1065ffe0  beq         $v1, $a1, . + 4 + (-0x20 << 2)
label_107750:
    if (ctx->pc == 0x107750u) {
        ctx->pc = 0x107750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10774Cu;
        // 0x107750: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107754u;
        goto label_107754;
    }
    ctx->pc = 0x10774Cu;
    {
        const bool branch_taken_0x10774c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x107750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10774Cu;
        // 0x107750: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10774c) {
            ctx->pc = 0x1076D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1076d0;
        }
    }
    ctx->pc = 0x107754u;
label_107754:
    // 0x107754: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x107754u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_107758:
    // 0x107758: 0x3e00008  jr          $ra
label_10775c:
    if (ctx->pc == 0x10775Cu) {
        ctx->pc = 0x10775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107758u;
        // 0x10775c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x107760u;
        goto label_fallthrough_0x107758;
    }
    ctx->pc = 0x107758u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10775Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107758u;
        // 0x10775c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x107758u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x107758:
    ctx->pc = 0x107760u;
}
