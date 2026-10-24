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

// Function: Ectrl_06
// Address: 0x250770 - 0x250964
void Ectrl_06_0x250770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Ectrl_06_0x250770");
#endif

    switch (ctx->pc) {
        case 0x250770u: goto label_250770;
        case 0x250774u: goto label_250774;
        case 0x250778u: goto label_250778;
        case 0x25077cu: goto label_25077c;
        case 0x250780u: goto label_250780;
        case 0x250784u: goto label_250784;
        case 0x250788u: goto label_250788;
        case 0x25078cu: goto label_25078c;
        case 0x250790u: goto label_250790;
        case 0x250794u: goto label_250794;
        case 0x250798u: goto label_250798;
        case 0x25079cu: goto label_25079c;
        case 0x2507a0u: goto label_2507a0;
        case 0x2507a4u: goto label_2507a4;
        case 0x2507a8u: goto label_2507a8;
        case 0x2507acu: goto label_2507ac;
        case 0x2507b0u: goto label_2507b0;
        case 0x2507b4u: goto label_2507b4;
        case 0x2507b8u: goto label_2507b8;
        case 0x2507bcu: goto label_2507bc;
        case 0x2507c0u: goto label_2507c0;
        case 0x2507c4u: goto label_2507c4;
        case 0x2507c8u: goto label_2507c8;
        case 0x2507ccu: goto label_2507cc;
        case 0x2507d0u: goto label_2507d0;
        case 0x2507d4u: goto label_2507d4;
        case 0x2507d8u: goto label_2507d8;
        case 0x2507dcu: goto label_2507dc;
        case 0x2507e0u: goto label_2507e0;
        case 0x2507e4u: goto label_2507e4;
        case 0x2507e8u: goto label_2507e8;
        case 0x2507ecu: goto label_2507ec;
        case 0x2507f0u: goto label_2507f0;
        case 0x2507f4u: goto label_2507f4;
        case 0x2507f8u: goto label_2507f8;
        case 0x2507fcu: goto label_2507fc;
        case 0x250800u: goto label_250800;
        case 0x250804u: goto label_250804;
        case 0x250808u: goto label_250808;
        case 0x25080cu: goto label_25080c;
        case 0x250810u: goto label_250810;
        case 0x250814u: goto label_250814;
        case 0x250818u: goto label_250818;
        case 0x25081cu: goto label_25081c;
        case 0x250820u: goto label_250820;
        case 0x250824u: goto label_250824;
        case 0x250828u: goto label_250828;
        case 0x25082cu: goto label_25082c;
        case 0x250830u: goto label_250830;
        case 0x250834u: goto label_250834;
        case 0x250838u: goto label_250838;
        case 0x25083cu: goto label_25083c;
        case 0x250840u: goto label_250840;
        case 0x250844u: goto label_250844;
        case 0x250848u: goto label_250848;
        case 0x25084cu: goto label_25084c;
        case 0x250850u: goto label_250850;
        case 0x250854u: goto label_250854;
        case 0x250858u: goto label_250858;
        case 0x25085cu: goto label_25085c;
        case 0x250860u: goto label_250860;
        case 0x250864u: goto label_250864;
        case 0x250868u: goto label_250868;
        case 0x25086cu: goto label_25086c;
        case 0x250870u: goto label_250870;
        case 0x250874u: goto label_250874;
        case 0x250878u: goto label_250878;
        case 0x25087cu: goto label_25087c;
        case 0x250880u: goto label_250880;
        case 0x250884u: goto label_250884;
        case 0x250888u: goto label_250888;
        case 0x25088cu: goto label_25088c;
        case 0x250890u: goto label_250890;
        case 0x250894u: goto label_250894;
        case 0x250898u: goto label_250898;
        case 0x25089cu: goto label_25089c;
        case 0x2508a0u: goto label_2508a0;
        case 0x2508a4u: goto label_2508a4;
        case 0x2508a8u: goto label_2508a8;
        case 0x2508acu: goto label_2508ac;
        case 0x2508b0u: goto label_2508b0;
        case 0x2508b4u: goto label_2508b4;
        case 0x2508b8u: goto label_2508b8;
        case 0x2508bcu: goto label_2508bc;
        case 0x2508c0u: goto label_2508c0;
        case 0x2508c4u: goto label_2508c4;
        case 0x2508c8u: goto label_2508c8;
        case 0x2508ccu: goto label_2508cc;
        case 0x2508d0u: goto label_2508d0;
        case 0x2508d4u: goto label_2508d4;
        case 0x2508d8u: goto label_2508d8;
        case 0x2508dcu: goto label_2508dc;
        case 0x2508e0u: goto label_2508e0;
        case 0x2508e4u: goto label_2508e4;
        case 0x2508e8u: goto label_2508e8;
        case 0x2508ecu: goto label_2508ec;
        case 0x2508f0u: goto label_2508f0;
        case 0x2508f4u: goto label_2508f4;
        case 0x2508f8u: goto label_2508f8;
        case 0x2508fcu: goto label_2508fc;
        case 0x250900u: goto label_250900;
        case 0x250904u: goto label_250904;
        case 0x250908u: goto label_250908;
        case 0x25090cu: goto label_25090c;
        case 0x250910u: goto label_250910;
        case 0x250914u: goto label_250914;
        case 0x250918u: goto label_250918;
        case 0x25091cu: goto label_25091c;
        case 0x250920u: goto label_250920;
        case 0x250924u: goto label_250924;
        case 0x250928u: goto label_250928;
        case 0x25092cu: goto label_25092c;
        case 0x250930u: goto label_250930;
        case 0x250934u: goto label_250934;
        case 0x250938u: goto label_250938;
        case 0x25093cu: goto label_25093c;
        case 0x250940u: goto label_250940;
        case 0x250944u: goto label_250944;
        case 0x250948u: goto label_250948;
        case 0x25094cu: goto label_25094c;
        case 0x250950u: goto label_250950;
        case 0x250954u: goto label_250954;
        case 0x250958u: goto label_250958;
        case 0x25095cu: goto label_25095c;
        case 0x250960u: goto label_250960;
        default: break;
    }

    ctx->pc = 0x250770u;

