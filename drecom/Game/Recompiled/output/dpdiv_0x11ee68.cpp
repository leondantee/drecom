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

// Function: dpdiv
// Address: 0x11ee68 - 0x11efd0
void dpdiv_0x11ee68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("dpdiv_0x11ee68");
#endif

    switch (ctx->pc) {
        case 0x11ee88u: goto label_11ee88;
        case 0x11ee98u: goto label_11ee98;
        case 0x11ef68u: goto label_11ef68;
        case 0x11efc0u: goto label_11efc0;
        default: break;
    }

    ctx->pc = 0x11ee68u;

    // 0x11ee68: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x11ee68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x11ee6c: 0xffa40040  sd          $a0, 0x40($sp)
    ctx->pc = 0x11ee6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 4));
    // 0x11ee70: 0xffa50048  sd          $a1, 0x48($sp)
    ctx->pc = 0x11ee70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 72), GPR_U64(ctx, 5));
    // 0x11ee74: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x11ee74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x11ee78: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x11ee78u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x11ee7c: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x11ee7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x11ee80: 0xc047a08  jal         func_11E820
    ctx->pc = 0x11EE80u;
    SET_GPR_U32(ctx, 31, 0x11EE88u);
    ctx->pc = 0x11EE84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EE80u;
    // 0x11ee84: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E820u, 0x11EE80u, 0x11EE88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EE88u;
label_11ee88:
    // 0x11ee88: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x11ee88u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x11ee8c: 0x27a40048  addiu       $a0, $sp, 0x48
    ctx->pc = 0x11ee8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 72));
    // 0x11ee90: 0xc047a08  jal         func_11E820
    ctx->pc = 0x11EE90u;
    SET_GPR_U32(ctx, 31, 0x11EE98u);
    ctx->pc = 0x11EE94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11EE90u;
    // 0x11ee94: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E820u, 0x11EE90u, 0x11EE98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EE98u;
label_11ee98:
    // 0x11ee98: 0x8fa70000  lw          $a3, 0x0($sp)
    ctx->pc = 0x11ee98u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11ee9c: 0x2ce20002  sltiu       $v0, $a3, 0x2
    ctx->pc = 0x11ee9cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11eea0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EEA0u;
    {
        const bool branch_taken_0x11eea0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEA0u;
        // 0x11eea4: 0x3a0282d  daddu       $a1, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eea0) {
            ctx->pc = 0x11EEB0u;
            goto label_11eeb0;
        }
    }
    ctx->pc = 0x11EEA8u;
    // 0x11eea8: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x11EEA8u;
    {
        const bool branch_taken_0x11eea8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEA8u;
        // 0x11eeac: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eea8) {
            ctx->pc = 0x11EFB8u;
            goto label_11efb8;
        }
    }
    ctx->pc = 0x11EEB0u;
label_11eeb0:
    // 0x11eeb0: 0x8fa60020  lw          $a2, 0x20($sp)
    ctx->pc = 0x11eeb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11eeb4: 0x2cc20002  sltiu       $v0, $a2, 0x2
    ctx->pc = 0x11eeb4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x11eeb8: 0x1440003f  bnez        $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x11EEB8u;
    {
        const bool branch_taken_0x11eeb8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EEBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEB8u;
        // 0x11eebc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eeb8) {
            ctx->pc = 0x11EFB8u;
            goto label_11efb8;
        }
    }
    ctx->pc = 0x11EEC0u;
    // 0x11eec0: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x11eec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x11eec4: 0x38e40004  xori        $a0, $a3, 0x4
    ctx->pc = 0x11eec4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)4);
    // 0x11eec8: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x11eec8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x11eecc: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x11eeccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x11eed0: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EED0u;
    {
        const bool branch_taken_0x11eed0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EED0u;
        // 0x11eed4: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eed0) {
            ctx->pc = 0x11EEE4u;
            goto label_11eee4;
        }
    }
    ctx->pc = 0x11EED8u;
    // 0x11eed8: 0x38e20002  xori        $v0, $a3, 0x2
    ctx->pc = 0x11eed8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) ^ (uint64_t)(uint16_t)2);
    // 0x11eedc: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11EEDCu;
    {
        const bool branch_taken_0x11eedc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEDCu;
        // 0x11eee0: 0x38c20004  xori        $v0, $a2, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eedc) {
            ctx->pc = 0x11EEF8u;
            goto label_11eef8;
        }
    }
    ctx->pc = 0x11EEE4u;
