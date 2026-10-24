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

// Function: R111_effect_set
// Address: 0x2786c0 - 0x278840
void R111_effect_set_0x2786c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("R111_effect_set_0x2786c0");
#endif

    switch (ctx->pc) {
        case 0x2786d8u: goto label_2786d8;
        case 0x2786fcu: goto label_2786fc;
        case 0x278708u: goto label_278708;
        case 0x278780u: goto label_278780;
        case 0x27878cu: goto label_27878c;
        case 0x2787b8u: goto label_2787b8;
        case 0x2787c4u: goto label_2787c4;
        case 0x2787e8u: goto label_2787e8;
        case 0x27880cu: goto label_27880c;
        case 0x278818u: goto label_278818;
        default: break;
    }

    ctx->pc = 0x2786c0u;

    // 0x2786c0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2786c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2786c4: 0x7fbf0010  sq          $ra, 0x10($sp)
    ctx->pc = 0x2786c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 31));
    // 0x2786c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2786c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2786cc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2786ccu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2786d0: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2786D0u;
    {
        const bool branch_taken_0x2786d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2786d0) {
            ctx->pc = 0x2787D0u;
            goto label_2787d0;
        }
    }
    ctx->pc = 0x2786D8u;
label_2786d8:
    // 0x2786d8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2786d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2786dc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2786dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2786e0: 0x2442e140  addiu       $v0, $v0, -0x1EC0
    ctx->pc = 0x2786e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959424));
    // 0x2786e4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2786e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2786e8: 0x24045702  addiu       $a0, $zero, 0x5702
    ctx->pc = 0x2786e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 22274));
    // 0x2786ec: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2786ecu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2786f0: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2786f0u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2786f4: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2786F4u;
    SET_GPR_U32(ctx, 31, 0x2786FCu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2786F4u, 0x2786FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2786FCu;
label_2786fc:
    // 0x2786fc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2786fcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x278700: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x278700u;
    SET_GPR_U32(ctx, 31, 0x278708u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x278700u, 0x278708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278708u;
label_278708:
    // 0x278708: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x278708u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x27870c: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x27870cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x278710: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x278710u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x278714: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x278714u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x278718: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278718u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27871c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27871cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x278720: 0x22200  sll         $a0, $v0, 8
    ctx->pc = 0x278720u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x278724: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x278724u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x278728: 0x8c227508  lw          $v0, 0x7508($at)
    ctx->pc = 0x278728u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x387508u));
    // 0x27872c: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x27872cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x278730: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x278730u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x278734: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x278734u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x278738: 0x3042ff00  andi        $v0, $v0, 0xFF00
    ctx->pc = 0x278738u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65280);
    // 0x27873c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x27873cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x278740: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x278740u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x278744: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x278744u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x278748: 0xac227508  sw          $v0, 0x7508($at)
    ctx->pc = 0x278748u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x387508u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x387508u, _value); } while (0);
    // 0x27874c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x27874cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x278750: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x278750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x278754: 0x1440000f  bnez        $v0, . + 4 + (0xF << 2)
    ctx->pc = 0x278754u;
    {
        const bool branch_taken_0x278754 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x278754) {
            ctx->pc = 0x278794u;
            goto label_278794;
        }
    }
    ctx->pc = 0x27875Cu;
    // 0x27875c: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x27875cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x278760: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278760u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x278764: 0x2442e140  addiu       $v0, $v0, -0x1EC0
    ctx->pc = 0x278764u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959424));
    // 0x278768: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x278768u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x27876c: 0x24047305  addiu       $a0, $zero, 0x7305
    ctx->pc = 0x27876cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29445));
    // 0x278770: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x278770u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278774: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x278774u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278778: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x278778u;
    SET_GPR_U32(ctx, 31, 0x278780u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x278778u, 0x278780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278780u;
label_278780:
    // 0x278780: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x278780u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x278784: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x278784u;
    SET_GPR_U32(ctx, 31, 0x27878Cu);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x278784u, 0x27878Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27878Cu;
label_27878c:
    // 0x27878c: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x27878Cu;
    {
        const bool branch_taken_0x27878c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27878c) {
            ctx->pc = 0x2787C8u;
            goto label_2787c8;
        }
    }
    ctx->pc = 0x278794u;
