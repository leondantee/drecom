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

// Function: __kernel_sin
// Address: 0x1135e8 - 0x1137bc
void ps2___kernel_sin_0x1135e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2___kernel_sin_0x1135e8");
#endif

    switch (ctx->pc) {
        case 0x113640u: goto label_113640;
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
        case 0x113738u: goto label_113738;
        case 0x113748u: goto label_113748;
        case 0x113754u: goto label_113754;
        case 0x113760u: goto label_113760;
        case 0x11376cu: goto label_11376c;
        case 0x113780u: goto label_113780;
        case 0x11378cu: goto label_11378c;
        case 0x113798u: goto label_113798;
        default: break;
    }

    ctx->pc = 0x1135e8u;

    // 0x1135e8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1135e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1135ec: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x1135ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x1135f0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x1135f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x1135f4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x1135f4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1135f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1135f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1135fc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x1135fcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113600: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x113600u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x113604: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x113604u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113608: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x113608u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x11360c: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11360cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x113610: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x113610u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113614: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x113614u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x113618: 0x3c047fff  lui         $a0, 0x7FFF
    ctx->pc = 0x113618u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32767 << 16));
    // 0x11361c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x11361cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x113620: 0x3c033e3f  lui         $v1, 0x3E3F
    ctx->pc = 0x113620u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)15935 << 16));
    // 0x113624: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x113624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x113628: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x113628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x11362c: 0x62182a  slt         $v1, $v1, $v0
    ctx->pc = 0x11362cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x113630: 0x14600007  bnez        $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x113630u;
    {
        const bool branch_taken_0x113630 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x113634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113630u;
        // 0x113634: 0xffb10010  sd          $s1, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113630) {
            ctx->pc = 0x113650u;
            goto label_113650;
        }
    }
    ctx->pc = 0x113638u;
    // 0x113638: 0xc047c7c  jal         func_11F1F0
    ctx->pc = 0x113638u;
    SET_GPR_U32(ctx, 31, 0x113640u);
    ctx->pc = 0x11363Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113638u;
    // 0x11363c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11F1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F1F0u, 0x113638u, 0x113640u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113640u;
label_113640:
    // 0x113640: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x113640u;
    {
        const bool branch_taken_0x113640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x113644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113640u;
        // 0x113644: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113640) {
            ctx->pc = 0x113654u;
            goto label_113654;
        }
    }
    ctx->pc = 0x113648u;
    // 0x113648: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x113648u;
    {
        const bool branch_taken_0x113648 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11364Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x113648u;
        // 0x11364c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x113648) {
            ctx->pc = 0x113798u;
            goto label_113798;
        }
    }
    ctx->pc = 0x113650u;
label_113650:
    // 0x113650: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x113650u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_113654:
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
            goto label_113728;
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
            goto label_11379c;
        }
    }
    ctx->pc = 0x113728u;
label_113728:
    // 0x113728: 0x3405ff80  ori         $a1, $zero, 0xFF80
    ctx->pc = 0x113728u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65408);
    // 0x11372c: 0x52bbc  dsll32      $a1, $a1, 14
    ctx->pc = 0x11372cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 14));
    // 0x113730: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x113730u;
    SET_GPR_U32(ctx, 31, 0x113738u);
    ctx->pc = 0x113734u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113730u;
    // 0x113734: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x113730u, 0x113738u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113738u;
label_113738:
    // 0x113738: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x113738u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11373c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x11373cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113740: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x113740u;
    SET_GPR_U32(ctx, 31, 0x113748u);
    ctx->pc = 0x113744u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113740u;
    // 0x113744: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x113740u, 0x113748u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113748u;
label_113748:
    // 0x113748: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113748u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11374c: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x11374Cu;
    SET_GPR_U32(ctx, 31, 0x113754u);
    ctx->pc = 0x113750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11374Cu;
    // 0x113750: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x11374Cu, 0x113754u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113754u;
label_113754:
    // 0x113754: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x113754u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113758: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x113758u;
    SET_GPR_U32(ctx, 31, 0x113760u);
    ctx->pc = 0x11375Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113758u;
    // 0x11375c: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x113758u, 0x113760u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113760u;
label_113760:
    // 0x113760: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x113760u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113764: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x113764u;
    SET_GPR_U32(ctx, 31, 0x11376Cu);
    ctx->pc = 0x113768u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113764u;
    // 0x113768: 0x2a0282d  daddu       $a1, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x113764u, 0x11376Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11376Cu;
label_11376c:
    // 0x11376c: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x11376cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x113770: 0xdc25d7d8  ld          $a1, -0x2828($at)
    ctx->pc = 0x113770u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x3AD7D8u));
    // 0x113774: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x113774u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113778: 0xc047af0  jal         func_11EBC0
    ctx->pc = 0x113778u;
    SET_GPR_U32(ctx, 31, 0x113780u);
    ctx->pc = 0x11377Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113778u;
    // 0x11377c: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EBC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EBC0u, 0x113778u, 0x113780u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113780u;
label_113780:
    // 0x113780: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x113780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113784: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x113784u;
    SET_GPR_U32(ctx, 31, 0x11378Cu);
    ctx->pc = 0x113788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113784u;
    // 0x113788: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x113784u, 0x11378Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11378Cu;
label_11378c:
    // 0x11378c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x11378cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x113790: 0xc047ad6  jal         func_11EB58
    ctx->pc = 0x113790u;
    SET_GPR_U32(ctx, 31, 0x113798u);
    ctx->pc = 0x113794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x113790u;
    // 0x113794: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11EB58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11EB58u, 0x113790u, 0x113798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x113798u;
label_113798:
    // 0x113798: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x113798u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_11379c:
    // 0x11379c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x11379cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1137a0: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x1137a0u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1137a4: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x1137a4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1137a8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x1137a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1137ac: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x1137acu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1137b0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1137b0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1137b4: 0x3e00008  jr          $ra
    ctx->pc = 0x1137B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1137B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1137B4u;
        // 0x1137b8: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1137B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1137BCu;
}
