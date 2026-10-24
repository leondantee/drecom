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

// Function: fpdiv
// Address: 0x11fa78 - 0x11fbd8
void fpdiv_0x11fa78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("fpdiv_0x11fa78");
#endif

    switch (ctx->pc) {
        case 0x11fa98u: goto label_11fa98;
        case 0x11faa8u: goto label_11faa8;
        case 0x11fb70u: goto label_11fb70;
        case 0x11fbc8u: goto label_11fbc8;
        default: break;
    }

    ctx->pc = 0x11fa78u;

    // 0x11fa78: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11fa78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11fa7c: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x11fa7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x11fa80: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x11fa80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11fa84: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11fa84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11fa88: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x11fa88u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fa8c: 0xe7ac0020  swc1        $f12, 0x20($sp)
    ctx->pc = 0x11fa8cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x11fa90: 0xc047d3e  jal         func_11F4F8
    ctx->pc = 0x11FA90u;
    SET_GPR_U32(ctx, 31, 0x11FA98u);
    ctx->pc = 0x11FA94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FA90u;
    // 0x11fa94: 0xe7ad0024  swc1        $f13, 0x24($sp) (Delay Slot)
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F4F8u, 0x11FA90u, 0x11FA98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FA98u;
label_11fa98:
    // 0x11fa98: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x11fa98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x11fa9c: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x11fa9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x11faa0: 0xc047d3e  jal         func_11F4F8
    ctx->pc = 0x11FAA0u;
    SET_GPR_U32(ctx, 31, 0x11FAA8u);
    ctx->pc = 0x11FAA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11FAA0u;
    // 0x11faa4: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F4F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F4F8u, 0x11FAA0u, 0x11FAA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FAA8u;
label_11faa8:
    // 0x11faa8: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x11faa8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11faac: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x11faacu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11fab0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FAB0u;
    {
        const bool branch_taken_0x11fab0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FAB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAB0u;
        // 0x11fab4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fab0) {
            ctx->pc = 0x11FAC0u;
            goto label_11fac0;
        }
    }
    ctx->pc = 0x11FAB8u;
    // 0x11fab8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x11FAB8u;
    {
        const bool branch_taken_0x11fab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAB8u;
        // 0x11fabc: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fab8) {
            ctx->pc = 0x11FBC0u;
            goto label_11fbc0;
        }
    }
    ctx->pc = 0x11FAC0u;
label_11fac0:
    // 0x11fac0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x11fac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11fac4: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x11fac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11fac8: 0x1440003d  bnez        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x11FAC8u;
    {
        const bool branch_taken_0x11fac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAC8u;
        // 0x11facc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fac8) {
            ctx->pc = 0x11FBC0u;
            goto label_11fbc0;
        }
    }
    ctx->pc = 0x11FAD0u;
    // 0x11fad0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11fad0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11fad4: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x11fad4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x11fad8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x11fad8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x11fadc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x11fadcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x11fae0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FAE0u;
    {
        const bool branch_taken_0x11fae0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FAE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAE0u;
        // 0x11fae4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fae0) {
            ctx->pc = 0x11FAF4u;
            goto label_11faf4;
        }
    }
    ctx->pc = 0x11FAE8u;
    // 0x11fae8: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x11fae8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x11faec: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11FAECu;
    {
        const bool branch_taken_0x11faec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FAF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAECu;
        // 0x11faf0: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11faec) {
            ctx->pc = 0x11FB08u;
            goto label_11fb08;
        }
    }
    ctx->pc = 0x11FAF4u;
label_11faf4:
    // 0x11faf4: 0x14e60032  bne         $a3, $a2, . + 4 + (0x32 << 2)
    ctx->pc = 0x11FAF4u;
    {
        const bool branch_taken_0x11faf4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x11FAF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FAF4u;
        // 0x11faf8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11faf4) {
            ctx->pc = 0x11FBC0u;
            goto label_11fbc0;
        }
    }
    ctx->pc = 0x11FAFCu;
    // 0x11fafc: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11fafcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11fb00: 0x1000002f  b           . + 4 + (0x2F << 2)
    ctx->pc = 0x11FB00u;
    {
        const bool branch_taken_0x11fb00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB00u;
        // 0x11fb04: 0x24446818  addiu       $a0, $v0, 0x6818 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26648));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb00) {
            ctx->pc = 0x11FBC0u;
            goto label_11fbc0;
        }
    }
    ctx->pc = 0x11FB08u;
label_11fb08:
    // 0x11fb08: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FB08u;
    {
        const bool branch_taken_0x11fb08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB08u;
        // 0x11fb0c: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb08) {
            ctx->pc = 0x11FB20u;
            goto label_11fb20;
        }
    }
    ctx->pc = 0x11FB10u;
    // 0x11fb10: 0xafa0000c  sw          $zero, 0xC($sp)
    ctx->pc = 0x11fb10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 0));
    // 0x11fb14: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11fb14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb18: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x11FB18u;
    {
        const bool branch_taken_0x11fb18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB18u;
        // 0x11fb1c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb18) {
            ctx->pc = 0x11FBC0u;
            goto label_11fbc0;
        }
    }
    ctx->pc = 0x11FB20u;
