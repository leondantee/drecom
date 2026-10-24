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

// Function: Em09_R0_move
// Address: 0x344840 - 0x344900
void Em09_R0_move_0x344840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em09_R0_move_0x344840");
#endif

    switch (ctx->pc) {
        case 0x344840u: goto label_344840;
        case 0x344844u: goto label_344844;
        case 0x344848u: goto label_344848;
        case 0x34484cu: goto label_34484c;
        case 0x344850u: goto label_344850;
        case 0x344854u: goto label_344854;
        case 0x344858u: goto label_344858;
        case 0x34485cu: goto label_34485c;
        case 0x344860u: goto label_344860;
        case 0x344864u: goto label_344864;
        case 0x344868u: goto label_344868;
        case 0x34486cu: goto label_34486c;
        case 0x344870u: goto label_344870;
        case 0x344874u: goto label_344874;
        case 0x344878u: goto label_344878;
        case 0x34487cu: goto label_34487c;
        case 0x344880u: goto label_344880;
        case 0x344884u: goto label_344884;
        case 0x344888u: goto label_344888;
        case 0x34488cu: goto label_34488c;
        case 0x344890u: goto label_344890;
        case 0x344894u: goto label_344894;
        case 0x344898u: goto label_344898;
        case 0x34489cu: goto label_34489c;
        case 0x3448a0u: goto label_3448a0;
        case 0x3448a4u: goto label_3448a4;
        case 0x3448a8u: goto label_3448a8;
        case 0x3448acu: goto label_3448ac;
        case 0x3448b0u: goto label_3448b0;
        case 0x3448b4u: goto label_3448b4;
        case 0x3448b8u: goto label_3448b8;
        case 0x3448bcu: goto label_3448bc;
        case 0x3448c0u: goto label_3448c0;
        case 0x3448c4u: goto label_3448c4;
        case 0x3448c8u: goto label_3448c8;
        case 0x3448ccu: goto label_3448cc;
        case 0x3448d0u: goto label_3448d0;
        case 0x3448d4u: goto label_3448d4;
        case 0x3448d8u: goto label_3448d8;
        case 0x3448dcu: goto label_3448dc;
        case 0x3448e0u: goto label_3448e0;
        case 0x3448e4u: goto label_3448e4;
        case 0x3448e8u: goto label_3448e8;
        case 0x3448ecu: goto label_3448ec;
        case 0x3448f0u: goto label_3448f0;
        case 0x3448f4u: goto label_3448f4;
        case 0x3448f8u: goto label_3448f8;
        case 0x3448fcu: goto label_3448fc;
        default: break;
    }

    ctx->pc = 0x344840u;

label_344840:
    // 0x344840: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x344840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_344844:
    // 0x344844: 0x7fbf0000  sq          $ra, 0x0($sp)
    ctx->pc = 0x344844u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 31));
label_344848:
    // 0x344848: 0xafa40018  sw          $a0, 0x18($sp)
    ctx->pc = 0x344848u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 4));
label_34484c:
    // 0x34484c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x34484cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_344850:
    // 0x344850: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x344850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_344854:
    // 0x344854: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x344854u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_344858:
    // 0x344858: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x344858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_34485c:
    // 0x34485c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x34485cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_344860:
    // 0x344860: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x344860u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_344864:
    // 0x344864: 0x2442a410  addiu       $v0, $v0, -0x5BF0
    ctx->pc = 0x344864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943760));
label_344868:
    // 0x344868: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x344868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_34486c:
    // 0x34486c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x34486cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_344870:
    // 0x344870: 0x40f809  jalr        $v0
label_344874:
    if (ctx->pc == 0x344874u) {
        ctx->pc = 0x344878u;
        goto label_344878;
    }
    ctx->pc = 0x344870u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x344878u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x344870u, 0x344878u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x344878u;
