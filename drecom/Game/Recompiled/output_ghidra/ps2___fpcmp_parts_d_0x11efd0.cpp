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

// Function: __fpcmp_parts_d
// Address: 0x11efd0 - 0x11f0e4
void ps2___fpcmp_parts_d_0x11efd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fpcmp_parts_d_0x11efd0");
#endif

    switch (ctx->pc) {
        case 0x11f018u: goto label_11f018;
        case 0x11f088u: goto label_11f088;
        case 0x11f0b4u: goto label_11f0b4;
        default: break;
    }

    ctx->pc = 0x11efd0u;

    // 0x11efd0: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x11efd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11efd4: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x11efd4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11efd8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EFD8u;
    {
        const bool branch_taken_0x11efd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11efd8) {
            ctx->pc = 0x11EFF0u;
            goto label_11eff0;
        }
    }
    ctx->pc = 0x11EFE0u;
    // 0x11efe0: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11efe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11efe4: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x11efe4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11efe8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EFE8u;
    {
        const bool branch_taken_0x11efe8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFE8u;
        // 0x11efec: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11efe8) {
            ctx->pc = 0x11EFF8u;
            goto label_11eff8;
        }
    }
    ctx->pc = 0x11EFF0u;
label_11eff0:
    // 0x11eff0: 0x3e00008  jr          $ra
    ctx->pc = 0x11EFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFF0u;
        // 0x11eff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EFF8u;
label_11eff8:
    // 0x11eff8: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11EFF8u;
    {
        const bool branch_taken_0x11eff8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EFFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFF8u;
        // 0x11effc: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eff8) {
            ctx->pc = 0x11F028u;
            goto label_11f028;
        }
    }
    ctx->pc = 0x11F000u;
    // 0x11f000: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F000u;
    {
        const bool branch_taken_0x11f000 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f000) {
            ctx->pc = 0x11F004u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F000u;
            // 0x11f004: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F018u;
            goto label_11f018;
        }
    }
    ctx->pc = 0x11F008u;
    // 0x11f008: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x11f008u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11f00c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x11f00cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11f010: 0x3e00008  jr          $ra
    ctx->pc = 0x11F010u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F010u;
        // 0x11f014: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F010u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F018u;
label_11f018:
    // 0x11f018: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11f018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f01c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11f01cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f020: 0x3e00008  jr          $ra
    ctx->pc = 0x11F020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F020u;
        // 0x11f024: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F028u;
label_11f028:
    // 0x11f028: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11F028u;
    {
        const bool branch_taken_0x11f028 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f028) {
            ctx->pc = 0x11F02Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F028u;
            // 0x11f02c: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F044u;
            goto label_11f044;
        }
    }
    ctx->pc = 0x11F030u;
    // 0x11f030: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x11f030u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11f034: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11f034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f03c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F03Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F040u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F03Cu;
        // 0x11f040: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F03Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F044u;
label_11f044:
    // 0x11f044: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11F044u;
    {
        const bool branch_taken_0x11f044 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F048u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F044u;
        // 0x11f048: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f044) {
            ctx->pc = 0x11F06Cu;
            goto label_11f06c;
        }
    }
    ctx->pc = 0x11F04Cu;
    // 0x11f04c: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11F04Cu;
    {
        const bool branch_taken_0x11f04c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f04c) {
            ctx->pc = 0x11F050u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F04Cu;
            // 0x11f050: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F05Cu;
            goto label_11f05c;
        }
    }
    ctx->pc = 0x11F054u;
    // 0x11f054: 0x3e00008  jr          $ra
    ctx->pc = 0x11F054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F054u;
        // 0x11f058: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F05Cu;
label_11f05c:
    // 0x11f05c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11f05cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f060: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11f060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f064: 0x3e00008  jr          $ra
    ctx->pc = 0x11F064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F064u;
        // 0x11f068: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F06Cu;
label_11f06c:
    // 0x11f06c: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x11F06Cu;
    {
        const bool branch_taken_0x11f06c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f06c) {
            ctx->pc = 0x11F070u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F06Cu;
            // 0x11f070: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F018u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f018;
        }
    }
    ctx->pc = 0x11F074u;
    // 0x11f074: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x11f074u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11f078: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x11f078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11f07c: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F07Cu;
    {
        const bool branch_taken_0x11f07c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x11f07c) {
            ctx->pc = 0x11F080u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F07Cu;
            // 0x11f080: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F094u;
            goto label_11f094;
        }
    }
    ctx->pc = 0x11F084u;
    // 0x11f084: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11f084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11f088:
    // 0x11f088: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11f088u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f08c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F08Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F08Cu;
        // 0x11f090: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F08Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F094u;
label_11f094:
    // 0x11f094: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x11f094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11f098: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x11f098u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11f09c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F09Cu;
    {
        const bool branch_taken_0x11f09c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f09c) {
            ctx->pc = 0x11F0A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F09Cu;
            // 0x11f0a0: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f088;
        }
    }
    ctx->pc = 0x11F0A4u;
    // 0x11f0a4: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x11f0a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11f0a8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F0A8u;
    {
        const bool branch_taken_0x11f0a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f0a8) {
            ctx->pc = 0x11F0ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F0A8u;
            // 0x11f0ac: 0xdc830010  ld          $v1, 0x10($a0) (Delay Slot)
            SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F0C0u;
            goto label_11f0c0;
        }
    }
    ctx->pc = 0x11F0B0u;
    // 0x11f0b0: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11f0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11f0b4:
    // 0x11f0b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11f0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11f0b8: 0x3e00008  jr          $ra
    ctx->pc = 0x11F0B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F0BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0B8u;
        // 0x11f0bc: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F0B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F0C0u;
label_11f0c0:
    // 0x11f0c0: 0xdca40010  ld          $a0, 0x10($a1)
    ctx->pc = 0x11f0c0u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x11f0c4: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x11f0c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11f0c8: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x11F0C8u;
    {
        const bool branch_taken_0x11f0c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11f0c8) {
            ctx->pc = 0x11F0CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F0C8u;
            // 0x11f0cc: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F088u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f088;
        }
    }
    ctx->pc = 0x11F0D0u;
    // 0x11f0d0: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x11f0d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11f0d4: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11F0D4u;
    {
        const bool branch_taken_0x11f0d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F0D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0D4u;
        // 0x11f0d8: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f0d4) {
            ctx->pc = 0x11F0B4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f0b4;
        }
    }
    ctx->pc = 0x11F0DCu;
    // 0x11f0dc: 0x3e00008  jr          $ra
    ctx->pc = 0x11F0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F0DCu;
        // 0x11f0e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F0DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F0E4u;
}