label_250770:
    // 0x250770: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x250770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_250774:
    // 0x250774: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x250774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_250778:
    // 0x250778: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x250778u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_25077c:
    // 0x25077c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x25077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250780:
    // 0x250780: 0x8c440008  lw          $a0, 0x8($v0)
    ctx->pc = 0x250780u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_250784:
    // 0x250784: 0x2c810009  sltiu       $at, $a0, 0x9
    ctx->pc = 0x250784u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
label_250788:
    // 0x250788: 0x10200068  beqz        $at, . + 4 + (0x68 << 2)
label_25078c:
    if (ctx->pc == 0x25078Cu) {
        ctx->pc = 0x250790u;
        goto label_250790;
    }
    ctx->pc = 0x250788u;
    {
        const bool branch_taken_0x250788 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x250788) {
            ctx->pc = 0x25092Cu;
            goto label_25092c;
        }
    }
    ctx->pc = 0x250790u;
label_250790:
    // 0x250790: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x250790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_250794:
    // 0x250794: 0x244312c0  addiu       $v1, $v0, 0x12C0
    ctx->pc = 0x250794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4800));
label_250798:
    // 0x250798: 0x41080  sll         $v0, $a0, 2
    ctx->pc = 0x250798u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_25079c:
    // 0x25079c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x25079cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2507a0:
    // 0x2507a0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2507a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2507a4:
    // 0x2507a4: 0x400008  jr          $v0
label_2507a8:
    if (ctx->pc == 0x2507A8u) {
        ctx->pc = 0x2507ACu;
        goto label_2507ac;
    }
    ctx->pc = 0x2507A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2507A4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2507ACu;
