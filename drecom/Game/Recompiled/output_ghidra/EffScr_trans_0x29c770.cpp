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

// Function: EffScr_trans
// Address: 0x29c770 - 0x29c86c
void EffScr_trans_0x29c770(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("EffScr_trans_0x29c770");
#endif

    switch (ctx->pc) {
        case 0x29c770u: goto label_29c770;
        case 0x29c774u: goto label_29c774;
        case 0x29c778u: goto label_29c778;
        case 0x29c77cu: goto label_29c77c;
        case 0x29c780u: goto label_29c780;
        case 0x29c784u: goto label_29c784;
        case 0x29c788u: goto label_29c788;
        case 0x29c78cu: goto label_29c78c;
        case 0x29c790u: goto label_29c790;
        case 0x29c794u: goto label_29c794;
        case 0x29c798u: goto label_29c798;
        case 0x29c79cu: goto label_29c79c;
        case 0x29c7a0u: goto label_29c7a0;
        case 0x29c7a4u: goto label_29c7a4;
        case 0x29c7a8u: goto label_29c7a8;
        case 0x29c7acu: goto label_29c7ac;
        case 0x29c7b0u: goto label_29c7b0;
        case 0x29c7b4u: goto label_29c7b4;
        case 0x29c7b8u: goto label_29c7b8;
        case 0x29c7bcu: goto label_29c7bc;
        case 0x29c7c0u: goto label_29c7c0;
        case 0x29c7c4u: goto label_29c7c4;
        case 0x29c7c8u: goto label_29c7c8;
        case 0x29c7ccu: goto label_29c7cc;
        case 0x29c7d0u: goto label_29c7d0;
        case 0x29c7d4u: goto label_29c7d4;
        case 0x29c7d8u: goto label_29c7d8;
        case 0x29c7dcu: goto label_29c7dc;
        case 0x29c7e0u: goto label_29c7e0;
        case 0x29c7e4u: goto label_29c7e4;
        case 0x29c7e8u: goto label_29c7e8;
        case 0x29c7ecu: goto label_29c7ec;
        case 0x29c7f0u: goto label_29c7f0;
        case 0x29c7f4u: goto label_29c7f4;
        case 0x29c7f8u: goto label_29c7f8;
        case 0x29c7fcu: goto label_29c7fc;
        case 0x29c800u: goto label_29c800;
        case 0x29c804u: goto label_29c804;
        case 0x29c808u: goto label_29c808;
        case 0x29c80cu: goto label_29c80c;
        case 0x29c810u: goto label_29c810;
        case 0x29c814u: goto label_29c814;
        case 0x29c818u: goto label_29c818;
        case 0x29c81cu: goto label_29c81c;
        case 0x29c820u: goto label_29c820;
        case 0x29c824u: goto label_29c824;
        case 0x29c828u: goto label_29c828;
        case 0x29c82cu: goto label_29c82c;
        case 0x29c830u: goto label_29c830;
        case 0x29c834u: goto label_29c834;
        case 0x29c838u: goto label_29c838;
        case 0x29c83cu: goto label_29c83c;
        case 0x29c840u: goto label_29c840;
        case 0x29c844u: goto label_29c844;
        case 0x29c848u: goto label_29c848;
        case 0x29c84cu: goto label_29c84c;
        case 0x29c850u: goto label_29c850;
        case 0x29c854u: goto label_29c854;
        case 0x29c858u: goto label_29c858;
        case 0x29c85cu: goto label_29c85c;
        case 0x29c860u: goto label_29c860;
        case 0x29c864u: goto label_29c864;
        case 0x29c868u: goto label_29c868;
        default: break;
    }

    ctx->pc = 0x29c770u;

label_29c770:
    // 0x29c770: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x29c770u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_29c774:
    // 0x29c774: 0x7fbf0020  sq          $ra, 0x20($sp)
    ctx->pc = 0x29c774u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 31));
