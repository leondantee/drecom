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

// Function: caseD_11
// Address: 0x260d3c - 0x260e38
void caseD_11_0x260d3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_11_0x260d3c");
#endif

    switch (ctx->pc) {
        case 0x260d58u: goto label_260d58;
        case 0x260d74u: goto label_260d74;
        case 0x260d84u: goto label_260d84;
        case 0x260d98u: goto label_260d98;
        case 0x260db4u: goto label_260db4;
        case 0x260dc8u: goto label_260dc8;
        case 0x260ddcu: goto label_260ddc;
        case 0x260dfcu: goto label_260dfc;
        case 0x260e10u: goto label_260e10;
        case 0x260e2cu: goto label_260e2c;
        default: break;
    }

    ctx->pc = 0x260d3cu;

    // 0x260d3c: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260d3cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260d40: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260d40u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x260d44: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260d44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260d48: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260d48u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260d4c: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x260d4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260d50: 0xc040c12  jal         func_103048
    ctx->pc = 0x260D50u;
    SET_GPR_U32(ctx, 31, 0x260D58u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260D58u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260D58u) { return; }
    ctx->pc = 0x260D58u;
label_260d58:
    // 0x260d58: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260d58u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260d5c: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260d60: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260d60u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260d64: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x260d64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260d68: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x260d68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260d6c: 0xc040c12  jal         func_103048
    ctx->pc = 0x260D6Cu;
    SET_GPR_U32(ctx, 31, 0x260D74u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260D74u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260D74u) { return; }
    ctx->pc = 0x260D74u;
label_260d74:
    // 0x260d74: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x260d74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x260d78: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x260d78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260d7c: 0xc040c24  jal         func_103090
    ctx->pc = 0x260D7Cu;
    SET_GPR_U32(ctx, 31, 0x260D84u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260D84u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260D84u) { return; }
    ctx->pc = 0x260D84u;
label_260d84:
    // 0x260d84: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x260d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x260d88: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x260d88u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260d8c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260d8cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260d90: 0xc040c24  jal         func_103090
    ctx->pc = 0x260D90u;
    SET_GPR_U32(ctx, 31, 0x260D98u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260D98u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260D98u) { return; }
    ctx->pc = 0x260D98u;
label_260d98:
    // 0x260d98: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260d98u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260d9c: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x260d9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x260da0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260da0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260da4: 0x27a301b0  addiu       $v1, $sp, 0x1B0
    ctx->pc = 0x260da4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260da8: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x260da8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x260dac: 0xc040c24  jal         func_103090
    ctx->pc = 0x260DACu;
    SET_GPR_U32(ctx, 31, 0x260DB4u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260DB4u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260DB4u) { return; }
    ctx->pc = 0x260DB4u;
label_260db4:
    // 0x260db4: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260db4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260db8: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x260db8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x260dbc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260dbcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260dc0: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x260DC0u;
    SET_GPR_U32(ctx, 31, 0x260DC8u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x260DC0u, 0x260DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260DC8u;
label_260dc8:
    // 0x260dc8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260dc8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260dcc: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260dd0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260dd0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260dd4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260DD4u;
    SET_GPR_U32(ctx, 31, 0x260DDCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260DDCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260DDCu) { return; }
    ctx->pc = 0x260DDCu;
label_260ddc:
    // 0x260ddc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260ddcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260de0: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260de0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260de4: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260de4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260de8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260de8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260dec: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260decu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260df0: 0xc7ac0240  lwc1        $f12, 0x240($sp)
    ctx->pc = 0x260df0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260df4: 0xc040ce4  jal         func_103390
    ctx->pc = 0x260DF4u;
    SET_GPR_U32(ctx, 31, 0x260DFCu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260DFCu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260DFCu) { return; }
    ctx->pc = 0x260DFCu;
label_260dfc:
    // 0x260dfc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260dfcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260e00: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260e00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260e04: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260e04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260e08: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260E08u;
    SET_GPR_U32(ctx, 31, 0x260E10u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260E10u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260E10u) { return; }
    ctx->pc = 0x260E10u;
label_260e10:
    // 0x260e10: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260e10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260e14: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260e18: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260e18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260e1c: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260e1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260e20: 0xc7ac0244  lwc1        $f12, 0x244($sp)
    ctx->pc = 0x260e20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x260e24: 0xc040ce4  jal         func_103390
    ctx->pc = 0x260E24u;
    SET_GPR_U32(ctx, 31, 0x260E2Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x260E2Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260E2Cu) { return; }
    ctx->pc = 0x260E2Cu;
label_260e2c:
    // 0x260e2c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260e2cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260e30: 0x10000040  b           . + 4 + (0x40 << 2)
    ctx->pc = 0x260E30u;
    {
        const bool branch_taken_0x260e30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x260e30) {
            ctx->pc = 0x260F34u;
            return;
        }
    }
    ctx->pc = 0x260E38u;
}
