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

// Function: caseD_9
// Address: 0x260998 - 0x260a90
void caseD_9_0x260998(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_9_0x260998");
#endif

    switch (ctx->pc) {
        case 0x2609b0u: goto label_2609b0;
        case 0x2609ccu: goto label_2609cc;
        case 0x2609e0u: goto label_2609e0;
        case 0x2609f4u: goto label_2609f4;
        case 0x260a04u: goto label_260a04;
        case 0x260a18u: goto label_260a18;
        case 0x260a2cu: goto label_260a2c;
        case 0x260a4cu: goto label_260a4c;
        case 0x260a60u: goto label_260a60;
        case 0x260a84u: goto label_260a84;
        default: break;
    }

    ctx->pc = 0x260998u;

    // 0x260998: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260998u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x26099c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x26099cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x2609a0: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2609a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2609a4: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x2609a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2609a8: 0xc040c12  jal         func_103048
    ctx->pc = 0x2609A8u;
    SET_GPR_U32(ctx, 31, 0x2609B0u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x2609B0u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2609B0u) { return; }
    ctx->pc = 0x2609B0u;
label_2609b0:
    // 0x2609b0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2609b0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2609b4: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x2609b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2609b8: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x2609b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2609bc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2609bcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2609c0: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x2609c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2609c4: 0xc040c12  jal         func_103048
    ctx->pc = 0x2609C4u;
    SET_GPR_U32(ctx, 31, 0x2609CCu);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x2609CCu;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2609CCu) { return; }
    ctx->pc = 0x2609CCu;
label_2609cc:
    // 0x2609cc: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2609ccu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2609d0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x2609d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x2609d4: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x2609d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x2609d8: 0xc040c24  jal         func_103090
    ctx->pc = 0x2609D8u;
    SET_GPR_U32(ctx, 31, 0x2609E0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2609E0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2609E0u) { return; }
    ctx->pc = 0x2609E0u;
label_2609e0:
    // 0x2609e0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2609e0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2609e4: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x2609e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x2609e8: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x2609e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x2609ec: 0xc040c24  jal         func_103090
    ctx->pc = 0x2609ECu;
    SET_GPR_U32(ctx, 31, 0x2609F4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x2609F4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2609F4u) { return; }
    ctx->pc = 0x2609F4u;
label_2609f4:
    // 0x2609f4: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x2609f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x2609f8: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x2609f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x2609fc: 0xc040c24  jal         func_103090
    ctx->pc = 0x2609FCu;
    SET_GPR_U32(ctx, 31, 0x260A04u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260A04u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260A04u) { return; }
    ctx->pc = 0x260A04u;
label_260a04:
    // 0x260a04: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x260a04u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260a08: 0x27a30160  addiu       $v1, $sp, 0x160
    ctx->pc = 0x260a08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x260a0c: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x260a0cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x260a10: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x260A10u;
    SET_GPR_U32(ctx, 31, 0x260A18u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x260A10u, 0x260A18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260A18u;
label_260a18:
    // 0x260a18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260a18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260a1c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260a1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260a20: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260a20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260a24: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260A24u;
    SET_GPR_U32(ctx, 31, 0x260A2Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260A2Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260A2Cu) { return; }
    ctx->pc = 0x260A2Cu;
label_260a2c:
    // 0x260a2c: 0x7040be28  paddub      $s7, $v0, $zero
    ctx->pc = 0x260a2cu;
    SET_GPR_VEC(ctx, 23, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260a30: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x260a30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260a34: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260a34u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x260a38: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260a38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260a3c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260a3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260a40: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260a40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260a44: 0xc040d0e  jal         func_103438
    ctx->pc = 0x260A44u;
    SET_GPR_U32(ctx, 31, 0x260A4Cu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x260A4Cu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260A4Cu) { return; }
    ctx->pc = 0x260A4Cu;
label_260a4c:
    // 0x260a4c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260a4cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260a50: 0x27a300f0  addiu       $v1, $sp, 0xF0
    ctx->pc = 0x260a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260a54: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x260a54u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x260a58: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260A58u;
    SET_GPR_U32(ctx, 31, 0x260A60u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260A60u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260A60u) { return; }
    ctx->pc = 0x260A60u;
label_260a60:
    // 0x260a60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260a60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260a64: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x260a64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260a68: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260a68u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x260a6c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260a6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260a70: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260a70u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260a74: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260a78: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260a78u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260a7c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x260A7Cu;
    SET_GPR_U32(ctx, 31, 0x260A84u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x260A84u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260A84u) { return; }
    ctx->pc = 0x260A84u;
label_260a84:
    // 0x260a84: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x260a84u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260a88: 0x1000012a  b           . + 4 + (0x12A << 2)
    ctx->pc = 0x260A88u;
    {
        const bool branch_taken_0x260a88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260a88) {
            ctx->pc = 0x260F34u;
            return;
        }
    }
    ctx->pc = 0x260A90u;
}
