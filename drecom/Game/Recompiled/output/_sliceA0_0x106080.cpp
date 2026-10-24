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

// Function: _sliceA0
// Address: 0x106080 - 0x1061a4
void _sliceA0_0x106080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_sliceA0_0x106080");
#endif

    switch (ctx->pc) {
        case 0x1060b8u: goto label_1060b8;
        case 0x1060c0u: goto label_1060c0;
        case 0x1060e0u: goto label_1060e0;
        case 0x1060f0u: goto label_1060f0;
        case 0x1060f8u: goto label_1060f8;
        case 0x106100u: goto label_106100;
        case 0x10611cu: goto label_10611c;
        default: break;
    }

    ctx->pc = 0x106080u;

    // 0x106080: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x106080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x106084: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x106084u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x106088: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x106088u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x10608c: 0x3c140038  lui         $s4, 0x38
    ctx->pc = 0x10608cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)56 << 16));
    // 0x106090: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x106090u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x106094: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x106094u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106098: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x106098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10609c: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x10609cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x1060a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x1060a4: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x1060a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060a8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x1060a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x1060ac: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1060acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1060b0: 0xc041cf8  jal         func_1073E0
    ctx->pc = 0x1060B0u;
    SET_GPR_U32(ctx, 31, 0x1060B8u);
    ctx->pc = 0x1060B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1060B0u;
    // 0x1060b4: 0xae803d08  sw          $zero, 0x3D08($s4) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 20), 15624), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1073E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1073E0u, 0x1060B0u, 0x1060B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1060B8u;
label_1060b8:
    // 0x1060b8: 0xc041c0a  jal         func_107028
    ctx->pc = 0x1060B8u;
    SET_GPR_U32(ctx, 31, 0x1060C0u);
    ctx->pc = 0x1060BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1060B8u;
    // 0x1060bc: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107028u, 0x1060B8u, 0x1060C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1060C0u;
label_1060c0:
    // 0x1060c0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1060c0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060c4: 0x2622feff  addiu       $v0, $s1, -0x101
    ctx->pc = 0x1060c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967039));
    // 0x1060c8: 0x2c4200af  sltiu       $v0, $v0, 0xAF
    ctx->pc = 0x1060c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)175) ? 1 : 0);
    // 0x1060cc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1060CCu;
    {
        const bool branch_taken_0x1060cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1060D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060CCu;
        // 0x1060d0: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060cc) {
            ctx->pc = 0x1060E8u;
            goto label_1060e8;
        }
    }
    ctx->pc = 0x1060D4u;
    // 0x1060d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1060d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1060d8: 0xc042b2a  jal         func_10ACA8
    ctx->pc = 0x1060D8u;
    SET_GPR_U32(ctx, 31, 0x1060E0u);
    ctx->pc = 0x1060DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1060D8u;
    // 0x1060dc: 0x2484c6d8  addiu       $a0, $a0, -0x3928 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952664));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACA8u, 0x1060D8u, 0x1060E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1060E0u;
label_1060e0:
    // 0x1060e0: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1060E0u;
    {
        const bool branch_taken_0x1060e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1060E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1060E0u;
        // 0x1060e4: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1060e0) {
            ctx->pc = 0x106180u;
            goto label_106180;
        }
    }
    ctx->pc = 0x1060E8u;
label_1060e8:
    // 0x1060e8: 0xc041c58  jal         func_107160
    ctx->pc = 0x1060E8u;
    SET_GPR_U32(ctx, 31, 0x1060F0u);
    ctx->pc = 0x1060ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1060E8u;
    // 0x1060ec: 0x24040020  addiu       $a0, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107160u, 0x1060E8u, 0x1060F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1060F0u;
label_1060f0:
    // 0x1060f0: 0xc041d12  jal         func_107448
    ctx->pc = 0x1060F0u;
    SET_GPR_U32(ctx, 31, 0x1060F8u);
    ctx->pc = 0x107448u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107448u, 0x1060F0u, 0x1060F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1060F8u;
