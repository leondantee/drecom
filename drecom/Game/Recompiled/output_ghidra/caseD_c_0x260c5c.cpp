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

// Function: caseD_c
// Address: 0x260c5c - 0x260d3c
void caseD_c_0x260c5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_c_0x260c5c");
#endif

    switch (ctx->pc) {
        case 0x260c70u: goto label_260c70;
        case 0x260c84u: goto label_260c84;
        case 0x260c9cu: goto label_260c9c;
        case 0x260cacu: goto label_260cac;
        case 0x260cc8u: goto label_260cc8;
        case 0x260cd4u: goto label_260cd4;
        case 0x260ce4u: goto label_260ce4;
        case 0x260cfcu: goto label_260cfc;
        case 0x260d10u: goto label_260d10;
        case 0x260d30u: goto label_260d30;
        default: break;
    }

    ctx->pc = 0x260c5cu;

    // 0x260c5c: 0x27a401c0  addiu       $a0, $sp, 0x1C0
    ctx->pc = 0x260c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260c60: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260c64: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x260c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260c68: 0xc040c12  jal         func_103048
    ctx->pc = 0x260C68u;
    SET_GPR_U32(ctx, 31, 0x260C70u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260C70u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260C70u) { return; }
    ctx->pc = 0x260C70u;
label_260c70:
    // 0x260c70: 0x27a401b0  addiu       $a0, $sp, 0x1B0
    ctx->pc = 0x260c70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260c74: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260c74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260c78: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260c78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260c7c: 0xc040c12  jal         func_103048
    ctx->pc = 0x260C7Cu;
    SET_GPR_U32(ctx, 31, 0x260C84u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260C84u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260C84u) { return; }
    ctx->pc = 0x260C84u;
label_260c84:
    // 0x260c84: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260c84u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260c88: 0x27a20130  addiu       $v0, $sp, 0x130
    ctx->pc = 0x260c88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x260c8c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260c8cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260c90: 0x27a501b0  addiu       $a1, $sp, 0x1B0
    ctx->pc = 0x260c90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260c94: 0xc040c24  jal         func_103090
    ctx->pc = 0x260C94u;
    SET_GPR_U32(ctx, 31, 0x260C9Cu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260C9Cu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260C9Cu) { return; }
    ctx->pc = 0x260C9Cu;
label_260c9c:
    // 0x260c9c: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x260c9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x260ca0: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260ca0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260ca4: 0xc040c24  jal         func_103090
    ctx->pc = 0x260CA4u;
    SET_GPR_U32(ctx, 31, 0x260CACu);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260CACu;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260CACu) { return; }
    ctx->pc = 0x260CACu;
label_260cac:
    // 0x260cac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260cacu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260cb0: 0x27a50150  addiu       $a1, $sp, 0x150
    ctx->pc = 0x260cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x260cb4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260cb4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260cb8: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260cb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260cbc: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x260cbcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x260cc0: 0xc040c24  jal         func_103090
    ctx->pc = 0x260CC0u;
    SET_GPR_U32(ctx, 31, 0x260CC8u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260CC8u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260CC8u) { return; }
    ctx->pc = 0x260CC8u;
label_260cc8:
    // 0x260cc8: 0x27a40160  addiu       $a0, $sp, 0x160
    ctx->pc = 0x260cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x260ccc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x260CCCu;
    SET_GPR_U32(ctx, 31, 0x260CD4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x260CCCu, 0x260CD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260CD4u;
label_260cd4:
    // 0x260cd4: 0x27a300b0  addiu       $v1, $sp, 0xB0
    ctx->pc = 0x260cd4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260cd8: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x260cd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x260cdc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260CDCu;
    SET_GPR_U32(ctx, 31, 0x260CE4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260CE4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260CE4u) { return; }
    ctx->pc = 0x260CE4u;
label_260ce4:
    // 0x260ce4: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x260ce4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260ce8: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260ce8u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x260cec: 0x27a400b0  addiu       $a0, $sp, 0xB0
    ctx->pc = 0x260cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260cf0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260cf4: 0xc040ce4  jal         func_103390
    ctx->pc = 0x260CF4u;
    SET_GPR_U32(ctx, 31, 0x260CFCu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260CFCu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260CFCu) { return; }
    ctx->pc = 0x260CFCu;
label_260cfc:
    // 0x260cfc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260cfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260d00: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260d04: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260d04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260d08: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260D08u;
    SET_GPR_U32(ctx, 31, 0x260D10u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260D10u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260D10u) { return; }
    ctx->pc = 0x260D10u;
label_260d10:
    // 0x260d10: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260d10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260d14: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x260d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260d18: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260d18u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x260d1c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260d20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260d20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260d24: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260d28: 0xc040ce4  jal         func_103390
    ctx->pc = 0x260D28u;
    SET_GPR_U32(ctx, 31, 0x260D30u);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260D30u;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260D30u) { return; }
    ctx->pc = 0x260D30u;
label_260d30:
    // 0x260d30: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260d30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260d34: 0x1000007f  b           . + 4 + (0x7F << 2)
    ctx->pc = 0x260D34u;
    {
        const bool branch_taken_0x260d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260d34) {
            ctx->pc = 0x260F34u;
            return;
        }
    }
    ctx->pc = 0x260D3Cu;
}
