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

// Function: __fpcmp_parts_f
// Address: 0x11fbd8 - 0x11fcec
void ps2___fpcmp_parts_f_0x11fbd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fpcmp_parts_f_0x11fbd8");
#endif

    switch (ctx->pc) {
        case 0x11fc20u: goto label_11fc20;
        case 0x11fc90u: goto label_11fc90;
        case 0x11fcbcu: goto label_11fcbc;
        default: break;
    }

    ctx->pc = 0x11fbd8u;

    // 0x11fbd8: 0x8c860000  lw          $a2, 0x0($a0)
    ctx->pc = 0x11fbd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x11fbdc: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x11fbdcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11fbe0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FBE0u;
    {
        const bool branch_taken_0x11fbe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fbe0) {
            ctx->pc = 0x11FBF8u;
            goto label_11fbf8;
        }
    }
    ctx->pc = 0x11FBE8u;
    // 0x11fbe8: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x11fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x11fbec: 0x2c620002  sltiu       $v0, $v1, 0x2
    ctx->pc = 0x11fbecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11fbf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FBF0u;
    {
        const bool branch_taken_0x11fbf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FBF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBF0u;
        // 0x11fbf4: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbf0) {
            ctx->pc = 0x11FC00u;
            goto label_11fc00;
        }
    }
    ctx->pc = 0x11FBF8u;
label_11fbf8:
    // 0x11fbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x11FBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBF8u;
        // 0x11fbfc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FC00u;
label_11fc00:
    // 0x11fc00: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x11FC00u;
    {
        const bool branch_taken_0x11fc00 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC00u;
        // 0x11fc04: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc00) {
            ctx->pc = 0x11FC30u;
            goto label_11fc30;
        }
    }
    ctx->pc = 0x11FC08u;
    // 0x11fc08: 0x54400005  bnel        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FC08u;
    {
        const bool branch_taken_0x11fc08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fc08) {
            ctx->pc = 0x11FC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FC08u;
            // 0x11fc0c: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FC20u;
            goto label_11fc20;
        }
    }
    ctx->pc = 0x11FC10u;
    // 0x11fc10: 0x8ca30004  lw          $v1, 0x4($a1)
    ctx->pc = 0x11fc10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11fc14: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x11fc14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11fc18: 0x3e00008  jr          $ra
    ctx->pc = 0x11FC18u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC18u;
        // 0x11fc1c: 0x621023  subu        $v0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC18u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FC20u;
label_11fc20:
    // 0x11fc20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11fc20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fc24: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11fc24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11fc28: 0x3e00008  jr          $ra
    ctx->pc = 0x11FC28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC28u;
        // 0x11fc2c: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FC30u;
label_11fc30:
    // 0x11fc30: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FC30u;
    {
        const bool branch_taken_0x11fc30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fc30) {
            ctx->pc = 0x11FC34u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FC30u;
            // 0x11fc34: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FC4Cu;
            goto label_11fc4c;
        }
    }
    ctx->pc = 0x11FC38u;
    // 0x11fc38: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x11fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11fc3c: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11fc3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11fc40: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11fc40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fc44: 0x3e00008  jr          $ra
    ctx->pc = 0x11FC44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC44u;
        // 0x11fc48: 0x64100a  movz        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FC4Cu;
label_11fc4c:
    // 0x11fc4c: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11FC4Cu;
    {
        const bool branch_taken_0x11fc4c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC4Cu;
        // 0x11fc50: 0x38620002  xori        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fc4c) {
            ctx->pc = 0x11FC74u;
            goto label_11fc74;
        }
    }
    ctx->pc = 0x11FC54u;
    // 0x11fc54: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FC54u;
    {
        const bool branch_taken_0x11fc54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fc54) {
            ctx->pc = 0x11FC58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FC54u;
            // 0x11fc58: 0x8ca40004  lw          $a0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FC64u;
            goto label_11fc64;
        }
    }
    ctx->pc = 0x11FC5Cu;
    // 0x11fc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x11FC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC5Cu;
        // 0x11fc60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FC64u;