label_2507ac:
    // 0x2507ac: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2507acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2507b0:
    // 0x2507b0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2507b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2507b4:
    // 0x2507b4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2507b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2507b8:
    // 0x2507b8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2507b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2507bc:
    // 0x2507bc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2507bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2507c0:
    // 0x2507c0: 0x2442b6c0  addiu       $v0, $v0, -0x4940
    ctx->pc = 0x2507c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948544));
label_2507c4:
    // 0x2507c4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2507c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2507c8:
    // 0x2507c8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2507c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2507cc:
    // 0x2507cc: 0x40f809  jalr        $v0
label_2507d0:
    if (ctx->pc == 0x2507D0u) {
        ctx->pc = 0x2507D4u;
        goto label_2507d4;
    }
    ctx->pc = 0x2507CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2507D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2507CCu, 0x2507D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2507D4u;
label_2507d4:
    // 0x2507d4: 0x1000005f  b           . + 4 + (0x5F << 2)
label_2507d8:
    if (ctx->pc == 0x2507D8u) {
        ctx->pc = 0x2507DCu;
        goto label_2507dc;
    }
    ctx->pc = 0x2507D4u;
    {
        const bool branch_taken_0x2507d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2507d4) {
            ctx->pc = 0x250954u;
            goto label_250954;
        }
    }
    ctx->pc = 0x2507DCu;
label_2507dc:
    // 0x2507dc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2507dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2507e0:
    // 0x2507e0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2507e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2507e4:
    // 0x2507e4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2507e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2507e8:
    // 0x2507e8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2507e8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2507ec:
    // 0x2507ec: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2507ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2507f0:
    // 0x2507f0: 0x2442b6c8  addiu       $v0, $v0, -0x4938
    ctx->pc = 0x2507f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948552));
label_2507f4:
    // 0x2507f4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2507f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2507f8:
    // 0x2507f8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2507f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2507fc:
    // 0x2507fc: 0x40f809  jalr        $v0
label_250800:
    if (ctx->pc == 0x250800u) {
        ctx->pc = 0x250804u;
        goto label_250804;
    }
    ctx->pc = 0x2507FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250804u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2507FCu, 0x250804u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250804u;
label_250804:
    // 0x250804: 0x10000053  b           . + 4 + (0x53 << 2)
label_250808:
    if (ctx->pc == 0x250808u) {
        ctx->pc = 0x25080Cu;
        goto label_25080c;
    }
    ctx->pc = 0x250804u;
    {
        const bool branch_taken_0x250804 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250804) {
            ctx->pc = 0x250954u;
            goto label_250954;
        }
    }
    ctx->pc = 0x25080Cu;
label_25080c:
    // 0x25080c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25080cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250810:
    // 0x250810: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x250810u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250814:
    // 0x250814: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x250814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_250818:
    // 0x250818: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x250818u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25081c:
    // 0x25081c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25081cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_250820:
    // 0x250820: 0x2442b6d0  addiu       $v0, $v0, -0x4930
    ctx->pc = 0x250820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948560));
label_250824:
    // 0x250824: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x250824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_250828:
    // 0x250828: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25082c:
    // 0x25082c: 0x40f809  jalr        $v0
label_250830:
    if (ctx->pc == 0x250830u) {
        ctx->pc = 0x250834u;
        goto label_250834;
    }
    ctx->pc = 0x25082Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250834u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25082Cu, 0x250834u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250834u;
label_250834:
    // 0x250834: 0x10000047  b           . + 4 + (0x47 << 2)
label_250838:
    if (ctx->pc == 0x250838u) {
        ctx->pc = 0x25083Cu;
        goto label_25083c;
    }
    ctx->pc = 0x250834u;
    {
        const bool branch_taken_0x250834 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250834) {
            ctx->pc = 0x250954u;
            goto label_250954;
        }
    }
    ctx->pc = 0x25083Cu;
