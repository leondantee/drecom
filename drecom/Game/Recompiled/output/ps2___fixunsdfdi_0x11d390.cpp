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

// Function: __fixunsdfdi
// Address: 0x11d390 - 0x11d47c
void ps2___fixunsdfdi_0x11d390(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___fixunsdfdi_0x11d390");
#endif

    switch (ctx->pc) {
        case 0x11d3b0u: goto label_11d3b0;
        case 0x11d3c8u: goto label_11d3c8;
        case 0x11d3d0u: goto label_11d3d0;
        case 0x11d3e4u: goto label_11d3e4;
        case 0x11d3f8u: goto label_11d3f8;
        case 0x11d404u: goto label_11d404;
        case 0x11d410u: goto label_11d410;
        case 0x11d424u: goto label_11d424;
        case 0x11d434u: goto label_11d434;
        case 0x11d43cu: goto label_11d43c;
        case 0x11d454u: goto label_11d454;
        default: break;
    }

    ctx->pc = 0x11d390u;

    // 0x11d390: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x11d390u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x11d394: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x11d394u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d398: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11d398u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11d39c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11d39cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3a0: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x11d3a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x11d3a4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11d3a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11d3a8: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x11D3A8u;
    SET_GPR_U32(ctx, 31, 0x11D3B0u);
    ctx->pc = 0x11D3ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3A8u;
    // 0x11d3ac: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x11D3A8u, 0x11D3B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3B0u;
label_11d3b0:
    // 0x11d3b0: 0x440002c  bltz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x11D3B0u;
    {
        const bool branch_taken_0x11d3b0 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x11D3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3B0u;
        // 0x11d3b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3b0) {
            ctx->pc = 0x11D464u;
            goto label_11d464;
        }
    }
    ctx->pc = 0x11D3B8u;
    // 0x11d3b8: 0x3405f7c0  ori         $a1, $zero, 0xF7C0
    ctx->pc = 0x11d3b8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)63424);
    // 0x11d3bc: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x11d3bcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x11d3c0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11D3C0u;
    SET_GPR_U32(ctx, 31, 0x11D3C8u);
    ctx->pc = 0x11D3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3C0u;
    // 0x11d3c4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11D3C0u, 0x11D3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3C8u;
label_11d3c8:
    // 0x11d3c8: 0xc047ca2  jal         func_11F288
    ctx->pc = 0x11D3C8u;
    SET_GPR_U32(ctx, 31, 0x11D3D0u);
    ctx->pc = 0x11D3CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3C8u;
    // 0x11d3cc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x11D3C8u, 0x11D3D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3D0u;
label_11d3d0:
    // 0x11d3d0: 0x2803c  dsll32      $s0, $v0, 0
    ctx->pc = 0x11d3d0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11d3d4: 0x6000005  bltz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x11D3D4u;
    {
        const bool branch_taken_0x11d3d4 = (GPR_S32(ctx, 16) < 0);
        ctx->pc = 0x11D3D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3D4u;
        // 0x11d3d8: 0x32020001  andi        $v0, $s0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3d4) {
            ctx->pc = 0x11D3ECu;
            goto label_11d3ec;
        }
    }
    ctx->pc = 0x11D3DCu;
    // 0x11d3dc: 0xc047520  jal         func_11D480
    ctx->pc = 0x11D3DCu;
    SET_GPR_U32(ctx, 31, 0x11D3E4u);
    ctx->pc = 0x11D3E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3DCu;
    // 0x11d3e0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D480u, 0x11D3DCu, 0x11D3E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3E4u;
label_11d3e4:
    // 0x11d3e4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x11D3E4u;
    {
        const bool branch_taken_0x11d3e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D3E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D3E4u;
        // 0x11d3e8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d3e4) {
            ctx->pc = 0x11D408u;
            goto label_11d408;
        }
    }
    ctx->pc = 0x11D3ECu;
label_11d3ec:
    // 0x11d3ec: 0x10207a  dsrl        $a0, $s0, 1
    ctx->pc = 0x11d3ecu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) >> 1);
    // 0x11d3f0: 0xc047520  jal         func_11D480
    ctx->pc = 0x11D3F0u;
    SET_GPR_U32(ctx, 31, 0x11D3F8u);
    ctx->pc = 0x11D3F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3F0u;
    // 0x11d3f4: 0x442025  or          $a0, $v0, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11D480u, 0x11D3F0u, 0x11D3F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D3F8u;
label_11d3f8:
    // 0x11d3f8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x11d3f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d3fc: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x11D3FCu;
    SET_GPR_U32(ctx, 31, 0x11D404u);
    ctx->pc = 0x11D400u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D3FCu;
    // 0x11d400: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x11D3FCu, 0x11D404u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D404u;
label_11d404:
    // 0x11d404: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x11d404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_11d408:
    // 0x11d408: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11D408u;
    SET_GPR_U32(ctx, 31, 0x11D410u);
    ctx->pc = 0x11D40Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D408u;
    // 0x11d40c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11D408u, 0x11D410u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D410u;
label_11d410:
    // 0x11d410: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x11d410u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d414: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11d414u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d418: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x11d418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d41c: 0xc047c3a  jal         func_11F0E8
    ctx->pc = 0x11D41Cu;
    SET_GPR_U32(ctx, 31, 0x11D424u);
    ctx->pc = 0x11D420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D41Cu;
    // 0x11d420: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F0E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F0E8u, 0x11D41Cu, 0x11D424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D424u;
label_11d424:
    // 0x11d424: 0x4410009  bgez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x11D424u;
    {
        const bool branch_taken_0x11d424 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x11D428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D424u;
        // 0x11d428: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d424) {
            ctx->pc = 0x11D44Cu;
            goto label_11d44c;
        }
    }
    ctx->pc = 0x11D42Cu;
    // 0x11d42c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11D42Cu;
    SET_GPR_U32(ctx, 31, 0x11D434u);
    ctx->pc = 0x11D430u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D42Cu;
    // 0x11d430: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11D42Cu, 0x11D434u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D434u;
label_11d434:
    // 0x11d434: 0xc047ca2  jal         func_11F288
    ctx->pc = 0x11D434u;
    SET_GPR_U32(ctx, 31, 0x11D43Cu);
    ctx->pc = 0x11D438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D434u;
    // 0x11d438: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x11D434u, 0x11D43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D43Cu;
label_11d43c:
    // 0x11d43c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11d43cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11d440: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11d440u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11d444: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x11D444u;
    {
        const bool branch_taken_0x11d444 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D444u;
        // 0x11d448: 0x202802f  dsubu       $s0, $s0, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) - GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d444) {
            ctx->pc = 0x11D460u;
            goto label_11d460;
        }
    }
    ctx->pc = 0x11D44Cu;
label_11d44c:
    // 0x11d44c: 0xc047ca2  jal         func_11F288
    ctx->pc = 0x11D44Cu;
    SET_GPR_U32(ctx, 31, 0x11D454u);
    ctx->pc = 0x11D450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D44Cu;
    // 0x11d450: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F288u, 0x11D44Cu, 0x11D454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D454u;
label_11d454:
    // 0x11d454: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x11d454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x11d458: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x11d458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x11d45c: 0x202802d  daddu       $s0, $s0, $v0
    ctx->pc = 0x11d45cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 2));
label_11d460:
    // 0x11d460: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x11d460u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_11d464:
    // 0x11d464: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x11d464u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d468: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11d468u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d46c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11d46cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d470: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d470u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d474: 0x3e00008  jr          $ra
    ctx->pc = 0x11D474u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D478u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D474u;
        // 0x11d478: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D474u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D47Cu;
}
