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

// Function: caseD_5
// Address: 0x2607c0 - 0x260898
void caseD_5_0x2607c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_5_0x2607c0");
#endif

    switch (ctx->pc) {
        case 0x2607d4u: goto label_2607d4;
        case 0x2607ecu: goto label_2607ec;
        case 0x260800u: goto label_260800;
        case 0x260818u: goto label_260818;
        case 0x260834u: goto label_260834;
        case 0x260844u: goto label_260844;
        case 0x260850u: goto label_260850;
        case 0x26086cu: goto label_26086c;
        case 0x26087cu: goto label_26087c;
        case 0x260890u: goto label_260890;
        default: break;
    }

    ctx->pc = 0x2607c0u;

    // 0x2607c0: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x2607c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2607c4: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2607c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2607c8: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x2607c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2607cc: 0xc040c12  jal         func_103048
    ctx->pc = 0x2607CCu;
    SET_GPR_U32(ctx, 31, 0x2607D4u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x2607D4u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2607D4u) { return; }
    ctx->pc = 0x2607D4u;
label_2607d4:
    // 0x2607d4: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2607d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2607d8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x2607d8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x2607dc: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2607dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2607e0: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x2607e0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2607e4: 0xc040c12  jal         func_103048
    ctx->pc = 0x2607E4u;
    SET_GPR_U32(ctx, 31, 0x2607ECu);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x2607ECu;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2607ECu) { return; }
    ctx->pc = 0x2607ECu;
label_2607ec:
    // 0x2607ec: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x2607ecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2607f0: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x2607f0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2607f4: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2607f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2607f8: 0xc040c24  jal         func_103090
    ctx->pc = 0x2607F8u;
    SET_GPR_U32(ctx, 31, 0x260800u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260800u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260800u) { return; }
    ctx->pc = 0x260800u;
label_260800:
    // 0x260800: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x260800u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x260804: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260808: 0x27a201c0  addiu       $v0, $sp, 0x1C0
    ctx->pc = 0x260808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x26080c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x26080cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260810: 0xc040c24  jal         func_103090
    ctx->pc = 0x260810u;
    SET_GPR_U32(ctx, 31, 0x260818u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260818u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260818u) { return; }
    ctx->pc = 0x260818u;
label_260818:
    // 0x260818: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260818u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26081c: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x26081cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x260820: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260820u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260824: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260824u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260828: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260828u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x26082c: 0xc040c24  jal         func_103090
    ctx->pc = 0x26082Cu;
    SET_GPR_U32(ctx, 31, 0x260834u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260834u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260834u) { return; }
    ctx->pc = 0x260834u;
label_260834:
    // 0x260834: 0x27a50160  addiu       $a1, $sp, 0x160
    ctx->pc = 0x260834u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x260838: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260838u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x26083c: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x26083Cu;
    SET_GPR_U32(ctx, 31, 0x260844u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x26083Cu, 0x260844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260844u;
label_260844:
    // 0x260844: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x260844u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260848: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260848u;
    SET_GPR_U32(ctx, 31, 0x260850u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260850u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260850u) { return; }
    ctx->pc = 0x260850u;
label_260850:
    // 0x260850: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260850u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260854: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x260854u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260858: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x260858u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x26085c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x26085cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260860: 0xc7ac0240  lwc1        $f12, 0x240($sp)
    ctx->pc = 0x260860u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260864: 0xc040ce4  jal         func_103390
    ctx->pc = 0x260864u;
    SET_GPR_U32(ctx, 31, 0x26086Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x26086Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26086Cu) { return; }
    ctx->pc = 0x26086Cu;
label_26086c:
    // 0x26086c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x26086cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260870: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260870u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x260874: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260874u;
    SET_GPR_U32(ctx, 31, 0x26087Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x26087Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26087Cu) { return; }
    ctx->pc = 0x26087Cu;
label_26087c:
    // 0x26087c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x26087cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260880: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260884: 0xc7ac0244  lwc1        $f12, 0x244($sp)
    ctx->pc = 0x260884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260888: 0xc040ce4  jal         func_103390
    ctx->pc = 0x260888u;
    SET_GPR_U32(ctx, 31, 0x260890u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260890u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260890u) { return; }
    ctx->pc = 0x260890u;
label_260890:
    // 0x260890: 0x100001a8  b           . + 4 + (0x1A8 << 2)
    ctx->pc = 0x260890u;
    {
        const bool branch_taken_0x260890 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260890) {
            ctx->pc = 0x260F34u;
            return;
        }
    }
    ctx->pc = 0x260898u;
}
