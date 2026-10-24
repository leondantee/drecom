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

// Function: entry_00113654
// Address: 0x113654 - 0x113728
void entry_00113654_0x113654(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00113654_0x113654");
#endif

    switch (ctx->pc) {
        case 0x11365cu: goto label_11365c;
        case 0x11366cu: goto label_11366c;
        case 0x113680u: goto label_113680;
        case 0x113690u: goto label_113690;
        case 0x11369cu: goto label_11369c;
        case 0x1136acu: goto label_1136ac;
        case 0x1136b8u: goto label_1136b8;
        case 0x1136c8u: goto label_1136c8;
        case 0x1136d4u: goto label_1136d4;
        case 0x1136e4u: goto label_1136e4;
        case 0x1136f8u: goto label_1136f8;
        case 0x113708u: goto label_113708;
        case 0x113714u: goto label_113714;
        case 0x113720u: goto label_113720;
        default: break;
    }

    ctx->pc = 0x113654u;

    // 0x113654: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x113654u;
    SET_GPR_U32(ctx, 31, 0x11365Cu);
    ctx->pc = 0x113658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113654u;
    // 0x113658: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x113654u, 0x11365Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11365Cu;
label_11365c:
    // 0x11365c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x11365cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113660: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x113660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113664: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x113664u;
    SET_GPR_U32(ctx, 31, 0x11366Cu);
    ctx->pc = 0x113668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113664u;
    // 0x113668: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x113664u, 0x11366Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11366Cu;
label_11366c:
    // 0x11366c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x11366cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x113670: 0xdc25d7a8  ld          $a1, -0x2858($at)
    ctx->pc = 0x113670u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD7A8u));
    // 0x113674: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x113674u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113678: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x113678u;
    SET_GPR_U32(ctx, 31, 0x113680u);
    ctx->pc = 0x11367Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113678u;
    // 0x11367c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x113678u, 0x113680u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113680u;
label_113680:
    // 0x113680: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x113680u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x113684: 0xdc25d7b0  ld          $a1, -0x2850($at)
    ctx->pc = 0x113684u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD7B0u));
    // 0x113688: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x113688u;
    SET_GPR_U32(ctx, 31, 0x113690u);
    ctx->pc = 0x11368Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113688u;
    // 0x11368c: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x113688u, 0x113690u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113690u;
label_113690:
    // 0x113690: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x113690u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113694: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x113694u;
    SET_GPR_U32(ctx, 31, 0x11369Cu);
    ctx->pc = 0x113698u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113694u;
    // 0x113698: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x113694u, 0x11369Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11369Cu;
label_11369c:
    // 0x11369c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x11369cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1136a0: 0xdc25d7b8  ld          $a1, -0x2848($at)
    ctx->pc = 0x1136a0u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD7B8u));
    // 0x1136a4: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1136A4u;
    SET_GPR_U32(ctx, 31, 0x1136ACu);
    ctx->pc = 0x1136A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136A4u;
    // 0x1136a8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1136A4u, 0x1136ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136ACu;
label_1136ac:
    // 0x1136ac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1136acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1136b0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1136B0u;
    SET_GPR_U32(ctx, 31, 0x1136B8u);
    ctx->pc = 0x1136B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136B0u;
    // 0x1136b4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1136B0u, 0x1136B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136B8u;
label_1136b8:
    // 0x1136b8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1136b8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1136bc: 0xdc25d7c0  ld          $a1, -0x2840($at)
    ctx->pc = 0x1136bcu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD7C0u));
    // 0x1136c0: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1136C0u;
    SET_GPR_U32(ctx, 31, 0x1136C8u);
    ctx->pc = 0x1136C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136C0u;
    // 0x1136c4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1136C0u, 0x1136C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136C8u;
label_1136c8:
    // 0x1136c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1136c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1136cc: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1136CCu;
    SET_GPR_U32(ctx, 31, 0x1136D4u);
    ctx->pc = 0x1136D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136CCu;
    // 0x1136d0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1136CCu, 0x1136D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136D4u;
label_1136d4:
    // 0x1136d4: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1136d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1136d8: 0xdc25d7c8  ld          $a1, -0x2838($at)
    ctx->pc = 0x1136d8u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD7C8u));
    // 0x1136dc: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x1136DCu;
    SET_GPR_U32(ctx, 31, 0x1136E4u);
    ctx->pc = 0x1136E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136DCu;
    // 0x1136e0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x1136DCu, 0x1136E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136E4u;
label_1136e4:
    // 0x1136e4: 0x16000010  bnez        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x1136E4u;
    {
        const bool branch_taken_0x1136e4 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x1136E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1136E4u;
        // 0x1136e8: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1136e4) {
            ctx->pc = 0x113728u;
            return;
        }
    }
    ctx->pc = 0x1136ECu;
    // 0x1136ec: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1136ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1136f0: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x1136F0u;
    SET_GPR_U32(ctx, 31, 0x1136F8u);
    ctx->pc = 0x1136F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1136F0u;
    // 0x1136f4: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x1136F0u, 0x1136F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1136F8u;
label_1136f8:
    // 0x1136f8: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x1136f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x1136fc: 0xdc25d7d0  ld          $a1, -0x2830($at)
    ctx->pc = 0x1136fcu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD7D0u));
    // 0x113700: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x113700u;
    SET_GPR_U32(ctx, 31, 0x113708u);
    ctx->pc = 0x113704u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113700u;
    // 0x113704: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x113700u, 0x113708u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113708u;
label_113708:
    // 0x113708: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x113708u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11370c: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x11370Cu;
    SET_GPR_U32(ctx, 31, 0x113714u);
    ctx->pc = 0x113710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11370Cu;
    // 0x113710: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x11370Cu, 0x113714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113714u;
label_113714:
    // 0x113714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x113714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113718: 0xc047ac0  jal         func_11EB00
    ctx->pc = 0x113718u;
    SET_GPR_U32(ctx, 31, 0x113720u);
    ctx->pc = 0x11371Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113718u;
    // 0x11371c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB00u, 0x113718u, 0x113720u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113720u;
label_113720:
    // 0x113720: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x113720u;
    {
        const bool branch_taken_0x113720 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x113724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113720u;
        // 0x113724: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113720) {
            ctx->pc = 0x11379Cu;
            return;
        }
    }
    ctx->pc = 0x113728u;
}
