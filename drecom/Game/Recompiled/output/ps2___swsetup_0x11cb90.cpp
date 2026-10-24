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

// Function: __swsetup
// Address: 0x11cb90 - 0x11cc9c
void ps2___swsetup_0x11cb90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___swsetup_0x11cb90");
#endif

    switch (ctx->pc) {
        case 0x11cbd0u: goto label_11cbd0;
        case 0x11cc18u: goto label_11cc18;
        case 0x11cc54u: goto label_11cc54;
        default: break;
    }

    ctx->pc = 0x11cb90u;

    // 0x11cb90: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x11cb90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x11cb94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11cb94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11cb98: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x11cb98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x11cb9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11cb9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cba0: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x11cba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x11cba4: 0x54600006  bnel        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x11CBA4u;
    {
        const bool branch_taken_0x11cba4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cba4) {
            ctx->pc = 0x11CBA8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CBA4u;
            // 0x11cba8: 0x8c620038  lw          $v0, 0x38($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CBC0u;
            goto label_11cbc0;
        }
    }
    ctx->pc = 0x11CBACu;
    // 0x11cbac: 0x3c020038  lui         $v0, 0x38
    ctx->pc = 0x11cbacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)56 << 16));
    // 0x11cbb0: 0x8c43490c  lw          $v1, 0x490C($v0)
    ctx->pc = 0x11cbb0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x38490Cu));
    // 0x11cbb4: 0xae030054  sw          $v1, 0x54($s0)
    ctx->pc = 0x11cbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 84), GPR_U32(ctx, 3));
    // 0x11cbb8: 0x8c620038  lw          $v0, 0x38($v1)
    ctx->pc = 0x11cbb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 56)));
    // 0x11cbbc: 0x0  nop
    ctx->pc = 0x11cbbcu;
    // NOP
label_11cbc0:
    // 0x11cbc0: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CBC0u;
    {
        const bool branch_taken_0x11cbc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cbc0) {
            ctx->pc = 0x11CBC4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CBC0u;
            // 0x11cbc4: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CBD4u;
            goto label_11cbd4;
        }
    }
    ctx->pc = 0x11CBC8u;
    // 0x11cbc8: 0xc045ca0  jal         func_117280
    ctx->pc = 0x11CBC8u;
    SET_GPR_U32(ctx, 31, 0x11CBD0u);
    ctx->pc = 0x11CBCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CBC8u;
    // 0x11cbcc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117280u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117280u, 0x11CBC8u, 0x11CBD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CBD0u;
label_11cbd0:
    // 0x11cbd0: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x11cbd0u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_11cbd4:
    // 0x11cbd4: 0x30620008  andi        $v0, $v1, 0x8
    ctx->pc = 0x11cbd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x11cbd8: 0x5440001a  bnel        $v0, $zero, . + 4 + (0x1A << 2)
    ctx->pc = 0x11CBD8u;
    {
        const bool branch_taken_0x11cbd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cbd8) {
            ctx->pc = 0x11CBDCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CBD8u;
            // 0x11cbdc: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CC44u;
            goto label_11cc44;
        }
    }
    ctx->pc = 0x11CBE0u;
    // 0x11cbe0: 0x30620010  andi        $v0, $v1, 0x10
    ctx->pc = 0x11cbe0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16);
    // 0x11cbe4: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x11CBE4u;
    {
        const bool branch_taken_0x11cbe4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CBE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBE4u;
        // 0x11cbe8: 0x30620004  andi        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbe4) {
            ctx->pc = 0x11CBF4u;
            goto label_11cbf4;
        }
    }
    ctx->pc = 0x11CBECu;
    // 0x11cbec: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x11CBECu;
    {
        const bool branch_taken_0x11cbec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CBF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CBECu;
        // 0x11cbf0: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cbec) {
            ctx->pc = 0x11CC8Cu;
            goto label_11cc8c;
        }
    }
    ctx->pc = 0x11CBF4u;
