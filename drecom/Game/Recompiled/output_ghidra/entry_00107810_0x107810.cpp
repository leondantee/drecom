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

// Function: entry_00107810
// Address: 0x107810 - 0x10796c
void entry_00107810_0x107810(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107810_0x107810");
#endif

    switch (ctx->pc) {
        case 0x10781cu: goto label_10781c;
        case 0x10782cu: goto label_10782c;
        case 0x10783cu: goto label_10783c;
        case 0x10784cu: goto label_10784c;
        case 0x107884u: goto label_107884;
        case 0x1078bcu: goto label_1078bc;
        case 0x1078ecu: goto label_1078ec;
        case 0x1078f8u: goto label_1078f8;
        case 0x107908u: goto label_107908;
        case 0x107918u: goto label_107918;
        case 0x10792cu: goto label_10792c;
        case 0x10793cu: goto label_10793c;
        case 0x10794cu: goto label_10794c;
        case 0x10795cu: goto label_10795c;
        default: break;
    }

    ctx->pc = 0x107810u;

    // 0x107810: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107814: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107814u;
    SET_GPR_U32(ctx, 31, 0x10781Cu);
    ctx->pc = 0x107818u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107814u;
    // 0x107818: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107814u, 0x10781Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10781Cu;
label_10781c:
    // 0x10781c: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10781cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x107820: 0xae023db0  sw          $v0, 0x3DB0($s0)
    ctx->pc = 0x107820u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15792), GPR_U32(ctx, 2));
    // 0x107824: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107824u;
    SET_GPR_U32(ctx, 31, 0x10782Cu);
    ctx->pc = 0x107828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107824u;
    // 0x107828: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107824u, 0x10782Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10782Cu;
label_10782c:
    // 0x10782c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10782cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x107830: 0xae223db4  sw          $v0, 0x3DB4($s1)
    ctx->pc = 0x107830u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15796), GPR_U32(ctx, 2));
    // 0x107834: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107834u;
    SET_GPR_U32(ctx, 31, 0x10783Cu);
    ctx->pc = 0x107838u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107834u;
    // 0x107838: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107834u, 0x10783Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10783Cu;
label_10783c:
    // 0x10783c: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10783cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x107840: 0xae023db8  sw          $v0, 0x3DB8($s0)
    ctx->pc = 0x107840u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15800), GPR_U32(ctx, 2));
    // 0x107844: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107844u;
    SET_GPR_U32(ctx, 31, 0x10784Cu);
    ctx->pc = 0x107848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107844u;
    // 0x107848: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107844u, 0x10784Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10784Cu;
label_10784c:
    // 0x10784c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10784cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x107850: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x107850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x107854: 0x8ca52010  lw          $a1, 0x2010($a1)
    ctx->pc = 0x107854u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x107858: 0x3c03ffbf  lui         $v1, 0xFFBF
    ctx->pc = 0x107858u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65471 << 16));
    // 0x10785c: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x10785cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x107860: 0x22580  sll         $a0, $v0, 22
    ctx->pc = 0x107860u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 22));
    // 0x107864: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x107864u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x107868: 0xae2244b4  sw          $v0, 0x44B4($s1)
    ctx->pc = 0x107868u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 17588), GPR_U32(ctx, 2));
    // 0x10786c: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x10786cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x107870: 0x3c120038  lui         $s2, 0x38
    ctx->pc = 0x107870u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)56 << 16));
    // 0x107874: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x107874u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x107878: 0xac252010  sw          $a1, 0x2010($at)
    ctx->pc = 0x107878u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 5));
    // 0x10787c: 0xc041c9e  jal         func_107278
    ctx->pc = 0x10787Cu;
    SET_GPR_U32(ctx, 31, 0x107884u);
    ctx->pc = 0x107880u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10787Cu;
    // 0x107880: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x10787Cu, 0x107884u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107884u;
label_107884:
    // 0x107884: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x107884u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x107888: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x107888u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x10788c: 0x8ca52010  lw          $a1, 0x2010($a1)
    ctx->pc = 0x10788cu;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x107890: 0x3c03ffdf  lui         $v1, 0xFFDF
    ctx->pc = 0x107890u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65503 << 16));
    // 0x107894: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x107894u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x107898: 0x22540  sll         $a0, $v0, 21
    ctx->pc = 0x107898u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 21));
    // 0x10789c: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x10789cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1078a0: 0xae023dbc  sw          $v0, 0x3DBC($s0)
    ctx->pc = 0x1078a0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15804), GPR_U32(ctx, 2));
    // 0x1078a4: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1078a4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1078a8: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x1078a8u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x1078ac: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1078acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1078b0: 0xac252010  sw          $a1, 0x2010($at)
    ctx->pc = 0x1078b0u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 5));
    // 0x1078b4: 0xc041c9e  jal         func_107278
    ctx->pc = 0x1078B4u;
    SET_GPR_U32(ctx, 31, 0x1078BCu);
    ctx->pc = 0x1078B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1078B4u;
    // 0x1078b8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x1078B4u, 0x1078BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1078BCu;