label_25083c:
    // 0x25083c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25083cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250840:
    // 0x250840: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x250840u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250844:
    // 0x250844: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x250844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_250848:
    // 0x250848: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x250848u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25084c:
    // 0x25084c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25084cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_250850:
    // 0x250850: 0x2442b6d8  addiu       $v0, $v0, -0x4928
    ctx->pc = 0x250850u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948568));
label_250854:
    // 0x250854: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x250854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_250858:
    // 0x250858: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250858u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25085c:
    // 0x25085c: 0x40f809  jalr        $v0
label_250860:
    if (ctx->pc == 0x250860u) {
        ctx->pc = 0x250864u;
        goto label_250864;
    }
    ctx->pc = 0x25085Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250864u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25085Cu, 0x250864u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250864u;
label_250864:
    // 0x250864: 0x1000003b  b           . + 4 + (0x3B << 2)
label_250868:
    if (ctx->pc == 0x250868u) {
        ctx->pc = 0x25086Cu;
        goto label_25086c;
    }
    ctx->pc = 0x250864u;
    {
        const bool branch_taken_0x250864 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250864) {
            ctx->pc = 0x250954u;
            goto label_250954;
        }
    }
    ctx->pc = 0x25086Cu;
label_25086c:
    // 0x25086c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25086cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250870:
    // 0x250870: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x250870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250874:
    // 0x250874: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x250874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_250878:
    // 0x250878: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x250878u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25087c:
    // 0x25087c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25087cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_250880:
    // 0x250880: 0x2442b6d8  addiu       $v0, $v0, -0x4928
    ctx->pc = 0x250880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948568));
label_250884:
    // 0x250884: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x250884u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_250888:
    // 0x250888: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250888u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25088c:
    // 0x25088c: 0x40f809  jalr        $v0
label_250890:
    if (ctx->pc == 0x250890u) {
        ctx->pc = 0x250894u;
        goto label_250894;
    }
    ctx->pc = 0x25088Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250894u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25088Cu, 0x250894u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250894u;
label_250894:
    // 0x250894: 0x1000002f  b           . + 4 + (0x2F << 2)
label_250898:
    if (ctx->pc == 0x250898u) {
        ctx->pc = 0x25089Cu;
        goto label_25089c;
    }
    ctx->pc = 0x250894u;
    {
        const bool branch_taken_0x250894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250894) {
            ctx->pc = 0x250954u;
            goto label_250954;
        }
    }
    ctx->pc = 0x25089Cu;
label_25089c:
    // 0x25089c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25089cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2508a0:
    // 0x2508a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2508a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2508a4:
    // 0x2508a4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2508a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2508a8:
    // 0x2508a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2508a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2508ac:
    // 0x2508ac: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2508acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2508b0:
    // 0x2508b0: 0x2442b6e0  addiu       $v0, $v0, -0x4920
    ctx->pc = 0x2508b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948576));
label_2508b4:
    // 0x2508b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2508b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2508b8:
    // 0x2508b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2508b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2508bc:
    // 0x2508bc: 0x40f809  jalr        $v0
label_2508c0:
    if (ctx->pc == 0x2508C0u) {
        ctx->pc = 0x2508C4u;
        goto label_2508c4;
    }
    ctx->pc = 0x2508BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2508C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2508BCu, 0x2508C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2508C4u;
label_2508c4:
    // 0x2508c4: 0x10000023  b           . + 4 + (0x23 << 2)
label_2508c8:
    if (ctx->pc == 0x2508C8u) {
        ctx->pc = 0x2508CCu;
        goto label_2508cc;
    }
    ctx->pc = 0x2508C4u;
    {
        const bool branch_taken_0x2508c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2508c4) {
            ctx->pc = 0x250954u;
            goto label_250954;
        }
    }
    ctx->pc = 0x2508CCu;
