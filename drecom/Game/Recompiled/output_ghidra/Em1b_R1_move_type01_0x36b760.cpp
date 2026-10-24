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

// Function: Em1b_R1_move_type01
// Address: 0x36b760 - 0x36b848
void Em1b_R1_move_type01_0x36b760(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em1b_R1_move_type01_0x36b760");
#endif

    switch (ctx->pc) {
        case 0x36b760u: goto label_36b760;
        case 0x36b764u: goto label_36b764;
        case 0x36b768u: goto label_36b768;
        case 0x36b76cu: goto label_36b76c;
        case 0x36b770u: goto label_36b770;
        case 0x36b774u: goto label_36b774;
        case 0x36b778u: goto label_36b778;
        case 0x36b77cu: goto label_36b77c;
        case 0x36b780u: goto label_36b780;
        case 0x36b784u: goto label_36b784;
        case 0x36b788u: goto label_36b788;
        case 0x36b78cu: goto label_36b78c;
        case 0x36b790u: goto label_36b790;
        case 0x36b794u: goto label_36b794;
        case 0x36b798u: goto label_36b798;
        case 0x36b79cu: goto label_36b79c;
        case 0x36b7a0u: goto label_36b7a0;
        case 0x36b7a4u: goto label_36b7a4;
        case 0x36b7a8u: goto label_36b7a8;
        case 0x36b7acu: goto label_36b7ac;
        case 0x36b7b0u: goto label_36b7b0;
        case 0x36b7b4u: goto label_36b7b4;
        case 0x36b7b8u: goto label_36b7b8;
        case 0x36b7bcu: goto label_36b7bc;
        case 0x36b7c0u: goto label_36b7c0;
        case 0x36b7c4u: goto label_36b7c4;
        case 0x36b7c8u: goto label_36b7c8;
        case 0x36b7ccu: goto label_36b7cc;
        case 0x36b7d0u: goto label_36b7d0;
        case 0x36b7d4u: goto label_36b7d4;
        case 0x36b7d8u: goto label_36b7d8;
        case 0x36b7dcu: goto label_36b7dc;
        case 0x36b7e0u: goto label_36b7e0;
        case 0x36b7e4u: goto label_36b7e4;
        case 0x36b7e8u: goto label_36b7e8;
        case 0x36b7ecu: goto label_36b7ec;
        case 0x36b7f0u: goto label_36b7f0;
        case 0x36b7f4u: goto label_36b7f4;
        case 0x36b7f8u: goto label_36b7f8;
        case 0x36b7fcu: goto label_36b7fc;
        case 0x36b800u: goto label_36b800;
        case 0x36b804u: goto label_36b804;
        case 0x36b808u: goto label_36b808;
        case 0x36b80cu: goto label_36b80c;
        case 0x36b810u: goto label_36b810;
        case 0x36b814u: goto label_36b814;
        case 0x36b818u: goto label_36b818;
        case 0x36b81cu: goto label_36b81c;
        case 0x36b820u: goto label_36b820;
        case 0x36b824u: goto label_36b824;
        case 0x36b828u: goto label_36b828;
        case 0x36b82cu: goto label_36b82c;
        case 0x36b830u: goto label_36b830;
        case 0x36b834u: goto label_36b834;
        case 0x36b838u: goto label_36b838;
        case 0x36b83cu: goto label_36b83c;
        case 0x36b840u: goto label_36b840;
        case 0x36b844u: goto label_36b844;
        default: break;
    }

    ctx->pc = 0x36b760u;

label_36b760:
    // 0x36b760: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x36b760u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_36b764:
    // 0x36b764: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x36b764u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_36b768:
    // 0x36b768: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x36b768u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_36b76c:
    // 0x36b76c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b76cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b770:
    // 0x36b770: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36b770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b774:
    // 0x36b774: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x36b774u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_36b778:
    // 0x36b778: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b778u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b77c:
    // 0x36b77c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b77cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b780:
    // 0x36b780: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36b780u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36b784:
    // 0x36b784: 0x2442b240  addiu       $v0, $v0, -0x4DC0
    ctx->pc = 0x36b784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947392));
label_36b788:
    // 0x36b788: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b788u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b78c:
    // 0x36b78c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36b78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36b790:
    // 0x36b790: 0x40f809  jalr        $v0
label_36b794:
    if (ctx->pc == 0x36B794u) {
        ctx->pc = 0x36B798u;
        goto label_36b798;
    }
    ctx->pc = 0x36B790u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B798u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B790u, 0x36B798u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B798u;
label_36b798:
    // 0x36b798: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b798u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b79c:
    // 0x36b79c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x36b79cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b7a0:
    // 0x36b7a0: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x36b7a0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_36b7a4:
    // 0x36b7a4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x36b7a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36b7a8:
    // 0x36b7a8: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36b7a8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_36b7ac:
    // 0x36b7ac: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x36b7acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_36b7b0:
    // 0x36b7b0: 0x2442b260  addiu       $v0, $v0, -0x4DA0
    ctx->pc = 0x36b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947424));