label_11fc64:
    // 0x11fc64: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11fc64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fc68: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11fc68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11fc6c: 0x3e00008  jr          $ra
    ctx->pc = 0x11FC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC6Cu;
        // 0x11fc70: 0x64100b  movn        $v0, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FC74u;
label_11fc74:
    // 0x11fc74: 0x5040ffea  beql        $v0, $zero, . + 4 + (-0x16 << 2)
    ctx->pc = 0x11FC74u;
    {
        const bool branch_taken_0x11fc74 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fc74) {
            ctx->pc = 0x11FC78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FC74u;
            // 0x11fc78: 0x8c840004  lw          $a0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FC20u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fc20;
        }
    }
    ctx->pc = 0x11FC7Cu;
    // 0x11fc7c: 0x8c870004  lw          $a3, 0x4($a0)
    ctx->pc = 0x11fc7cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x11fc80: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x11fc80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x11fc84: 0x50e20005  beql        $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FC84u;
    {
        const bool branch_taken_0x11fc84 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        if (branch_taken_0x11fc84) {
            ctx->pc = 0x11FC88u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FC84u;
            // 0x11fc88: 0x8c860008  lw          $a2, 0x8($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FC9Cu;
            goto label_11fc9c;
        }
    }
    ctx->pc = 0x11FC8Cu;
    // 0x11fc8c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x11fc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11fc90:
    // 0x11fc90: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11fc90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11fc94: 0x3e00008  jr          $ra
    ctx->pc = 0x11FC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FC94u;
        // 0x11fc98: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FC9Cu;
label_11fc9c:
    // 0x11fc9c: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x11fc9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x11fca0: 0x66102a  slt         $v0, $v1, $a2
    ctx->pc = 0x11fca0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x11fca4: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11FCA4u;
    {
        const bool branch_taken_0x11fca4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fca4) {
            ctx->pc = 0x11FCA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FCA4u;
            // 0x11fca8: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fc90;
        }
    }
    ctx->pc = 0x11FCACu;
    // 0x11fcac: 0xc3102a  slt         $v0, $a2, $v1
    ctx->pc = 0x11fcacu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x11fcb0: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FCB0u;
    {
        const bool branch_taken_0x11fcb0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11fcb0) {
            ctx->pc = 0x11FCB4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FCB0u;
            // 0x11fcb4: 0x8c83000c  lw          $v1, 0xC($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FCC8u;
            goto label_11fcc8;
        }
    }
    ctx->pc = 0x11FCB8u;
    // 0x11fcb8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x11fcb8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_11fcbc:
    // 0x11fcbc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x11fcc0: 0x3e00008  jr          $ra
    ctx->pc = 0x11FCC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCC0u;
        // 0x11fcc4: 0x67100a  movz        $v0, $v1, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FCC0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FCC8u;
label_11fcc8:
    // 0x11fcc8: 0x8ca4000c  lw          $a0, 0xC($a1)
    ctx->pc = 0x11fcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x11fccc: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x11fcccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11fcd0: 0x5440ffef  bnel        $v0, $zero, . + 4 + (-0x11 << 2)
    ctx->pc = 0x11FCD0u;
    {
        const bool branch_taken_0x11fcd0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fcd0) {
            ctx->pc = 0x11FCD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FCD0u;
            // 0x11fcd4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FC90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fc90;
        }
    }
    ctx->pc = 0x11FCD8u;
    // 0x11fcd8: 0x64102b  sltu        $v0, $v1, $a0
    ctx->pc = 0x11fcd8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x11fcdc: 0x1440fff7  bnez        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x11FCDCu;
    {
        const bool branch_taken_0x11fcdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FCE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCDCu;
        // 0x11fce0: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fcdc) {
            ctx->pc = 0x11FCBCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fcbc;
        }
    }
    ctx->pc = 0x11FCE4u;
    // 0x11fce4: 0x3e00008  jr          $ra
    ctx->pc = 0x11FCE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FCE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FCE4u;
        // 0x11fce8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FCE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FCECu;
}
