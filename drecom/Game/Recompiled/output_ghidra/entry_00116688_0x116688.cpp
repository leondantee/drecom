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

// Function: entry_00116688
// Address: 0x116688 - 0x11671c
void entry_00116688_0x116688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00116688_0x116688");
#endif

    switch (ctx->pc) {
        case 0x116694u: goto label_116694;
        case 0x11669cu: goto label_11669c;
        case 0x1166a8u: goto label_1166a8;
        case 0x1166b4u: goto label_1166b4;
        case 0x1166c0u: goto label_1166c0;
        case 0x1166e0u: goto label_1166e0;
        case 0x1166f0u: goto label_1166f0;
        case 0x116704u: goto label_116704;
        default: break;
    }

    ctx->pc = 0x116688u;

    // 0x116688: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x116688u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11668c: 0xc047b9a  jal         func_11EE68
    ctx->pc = 0x11668Cu;
    SET_GPR_U32(ctx, 31, 0x116694u);
    ctx->pc = 0x116690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11668Cu;
    // 0x116690: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EE68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EE68u, 0x11668Cu, 0x116694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116694u;
label_116694:
    // 0x116694: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x116694u;
    SET_GPR_U32(ctx, 31, 0x11669Cu);
    ctx->pc = 0x116698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116694u;
    // 0x116698: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x116694u, 0x11669Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11669Cu;
label_11669c:
    // 0x11669c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11669cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166a0: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x1166A0u;
    SET_GPR_U32(ctx, 31, 0x1166A8u);
    ctx->pc = 0x1166A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166A0u;
    // 0x1166a4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x1166A0u, 0x1166A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166A8u;
label_1166a8:
    // 0x1166a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1166a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166ac: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1166ACu;
    SET_GPR_U32(ctx, 31, 0x1166B4u);
    ctx->pc = 0x1166B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166ACu;
    // 0x1166b0: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1166ACu, 0x1166B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166B4u;
label_1166b4:
    // 0x1166b4: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x1166b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166b8: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x1166B8u;
    SET_GPR_U32(ctx, 31, 0x1166C0u);
    ctx->pc = 0x1166BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166B8u;
    // 0x1166bc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x1166B8u, 0x1166C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166C0u;
label_1166c0:
    // 0x1166c0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1166c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166c4: 0x26220030  addiu       $v0, $s1, 0x30
    ctx->pc = 0x1166c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
    // 0x1166c8: 0xa2a20000  sb          $v0, 0x0($s5)
    ctx->pc = 0x1166c8u;
    WRITE8(ADD32(GPR_U32(ctx, 21), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1166cc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x1166ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1166d0: 0x1684ffe3  bne         $s4, $a0, . + 4 + (-0x1D << 2)
    ctx->pc = 0x1166D0u;
    {
        const bool branch_taken_0x1166d0 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 4));
        ctx->pc = 0x1166D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166D0u;
        // 0x1166d4: 0x26b50001  addiu       $s5, $s5, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166d0) {
            ctx->pc = 0x116660u;
            return;
        }
    }
    ctx->pc = 0x1166D8u;
    // 0x1166d8: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1166D8u;
    SET_GPR_U32(ctx, 31, 0x1166E0u);
    ctx->pc = 0x1166DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166D8u;
    // 0x1166dc: 0xa0202d  daddu       $a0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1166D8u, 0x1166E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166E0u;
label_1166e0:
    // 0x1166e0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1166e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166e4: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1166e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166e8: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1166E8u;
    SET_GPR_U32(ctx, 31, 0x1166F0u);
    ctx->pc = 0x1166ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166E8u;
    // 0x1166ec: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1166E8u, 0x1166F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1166F0u;
label_1166f0:
    // 0x1166f0: 0x1c40000c  bgtz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1166F0u;
    {
        const bool branch_taken_0x1166f0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x1166F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1166F0u;
        // 0x1166f4: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1166f0) {
            ctx->pc = 0x116724u;
            return;
        }
    }
    ctx->pc = 0x1166F8u;
    // 0x1166f8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1166f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1166fc: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x1166FCu;
    SET_GPR_U32(ctx, 31, 0x116704u);
    ctx->pc = 0x116700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1166FCu;
    // 0x116700: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x1166FCu, 0x116704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116704u;
label_116704:
    // 0x116704: 0x144001e3  bnez        $v0, . + 4 + (0x1E3 << 2)
    ctx->pc = 0x116704u;
    {
        const bool branch_taken_0x116704 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x116708u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116704u;
        // 0x116708: 0x32220001  andi        $v0, $s1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x116704) {
            ctx->pc = 0x116E94u;
            return;
        }
    }
    ctx->pc = 0x11670Cu;
    // 0x11670c: 0x104001e1  beqz        $v0, . + 4 + (0x1E1 << 2)
    ctx->pc = 0x11670Cu;
    {
        const bool branch_taken_0x11670c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x116710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11670Cu;
        // 0x116710: 0x24050039  addiu       $a1, $zero, 0x39 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11670c) {
            ctx->pc = 0x116E94u;
            return;
        }
    }
    ctx->pc = 0x116714u;
    // 0x116714: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x116714u;
    {
        const bool branch_taken_0x116714 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x116718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x116714u;
        // 0x116718: 0x24030030  addiu       $v1, $zero, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x116714) {
            ctx->pc = 0x116728u;
            return;
        }
    }
    ctx->pc = 0x11671Cu;
}