label_1078bc:
    // 0x1078bc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x1078bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x1078c0: 0x8ca52010  lw          $a1, 0x2010($a1)
    ctx->pc = 0x1078c0u;
    SET_GPR_S32(ctx, 5, (int32_t)runtime->Load32(rdram, ctx, 0x10002010u));
    // 0x1078c4: 0x3c03ffef  lui         $v1, 0xFFEF
    ctx->pc = 0x1078c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65519 << 16));
    // 0x1078c8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1078c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1078cc: 0x22500  sll         $a0, $v0, 20
    ctx->pc = 0x1078ccu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 20));
    // 0x1078d0: 0xa32824  and         $a1, $a1, $v1
    ctx->pc = 0x1078d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x1078d4: 0xae4244b8  sw          $v0, 0x44B8($s2)
    ctx->pc = 0x1078d4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 17592), GPR_U32(ctx, 2));
    // 0x1078d8: 0xa42825  or          $a1, $a1, $a0
    ctx->pc = 0x1078d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 4));
    // 0x1078dc: 0x3c011000  lui         $at, 0x1000
    ctx->pc = 0x1078dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)4096 << 16));
    // 0x1078e0: 0xac252010  sw          $a1, 0x2010($at)
    ctx->pc = 0x1078e0u;
    runtime->Store32(rdram, ctx, 0x10002010u, GPR_U32(ctx, 5));
    // 0x1078e4: 0xc041c9e  jal         func_107278
    ctx->pc = 0x1078E4u;
    SET_GPR_U32(ctx, 31, 0x1078ECu);
    ctx->pc = 0x1078E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1078E4u;
    // 0x1078e8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x1078E4u, 0x1078ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1078ECu;
label_1078ec:
    // 0x1078ec: 0xae223dc0  sw          $v0, 0x3DC0($s1)
    ctx->pc = 0x1078ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15808), GPR_U32(ctx, 2));
    // 0x1078f0: 0xc041c9e  jal         func_107278
    ctx->pc = 0x1078F0u;
    SET_GPR_U32(ctx, 31, 0x1078F8u);
    ctx->pc = 0x1078F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1078F0u;
    // 0x1078f4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x1078F0u, 0x1078F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1078F8u;
label_1078f8:
    // 0x1078f8: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x1078f8u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x1078fc: 0xae023dc4  sw          $v0, 0x3DC4($s0)
    ctx->pc = 0x1078fcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15812), GPR_U32(ctx, 2));
    // 0x107900: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107900u;
    SET_GPR_U32(ctx, 31, 0x107908u);
    ctx->pc = 0x107904u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107900u;
    // 0x107904: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107900u, 0x107908u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107908u;
label_107908:
    // 0x107908: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x107908u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x10790c: 0xae223dc8  sw          $v0, 0x3DC8($s1)
    ctx->pc = 0x10790cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15816), GPR_U32(ctx, 2));
    // 0x107910: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107910u;
    SET_GPR_U32(ctx, 31, 0x107918u);
    ctx->pc = 0x107914u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107910u;
    // 0x107914: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107910u, 0x107918u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x107918u;
label_107918:
    // 0x107918: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x107918u;
    {
        const bool branch_taken_0x107918 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10791Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x107918u;
        // 0x10791c: 0xae023dcc  sw          $v0, 0x3DCC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 15820), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x107918) {
            ctx->pc = 0x107970u;
            return;
        }
    }
    ctx->pc = 0x107920u;
    // 0x107920: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x107920u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x107924: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107924u;
    SET_GPR_U32(ctx, 31, 0x10792Cu);
    ctx->pc = 0x107928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107924u;
    // 0x107928: 0x3c100038  lui         $s0, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107924u, 0x10792Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10792Cu;
label_10792c:
    // 0x10792c: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10792cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x107930: 0xae023dd0  sw          $v0, 0x3DD0($s0)
    ctx->pc = 0x107930u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15824), GPR_U32(ctx, 2));
    // 0x107934: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107934u;
    SET_GPR_U32(ctx, 31, 0x10793Cu);
    ctx->pc = 0x107938u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107934u;
    // 0x107938: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107934u, 0x10793Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10793Cu;
label_10793c:
    // 0x10793c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10793cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x107940: 0xae223dd4  sw          $v0, 0x3DD4($s1)
    ctx->pc = 0x107940u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15828), GPR_U32(ctx, 2));
    // 0x107944: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107944u;
    SET_GPR_U32(ctx, 31, 0x10794Cu);
    ctx->pc = 0x107948u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107944u;
    // 0x107948: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107944u, 0x10794Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10794Cu;
label_10794c:
    // 0x10794c: 0x3c110038  lui         $s1, 0x38
    ctx->pc = 0x10794cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)56 << 16));
    // 0x107950: 0xae023dd8  sw          $v0, 0x3DD8($s0)
    ctx->pc = 0x107950u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 15832), GPR_U32(ctx, 2));
    // 0x107954: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107954u;
    SET_GPR_U32(ctx, 31, 0x10795Cu);
    ctx->pc = 0x107958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107954u;
    // 0x107958: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107954u, 0x10795Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10795Cu;
label_10795c:
    // 0x10795c: 0x3c100038  lui         $s0, 0x38
    ctx->pc = 0x10795cu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)56 << 16));
    // 0x107960: 0xae223ddc  sw          $v0, 0x3DDC($s1)
    ctx->pc = 0x107960u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 15836), GPR_U32(ctx, 2));
    // 0x107964: 0xc041c9e  jal         func_107278
    ctx->pc = 0x107964u;
    SET_GPR_U32(ctx, 31, 0x10796Cu);
    ctx->pc = 0x107968u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x107964u;
    // 0x107968: 0x24040008  addiu       $a0, $zero, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x107278u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107278u, 0x107964u, 0x10796Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10796Cu;
}
