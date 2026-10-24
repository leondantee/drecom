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

// Function: _lo0bits
// Address: 0x1190e0 - 0x1191a0
void _lo0bits_0x1190e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("_lo0bits_0x1190e0");
#endif

    ctx->pc = 0x1190e0u;

    // 0x1190e0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x1190e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1190e4: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x1190e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x1190e8: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x1190E8u;
    {
        const bool branch_taken_0x1190e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1190ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190E8u;
        // 0x1190ec: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190e8) {
            ctx->pc = 0x119124u;
            goto label_119124;
        }
    }
    ctx->pc = 0x1190F0u;
    // 0x1190f0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1190F0u;
    {
        const bool branch_taken_0x1190f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1190F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190F0u;
        // 0x1190f4: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1190f0) {
            ctx->pc = 0x119100u;
            goto label_119100;
        }
    }
    ctx->pc = 0x1190F8u;
    // 0x1190f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1190F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1190FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1190F8u;
        // 0x1190fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1190F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119100u;
label_119100:
    // 0x119100: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x119100u;
    {
        const bool branch_taken_0x119100 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x119100) {
            ctx->pc = 0x119104u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119100u;
            // 0x119104: 0x31882  srl         $v1, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119118u;
            goto label_119118;
        }
    }
    ctx->pc = 0x119108u;
    // 0x119108: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x119108u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x11910c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11910cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x119110: 0x3e00008  jr          $ra
    ctx->pc = 0x119110u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119110u;
        // 0x119114: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119110u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119118u;
label_119118:
    // 0x119118: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x119118u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11911c: 0x3e00008  jr          $ra
    ctx->pc = 0x11911Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11911Cu;
        // 0x119120: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11911Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119124u;
label_119124:
    // 0x119124: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x119124u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x119128: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119128u;
    {
        const bool branch_taken_0x119128 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11912Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119128u;
        // 0x11912c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119128) {
            ctx->pc = 0x119138u;
            goto label_119138;
        }
    }
    ctx->pc = 0x119130u;
    // 0x119130: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x119130u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x119134: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x119134u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_119138:
    // 0x119138: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x119138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x11913c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11913Cu;
    {
        const bool branch_taken_0x11913c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11913Cu;
        // 0x119140: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11913c) {
            ctx->pc = 0x119150u;
            goto label_119150;
        }
    }
    ctx->pc = 0x119144u;
    // 0x119144: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x119144u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x119148: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x119148u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x11914c: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x11914cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_119150:
    // 0x119150: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119150u;
    {
        const bool branch_taken_0x119150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119150u;
        // 0x119154: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119150) {
            ctx->pc = 0x119164u;
            goto label_119164;
        }
    }
    ctx->pc = 0x119158u;
    // 0x119158: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x119158u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x11915c: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x11915cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x119160: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x119160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_119164:
    // 0x119164: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x119164u;
    {
        const bool branch_taken_0x119164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x119168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119164u;
        // 0x119168: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x119164) {
            ctx->pc = 0x119178u;
            goto label_119178;
        }
    }
    ctx->pc = 0x11916Cu;
    // 0x11916c: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x11916cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x119170: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x119170u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x119174: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x119174u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_119178:
    // 0x119178: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x119178u;
    {
        const bool branch_taken_0x119178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x119178) {
            ctx->pc = 0x11917Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x119178u;
            // 0x11917c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119198u;
            goto label_119198;
        }
    }
    ctx->pc = 0x119180u;
    // 0x119180: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x119180u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x119184: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x119184u;
    {
        const bool branch_taken_0x119184 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x119188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119184u;
        // 0x119188: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119184) {
            ctx->pc = 0x119194u;
            goto label_119194;
        }
    }
    ctx->pc = 0x11918Cu;
    // 0x11918c: 0x3e00008  jr          $ra
    ctx->pc = 0x11918Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x119190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11918Cu;
        // 0x119190: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11918Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x119194u;
label_119194:
    // 0x119194: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x119194u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_119198:
    // 0x119198: 0x3e00008  jr          $ra
    ctx->pc = 0x119198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11919Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119198u;
        // 0x11919c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x119198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1191A0u;
}
