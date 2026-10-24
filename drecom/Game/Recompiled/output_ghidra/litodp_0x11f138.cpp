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

// Function: litodp
// Address: 0x11f138 - 0x11f1f0
void litodp_0x11f138(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("litodp_0x11f138");
#endif

    switch (ctx->pc) {
        case 0x11f1b8u: goto label_11f1b8;
        case 0x11f1e4u: goto label_11f1e4;
        default: break;
    }

    ctx->pc = 0x11f138u;

    // 0x11f138: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11f138u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11f13c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x11f13cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x11f140: 0x41fc2  srl         $v1, $a0, 31
    ctx->pc = 0x11f140u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x11f144: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x11f144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x11f148: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x11f148u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x11f14c: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11F14Cu;
    {
        const bool branch_taken_0x11f14c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F14Cu;
        // 0x11f150: 0xafa30004  sw          $v1, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f14c) {
            ctx->pc = 0x11F160u;
            goto label_11f160;
        }
    }
    ctx->pc = 0x11F154u;
    // 0x11f154: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x11f154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x11f158: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x11F158u;
    {
        const bool branch_taken_0x11f158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F15Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F158u;
        // 0x11f15c: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f158) {
            ctx->pc = 0x11F1DCu;
            goto label_11f1dc;
        }
    }
    ctx->pc = 0x11F160u;
label_11f160:
    // 0x11f160: 0x2402003c  addiu       $v0, $zero, 0x3C
    ctx->pc = 0x11f160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
    // 0x11f164: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x11F164u;
    {
        const bool branch_taken_0x11f164 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F168u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F164u;
        // 0x11f168: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f164) {
            ctx->pc = 0x11F190u;
            goto label_11f190;
        }
    }
    ctx->pc = 0x11F16Cu;
    // 0x11f16c: 0x3c028000  lui         $v0, 0x8000
    ctx->pc = 0x11f16cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32768 << 16));
    // 0x11f170: 0x14820005  bne         $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11F170u;
    {
        const bool branch_taken_0x11f170 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F170u;
        // 0x11f174: 0x41023  negu        $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f170) {
            ctx->pc = 0x11F188u;
            goto label_11f188;
        }
    }
    ctx->pc = 0x11F178u;
    // 0x11f178: 0x3402c1e0  ori         $v0, $zero, 0xC1E0
    ctx->pc = 0x11f178u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)49632);
    // 0x11f17c: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x11f17cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x11f180: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x11F180u;
    {
        const bool branch_taken_0x11f180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F180u;
        // 0x11f184: 0xdfbf0020  ld          $ra, 0x20($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f180) {
            ctx->pc = 0x11F1E8u;
            goto label_11f1e8;
        }
    }
    ctx->pc = 0x11F188u;
label_11f188:
    // 0x11f188: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x11F188u;
    {
        const bool branch_taken_0x11f188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F18Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F188u;
        // 0x11f18c: 0xffa20010  sd          $v0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f188) {
            ctx->pc = 0x11F194u;
            goto label_11f194;
        }
    }
    ctx->pc = 0x11F190u;
label_11f190:
    // 0x11f190: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x11f190u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
label_11f194:
    // 0x11f194: 0xdfa50010  ld          $a1, 0x10($sp)
    ctx->pc = 0x11f194u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f198: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x11f198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f19c: 0x2113a  dsrl        $v0, $v0, 4
    ctx->pc = 0x11f19cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 4);
    // 0x11f1a0: 0x45102b  sltu        $v0, $v0, $a1
    ctx->pc = 0x11f1a0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x11f1a4: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x11F1A4u;
    {
        const bool branch_taken_0x11f1a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x11F1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1A4u;
        // 0x11f1a8: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f1a4) {
            ctx->pc = 0x11F1DCu;
            goto label_11f1dc;
        }
    }
    ctx->pc = 0x11F1ACu;
    // 0x11f1ac: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x11f1acu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x11f1b0: 0x6313a  dsrl        $a2, $a2, 4
    ctx->pc = 0x11f1b0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) >> 4);
    // 0x11f1b4: 0x0  nop
    ctx->pc = 0x11f1b4u;
    // NOP
label_11f1b8:
    // 0x11f1b8: 0x51878  dsll        $v1, $a1, 1
    ctx->pc = 0x11f1b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << 1);
    // 0x11f1bc: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x11f1bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x11f1c0: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x11f1c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f1c4: 0xc3102b  sltu        $v0, $a2, $v1
    ctx->pc = 0x11f1c4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 6) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x11f1c8: 0x0  nop
    ctx->pc = 0x11f1c8u;
    // NOP
    // 0x11f1cc: 0x1040fffa  beqz        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x11F1CCu;
    {
        const bool branch_taken_0x11f1cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f1cc) {
            ctx->pc = 0x11F1B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_11f1b8;
        }
    }
    ctx->pc = 0x11F1D4u;
    // 0x11f1d4: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x11f1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x11f1d8: 0xffa30010  sd          $v1, 0x10($sp)
    ctx->pc = 0x11f1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 3));
label_11f1dc:
    // 0x11f1dc: 0xc0479bc  jal         func_11E6F0
    ctx->pc = 0x11F1DCu;
    SET_GPR_U32(ctx, 31, 0x11F1E4u);
    ctx->pc = 0x11F1E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F1DCu;
    // 0x11f1e0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11E6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E6F0u, 0x11F1DCu, 0x11F1E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11F1E4u;
label_11f1e4:
    // 0x11f1e4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x11f1e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_11f1e8:
    // 0x11f1e8: 0x3e00008  jr          $ra
    ctx->pc = 0x11F1E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F1E8u;
        // 0x11f1ec: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F1E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F1F0u;
}
