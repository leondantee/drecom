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

// Function: caseD_4
// Address: 0x260700 - 0x2607c0
void caseD_4_0x260700(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_4_0x260700");
#endif

    switch (ctx->pc) {
        case 0x260714u: goto label_260714;
        case 0x26072cu: goto label_26072c;
        case 0x260740u: goto label_260740;
        case 0x260758u: goto label_260758;
        case 0x260768u: goto label_260768;
        case 0x260774u: goto label_260774;
        case 0x260780u: goto label_260780;
        case 0x260798u: goto label_260798;
        case 0x2607a4u: goto label_2607a4;
        case 0x2607b8u: goto label_2607b8;
        default: break;
    }

    ctx->pc = 0x260700u;

    // 0x260700: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x260700u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260704: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260704u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260708: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x260708u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x26070c: 0xc040c12  jal         func_103048
    ctx->pc = 0x26070Cu;
    SET_GPR_U32(ctx, 31, 0x260714u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260714u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260714u) { return; }
    ctx->pc = 0x260714u;
label_260714:
    // 0x260714: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x260714u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260718: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260718u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x26071c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x26071cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260720: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260720u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260724: 0xc040c12  jal         func_103048
    ctx->pc = 0x260724u;
    SET_GPR_U32(ctx, 31, 0x26072Cu);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x26072Cu;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26072Cu) { return; }
    ctx->pc = 0x26072Cu;
label_26072c:
    // 0x26072c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x26072cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x260730: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260730u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x260734: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x260734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260738: 0xc040c24  jal         func_103090
    ctx->pc = 0x260738u;
    SET_GPR_U32(ctx, 31, 0x260740u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260740u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260740u) { return; }
    ctx->pc = 0x260740u;
label_260740:
    // 0x260740: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x260740u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x260744: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260744u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260748: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x260748u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x26074c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x26074cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x260750: 0xc040c24  jal         func_103090
    ctx->pc = 0x260750u;
    SET_GPR_U32(ctx, 31, 0x260758u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260758u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260758u) { return; }
    ctx->pc = 0x260758u;
label_260758:
    // 0x260758: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x260758u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x26075c: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x26075cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260760: 0xc040c24  jal         func_103090
    ctx->pc = 0x260760u;
    SET_GPR_U32(ctx, 31, 0x260768u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260768u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260768u) { return; }
    ctx->pc = 0x260768u;
label_260768:
    // 0x260768: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x260768u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x26076c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26076Cu;
    SET_GPR_U32(ctx, 31, 0x260774u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26076Cu, 0x260774u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260774u;
label_260774:
    // 0x260774: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x260774u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260778: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260778u;
    SET_GPR_U32(ctx, 31, 0x260780u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260780u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260780u) { return; }
    ctx->pc = 0x260780u;
label_260780:
    // 0x260780: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x260780u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260784: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x260784u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x260788: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260788u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x26078c: 0xc7ac0240  lwc1        $f12, 0x240($sp)
    ctx->pc = 0x26078cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260790: 0xc040d0e  jal         func_103438
    ctx->pc = 0x260790u;
    SET_GPR_U32(ctx, 31, 0x260798u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x260798u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260798u) { return; }
    ctx->pc = 0x260798u;
label_260798:
    // 0x260798: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x260798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x26079c: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x26079Cu;
    SET_GPR_U32(ctx, 31, 0x2607A4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2607A4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2607A4u) { return; }
    ctx->pc = 0x2607A4u;
label_2607a4:
    // 0x2607a4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2607a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2607a8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2607a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2607ac: 0xc7ac0244  lwc1        $f12, 0x244($sp)
    ctx->pc = 0x2607acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2607b0: 0xc040d0e  jal         func_103438
    ctx->pc = 0x2607B0u;
    SET_GPR_U32(ctx, 31, 0x2607B8u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x2607B8u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2607B8u) { return; }
    ctx->pc = 0x2607B8u;
label_2607b8:
    // 0x2607b8: 0x100001de  b           . + 4 + (0x1DE << 2)
    ctx->pc = 0x2607B8u;
    {
        const bool branch_taken_0x2607b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2607b8) {
            ctx->pc = 0x260F34u;
            return;
        }
    }
    ctx->pc = 0x2607C0u;
}