label_1060f8:
    // 0x1060f8: 0xc041792  jal         func_105E48
    ctx->pc = 0x1060F8u;
    SET_GPR_U32(ctx, 31, 0x106100u);
    ctx->pc = 0x1060FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1060F8u;
    // 0x1060fc: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x105E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x105E48u, 0x1060F8u, 0x106100u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x106100u;
label_106100:
    // 0x106100: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x106100u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106104: 0xae670000  sw          $a3, 0x0($s3)
    ctx->pc = 0x106104u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 7));
    // 0x106108: 0x8e823d08  lw          $v0, 0x3D08($s4)
    ctx->pc = 0x106108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 15624)));
    // 0x10610c: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x10610Cu;
    {
        const bool branch_taken_0x10610c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x106110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10610Cu;
        // 0x106110: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10610c) {
            ctx->pc = 0x106124u;
            goto label_106124;
        }
    }
    ctx->pc = 0x106114u;
    // 0x106114: 0xc042b36  jal         func_10ACD8
    ctx->pc = 0x106114u;
    SET_GPR_U32(ctx, 31, 0x10611Cu);
    ctx->pc = 0x106118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x106114u;
    // 0x106118: 0x2484c700  addiu       $a0, $a0, -0x3900 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10ACD8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACD8u, 0x106114u, 0x10611Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10611Cu;
label_10611c:
    // 0x10611c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x10611Cu;
    {
        const bool branch_taken_0x10611c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x106120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10611Cu;
        // 0x106120: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10611c) {
            ctx->pc = 0x106180u;
            goto label_106180;
        }
    }
    ctx->pc = 0x106124u;
label_106124:
    // 0x106124: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x106124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x106128: 0x3c040038  lui         $a0, 0x38
    ctx->pc = 0x106128u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)56 << 16));
    // 0x10612c: 0x1219c0  sll         $v1, $s2, 7
    ctx->pc = 0x10612cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 7));
    // 0x106130: 0x8c853d28  lw          $a1, 0x3D28($a0)
    ctx->pc = 0x106130u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 15656)));
    // 0x106134: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x106134u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x106138: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x106138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x10613c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10613cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x106140: 0x3c060038  lui         $a2, 0x38
    ctx->pc = 0x106140u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)56 << 16));
    // 0x106144: 0x651018  mult        $v0, $v1, $a1
    ctx->pc = 0x106144u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x106148: 0x471821  addu        $v1, $v0, $a3
    ctx->pc = 0x106148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x10614c: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x10614cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x106150: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x106150u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x106154: 0xaea30000  sw          $v1, 0x0($s5)
    ctx->pc = 0x106154u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 3));
    // 0x106158: 0xae640000  sw          $a0, 0x0($s3)
    ctx->pc = 0x106158u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 4));
    // 0x10615c: 0xacc43e3c  sw          $a0, 0x3E3C($a2)
    ctx->pc = 0x10615cu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 15932), GPR_U32(ctx, 4));
    // 0x106160: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x106160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x106164: 0xae000014  sw          $zero, 0x14($s0)
    ctx->pc = 0x106164u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    // 0x106168: 0xae000010  sw          $zero, 0x10($s0)
    ctx->pc = 0x106168u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 0));
    // 0x10616c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x10616cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x106170: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x106170u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x106174: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x106174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x106178: 0xae000018  sw          $zero, 0x18($s0)
    ctx->pc = 0x106178u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 0));
    // 0x10617c: 0xae00000c  sw          $zero, 0xC($s0)
    ctx->pc = 0x10617cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 0));
label_106180:
    // 0x106180: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x106180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x106184: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x106184u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x106188: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x106188u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x10618c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x10618cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x106190: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x106190u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x106194: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x106194u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x106198: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x106198u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10619c: 0x3e00008  jr          $ra
    ctx->pc = 0x10619Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1061A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10619Cu;
        // 0x1061a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10619Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1061A4u;
}
