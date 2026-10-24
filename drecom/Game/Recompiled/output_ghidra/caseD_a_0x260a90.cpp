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

// Function: caseD_a
// Address: 0x260a90 - 0x260b80
void caseD_a_0x260a90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_a_0x260a90");
#endif

    switch (ctx->pc) {
        case 0x260aa4u: goto label_260aa4;
        case 0x260ac0u: goto label_260ac0;
        case 0x260adcu: goto label_260adc;
        case 0x260aecu: goto label_260aec;
        case 0x260afcu: goto label_260afc;
        case 0x260b08u: goto label_260b08;
        case 0x260b1cu: goto label_260b1c;
        case 0x260b40u: goto label_260b40;
        case 0x260b50u: goto label_260b50;
        case 0x260b74u: goto label_260b74;
        default: break;
    }

    ctx->pc = 0x260a90u;

    // 0x260a90: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x260a90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260a94: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260a94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260a98: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x260a98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260a9c: 0xc040c12  jal         func_103048
    ctx->pc = 0x260A9Cu;
    SET_GPR_U32(ctx, 31, 0x260AA4u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260AA4u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260AA4u) { return; }
    ctx->pc = 0x260AA4u;
label_260aa4:
    // 0x260aa4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260aa4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260aa8: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260aac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260aacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260ab0: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260ab0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260ab4: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260ab8: 0xc040c12  jal         func_103048
    ctx->pc = 0x260AB8u;
    SET_GPR_U32(ctx, 31, 0x260AC0u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260AC0u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260AC0u) { return; }
    ctx->pc = 0x260AC0u;
label_260ac0:
    // 0x260ac0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x260ac0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260ac4: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x260ac4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x260ac8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260ac8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260acc: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260accu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260ad0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260ad0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260ad4: 0xc040c24  jal         func_103090
    ctx->pc = 0x260AD4u;
    SET_GPR_U32(ctx, 31, 0x260ADCu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260ADCu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260ADCu) { return; }
    ctx->pc = 0x260ADCu;
label_260adc:
    // 0x260adc: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x260adcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x260ae0: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260ae4: 0xc040c24  jal         func_103090
    ctx->pc = 0x260AE4u;
    SET_GPR_U32(ctx, 31, 0x260AECu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260AECu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260AECu) { return; }
    ctx->pc = 0x260AECu;
label_260aec:
    // 0x260aec: 0x27a40150  addiu       $a0, $sp, 0x150
    ctx->pc = 0x260aecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x260af0: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x260af0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260af4: 0xc040c24  jal         func_103090
    ctx->pc = 0x260AF4u;
    SET_GPR_U32(ctx, 31, 0x260AFCu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260AFCu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260AFCu) { return; }
    ctx->pc = 0x260AFCu;
label_260afc:
    // 0x260afc: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x260afcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x260b00: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x260B00u;
    SET_GPR_U32(ctx, 31, 0x260B08u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x260B00u, 0x260B08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260B08u;
label_260b08:
    // 0x260b08: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260b08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260b0c: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260b0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260b10: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260b10u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260b14: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260B14u;
    SET_GPR_U32(ctx, 31, 0x260B1Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260B1Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260B1Cu) { return; }
    ctx->pc = 0x260B1Cu;
label_260b1c:
    // 0x260b1c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260b1cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260b20: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x260b20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260b24: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260b24u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x260b28: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260b28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260b2c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260b2cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260b30: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260b30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260b34: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260b34u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260b38: 0xc040d0e  jal         func_103438
    ctx->pc = 0x260B38u;
    SET_GPR_U32(ctx, 31, 0x260B40u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x260B40u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260B40u) { return; }
    ctx->pc = 0x260B40u;
label_260b40:
    // 0x260b40: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x260b40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260b44: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260b44u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x260b48: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260B48u;
    SET_GPR_U32(ctx, 31, 0x260B50u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260B50u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260B50u) { return; }
    ctx->pc = 0x260B50u;
label_260b50:
    // 0x260b50: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260b50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260b54: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x260b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260b58: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260b58u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x260b5c: 0x27a600f0  addiu       $a2, $sp, 0xF0
    ctx->pc = 0x260b5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260b60: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260b60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x260b64: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260b68: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260b68u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260b6c: 0xc040d0e  jal         func_103438
    ctx->pc = 0x260B6Cu;
    SET_GPR_U32(ctx, 31, 0x260B74u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x260B74u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260B74u) { return; }
    ctx->pc = 0x260B74u;
label_260b74:
    // 0x260b74: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260b74u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260b78: 0x100000ee  b           . + 4 + (0xEE << 2)
    ctx->pc = 0x260B78u;
    {
        const bool branch_taken_0x260b78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260b78) {
            ctx->pc = 0x260F34u;
            return;
        }
    }
    ctx->pc = 0x260B80u;
}