label_29c778:
    // 0x29c778: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x29c778u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_29c77c:
    // 0x29c77c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x29c77cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_29c780:
    // 0x29c780: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x29c780u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_29c784:
    // 0x29c784: 0x8c23013c  lw          $v1, 0x13C($at)
    ctx->pc = 0x29c784u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 316)));
label_29c788:
    // 0x29c788: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29c788u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_29c78c:
    // 0x29c78c: 0x32440  sll         $a0, $v1, 17
    ctx->pc = 0x29c78cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 17));
label_29c790:
    // 0x29c790: 0x3c030081  lui         $v1, 0x81
    ctx->pc = 0x29c790u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)129 << 16));
label_29c794:
    // 0x29c794: 0x24633580  addiu       $v1, $v1, 0x3580
    ctx->pc = 0x29c794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13696));
label_29c798:
    // 0x29c798: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x29c798u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29c79c:
    // 0x29c79c: 0x3c010085  lui         $at, 0x85
    ctx->pc = 0x29c79cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)133 << 16));
label_29c7a0:
    // 0x29c7a0: 0xac233580  sw          $v1, 0x3580($at)
    ctx->pc = 0x29c7a0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 13696), GPR_U32(ctx, 3));
label_29c7a4:
    // 0x29c7a4: 0x3c030085  lui         $v1, 0x85
    ctx->pc = 0x29c7a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)133 << 16));
label_29c7a8:
    // 0x29c7a8: 0x24703590  addiu       $s0, $v1, 0x3590
    ctx->pc = 0x29c7a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 13712));
label_29c7ac:
    // 0x29c7ac: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x29c7acu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_29c7b0:
    // 0x29c7b0: 0x10000025  b           . + 4 + (0x25 << 2)
label_29c7b4:
    if (ctx->pc == 0x29C7B4u) {
        ctx->pc = 0x29C7B8u;
        goto label_29c7b8;
    }
    ctx->pc = 0x29C7B0u;
    {
        const bool branch_taken_0x29c7b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c7b0) {
            ctx->pc = 0x29C848u;
            goto label_29c848;
        }
    }
    ctx->pc = 0x29C7B8u;
label_29c7b8:
    // 0x29c7b8: 0x111900  sll         $v1, $s1, 4
    ctx->pc = 0x29c7b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 17), 4));
label_29c7bc:
    // 0x29c7bc: 0x711823  subu        $v1, $v1, $s1
    ctx->pc = 0x29c7bcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
label_29c7c0:
    // 0x29c7c0: 0x32140  sll         $a0, $v1, 5
    ctx->pc = 0x29c7c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
label_29c7c4:
    // 0x29c7c4: 0x3c030085  lui         $v1, 0x85
    ctx->pc = 0x29c7c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)133 << 16));
label_29c7c8:
    // 0x29c7c8: 0x24633590  addiu       $v1, $v1, 0x3590
    ctx->pc = 0x29c7c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13712));
label_29c7cc:
    // 0x29c7cc: 0x648021  addu        $s0, $v1, $a0
    ctx->pc = 0x29c7ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_29c7d0:
    // 0x29c7d0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29c7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29c7d4:
    // 0x29c7d4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29c7d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_29c7d8:
    // 0x29c7d8: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
label_29c7dc:
    if (ctx->pc == 0x29C7DCu) {
        ctx->pc = 0x29C7E0u;
        goto label_29c7e0;
    }
    ctx->pc = 0x29C7D8u;
    {
        const bool branch_taken_0x29c7d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c7d8) {
            ctx->pc = 0x29C840u;
            goto label_29c840;
        }
    }
    ctx->pc = 0x29C7E0u;
label_29c7e0:
    // 0x29c7e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x29c7e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_29c7e4:
    // 0x29c7e4: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x29c7e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_29c7e8:
    // 0x29c7e8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
label_29c7ec:
    if (ctx->pc == 0x29C7ECu) {
        ctx->pc = 0x29C7F0u;
        goto label_29c7f0;
    }
    ctx->pc = 0x29C7E8u;
    {
        const bool branch_taken_0x29c7e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c7e8) {
            ctx->pc = 0x29C818u;
            goto label_29c818;
        }
    }
    ctx->pc = 0x29C7F0u;