label_2508cc:
    // 0x2508cc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2508ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2508d0:
    // 0x2508d0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x2508d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_2508d4:
    // 0x2508d4: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x2508d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_2508d8:
    // 0x2508d8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x2508d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_2508dc:
    // 0x2508dc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x2508dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_2508e0:
    // 0x2508e0: 0x2442b6e8  addiu       $v0, $v0, -0x4918
    ctx->pc = 0x2508e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948584));
label_2508e4:
    // 0x2508e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2508e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_2508e8:
    // 0x2508e8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2508e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2508ec:
    // 0x2508ec: 0x40f809  jalr        $v0
label_2508f0:
    if (ctx->pc == 0x2508F0u) {
        ctx->pc = 0x2508F4u;
        goto label_2508f4;
    }
    ctx->pc = 0x2508ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2508F4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2508ECu, 0x2508F4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2508F4u;
label_2508f4:
    // 0x2508f4: 0x10000017  b           . + 4 + (0x17 << 2)
label_2508f8:
    if (ctx->pc == 0x2508F8u) {
        ctx->pc = 0x2508FCu;
        goto label_2508fc;
    }
    ctx->pc = 0x2508F4u;
    {
        const bool branch_taken_0x2508f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2508f4) {
            ctx->pc = 0x250954u;
            goto label_250954;
        }
    }
    ctx->pc = 0x2508FCu;
label_2508fc:
    // 0x2508fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x2508fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250900:
    // 0x250900: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x250900u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250904:
    // 0x250904: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x250904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_250908:
    // 0x250908: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x250908u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25090c:
    // 0x25090c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25090cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_250910:
    // 0x250910: 0x2442b6d8  addiu       $v0, $v0, -0x4928
    ctx->pc = 0x250910u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948568));
label_250914:
    // 0x250914: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x250914u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_250918:
    // 0x250918: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25091c:
    // 0x25091c: 0x40f809  jalr        $v0
label_250920:
    if (ctx->pc == 0x250920u) {
        ctx->pc = 0x250924u;
        goto label_250924;
    }
    ctx->pc = 0x25091Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250924u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25091Cu, 0x250924u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250924u;
label_250924:
    // 0x250924: 0x1000000b  b           . + 4 + (0xB << 2)
label_250928:
    if (ctx->pc == 0x250928u) {
        ctx->pc = 0x25092Cu;
        goto label_25092c;
    }
    ctx->pc = 0x250924u;
    {
        const bool branch_taken_0x250924 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x250924) {
            ctx->pc = 0x250954u;
            goto label_250954;
        }
    }
    ctx->pc = 0x25092Cu;
label_25092c:
    // 0x25092c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x25092cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250930:
    // 0x250930: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x250930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_250934:
    // 0x250934: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x250934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_250938:
    // 0x250938: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x250938u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_25093c:
    // 0x25093c: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x25093cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_250940:
    // 0x250940: 0x2442b6d8  addiu       $v0, $v0, -0x4928
    ctx->pc = 0x250940u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948568));
label_250944:
    // 0x250944: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x250944u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_250948:
    // 0x250948: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x250948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_25094c:
    // 0x25094c: 0x40f809  jalr        $v0
label_250950:
    if (ctx->pc == 0x250950u) {
        ctx->pc = 0x250954u;
        goto label_250954;
    }
    ctx->pc = 0x25094Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x250954u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25094Cu, 0x250954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x250954u;
label_250954:
    // 0x250954: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x250954u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_250958:
    // 0x250958: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x250958u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_25095c:
    // 0x25095c: 0x3e00008  jr          $ra
label_250960:
    if (ctx->pc == 0x250960u) {
        ctx->pc = 0x250964u;
        goto label_fallthrough_0x25095c;
    }
    ctx->pc = 0x25095Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x25095Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x25095c:
    ctx->pc = 0x250964u;
}