label_11cbf4:
    // 0x11cbf4: 0x50400011  beql        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x11CBF4u;
    {
        const bool branch_taken_0x11cbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11cbf4) {
            ctx->pc = 0x11CBF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CBF4u;
            // 0x11cbf8: 0x8e040010  lw          $a0, 0x10($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CC3Cu;
            goto label_11cc3c;
        }
    }
    ctx->pc = 0x11CBFCu;
    // 0x11cbfc: 0x8e050030  lw          $a1, 0x30($s0)
    ctx->pc = 0x11cbfcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x11cc00: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x11CC00u;
    {
        const bool branch_taken_0x11cc00 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC00u;
        // 0x11cc04: 0x26020040  addiu       $v0, $s0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc00) {
            ctx->pc = 0x11CC20u;
            goto label_11cc20;
        }
    }
    ctx->pc = 0x11CC08u;
    // 0x11cc08: 0x50a20005  beql        $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11CC08u;
    {
        const bool branch_taken_0x11cc08 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        if (branch_taken_0x11cc08) {
            ctx->pc = 0x11CC0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CC08u;
            // 0x11cc0c: 0xae000030  sw          $zero, 0x30($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CC20u;
            goto label_11cc20;
        }
    }
    ctx->pc = 0x11CC10u;
    // 0x11cc10: 0xc045cc4  jal         func_117310
    ctx->pc = 0x11CC10u;
    SET_GPR_U32(ctx, 31, 0x11CC18u);
    ctx->pc = 0x11CC14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC10u;
    // 0x11cc14: 0x8e040054  lw          $a0, 0x54($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117310u;
    {
        ctx->pc = 0x11CC18u;
        ps2_stubs::free_r(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x11CC18u) { return; }
    ctx->pc = 0x11CC18u;
label_11cc18:
    // 0x11cc18: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x11cc18u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x11cc1c: 0xae000030  sw          $zero, 0x30($s0)
    ctx->pc = 0x11cc1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 0));
label_11cc20:
    // 0x11cc20: 0x2402ffdb  addiu       $v0, $zero, -0x25
    ctx->pc = 0x11cc20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967259));
    // 0x11cc24: 0x8e040010  lw          $a0, 0x10($s0)
    ctx->pc = 0x11cc24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x11cc28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x11cc28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x11cc2c: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x11cc2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x11cc30: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x11cc30u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11cc34: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x11cc34u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x11cc38: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x11cc38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_11cc3c:
    // 0x11cc3c: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x11cc3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x11cc40: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x11cc40u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
label_11cc44:
    // 0x11cc44: 0x54800004  bnel        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x11CC44u;
    {
        const bool branch_taken_0x11cc44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x11cc44) {
            ctx->pc = 0x11CC48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11CC44u;
            // 0x11cc48: 0x9603000c  lhu         $v1, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11CC58u;
            goto label_11cc58;
        }
    }
    ctx->pc = 0x11CC4Cu;
    // 0x11cc4c: 0xc045f70  jal         func_117DC0
    ctx->pc = 0x11CC4Cu;
    SET_GPR_U32(ctx, 31, 0x11CC54u);
    ctx->pc = 0x11CC50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11CC4Cu;
    // 0x11cc50: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x117DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x117DC0u, 0x11CC4Cu, 0x11CC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11CC54u;
label_11cc54:
    // 0x11cc54: 0x9603000c  lhu         $v1, 0xC($s0)
    ctx->pc = 0x11cc54u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_11cc58:
    // 0x11cc58: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x11cc58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x11cc5c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x11CC5Cu;
    {
        const bool branch_taken_0x11cc5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC5Cu;
        // 0x11cc60: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc5c) {
            ctx->pc = 0x11CC78u;
            goto label_11cc78;
        }
    }
    ctx->pc = 0x11CC64u;
    // 0x11cc64: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x11cc64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x11cc68: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x11cc68u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x11cc6c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x11cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x11cc70: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x11CC70u;
    {
        const bool branch_taken_0x11cc70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11CC74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC70u;
        // 0x11cc74: 0xae020018  sw          $v0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc70) {
            ctx->pc = 0x11CC88u;
            goto label_11cc88;
        }
    }
    ctx->pc = 0x11CC78u;
label_11cc78:
    // 0x11cc78: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x11CC78u;
    {
        const bool branch_taken_0x11cc78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11CC7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC78u;
        // 0x11cc7c: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11cc78) {
            ctx->pc = 0x11CC84u;
            goto label_11cc84;
        }
    }
    ctx->pc = 0x11CC80u;
    // 0x11cc80: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x11cc80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_11cc84:
    // 0x11cc84: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x11cc84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
label_11cc88:
    // 0x11cc88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x11cc88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_11cc8c:
    // 0x11cc8c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x11cc8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11cc90: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11cc90u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11cc94: 0x3e00008  jr          $ra
    ctx->pc = 0x11CC94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11CC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11CC94u;
        // 0x11cc98: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11CC94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11CC9Cu;
}
