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

// Function: caseD_12
// Address: 0x260e38 - 0x260f34
void caseD_12_0x260e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_12_0x260e38");
#endif

    switch (ctx->pc) {
        case 0x260e54u: goto label_260e54;
        case 0x260e70u: goto label_260e70;
        case 0x260e80u: goto label_260e80;
        case 0x260e94u: goto label_260e94;
        case 0x260eb0u: goto label_260eb0;
        case 0x260ec4u: goto label_260ec4;
        case 0x260ed8u: goto label_260ed8;
        case 0x260efcu: goto label_260efc;
        case 0x260f10u: goto label_260f10;
        case 0x260f30u: goto label_260f30;
        default: break;
    }

    ctx->pc = 0x260e38u;

    // 0x260e38: 0x27a601c0  addiu       $a2, $sp, 0x1C0
    ctx->pc = 0x260e38u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260e3c: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x260e3cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x260e40: 0x27a201a0  addiu       $v0, $sp, 0x1A0
    ctx->pc = 0x260e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260e44: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260e44u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260e48: 0x27a601b0  addiu       $a2, $sp, 0x1B0
    ctx->pc = 0x260e48u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260e4c: 0xc040c12  jal         func_103048
    ctx->pc = 0x260E4Cu;
    SET_GPR_U32(ctx, 31, 0x260E54u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260E54u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260E54u) { return; }
    ctx->pc = 0x260E54u;
label_260e54:
    // 0x260e54: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260e54u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260e58: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260e58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260e5c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260e5cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260e60: 0x27a501c0  addiu       $a1, $sp, 0x1C0
    ctx->pc = 0x260e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260e64: 0x27a601a0  addiu       $a2, $sp, 0x1A0
    ctx->pc = 0x260e64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260e68: 0xc040c12  jal         func_103048
    ctx->pc = 0x260E68u;
    SET_GPR_U32(ctx, 31, 0x260E70u);
    ctx->pc = 0x103048u;
    {
        ctx->pc = 0x260E70u;
        ps2_stubs::sceVu0OuterProduct(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260E70u) { return; }
    ctx->pc = 0x260E70u;
label_260e70:
    // 0x260e70: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x260e70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x260e74: 0x27a501a0  addiu       $a1, $sp, 0x1A0
    ctx->pc = 0x260e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
    // 0x260e78: 0xc040c24  jal         func_103090
    ctx->pc = 0x260E78u;
    SET_GPR_U32(ctx, 31, 0x260E80u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260E80u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260E80u) { return; }
    ctx->pc = 0x260E80u;
label_260e80:
    // 0x260e80: 0x27a40140  addiu       $a0, $sp, 0x140
    ctx->pc = 0x260e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
    // 0x260e84: 0x27a201b0  addiu       $v0, $sp, 0x1B0
    ctx->pc = 0x260e84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 432));
    // 0x260e88: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260e88u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260e8c: 0xc040c24  jal         func_103090
    ctx->pc = 0x260E8Cu;
    SET_GPR_U32(ctx, 31, 0x260E94u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260E94u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260E94u) { return; }
    ctx->pc = 0x260E94u;
label_260e94:
    // 0x260e94: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260e94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260e98: 0x27a20150  addiu       $v0, $sp, 0x150
    ctx->pc = 0x260e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
    // 0x260e9c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260e9cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260ea0: 0x27a301c0  addiu       $v1, $sp, 0x1C0
    ctx->pc = 0x260ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 448));
    // 0x260ea4: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x260ea4u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x260ea8: 0xc040c24  jal         func_103090
    ctx->pc = 0x260EA8u;
    SET_GPR_U32(ctx, 31, 0x260EB0u);
    ctx->pc = 0x103090u;
    {
        ctx->pc = 0x260EB0u;
        ps2_stubs::sceVu0Normalize(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260EB0u) { return; }
    ctx->pc = 0x260EB0u;
label_260eb0:
    // 0x260eb0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260eb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260eb4: 0x27a20160  addiu       $v0, $sp, 0x160
    ctx->pc = 0x260eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 352));
    // 0x260eb8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260eb8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260ebc: 0xc0675a4  jal         func_19D690
    ctx->pc = 0x260EBCu;
    SET_GPR_U32(ctx, 31, 0x260EC4u);
    ctx->pc = 0x19D690u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D690u, 0x260EBCu, 0x260EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x260EC4u;
label_260ec4:
    // 0x260ec4: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260ec4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260ec8: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260ecc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260eccu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260ed0: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260ED0u;
    SET_GPR_U32(ctx, 31, 0x260ED8u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260ED8u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260ED8u) { return; }
    ctx->pc = 0x260ED8u;
label_260ed8:
    // 0x260ed8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260ed8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260edc: 0xc7a00240  lwc1        $f0, 0x240($sp)
    ctx->pc = 0x260edcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 576)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260ee0: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260ee0u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x260ee4: 0x27a500b0  addiu       $a1, $sp, 0xB0
    ctx->pc = 0x260ee4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260ee8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260ee8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260eec: 0x27a200b0  addiu       $v0, $sp, 0xB0
    ctx->pc = 0x260eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x260ef0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260ef0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260ef4: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x260EF4u;
    SET_GPR_U32(ctx, 31, 0x260EFCu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x260EFCu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260EFCu) { return; }
    ctx->pc = 0x260EFCu;
label_260efc:
    // 0x260efc: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260efcu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260f00: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260f04: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x260f04u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x260f08: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x260F08u;
    SET_GPR_U32(ctx, 31, 0x260F10u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x260F10u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260F10u) { return; }
    ctx->pc = 0x260F10u;
label_260f10:
    // 0x260f10: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x260f10u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260f14: 0xc7a00244  lwc1        $f0, 0x244($sp)
    ctx->pc = 0x260f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 580)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x260f18: 0x46000307  neg.s       $f12, $f0
    ctx->pc = 0x260f18u;
    ctx->f[12] = FPU_NEG_S(ctx->f[0]);
    // 0x260f1c: 0x27a200f0  addiu       $v0, $sp, 0xF0
    ctx->pc = 0x260f1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260f20: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x260f20u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x260f24: 0x27a500f0  addiu       $a1, $sp, 0xF0
    ctx->pc = 0x260f24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
    // 0x260f28: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x260F28u;
    SET_GPR_U32(ctx, 31, 0x260F30u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x260F30u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x260F30u) { return; }
    ctx->pc = 0x260F30u;
label_260f30:
    // 0x260f30: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x260f30u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x260f34u;
}
