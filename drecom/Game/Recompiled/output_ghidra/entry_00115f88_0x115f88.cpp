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

// Function: entry_00115f88
// Address: 0x115f88 - 0x116024
void entry_00115f88_0x115f88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00115f88_0x115f88");
#endif

    switch (ctx->pc) {
        case 0x115f98u: goto label_115f98;
        case 0x115fa8u: goto label_115fa8;
        case 0x115fb8u: goto label_115fb8;
        case 0x115fc4u: goto label_115fc4;
        case 0x115fd4u: goto label_115fd4;
        case 0x115fe0u: goto label_115fe0;
        case 0x115fecu: goto label_115fec;
        case 0x115ffcu: goto label_115ffc;
        case 0x11600cu: goto label_11600c;
        case 0x116018u: goto label_116018;
        default: break;
    }

    ctx->pc = 0x115f88u;

    // 0x115f88: 0x3405ffe0  ori         $a1, $zero, 0xFFE0
    ctx->pc = 0x115f88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65504);
    // 0x115f8c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x115f8cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x115f90: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x115F90u;
    SET_GPR_U32(ctx, 31, 0x115F98u);
    ctx->pc = 0x115F94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115F90u;
    // 0x115f94: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x115F90u, 0x115F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115F98u;
label_115f98:
    // 0x115f98: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x115f98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x115f9c: 0xdc25d970  ld          $a1, -0x2690($at)
    ctx->pc = 0x115f9cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD970u));
    // 0x115fa0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x115FA0u;
    SET_GPR_U32(ctx, 31, 0x115FA8u);
    ctx->pc = 0x115FA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FA0u;
    // 0x115fa4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x115FA0u, 0x115FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FA8u;
label_115fa8:
    // 0x115fa8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x115fa8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x115fac: 0xdc25d978  ld          $a1, -0x2688($at)
    ctx->pc = 0x115facu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD978u));
    // 0x115fb0: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x115FB0u;
    SET_GPR_U32(ctx, 31, 0x115FB8u);
    ctx->pc = 0x115FB4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FB0u;
    // 0x115fb4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x115FB0u, 0x115FB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FB8u;
label_115fb8:
    // 0x115fb8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x115fb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115fbc: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x115FBCu;
    SET_GPR_U32(ctx, 31, 0x115FC4u);
    ctx->pc = 0x115FC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FBCu;
    // 0x115fc0: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x115FBCu, 0x115FC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FC4u;
label_115fc4:
    // 0x115fc4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x115fc4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x115fc8: 0xdc25d980  ld          $a1, -0x2680($at)
    ctx->pc = 0x115fc8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD980u));
    // 0x115fcc: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x115FCCu;
    SET_GPR_U32(ctx, 31, 0x115FD4u);
    ctx->pc = 0x115FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FCCu;
    // 0x115fd0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x115FCCu, 0x115FD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FD4u;
label_115fd4:
    // 0x115fd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x115fd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115fd8: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x115FD8u;
    SET_GPR_U32(ctx, 31, 0x115FE0u);
    ctx->pc = 0x115FDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FD8u;
    // 0x115fdc: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x115FD8u, 0x115FE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FE0u;
label_115fe0:
    // 0x115fe0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x115fe0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115fe4: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x115FE4u;
    SET_GPR_U32(ctx, 31, 0x115FECu);
    ctx->pc = 0x115FE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FE4u;
    // 0x115fe8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x115FE4u, 0x115FECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FECu;
label_115fec:
    // 0x115fec: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x115fecu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ff0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x115ff0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x115ff4: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x115FF4u;
    SET_GPR_U32(ctx, 31, 0x115FFCu);
    ctx->pc = 0x115FF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x115FF4u;
    // 0x115ff8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x115FF4u, 0x115FFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x115FFCu;
label_115ffc:
    // 0x115ffc: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x115FFCu;
    {
        const bool branch_taken_0x115ffc = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x116000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x115FFCu;
        // 0x116000: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x115ffc) {
            ctx->pc = 0x116024u;
            return;
        }
    }
    ctx->pc = 0x116004u;
    // 0x116004: 0xc047c4e  jal         func_11F138
    ctx->pc = 0x116004u;
    SET_GPR_U32(ctx, 31, 0x11600Cu);
    ctx->pc = 0x116008u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116004u;
    // 0x116008: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F138u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F138u, 0x116004u, 0x11600Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11600Cu;
label_11600c:
    // 0x11600c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11600cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x116010: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x116010u;
    SET_GPR_U32(ctx, 31, 0x116018u);
    ctx->pc = 0x116014u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x116010u;
    // 0x116014: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x116010u, 0x116018u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x116018u;
label_116018:
    // 0x116018: 0x2663ffff  addiu       $v1, $s3, -0x1
    ctx->pc = 0x116018u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 19), 4294967295));
    // 0x11601c: 0x62980b  movn        $s3, $v1, $v0
    ctx->pc = 0x11601cu;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
    // 0x116020: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x116020u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->pc = 0x116024u;
}