label_11eee4:
    // 0x11eee4: 0x14e60034  bne         $a3, $a2, . + 4 + (0x34 << 2)
    ctx->pc = 0x11EEE4u;
    {
        const bool branch_taken_0x11eee4 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 6));
        ctx->pc = 0x11EEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEE4u;
        // 0x11eee8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eee4) {
            ctx->pc = 0x11EFB8u;
            goto label_11efb8;
        }
    }
    ctx->pc = 0x11EEECu;
    // 0x11eeec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x11eeecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x11eef0: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x11EEF0u;
    {
        const bool branch_taken_0x11eef0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EEF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEF0u;
        // 0x11eef4: 0x24446800  addiu       $a0, $v0, 0x6800 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 26624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eef0) {
            ctx->pc = 0x11EFB8u;
            goto label_11efb8;
        }
    }
    ctx->pc = 0x11EEF8u;
label_11eef8:
    // 0x11eef8: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EEF8u;
    {
        const bool branch_taken_0x11eef8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EEFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EEF8u;
        // 0x11eefc: 0x38c20002  xori        $v0, $a2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) ^ (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11eef8) {
            ctx->pc = 0x11EF10u;
            goto label_11ef10;
        }
    }
    ctx->pc = 0x11EF00u;
    // 0x11ef00: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x11ef00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x11ef04: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ef04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef08: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x11EF08u;
    {
        const bool branch_taken_0x11ef08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF08u;
        // 0x11ef0c: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef08) {
            ctx->pc = 0x11EFB8u;
            goto label_11efb8;
        }
    }
    ctx->pc = 0x11EF10u;
label_11ef10:
    // 0x11ef10: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EF10u;
    {
        const bool branch_taken_0x11ef10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EF14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF10u;
        // 0x11ef14: 0x8fa30008  lw          $v1, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef10) {
            ctx->pc = 0x11EF28u;
            goto label_11ef28;
        }
    }
    ctx->pc = 0x11EF18u;
    // 0x11ef18: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x11ef18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x11ef1c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x11ef1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11ef20: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x11EF20u;
    {
        const bool branch_taken_0x11ef20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF20u;
        // 0x11ef24: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef20) {
            ctx->pc = 0x11EFB8u;
            goto label_11efb8;
        }
    }
    ctx->pc = 0x11EF28u;
label_11ef28:
    // 0x11ef28: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x11ef28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x11ef2c: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x11ef2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11ef30: 0xdfa80030  ld          $t0, 0x30($sp)
    ctx->pc = 0x11ef30u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11ef34: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x11ef34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11ef38: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x11ef38u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
    // 0x11ef3c: 0x10c00005  beqz        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x11EF3Cu;
    {
        const bool branch_taken_0x11ef3c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF3Cu;
        // 0x11ef40: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef3c) {
            ctx->pc = 0x11EF54u;
            goto label_11ef54;
        }
    }
    ctx->pc = 0x11EF44u;
    // 0x11ef44: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x11ef44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x11ef48: 0x42078  dsll        $a0, $a0, 1
    ctx->pc = 0x11ef48u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
    // 0x11ef4c: 0xafa20008  sw          $v0, 0x8($sp)
    ctx->pc = 0x11ef4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
    // 0x11ef50: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x11ef50u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_11ef54:
    // 0x11ef54: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x11ef54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x11ef58: 0x2137c  dsll32      $v0, $v0, 13
    ctx->pc = 0x11ef58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 13));
    // 0x11ef5c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11EF5Cu;
    {
        const bool branch_taken_0x11ef5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EF60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF5Cu;
        // 0x11ef60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef5c) {
            ctx->pc = 0x11EF6Cu;
            goto label_11ef6c;
        }
    }
    ctx->pc = 0x11EF64u;
    // 0x11ef64: 0x0  nop
    ctx->pc = 0x11ef64u;
    // NOP
