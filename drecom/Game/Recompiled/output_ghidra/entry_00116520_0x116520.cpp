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

// Function: entry_00116520
// Address: 0x116520 - 0x1165a8
void entry_00116520_0x116520(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116520_0x116520");
#endif

    switch (ctx->pc) {
        case 0x116528u: goto label_116528;
        case 0x116534u: goto label_116534;
        case 0x116540u: goto label_116540;
        case 0x116568u: goto label_116568;
        case 0x116574u: goto label_116574;
        case 0x11658cu: goto label_11658c;
        case 0x116598u: goto label_116598;
        default: break;
    }

    ctx->pc = 0x116520u;

    // 0x116520: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x116520u;
    SET_GPR_U32(ctx, 31, 0x116528u);
    ctx->pc = 0x116524u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116520u;
    // 0x116524: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x116520u, 0x116528u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116528u;
label_116528:
    // 0x116528: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x116528u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11652c: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x11652Cu;
    SET_GPR_U32(ctx, 31, 0x116534u);
    ctx->pc = 0x116530u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11652Cu;
    // 0x116530: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x11652Cu, 0x116534u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116534u;
label_116534:
    // 0x116534: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x116534u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116538: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x116538u;
    SET_GPR_U32(ctx, 31, 0x116540u);
    ctx->pc = 0x11653Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116538u;
    // 0x11653c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x116538u, 0x116540u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116540u;
label_116540:
    // 0x116540: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x116540u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116544: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x116544u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x116548: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x116548u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x11654c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x11654cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x116550: 0x1682ffed  bne         $s4, $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x116550u;
    {
        const bool branch_taken_0x116550 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 2));
        ctx->pc = 0x116554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116550u;
        // 0x116554: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116550) {
            ctx->pc = 0x116508u;
            return;
        }
    }
    ctx->pc = 0x116558u;
    // 0x116558: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x116558u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x11655c: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x11655cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x116560: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x116560u;
    SET_GPR_U32(ctx, 31, 0x116568u);
    ctx->pc = 0x116564u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116560u;
    // 0x116564: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x116560u, 0x116568u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116568u;
label_116568:
    // 0x116568: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x116568u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11656c: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x11656Cu;
    SET_GPR_U32(ctx, 31, 0x116574u);
    ctx->pc = 0x116570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11656Cu;
    // 0x116570: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x11656Cu, 0x116574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116574u;
label_116574:
    // 0x116574: 0x5c40006a  bgtzl       $v0, . + 4 + (0x6A << 2)
    ctx->pc = 0x116574u;
    {
        const bool branch_taken_0x116574 = (GPR_S32(ctx, 2) > 0);
        if (branch_taken_0x116574) {
            ctx->pc = 0x116578u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x116574u;
            // 0x116578: 0x26770001  addiu       $s7, $s3, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x116720u;
            return;
        }
    }
    ctx->pc = 0x11657Cu;
    // 0x11657c: 0x3404ff80  ori         $a0, $zero, 0xFF80
    ctx->pc = 0x11657cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x116580: 0x423bc  dsll32      $a0, $a0, 14
    ctx->pc = 0x116580u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 14));
    // 0x116584: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x116584u;
    SET_GPR_U32(ctx, 31, 0x11658Cu);
    ctx->pc = 0x116588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116584u;
    // 0x116588: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x116584u, 0x11658Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11658Cu;
label_11658c:
    // 0x11658c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11658cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116590: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x116590u;
    SET_GPR_U32(ctx, 31, 0x116598u);
    ctx->pc = 0x116594u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116590u;
    // 0x116594: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x116590u, 0x116598u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116598u;
label_116598:
    // 0x116598: 0x441000d  bgez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x116598u;
    {
        const bool branch_taken_0x116598 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11659Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116598u;
        // 0x11659c: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116598) {
            ctx->pc = 0x1165D0u;
            return;
        }
    }
    ctx->pc = 0x1165A0u;
    // 0x1165a0: 0x26770001  addiu       $s7, $s3, 0x1
    ctx->pc = 0x1165a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x1165a4: 0x0  nop
    ctx->pc = 0x1165a4u;
    // NOP
    ctx->pc = 0x1165a8u;
}
