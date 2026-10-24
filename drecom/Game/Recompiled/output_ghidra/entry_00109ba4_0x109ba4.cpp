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

// Function: entry_00109ba4
// Address: 0x109ba4 - 0x109c30
void entry_00109ba4_0x109ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00109ba4_0x109ba4");
#endif

    switch (ctx->pc) {
        case 0x109bb8u: goto label_109bb8;
        case 0x109bc4u: goto label_109bc4;
        case 0x109bd0u: goto label_109bd0;
        case 0x109bdcu: goto label_109bdc;
        case 0x109be8u: goto label_109be8;
        case 0x109bf4u: goto label_109bf4;
        case 0x109c00u: goto label_109c00;
        default: break;
    }

    ctx->pc = 0x109ba4u;

    // 0x109ba4: 0x16e20022  bne         $s7, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x109BA4u;
    {
        const bool branch_taken_0x109ba4 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 2));
        ctx->pc = 0x109BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x109BA4u;
        // 0x109ba8: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109ba4) {
            ctx->pc = 0x109C30u;
            return;
        }
    }
    ctx->pc = 0x109BACu;
    // 0x109bac: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109bacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bb0: 0xc04240a  jal         func_109028
    ctx->pc = 0x109BB0u;
    SET_GPR_U32(ctx, 31, 0x109BB8u);
    ctx->pc = 0x109BB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BB0u;
    // 0x109bb4: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109BB0u, 0x109BB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BB8u;
label_109bb8:
    // 0x109bb8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109bb8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bbc: 0xc04240a  jal         func_109028
    ctx->pc = 0x109BBCu;
    SET_GPR_U32(ctx, 31, 0x109BC4u);
    ctx->pc = 0x109BC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BBCu;
    // 0x109bc0: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109BBCu, 0x109BC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BC4u;
label_109bc4:
    // 0x109bc4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x109bc4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bc8: 0xc04241e  jal         func_109078
    ctx->pc = 0x109BC8u;
    SET_GPR_U32(ctx, 31, 0x109BD0u);
    ctx->pc = 0x109BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BC8u;
    // 0x109bcc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109078u, 0x109BC8u, 0x109BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BD0u;
label_109bd0:
    // 0x109bd0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109bd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bd4: 0xc04240a  jal         func_109028
    ctx->pc = 0x109BD4u;
    SET_GPR_U32(ctx, 31, 0x109BDCu);
    ctx->pc = 0x109BD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BD4u;
    // 0x109bd8: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109BD4u, 0x109BDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BDCu;
label_109bdc:
    // 0x109bdc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x109bdcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109be0: 0xc04241e  jal         func_109078
    ctx->pc = 0x109BE0u;
    SET_GPR_U32(ctx, 31, 0x109BE8u);
    ctx->pc = 0x109BE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BE0u;
    // 0x109be4: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109078u, 0x109BE0u, 0x109BE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BE8u;
label_109be8:
    // 0x109be8: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x109be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bec: 0xc04240a  jal         func_109028
    ctx->pc = 0x109BECu;
    SET_GPR_U32(ctx, 31, 0x109BF4u);
    ctx->pc = 0x109BF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BECu;
    // 0x109bf0: 0x2405000f  addiu       $a1, $zero, 0xF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109028u, 0x109BECu, 0x109BF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109BF4u;
label_109bf4:
    // 0x109bf4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x109bf4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bf8: 0xc04241e  jal         func_109078
    ctx->pc = 0x109BF8u;
    SET_GPR_U32(ctx, 31, 0x109C00u);
    ctx->pc = 0x109BFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x109BF8u;
    // 0x109bfc: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x109078u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109078u, 0x109BF8u, 0x109C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x109C00u;
label_109c00:
    // 0x109c00: 0x101780  sll         $v0, $s0, 30
    ctx->pc = 0x109c00u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 30));
    // 0x109c04: 0x118bc0  sll         $s1, $s1, 15
    ctx->pc = 0x109c04u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 17), 15));
    // 0x109c08: 0x511025  or          $v0, $v0, $s1
    ctx->pc = 0x109c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 17));
    // 0x109c0c: 0x108082  srl         $s0, $s0, 2
    ctx->pc = 0x109c0cu;
    SET_GPR_S32(ctx, 16, (int32_t)SRL32(GPR_U32(ctx, 16), 2));
    // 0x109c10: 0x521025  or          $v0, $v0, $s2
    ctx->pc = 0x109c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 18));
    // 0x109c14: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x109c14u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x109c18: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x109c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x109c1c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x109c1cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x109c20: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x109c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x109c24: 0x2028025  or          $s0, $s0, $v0
    ctx->pc = 0x109c24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x109c28: 0xfe900018  sd          $s0, 0x18($s4)
    ctx->pc = 0x109c28u;
    WRITE64(ADD32(GPR_U32(ctx, 20), 24), GPR_U64(ctx, 16));
    // 0x109c2c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x109c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->pc = 0x109c30u;
}