label_11ef68:
    // 0x11ef68: 0x88302b  sltu        $a2, $a0, $t0
    ctx->pc = 0x11ef68u;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 8)) ? 1 : 0);
label_11ef6c:
    // 0x11ef6c: 0x54c00004  bnel        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11EF6Cu;
    {
        const bool branch_taken_0x11ef6c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x11ef6c) {
            ctx->pc = 0x11EF70u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EF6Cu;
            // 0x11ef70: 0x2107a  dsrl        $v0, $v0, 1 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EF80u;
            goto label_11ef80;
        }
    }
    ctx->pc = 0x11EF74u;
    // 0x11ef74: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x11ef74u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x11ef78: 0x88202f  dsubu       $a0, $a0, $t0
    ctx->pc = 0x11ef78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) - GPR_U64(ctx, 8));
    // 0x11ef7c: 0x2107a  dsrl        $v0, $v0, 1
    ctx->pc = 0x11ef7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 1);
label_11ef80:
    // 0x11ef80: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x11EF80u;
    {
        const bool branch_taken_0x11ef80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11EF84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF80u;
        // 0x11ef84: 0x42078  dsll        $a0, $a0, 1 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef80) {
            ctx->pc = 0x11EF68u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11ef68;
        }
    }
    ctx->pc = 0x11EF88u;
    // 0x11ef88: 0x30e300ff  andi        $v1, $a3, 0xFF
    ctx->pc = 0x11ef88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x11ef8c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x11ef8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x11ef90: 0x54620008  bnel        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x11EF90u;
    {
        const bool branch_taken_0x11ef90 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11ef90) {
            ctx->pc = 0x11EF94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11EF90u;
            // 0x11ef94: 0xfca70010  sd          $a3, 0x10($a1) (Delay Slot)
            WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11EFB4u;
            goto label_11efb4;
        }
    }
    ctx->pc = 0x11EF98u;
    // 0x11ef98: 0x30e20100  andi        $v0, $a3, 0x100
    ctx->pc = 0x11ef98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)256);
    // 0x11ef9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11EF9Cu;
    {
        const bool branch_taken_0x11ef9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EFA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EF9Cu;
        // 0x11efa0: 0x64e20080  daddiu      $v0, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11ef9c) {
            ctx->pc = 0x11EFACu;
            goto label_11efac;
        }
    }
    ctx->pc = 0x11EFA4u;
    // 0x11efa4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11EFA4u;
    {
        const bool branch_taken_0x11efa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11EFA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFA4u;
        // 0x11efa8: 0x64e70080  daddiu      $a3, $a3, 0x80 (Delay Slot)
        SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)128);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11efa4) {
            ctx->pc = 0x11EFB0u;
            goto label_11efb0;
        }
    }
    ctx->pc = 0x11EFACu;
label_11efac:
    // 0x11efac: 0x44380b  movn        $a3, $v0, $a0
    ctx->pc = 0x11efacu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 2));
label_11efb0:
    // 0x11efb0: 0xfca70010  sd          $a3, 0x10($a1)
    ctx->pc = 0x11efb0u;
    WRITE64(ADD32(GPR_U32(ctx, 5), 16), GPR_U64(ctx, 7));
label_11efb4:
    // 0x11efb4: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x11efb4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_11efb8:
    // 0x11efb8: 0xc0479bc  jal         func_11E6F0
    ctx->pc = 0x11EFB8u;
    SET_GPR_U32(ctx, 31, 0x11EFC0u);
    ctx->pc = 0x11E6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E6F0u, 0x11EFB8u, 0x11EFC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11EFC0u;
label_11efc0:
    // 0x11efc0: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x11efc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x11efc4: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x11efc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x11efc8: 0x3e00008  jr          $ra
    ctx->pc = 0x11EFC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11EFCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11EFC8u;
        // 0x11efcc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11EFC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11EFD0u;
}