label_11fb20:
    // 0x11fb20: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FB20u;
    {
        const bool branch_taken_0x11fb20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FB24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB20u;
        // 0x11fb24: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb20) {
            ctx->pc = 0x11FB38u;
            goto label_11fb38;
        }
    }
    ctx->pc = 0x11FB28u;
    // 0x11fb28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11fb28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11fb2c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11fb2cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11fb30: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x11FB30u;
    {
        const bool branch_taken_0x11fb30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB30u;
        // 0x11fb34: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb30) {
            ctx->pc = 0x11FBC0u;
            goto label_11fbc0;
        }
    }
    ctx->pc = 0x11FB38u;
label_11fb38:
    // 0x11fb38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x11fb38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x11fb3c: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x11fb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x11fb40: 0x8fa8001c  lw          $t0, 0x1C($sp)
    ctx->pc = 0x11fb40u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 28)));
    // 0x11fb44: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11fb44u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11fb48: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x11fb48u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11fb4c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x11FB4Cu;
    {
        const bool branch_taken_0x11fb4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB4Cu;
        // 0x11fb50: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb4c) {
            ctx->pc = 0x11FB64u;
            goto label_11fb64;
        }
    }
    ctx->pc = 0x11FB54u;
    // 0x11fb54: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11fb54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11fb58: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x11fb58u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x11fb5c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x11fb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x11fb60: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x11fb60u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_11fb64:
    // 0x11fb64: 0x3c024000  lui         $v0, 0x4000
    ctx->pc = 0x11fb64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16384 << 16));
    // 0x11fb68: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11FB68u;
    {
        const bool branch_taken_0x11fb68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FB6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB68u;
        // 0x11fb6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb68) {
            ctx->pc = 0x11FB74u;
            goto label_11fb74;
        }
    }
    ctx->pc = 0x11FB70u;
label_11fb70:
    // 0x11fb70: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x11fb70u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_11fb74:
    // 0x11fb74: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11FB74u;
    {
        const bool branch_taken_0x11fb74 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x11fb74) {
            ctx->pc = 0x11FB78u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FB74u;
            // 0x11fb78: 0x21042  srl         $v0, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FB88u;
            goto label_11fb88;
        }
    }
    ctx->pc = 0x11FB7Cu;
    // 0x11fb7c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x11fb7cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x11fb80: 0x882023  subu        $a0, $a0, $t0
    ctx->pc = 0x11fb80u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 8)));
    // 0x11fb84: 0x21042  srl         $v0, $v0, 1
    ctx->pc = 0x11fb84u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
label_11fb88:
    // 0x11fb88: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11FB88u;
    {
        const bool branch_taken_0x11fb88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11FB8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FB88u;
        // 0x11fb8c: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fb88) {
            ctx->pc = 0x11FB70u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11fb70;
        }
    }
    ctx->pc = 0x11FB90u;
    // 0x11fb90: 0x30e3007f  andi        $v1, $a3, 0x7F
    ctx->pc = 0x11fb90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)127);
    // 0x11fb94: 0x24020040  addiu       $v0, $zero, 0x40
    ctx->pc = 0x11fb94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x11fb98: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11FB98u;
    {
        const bool branch_taken_0x11fb98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11fb98) {
            ctx->pc = 0x11FB9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11FB98u;
            // 0x11fb9c: 0xaca7000c  sw          $a3, 0xC($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11FBBCu;
            goto label_11fbbc;
        }
    }
    ctx->pc = 0x11FBA0u;
    // 0x11fba0: 0x30e20080  andi        $v0, $a3, 0x80
    ctx->pc = 0x11fba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)128);
    // 0x11fba4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11FBA4u;
    {
        const bool branch_taken_0x11fba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBA4u;
        // 0x11fba8: 0x24e20040  addiu       $v0, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fba4) {
            ctx->pc = 0x11FBB4u;
            goto label_11fbb4;
        }
    }
    ctx->pc = 0x11FBACu;
    // 0x11fbac: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11FBACu;
    {
        const bool branch_taken_0x11fbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11FBB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBACu;
        // 0x11fbb0: 0x24e70040  addiu       $a3, $a3, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11fbac) {
            ctx->pc = 0x11FBB8u;
            goto label_11fbb8;
        }
    }
    ctx->pc = 0x11FBB4u;
label_11fbb4:
    // 0x11fbb4: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x11fbb4u;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_11fbb8:
    // 0x11fbb8: 0xaca7000c  sw          $a3, 0xC($a1)
    ctx->pc = 0x11fbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 7));
label_11fbbc:
    // 0x11fbbc: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11fbbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11fbc0:
    // 0x11fbc0: 0xc047cfa  jal         func_11F3E8
    ctx->pc = 0x11FBC0u;
    SET_GPR_U32(ctx, 31, 0x11FBC8u);
    ctx->pc = 0x11F3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F3E8u, 0x11FBC0u, 0x11FBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11FBC8u;
label_11fbc8:
    // 0x11fbc8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11fbc8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11fbcc: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x11fbccu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11fbd0: 0x3e00008  jr          $ra
    ctx->pc = 0x11FBD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11FBD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11FBD0u;
        // 0x11fbd4: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11FBD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11FBD8u;
}