label_29c7f0:
    // 0x29c7f0: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x29c7f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
label_29c7f4:
    // 0x29c7f4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x29c7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_29c7f8:
    // 0x29c7f8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x29c7f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_29c7fc:
    // 0x29c7fc: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x29c7fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
label_29c800:
    // 0x29c800: 0x24426920  addiu       $v0, $v0, 0x6920
    ctx->pc = 0x29c800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 26912));
label_29c804:
    // 0x29c804: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x29c804u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_29c808:
    // 0x29c808: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x29c808u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_29c80c:
    // 0x29c80c: 0x40f809  jalr        $v0
label_29c810:
    if (ctx->pc == 0x29C810u) {
        ctx->pc = 0x29C814u;
        goto label_29c814;
    }
    ctx->pc = 0x29C80Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29C814u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C80Cu, 0x29C814u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x29C814u;
label_29c814:
    // 0x29c814: 0x0  nop
    ctx->pc = 0x29c814u;
    // NOP
label_29c818:
    // 0x29c818: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x29c818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
label_29c81c:
    // 0x29c81c: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_29c820:
    if (ctx->pc == 0x29C820u) {
        ctx->pc = 0x29C824u;
        goto label_29c824;
    }
    ctx->pc = 0x29C81Cu;
    {
        const bool branch_taken_0x29c81c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x29c81c) {
            ctx->pc = 0x29C840u;
            goto label_29c840;
        }
    }
    ctx->pc = 0x29C824u;
label_29c824:
    // 0x29c824: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x29c824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
label_29c828:
    // 0x29c828: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x29c828u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_29c82c:
    // 0x29c82c: 0xae030198  sw          $v1, 0x198($s0)
    ctx->pc = 0x29c82cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 408), GPR_U32(ctx, 3));
label_29c830:
    // 0x29c830: 0x8e030198  lw          $v1, 0x198($s0)
    ctx->pc = 0x29c830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 408)));
label_29c834:
    // 0x29c834: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
label_29c838:
    if (ctx->pc == 0x29C838u) {
        ctx->pc = 0x29C83Cu;
        goto label_29c83c;
    }
    ctx->pc = 0x29C834u;
    {
        const bool branch_taken_0x29c834 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c834) {
            ctx->pc = 0x29C840u;
            goto label_29c840;
        }
    }
    ctx->pc = 0x29C83Cu;
label_29c83c:
    // 0x29c83c: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x29c83cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
label_29c840:
    // 0x29c840: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x29c840u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_29c844:
    // 0x29c844: 0x0  nop
    ctx->pc = 0x29c844u;
    // NOP
label_29c848:
    // 0x29c848: 0x2e230040  sltiu       $v1, $s1, 0x40
    ctx->pc = 0x29c848u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)64) ? 1 : 0);
label_29c84c:
    // 0x29c84c: 0x1460ffda  bnez        $v1, . + 4 + (-0x26 << 2)
label_29c850:
    if (ctx->pc == 0x29C850u) {
        ctx->pc = 0x29C854u;
        goto label_29c854;
    }
    ctx->pc = 0x29C84Cu;
    {
        const bool branch_taken_0x29c84c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x29c84c) {
            ctx->pc = 0x29C7B8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_29c7b8;
        }
    }
    ctx->pc = 0x29C854u;
label_29c854:
    // 0x29c854: 0x7bbf0020  lq          $ra, 0x20($sp)
    ctx->pc = 0x29c854u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_29c858:
    // 0x29c858: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x29c858u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_29c85c:
    // 0x29c85c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x29c85cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_29c860:
    // 0x29c860: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x29c860u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_29c864:
    // 0x29c864: 0x3e00008  jr          $ra
label_29c868:
    if (ctx->pc == 0x29C868u) {
        ctx->pc = 0x29C86Cu;
        goto label_fallthrough_0x29c864;
    }
    ctx->pc = 0x29C864u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29C864u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x29c864:
    ctx->pc = 0x29C86Cu;
}
