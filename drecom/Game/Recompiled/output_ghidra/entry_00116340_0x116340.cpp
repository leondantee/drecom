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

// Function: entry_00116340
// Address: 0x116340 - 0x1163ec
void entry_00116340_0x116340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116340_0x116340");
#endif

    switch (ctx->pc) {
        case 0x116348u: goto label_116348;
        case 0x116354u: goto label_116354;
        case 0x116364u: goto label_116364;
        case 0x1163acu: goto label_1163ac;
        case 0x1163bcu: goto label_1163bc;
        case 0x1163d0u: goto label_1163d0;
        case 0x1163dcu: goto label_1163dc;
        default: break;
    }

    ctx->pc = 0x116340u;

    // 0x116340: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x116340u;
    SET_GPR_U32(ctx, 31, 0x116348u);
    ctx->pc = 0x116344u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116340u;
    // 0x116344: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x116340u, 0x116348u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116348u;
label_116348:
    // 0x116348: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x116348u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11634c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11634Cu;
    SET_GPR_U32(ctx, 31, 0x116354u);
    ctx->pc = 0x116350u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11634Cu;
    // 0x116350: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11634Cu, 0x116354u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116354u;
label_116354:
    // 0x116354: 0x34058038  ori         $a1, $zero, 0x8038
    ctx->pc = 0x116354u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32824);
    // 0x116358: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x116358u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x11635c: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x11635Cu;
    SET_GPR_U32(ctx, 31, 0x116364u);
    ctx->pc = 0x116360u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11635Cu;
    // 0x116360: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x11635Cu, 0x116364u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116364u;
label_116364:
    // 0x116364: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x116364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116368: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x116368u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x11636c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x11636cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x116370: 0x12183f  dsra32      $v1, $s2, 0
    ctx->pc = 0x116370u;
    SET_GPR_S64(ctx, 3, GPR_S64(ctx, 18) >> (32 + 0));
    // 0x116374: 0x3c02fcc0  lui         $v0, 0xFCC0
    ctx->pc = 0x116374u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64704 << 16));
    // 0x116378: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x116378u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x11637c: 0x2449024  and         $s2, $s2, $a0
    ctx->pc = 0x11637cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    // 0x116380: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x116380u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x116384: 0x2439025  or          $s2, $s2, $v1
    ctx->pc = 0x116384u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 18) | GPR_U64(ctx, 3));
    // 0x116388: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x116388u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11638c: 0x54600017  bnel        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x11638Cu;
    {
        const bool branch_taken_0x11638c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x11638c) {
            ctx->pc = 0x116390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11638Cu;
            // 0x116390: 0x8fa40034  lw          $a0, 0x34($sp) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1163ECu;
            return;
        }
    }
    ctx->pc = 0x116394u;
    // 0x116394: 0x34058028  ori         $a1, $zero, 0x8028
    ctx->pc = 0x116394u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32808);
    // 0x116398: 0x52bfc  dsll32      $a1, $a1, 15
    ctx->pc = 0x116398u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 15));
    // 0x11639c: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x11639cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163a0: 0xafa00050  sw          $zero, 0x50($sp)
    ctx->pc = 0x1163a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 0));
    // 0x1163a4: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1163A4u;
    SET_GPR_U32(ctx, 31, 0x1163ACu);
    ctx->pc = 0x1163A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1163A4u;
    // 0x1163a8: 0xafa00054  sw          $zero, 0x54($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1163A4u, 0x1163ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163ACu;
label_1163ac:
    // 0x1163ac: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1163acu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163b0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1163b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163b4: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1163B4u;
    SET_GPR_U32(ctx, 31, 0x1163BCu);
    ctx->pc = 0x1163B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1163B4u;
    // 0x1163b8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1163B4u, 0x1163BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163BCu;
label_1163bc:
    // 0x1163bc: 0x1c4001ca  bgtz        $v0, . + 4 + (0x1CA << 2)
    ctx->pc = 0x1163BCu;
    {
        const bool branch_taken_0x1163bc = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1163C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163BCu;
        // 0x1163c0: 0x8fa30058  lw          $v1, 0x58($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163bc) {
            ctx->pc = 0x116AE8u;
            return;
        }
    }
    ctx->pc = 0x1163C4u;
    // 0x1163c4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1163c4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163c8: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1163C8u;
    SET_GPR_U32(ctx, 31, 0x1163D0u);
    ctx->pc = 0x1163CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1163C8u;
    // 0x1163cc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1163C8u, 0x1163D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163D0u;
label_1163d0:
    // 0x1163d0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1163d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1163d4: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1163D4u;
    SET_GPR_U32(ctx, 31, 0x1163DCu);
    ctx->pc = 0x1163D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1163D4u;
    // 0x1163d8: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1163D4u, 0x1163DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1163DCu;
label_1163dc:
    // 0x1163dc: 0x44001be  bltz        $v0, . + 4 + (0x1BE << 2)
    ctx->pc = 0x1163DCu;
    {
        const bool branch_taken_0x1163dc = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x1163E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163DCu;
        // 0x1163e0: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163dc) {
            ctx->pc = 0x116AD8u;
            return;
        }
    }
    ctx->pc = 0x1163E4u;
    // 0x1163e4: 0x1000007b  b           . + 4 + (0x7B << 2)
    ctx->pc = 0x1163E4u;
    {
        const bool branch_taken_0x1163e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1163E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1163E4u;
        // 0x1163e8: 0x2e0b02d  daddu       $s6, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1163e4) {
            ctx->pc = 0x1165D4u;
            return;
        }
    }
    ctx->pc = 0x1163ECu;
}