label_278794:
    // 0x278794: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x278794u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x278798: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x278798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x27879c: 0x2442e140  addiu       $v0, $v0, -0x1EC0
    ctx->pc = 0x27879cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959424));
    // 0x2787a0: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2787a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2787a4: 0x24047405  addiu       $a0, $zero, 0x7405
    ctx->pc = 0x2787a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 29701));
    // 0x2787a8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2787a8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2787ac: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2787acu;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2787b0: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x2787B0u;
    SET_GPR_U32(ctx, 31, 0x2787B8u);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x2787B0u, 0x2787B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2787B8u;
label_2787b8:
    // 0x2787b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x2787b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2787bc: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x2787BCu;
    SET_GPR_U32(ctx, 31, 0x2787C4u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x2787BCu, 0x2787C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2787C4u;
label_2787c4:
    // 0x2787c4: 0x0  nop
    ctx->pc = 0x2787c4u;
    // NOP
label_2787c8:
    // 0x2787c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2787c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2787cc: 0x0  nop
    ctx->pc = 0x2787ccu;
    // NOP
label_2787d0:
    // 0x2787d0: 0x2e030006  sltiu       $v1, $s0, 0x6
    ctx->pc = 0x2787d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x2787d4: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x2787D4u;
    {
        const bool branch_taken_0x2787d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x2787d4) {
            ctx->pc = 0x2786D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2786d8;
        }
    }
    ctx->pc = 0x2787DCu;
    // 0x2787dc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x2787dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2787e0: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2787E0u;
    {
        const bool branch_taken_0x2787e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2787e0) {
            ctx->pc = 0x278820u;
            goto label_278820;
        }
    }
    ctx->pc = 0x2787E8u;
label_2787e8:
    // 0x2787e8: 0x101900  sll         $v1, $s0, 4
    ctx->pc = 0x2787e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
    // 0x2787ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2787ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    // 0x2787f0: 0x2442e1a0  addiu       $v0, $v0, -0x1E60
    ctx->pc = 0x2787f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959520));
    // 0x2787f4: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x2787f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2787f8: 0x24042602  addiu       $a0, $zero, 0x2602
    ctx->pc = 0x2787f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9730));
    // 0x2787fc: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2787fcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278800: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x278800u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x278804: 0xc062f5c  jal         func_18BD70
    ctx->pc = 0x278804u;
    SET_GPR_U32(ctx, 31, 0x27880Cu);
    ctx->pc = 0x18BD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18BD70u, 0x278804u, 0x27880Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27880Cu;
label_27880c:
    // 0x27880c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x27880cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x278810: 0xc0630a8  jal         func_18C2A0
    ctx->pc = 0x278810u;
    SET_GPR_U32(ctx, 31, 0x278818u);
    ctx->pc = 0x18C2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18C2A0u, 0x278810u, 0x278818u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x278818u;
label_278818:
    // 0x278818: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x278818u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x27881c: 0x0  nop
    ctx->pc = 0x27881cu;
    // NOP
label_278820:
    // 0x278820: 0x2e030002  sltiu       $v1, $s0, 0x2
    ctx->pc = 0x278820u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x278824: 0x1460fff0  bnez        $v1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x278824u;
    {
        const bool branch_taken_0x278824 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x278824) {
            ctx->pc = 0x2787E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2787e8;
        }
    }
    ctx->pc = 0x27882Cu;
    // 0x27882c: 0x7bbf0010  lq          $ra, 0x10($sp)
    ctx->pc = 0x27882cu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x278830: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x278830u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x278834: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x278834u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x278838: 0x3e00008  jr          $ra
    ctx->pc = 0x278838u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x278838u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x278840u;
}
