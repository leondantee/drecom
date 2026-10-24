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

// Function: Em0a_eye_move
// Address: 0x368730 - 0x3687dc
void Em0a_eye_move_0x368730(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("Em0a_eye_move_0x368730");
#endif

    switch (ctx->pc) {
        case 0x368730u: goto label_368730;
        case 0x368734u: goto label_368734;
        case 0x368738u: goto label_368738;
        case 0x36873cu: goto label_36873c;
        case 0x368740u: goto label_368740;
        case 0x368744u: goto label_368744;
        case 0x368748u: goto label_368748;
        case 0x36874cu: goto label_36874c;
        case 0x368750u: goto label_368750;
        case 0x368754u: goto label_368754;
        case 0x368758u: goto label_368758;
        case 0x36875cu: goto label_36875c;
        case 0x368760u: goto label_368760;
        case 0x368764u: goto label_368764;
        case 0x368768u: goto label_368768;
        case 0x36876cu: goto label_36876c;
        case 0x368770u: goto label_368770;
        case 0x368774u: goto label_368774;
        case 0x368778u: goto label_368778;
        case 0x36877cu: goto label_36877c;
        case 0x368780u: goto label_368780;
        case 0x368784u: goto label_368784;
        case 0x368788u: goto label_368788;
        case 0x36878cu: goto label_36878c;
        case 0x368790u: goto label_368790;
        case 0x368794u: goto label_368794;
        case 0x368798u: goto label_368798;
        case 0x36879cu: goto label_36879c;
        case 0x3687a0u: goto label_3687a0;
        case 0x3687a4u: goto label_3687a4;
        case 0x3687a8u: goto label_3687a8;
        case 0x3687acu: goto label_3687ac;
        case 0x3687b0u: goto label_3687b0;
        case 0x3687b4u: goto label_3687b4;
        case 0x3687b8u: goto label_3687b8;
        case 0x3687bcu: goto label_3687bc;
        case 0x3687c0u: goto label_3687c0;
        case 0x3687c4u: goto label_3687c4;
        case 0x3687c8u: goto label_3687c8;
        case 0x3687ccu: goto label_3687cc;
        case 0x3687d0u: goto label_3687d0;
        case 0x3687d4u: goto label_3687d4;
        case 0x3687d8u: goto label_3687d8;
        default: break;
    }

    ctx->pc = 0x368730u;

label_368730:
    // 0x368730: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x368730u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_368734:
    // 0x368734: 0x7fbf0040  sq          $ra, 0x40($sp)
    ctx->pc = 0x368734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 31));
label_368738:
    // 0x368738: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x368738u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_36873c:
    // 0x36873c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x36873cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_368740:
    // 0x368740: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x368740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_368744:
    // 0x368744: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x368744u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_368748:
    // 0x368748: 0xafa40058  sw          $a0, 0x58($sp)
    ctx->pc = 0x368748u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 4));
label_36874c:
    // 0x36874c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x36874cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_368750:
    // 0x368750: 0x24721330  addiu       $s2, $v1, 0x1330
    ctx->pc = 0x368750u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
label_368754:
    // 0x368754: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x368754u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_368758:
    // 0x368758: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x368758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
label_36875c:
    // 0x36875c: 0x247339d0  addiu       $s3, $v1, 0x39D0
    ctx->pc = 0x36875cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 14800));
label_368760:
    // 0x368760: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x368760u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
label_368764:
    // 0x368764: 0x10000012  b           . + 4 + (0x12 << 2)
label_368768:
    if (ctx->pc == 0x368768u) {
        ctx->pc = 0x36876Cu;
        goto label_36876c;
    }
    ctx->pc = 0x368764u;
    {
        const bool branch_taken_0x368764 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x368764) {
            ctx->pc = 0x3687B0u;
            goto label_3687b0;
        }
    }
    ctx->pc = 0x36876Cu;
label_36876c:
    // 0x36876c: 0x101040  sll         $v0, $s0, 1
    ctx->pc = 0x36876cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
label_368770:
    // 0x368770: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x368770u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_368774:
    // 0x368774: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x368774u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
label_368778:
    // 0x368778: 0x2428821  addu        $s1, $s2, $v0
    ctx->pc = 0x368778u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 2)));
label_36877c:
    // 0x36877c: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x36877cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
label_368780:
    // 0x368780: 0x72202e28  paddub      $a1, $s1, $zero
    ctx->pc = 0x368780u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
label_368784:
    // 0x368784: 0x92220011  lbu         $v0, 0x11($s1)
    ctx->pc = 0x368784u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 17)));
label_368788:
    // 0x368788: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x368788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_36878c:
    // 0x36878c: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x36878cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_368790:
    // 0x368790: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x368790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
label_368794:
    // 0x368794: 0x2442b080  addiu       $v0, $v0, -0x4F80
    ctx->pc = 0x368794u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946944));
label_368798:
    // 0x368798: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x368798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_36879c:
    // 0x36879c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x36879cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3687a0:
    // 0x3687a0: 0x40f809  jalr        $v0
label_3687a4:
    if (ctx->pc == 0x3687A4u) {
        ctx->pc = 0x3687A8u;
        goto label_3687a8;
    }
    ctx->pc = 0x3687A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3687A8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3687A0u, 0x3687A8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3687A8u;
label_3687a8:
    // 0x3687a8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3687a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3687ac:
    // 0x3687ac: 0x0  nop
    ctx->pc = 0x3687acu;
    // NOP
label_3687b0:
    // 0x3687b0: 0x2e030004  sltiu       $v1, $s0, 0x4
    ctx->pc = 0x3687b0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
label_3687b4:
    // 0x3687b4: 0x1460ffed  bnez        $v1, . + 4 + (-0x13 << 2)
label_3687b8:
    if (ctx->pc == 0x3687B8u) {
        ctx->pc = 0x3687BCu;
        goto label_3687bc;
    }
    ctx->pc = 0x3687B4u;
    {
        const bool branch_taken_0x3687b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3687b4) {
            ctx->pc = 0x36876Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36876c;
        }
    }
    ctx->pc = 0x3687BCu;
label_3687bc:
    // 0x3687bc: 0x7bbf0040  lq          $ra, 0x40($sp)
    ctx->pc = 0x3687bcu;
    SET_GPR_VEC(ctx, 31, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_3687c0:
    // 0x3687c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3687c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_3687c4:
    // 0x3687c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x3687c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_3687c8:
    // 0x3687c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x3687c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_3687cc:
    // 0x3687cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3687ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_3687d0:
    // 0x3687d0: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x3687d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_3687d4:
    // 0x3687d4: 0x3e00008  jr          $ra
label_3687d8:
    if (ctx->pc == 0x3687D8u) {
        ctx->pc = 0x3687DCu;
        goto label_fallthrough_0x3687d4;
    }
    ctx->pc = 0x3687D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3687D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x3687d4:
    ctx->pc = 0x3687DCu;
}
