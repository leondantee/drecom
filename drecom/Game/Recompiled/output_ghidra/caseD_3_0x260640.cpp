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

// Function: caseD_3
// Address: 0x260640 - 0x260700
void caseD_3_0x260640(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_3_0x260640");
#endif

    switch (ctx->pc) {
        case 0x260654u: goto label_260654;
        case 0x26066cu: goto label_26066c;
        case 0x260680u: goto label_260680;
        case 0x260698u: goto label_260698;
        case 0x2606a8u: goto label_2606a8;
        case 0x2606b4u: goto label_2606b4;
        case 0x2606c0u: goto label_2606c0;
        case 0x2606d8u: goto label_2606d8;
        case 0x2606e4u: goto label_2606e4;
        case 0x2606f8u: goto label_2606f8;
        default: break;
    }

    ctx->pc = 0x260640u;

    // 0x260640: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x260640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260644: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x260644u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260648: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x260648u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x26064c: 0xc040c12  jal         func_103048
    ctx->pc = 0x26064Cu;
    SET_GPR_U32(ctx, 31, 0x260654u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260654u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260654u) { return; }
    ctx->pc = 0x260654u;
label_260654:
    // 0x260654: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x260654u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260658: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260658u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x26065c: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x26065cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260660: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260660u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260664: 0xc040c12  jal         func_103048
    ctx->pc = 0x260664u;
    SET_GPR_U32(ctx, 31, 0x26066Cu);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x26066Cu;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x26066Cu) { return; }
    ctx->pc = 0x26066Cu;
label_26066c:
    // 0x26066c: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x26066cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x260670: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260670u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x260674: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x260674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260678: 0xc040c24  jal         func_103090
    ctx->pc = 0x260678u;
    SET_GPR_U32(ctx, 31, 0x260680u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260680u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260680u) { return; }
    ctx->pc = 0x260680u;
label_260680:
    // 0x260680: 0x27a50140  addiu       $a1, $sp, 0x140
    ctx->pc = 0x260680u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x260684: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260684u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260688: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x260688u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x26068c: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x26068cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x260690: 0xc040c24  jal         func_103090
    ctx->pc = 0x260690u;
    SET_GPR_U32(ctx, 31, 0x260698u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260698u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260698u) { return; }
    ctx->pc = 0x260698u;
label_260698:
    // 0x260698: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x260698u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x26069c: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x26069cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2606a0: 0xc040c24  jal         func_103090
    ctx->pc = 0x2606A0u;
    SET_GPR_U32(ctx, 31, 0x2606A8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2606A8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2606A8u) { return; }
    ctx->pc = 0x2606A8u;
label_2606a8:
    // 0x2606a8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x2606a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x2606ac: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x2606ACu;
    SET_GPR_U32(ctx, 31, 0x2606B4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x2606ACu, 0x2606B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2606B4u;
label_2606b4:
    // 0x2606b4: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x2606b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2606b8: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2606B8u;
    SET_GPR_U32(ctx, 31, 0x2606C0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2606C0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2606C0u) { return; }
    ctx->pc = 0x2606C0u;
label_2606c0:
    // 0x2606c0: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x2606c0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2606c4: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x2606c4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2606c8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x2606c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2606cc: 0xc7ac0240  lwc1        $f12, 0x240($sp)
    ctx->pc = 0x2606ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2606d0: 0xc040d0e  jal         func_103438
    ctx->pc = 0x2606D0u;
    SET_GPR_U32(ctx, 31, 0x2606D8u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x2606D8u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2606D8u) { return; }
    ctx->pc = 0x2606D8u;
label_2606d8:
    // 0x2606d8: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2606d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2606dc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x2606DCu;
    SET_GPR_U32(ctx, 31, 0x2606E4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x2606E4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2606E4u) { return; }
    ctx->pc = 0x2606E4u;
label_2606e4:
    // 0x2606e4: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x2606e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2606e8: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x2606e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x2606ec: 0xc7ac0244  lwc1        $f12, 0x244($sp)
    ctx->pc = 0x2606ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2606f0: 0xc040d0e  jal         func_103438
    ctx->pc = 0x2606F0u;
    SET_GPR_U32(ctx, 31, 0x2606F8u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x2606F8u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2606F8u) { return; }
    ctx->pc = 0x2606F8u;
label_2606f8:
    // 0x2606f8: 0x1000020e  b           . + 4 + (0x20E << 2)
    ctx->pc = 0x2606F8u;
    {
        const bool branch_taken_0x2606f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2606f8) {
            ctx->pc = 0x260F34u;
            return;
        }
    }
    ctx->pc = 0x260700u;
}