label_36b7b4:
    // 0x36b7b4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x36b7b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36b7b8:
    // 0x36b7b8: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_36b7bc:
    // 0x36b7bc: 0x40f809  jalr        $v0
label_36b7c0:
    if (ctx->pc == 0x36B7C0u) {
        ctx->pc = 0x36B7C4u;
        goto label_36b7c4;
    }
    ctx->pc = 0x36B7BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x36B7C4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B7BCu, 0x36B7C4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x36B7C4u;
label_36b7c4:
    // 0x36b7c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b7c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b7c8:
    // 0x36b7c8: 0xc0db5a4  jal         func_36D690
label_36b7cc:
    if (ctx->pc == 0x36B7CCu) {
        ctx->pc = 0x36B7D0u;
        goto label_36b7d0;
    }
    ctx->pc = 0x36B7C8u;
    SET_GPR_U32(ctx, 31, 0x36B7D0u);
    ctx->pc = 0x36D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D690u, 0x36B7C8u, 0x36B7D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36B7D0u;
label_36b7d0:
    // 0x36b7d0: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x36b7d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_36b7d4:
    // 0x36b7d4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36b7d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_36b7d8:
    // 0x36b7d8: 0xa0234f11  sb          $v1, 0x4F11($at)
    ctx->pc = 0x36b7d8u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20241), (uint8_t)GPR_U32(ctx, 3));
label_36b7dc:
    // 0x36b7dc: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x36b7dcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
label_36b7e0:
    // 0x36b7e0: 0xa0204f12  sb          $zero, 0x4F12($at)
    ctx->pc = 0x36b7e0u;
    WRITE8(ADD32(GPR_U32(ctx, 1), 20242), (uint8_t)GPR_U32(ctx, 0));
label_36b7e4:
    // 0x36b7e4: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x36b7e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
label_36b7e8:
    // 0x36b7e8: 0x942300cc  lhu         $v1, 0xCC($at)
    ctx->pc = 0x36b7e8u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 204)));
label_36b7ec:
    // 0x36b7ec: 0x3063ffff  andi        $v1, $v1, 0xFFFF
    ctx->pc = 0x36b7ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
label_36b7f0:
    // 0x36b7f0: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x36b7f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
label_36b7f4:
    // 0x36b7f4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_36b7f8:
    if (ctx->pc == 0x36B7F8u) {
        ctx->pc = 0x36B7FCu;
        goto label_36b7fc;
    }
    ctx->pc = 0x36B7F4u;
    {
        const bool branch_taken_0x36b7f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x36b7f4) {
            ctx->pc = 0x36B838u;
            goto label_36b838;
        }
    }
    ctx->pc = 0x36B7FCu;
label_36b7fc:
    // 0x36b7fc: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x36b7fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b800:
    // 0x36b800: 0x9483000e  lhu         $v1, 0xE($a0)
    ctx->pc = 0x36b800u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 14)));
label_36b804:
    // 0x36b804: 0x38630001  xori        $v1, $v1, 0x1
    ctx->pc = 0x36b804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
label_36b808:
    // 0x36b808: 0xa483000e  sh          $v1, 0xE($a0)
    ctx->pc = 0x36b808u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 14), (uint16_t)GPR_U32(ctx, 3));
label_36b80c:
    // 0x36b80c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x36b80cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_36b810:
    // 0x36b810: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b814:
    // 0x36b814: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x36b814u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_36b818:
    // 0x36b818: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b818u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b81c:
    // 0x36b81c: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x36b81cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
label_36b820:
    // 0x36b820: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b820u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b824:
    // 0x36b824: 0xa0600002  sb          $zero, 0x2($v1)
    ctx->pc = 0x36b824u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 0));
label_36b828:
    // 0x36b828: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b828u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b82c:
    // 0x36b82c: 0xa0600003  sb          $zero, 0x3($v1)
    ctx->pc = 0x36b82cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 3), (uint8_t)GPR_U32(ctx, 0));
label_36b830:
    // 0x36b830: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x36b830u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_36b834:
    // 0x36b834: 0xac600004  sw          $zero, 0x4($v1)
    ctx->pc = 0x36b834u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 0));
label_36b838:
    // 0x36b838: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x36b838u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_36b83c:
    // 0x36b83c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x36b83cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_36b840:
    // 0x36b840: 0x3e00008  jr          $ra
label_36b844:
    if (ctx->pc == 0x36B844u) {
        ctx->pc = 0x36B848u;
        goto label_fallthrough_0x36b840;
    }
    ctx->pc = 0x36B840u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36B840u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x36b840:
    ctx->pc = 0x36B848u;
}
