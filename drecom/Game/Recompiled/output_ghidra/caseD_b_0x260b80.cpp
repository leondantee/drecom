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

// Function: caseD_b
// Address: 0x260b80 - 0x260c5c
void caseD_b_0x260b80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_b_0x260b80");
#endif

    switch (ctx->pc) {
        case 0x260b94u: goto label_260b94;
        case 0x260ba8u: goto label_260ba8;
        case 0x260bbcu: goto label_260bbc;
        case 0x260bd8u: goto label_260bd8;
        case 0x260becu: goto label_260bec;
        case 0x260bf8u: goto label_260bf8;
        case 0x260c08u: goto label_260c08;
        case 0x260c2cu: goto label_260c2c;
        case 0x260c38u: goto label_260c38;
        case 0x260c54u: goto label_260c54;
        default: break;
    }

    ctx->pc = 0x260b80u;

    // 0x260b80: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x260b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260b84: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x260b84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260b88: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x260b88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260b8c: 0xc040c12  jal         func_103048
    ctx->pc = 0x260B8Cu;
    SET_GPR_U32(ctx, 31, 0x260B94u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260B94u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260B94u) { return; }
    ctx->pc = 0x260B94u;
label_260b94:
    // 0x260b94: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x260b94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260b98: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260b98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260b9c: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260b9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260ba0: 0xc040c12  jal         func_103048
    ctx->pc = 0x260BA0u;
    SET_GPR_U32(ctx, 31, 0x260BA8u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260BA8u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260BA8u) { return; }
    ctx->pc = 0x260BA8u;
label_260ba8:
    // 0x260ba8: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x260ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x260bac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260bacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260bb0: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x260bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260bb4: 0xc040c24  jal         func_103090
    ctx->pc = 0x260BB4u;
    SET_GPR_U32(ctx, 31, 0x260BBCu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260BBCu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260BBCu) { return; }
    ctx->pc = 0x260BBCu;
label_260bbc:
    // 0x260bbc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260bbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260bc0: 0x27a60140  addiu       $a2, $sp, 0x140
    ctx->pc = 0x260bc0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x260bc4: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260bc4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x260bc8: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x260bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260bcc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260bccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260bd0: 0xc040c24  jal         func_103090
    ctx->pc = 0x260BD0u;
    SET_GPR_U32(ctx, 31, 0x260BD8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260BD8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260BD8u) { return; }
    ctx->pc = 0x260BD8u;
label_260bd8:
    // 0x260bd8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260bd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260bdc: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x260bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x260be0: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x260be0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260be4: 0xc040c24  jal         func_103090
    ctx->pc = 0x260BE4u;
    SET_GPR_U32(ctx, 31, 0x260BECu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260BECu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260BECu) { return; }
    ctx->pc = 0x260BECu;
label_260bec:
    // 0x260bec: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x260becu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x260bf0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x260BF0u;
    SET_GPR_U32(ctx, 31, 0x260BF8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x260BF0u, 0x260BF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260BF8u;
label_260bf8:
    // 0x260bf8: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260bf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260bfc: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260bfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260c00: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260C00u;
    SET_GPR_U32(ctx, 31, 0x260C08u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260C08u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260C08u) { return; }
    ctx->pc = 0x260C08u;
label_260c08:
    // 0x260c08: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260c08u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260c0c: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x260c0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260c10: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260c10u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x260c14: 0x27a600b0  addiu       $a2, $sp, 0xB0
    ctx->pc = 0x260c14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260c18: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260c18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x260c1c: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260c20: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260c20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260c24: 0xc040ce4  jal         func_103390
    ctx->pc = 0x260C24u;
    SET_GPR_U32(ctx, 31, 0x260C2Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260C2Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260C2Cu) { return; }
    ctx->pc = 0x260C2Cu;
label_260c2c:
    // 0x260c2c: 0x27a400f0  addiu       $a0, $sp, 0xF0
    ctx->pc = 0x260c2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260c30: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260C30u;
    SET_GPR_U32(ctx, 31, 0x260C38u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260C38u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260C38u) { return; }
    ctx->pc = 0x260C38u;
label_260c38:
    // 0x260c38: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x260c38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260c3c: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260c3cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x260c40: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260c44: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260c44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260c48: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260c4c: 0xc040ce4  jal         func_103390
    ctx->pc = 0x260C4Cu;
    SET_GPR_U32(ctx, 31, 0x260C54u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260C54u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260C54u) { return; }
    ctx->pc = 0x260C54u;
label_260c54:
    // 0x260c54: 0x100000b7  b           . + 4 + (0xB7 << 2)
    ctx->pc = 0x260C54u;
    {
        const bool branch_taken_0x260c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260c54) {
            ctx->pc = 0x260F34u;
            return;
        }
    }
    ctx->pc = 0x260C5Cu;
}