label_344878:
    // 0x344878: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x344878u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_34487c:
    // 0x34487c: 0x844210a6  lh          $v0, 0x10A6($v0)
    ctx->pc = 0x34487cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4262)));
label_344880:
    // 0x344880: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x344880u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_344884:
    // 0x344884: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x344884u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_344888:
    // 0x344888: 0x441000e  bgez        $v0, . + 4 + (0xE << 2)
label_34488c:
    if (ctx->pc == 0x34488Cu) {
        ctx->pc = 0x344890u;
        goto label_344890;
    }
    ctx->pc = 0x344888u;
    {
        const bool branch_taken_0x344888 = (GPR_S32(ctx, 2) >= 0);
        if (branch_taken_0x344888) {
            ctx->pc = 0x3448C4u;
            goto label_3448c4;
        }
    }
    ctx->pc = 0x344890u;
label_344890:
    // 0x344890: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x344890u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_344894:
    // 0x344894: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x344894u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_344898:
    // 0x344898: 0x90420000  lbu         $v0, 0x0($v0)
    ctx->pc = 0x344898u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
label_34489c:
    // 0x34489c: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x34489cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3448a0:
    // 0x3448a0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3448a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3448a4:
    // 0x3448a4: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3448a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3448a8:
    // 0x3448a8: 0x2442a3e0  addiu       $v0, $v0, -0x5C20
    ctx->pc = 0x3448a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943712));
label_3448ac:
    // 0x3448ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3448acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3448b0:
    // 0x3448b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3448b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3448b4:
    // 0x3448b4: 0x40f809  jalr        $v0
label_3448b8:
    if (ctx->pc == 0x3448B8u) {
        ctx->pc = 0x3448BCu;
        goto label_3448bc;
    }
    ctx->pc = 0x3448B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3448BCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3448B4u, 0x3448BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3448BCu;
label_3448bc:
    // 0x3448bc: 0x1000000c  b           . + 4 + (0xC << 2)
label_3448c0:
    if (ctx->pc == 0x3448C0u) {
        ctx->pc = 0x3448C4u;
        goto label_3448c4;
    }
    ctx->pc = 0x3448BCu;
    {
        const bool branch_taken_0x3448bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3448bc) {
            ctx->pc = 0x3448F0u;
            goto label_3448f0;
        }
    }
    ctx->pc = 0x3448C4u;
label_3448c4:
    // 0x3448c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x3448c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3448c8:
    // 0x3448c8: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x3448c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3448cc:
    // 0x3448cc: 0x90420001  lbu         $v0, 0x1($v0)
    ctx->pc = 0x3448ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 1)));
label_3448d0:
    // 0x3448d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3448d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_3448d4:
    // 0x3448d4: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x3448d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_3448d8:
    // 0x3448d8: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x3448d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_3448dc:
    // 0x3448dc: 0x2442a480  addiu       $v0, $v0, -0x5B80
    ctx->pc = 0x3448dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294943872));
label_3448e0:
    // 0x3448e0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3448e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3448e4:
    // 0x3448e4: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3448e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3448e8:
    // 0x3448e8: 0x40f809  jalr        $v0
label_3448ec:
    if (ctx->pc == 0x3448ECu) {
        ctx->pc = 0x3448F0u;
        goto label_3448f0;
    }
    ctx->pc = 0x3448E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3448F0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3448E8u, 0x3448F0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3448F0u;
label_3448f0:
    // 0x3448f0: 0x7bbf0000  lq          $ra, 0x0($sp)
    ctx->pc = 0x3448f0u;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3448f4:
    // 0x3448f4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x3448f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3448f8:
    // 0x3448f8: 0x3e00008  jr          $ra
label_3448fc:
    if (ctx->pc == 0x3448FCu) {
        ctx->pc = 0x344900u;
        goto label_fallthrough_0x3448f8;
    }
    ctx->pc = 0x3448F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3448F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3448f8:
    ctx->pc = 0x344900u;
}
