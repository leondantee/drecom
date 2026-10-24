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

// Function: entry_00210688
// Address: 0x210688 - 0x210a78
void entry_00210688_0x210688(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00210688_0x210688");
#endif

    switch (ctx->pc) {
        case 0x2106a0u: goto label_2106a0;
        case 0x2106bcu: goto label_2106bc;
        case 0x2106dcu: goto label_2106dc;
        case 0x210704u: goto label_210704;
        case 0x210724u: goto label_210724;
        case 0x210744u: goto label_210744;
        case 0x210760u: goto label_210760;
        case 0x21077cu: goto label_21077c;
        case 0x2107a8u: goto label_2107a8;
        case 0x2107e8u: goto label_2107e8;
        case 0x210814u: goto label_210814;
        case 0x210820u: goto label_210820;
        case 0x21084cu: goto label_21084c;
        case 0x21086cu: goto label_21086c;
        case 0x210890u: goto label_210890;
        case 0x2108e4u: goto label_2108e4;
        case 0x21092cu: goto label_21092c;
        case 0x210950u: goto label_210950;
        case 0x210960u: goto label_210960;
        case 0x21096cu: goto label_21096c;
        case 0x21098cu: goto label_21098c;
        case 0x2109acu: goto label_2109ac;
        case 0x2109d8u: goto label_2109d8;
        case 0x2109f0u: goto label_2109f0;
        case 0x210a08u: goto label_210a08;
        case 0x210a28u: goto label_210a28;
        case 0x210a74u: goto label_210a74;
        default: break;
    }

    ctx->pc = 0x210688u;

    // 0x210688: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210688u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x21068c: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x21068cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x210690: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x210690u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x210694: 0xc46c00d0  lwc1        $f12, 0xD0($v1)
    ctx->pc = 0x210694u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x210698: 0xc0677a8  jal         func_19DEA0
    ctx->pc = 0x210698u;
    SET_GPR_U32(ctx, 31, 0x2106A0u);
    ctx->pc = 0x19DEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19DEA0u, 0x210698u, 0x2106A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2106A0u;
label_2106a0:
    // 0x2106a0: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2106a0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2106a4: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x2106a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x2106a8: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x2106a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x2106ac: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x2106acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x2106b0: 0xc46c00d4  lwc1        $f12, 0xD4($v1)
    ctx->pc = 0x2106b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2106b4: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x2106B4u;
    SET_GPR_U32(ctx, 31, 0x2106BCu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x2106BCu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2106BCu) { return; }
    ctx->pc = 0x2106BCu;
label_2106bc:
    // 0x2106bc: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x2106bcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2106c0: 0x8fa60528  lw          $a2, 0x528($sp)
    ctx->pc = 0x2106c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x2106c4: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x2106c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x2106c8: 0x27a302a0  addiu       $v1, $sp, 0x2A0
    ctx->pc = 0x2106c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x2106cc: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x2106ccu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x2106d0: 0xc4cc00d8  lwc1        $f12, 0xD8($a2)
    ctx->pc = 0x2106d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 216)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2106d4: 0xc040ce4  jal         func_103390
    ctx->pc = 0x2106D4u;
    SET_GPR_U32(ctx, 31, 0x2106DCu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x2106DCu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2106DCu) { return; }
    ctx->pc = 0x2106DCu;
label_2106dc:
    // 0x2106dc: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x2106dcu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2106e0: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x2106e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x2106e4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2106e4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2106e8: 0x0  nop
    ctx->pc = 0x2106e8u;
    // NOP
    // 0x2106ec: 0xe7a0050c  swc1        $f0, 0x50C($sp)
    ctx->pc = 0x2106ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1292), bits); }
    // 0x2106f0: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x2106f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x2106f4: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x2106f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x2106f8: 0xc7ac050c  lwc1        $f12, 0x50C($sp)
    ctx->pc = 0x2106f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x2106fc: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x2106FCu;
    SET_GPR_U32(ctx, 31, 0x210704u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x210704u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210704u) { return; }
    ctx->pc = 0x210704u;
label_210704:
    // 0x210704: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x210704u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210708: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x210708u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x21070c: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x21070cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x210710: 0x27a302a0  addiu       $v1, $sp, 0x2A0
    ctx->pc = 0x210710u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x210714: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x210714u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x210718: 0x27a60260  addiu       $a2, $sp, 0x260
    ctx->pc = 0x210718u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x21071c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x21071Cu;
    SET_GPR_U32(ctx, 31, 0x210724u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x210724u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210724u) { return; }
    ctx->pc = 0x210724u;
label_210724:
    // 0x210724: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x210724u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210728: 0x8fa90528  lw          $t1, 0x528($sp)
    ctx->pc = 0x210728u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x21072c: 0x8d2a0130  lw          $t2, 0x130($t1)
    ctx->pc = 0x21072cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 304)));
    // 0x210730: 0x27a40260  addiu       $a0, $sp, 0x260
    ctx->pc = 0x210730u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x210734: 0x27a50260  addiu       $a1, $sp, 0x260
    ctx->pc = 0x210734u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x210738: 0x25460070  addiu       $a2, $t2, 0x70
    ctx->pc = 0x210738u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 10), 112));
    // 0x21073c: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x21073Cu;
    SET_GPR_U32(ctx, 31, 0x210744u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x21073Cu, 0x210744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210744u;
label_210744:
    // 0x210744: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210744u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210748: 0x27a40270  addiu       $a0, $sp, 0x270
    ctx->pc = 0x210748u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x21074c: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x21074cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x210750: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x210750u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x210754: 0xc7ac050c  lwc1        $f12, 0x50C($sp)
    ctx->pc = 0x210754u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x210758: 0xc040ed8  jal         func_103B60
    ctx->pc = 0x210758u;
    SET_GPR_U32(ctx, 31, 0x210760u);
    ctx->pc = 0x103B60u;
    {
        ctx->pc = 0x210760u;
        ps2_stubs::sceVu0ScaleVectorXYZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210760u) { return; }
    ctx->pc = 0x210760u;
label_210760:
    // 0x210760: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x210760u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210764: 0x27aa0270  addiu       $t2, $sp, 0x270
    ctx->pc = 0x210764u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x210768: 0x71402628  paddub      $a0, $t2, $zero
    ctx->pc = 0x210768u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x21076c: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x21076cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x210770: 0x27a60270  addiu       $a2, $sp, 0x270
    ctx->pc = 0x210770u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x210774: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x210774u;
    SET_GPR_U32(ctx, 31, 0x21077Cu);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x21077Cu;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21077Cu) { return; }
    ctx->pc = 0x21077Cu;
label_21077c:
    // 0x21077c: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x21077cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210780: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210780u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210784: 0x8c660130  lw          $a2, 0x130($v1)
    ctx->pc = 0x210784u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x210788: 0x27a70270  addiu       $a3, $sp, 0x270
    ctx->pc = 0x210788u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x21078c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x21078cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x210790: 0x27a90270  addiu       $t1, $sp, 0x270
    ctx->pc = 0x210790u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x210794: 0x71202e28  paddub      $a1, $t1, $zero
    ctx->pc = 0x210794u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x210798: 0x24ca0070  addiu       $t2, $a2, 0x70
    ctx->pc = 0x210798u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x21079c: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x21079cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2107a0: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x2107A0u;
    SET_GPR_U32(ctx, 31, 0x2107A8u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x2107A0u, 0x2107A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2107A8u;
label_2107a8:
    // 0x2107a8: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2107a8u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2107ac: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2107acu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2107b0: 0x0  nop
    ctx->pc = 0x2107b0u;
    // NOP
    // 0x2107b4: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x2107b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x2107b8: 0x3c0a4296  lui         $t2, 0x4296
    ctx->pc = 0x2107b8u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)17046 << 16));
    // 0x2107bc: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x2107bcu;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2107c0: 0xc7a0050c  lwc1        $f0, 0x50C($sp)
    ctx->pc = 0x2107c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2107c4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2107c4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2107c8: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x2107c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
    // 0x2107cc: 0x3c074270  lui         $a3, 0x4270
    ctx->pc = 0x2107ccu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17008 << 16));
    // 0x2107d0: 0x44870800  mtc1        $a3, $f1
    ctx->pc = 0x2107d0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2107d4: 0xc7a0050c  lwc1        $f0, 0x50C($sp)
    ctx->pc = 0x2107d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2107d8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2107d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2107dc: 0xe7a00288  swc1        $f0, 0x288($sp)
    ctx->pc = 0x2107dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x2107e0: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2107E0u;
    SET_GPR_U32(ctx, 31, 0x2107E8u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2107E0u, 0x2107E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2107E8u;
label_2107e8:
    // 0x2107e8: 0x3c064049  lui         $a2, 0x4049
    ctx->pc = 0x2107e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)16457 << 16));
    // 0x2107ec: 0x34c30fdb  ori         $v1, $a2, 0xFDB
    ctx->pc = 0x2107ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)4059);
    // 0x2107f0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x2107f0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2107f4: 0x0  nop
    ctx->pc = 0x2107f4u;
    // NOP
    // 0x2107f8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2107f8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2107fc: 0xe7a00508  swc1        $f0, 0x508($sp)
    ctx->pc = 0x2107fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1288), bits); }
    // 0x210800: 0x27a302e0  addiu       $v1, $sp, 0x2E0
    ctx->pc = 0x210800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x210804: 0x70602628  paddub      $a0, $v1, $zero
    ctx->pc = 0x210804u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x210808: 0xc7ac0508  lwc1        $f12, 0x508($sp)
    ctx->pc = 0x210808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x21080c: 0xc067844  jal         func_19E110
    ctx->pc = 0x21080Cu;
    SET_GPR_U32(ctx, 31, 0x210814u);
    ctx->pc = 0x19E110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19E110u, 0x21080Cu, 0x210814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210814u;
label_210814:
    // 0x210814: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x210814u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210818: 0xc06765c  jal         func_19D970
    ctx->pc = 0x210818u;
    SET_GPR_U32(ctx, 31, 0x210820u);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210818u, 0x210820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210820u;
label_210820:
    // 0x210820: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x210820u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x210824: 0x346a0fdb  ori         $t2, $v1, 0xFDB
    ctx->pc = 0x210824u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x210828: 0x448a0800  mtc1        $t2, $f1
    ctx->pc = 0x210828u;
    { uint32_t bits = GPR_U32(ctx, 10); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x21082c: 0x0  nop
    ctx->pc = 0x21082cu;
    // NOP
    // 0x210830: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x210830u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x210834: 0xe7a00508  swc1        $f0, 0x508($sp)
    ctx->pc = 0x210834u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1288), bits); }
    // 0x210838: 0x27a402e0  addiu       $a0, $sp, 0x2E0
    ctx->pc = 0x210838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x21083c: 0x27a502e0  addiu       $a1, $sp, 0x2E0
    ctx->pc = 0x21083cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x210840: 0xc7ac0508  lwc1        $f12, 0x508($sp)
    ctx->pc = 0x210840u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 1288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x210844: 0xc040ce4  jal         func_103390
    ctx->pc = 0x210844u;
    SET_GPR_U32(ctx, 31, 0x21084Cu);
    ctx->pc = 0x103390u;
    {
        ctx->pc = 0x21084Cu;
        ps2_stubs::sceVu0RotMatrixZ(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21084Cu) { return; }
    ctx->pc = 0x21084Cu;
label_21084c:
    // 0x21084c: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x21084cu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210850: 0x27a902a0  addiu       $t1, $sp, 0x2A0
    ctx->pc = 0x210850u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x210854: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x210854u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x210858: 0x27aa02a0  addiu       $t2, $sp, 0x2A0
    ctx->pc = 0x210858u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x21085c: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x21085cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x210860: 0x27a602e0  addiu       $a2, $sp, 0x2E0
    ctx->pc = 0x210860u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 736));
    // 0x210864: 0xc040c00  jal         func_103000
    ctx->pc = 0x210864u;
    SET_GPR_U32(ctx, 31, 0x21086Cu);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x21086Cu;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21086Cu) { return; }
    ctx->pc = 0x21086Cu;
label_21086c:
    // 0x21086c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x21086cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210870: 0x27a90280  addiu       $t1, $sp, 0x280
    ctx->pc = 0x210870u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x210874: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x210874u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x210878: 0x27aa02a0  addiu       $t2, $sp, 0x2A0
    ctx->pc = 0x210878u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x21087c: 0x71402e28  paddub      $a1, $t2, $zero
    ctx->pc = 0x21087cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x210880: 0x27a20280  addiu       $v0, $sp, 0x280
    ctx->pc = 0x210880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x210884: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x210884u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210888: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x210888u;
    SET_GPR_U32(ctx, 31, 0x210890u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x210890u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210890u) { return; }
    ctx->pc = 0x210890u;
label_210890:
    // 0x210890: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x210890u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210894: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x210894u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210898: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x210898u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x21089c: 0x3c07437a  lui         $a3, 0x437A
    ctx->pc = 0x21089cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)17274 << 16));
    // 0x2108a0: 0x44876000  mtc1        $a3, $f12
    ctx->pc = 0x2108a0u;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x2108a4: 0x3c0843fa  lui         $t0, 0x43FA
    ctx->pc = 0x2108a4u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17402 << 16));
    // 0x2108a8: 0x44886800  mtc1        $t0, $f13
    ctx->pc = 0x2108a8u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x2108ac: 0x3c09437a  lui         $t1, 0x437A
    ctx->pc = 0x2108acu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)17274 << 16));
    // 0x2108b0: 0x44897000  mtc1        $t1, $f14
    ctx->pc = 0x2108b0u;
    { uint32_t bits = GPR_U32(ctx, 9); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x2108b4: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x2108b4u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2108b8: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x2108b8u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2108bc: 0x27aa0270  addiu       $t2, $sp, 0x270
    ctx->pc = 0x2108bcu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 624));
    // 0x2108c0: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x2108c0u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x2108c4: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x2108c4u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2108c8: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x2108c8u;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2108cc: 0x27a20260  addiu       $v0, $sp, 0x260
    ctx->pc = 0x2108ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x2108d0: 0x70404e28  paddub      $t1, $v0, $zero
    ctx->pc = 0x2108d0u;
    SET_GPR_VEC(ctx, 9, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2108d4: 0x27aa0280  addiu       $t2, $sp, 0x280
    ctx->pc = 0x2108d4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x2108d8: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x2108d8u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x2108dc: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x2108DCu;
    SET_GPR_U32(ctx, 31, 0x2108E4u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x2108DCu, 0x2108E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2108E4u;
label_2108e4:
    // 0x2108e4: 0x70405628  paddub      $t2, $v0, $zero
    ctx->pc = 0x2108e4u;
    SET_GPR_VEC(ctx, 10, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2108e8: 0x3c0740a0  lui         $a3, 0x40A0
    ctx->pc = 0x2108e8u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)16544 << 16));
    // 0x2108ec: 0x44870000  mtc1        $a3, $f0
    ctx->pc = 0x2108ecu;
    { uint32_t bits = GPR_U32(ctx, 7); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2108f0: 0x0  nop
    ctx->pc = 0x2108f0u;
    // NOP
    // 0x2108f4: 0xe7a0050c  swc1        $f0, 0x50C($sp)
    ctx->pc = 0x2108f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 1292), bits); }
    // 0x2108f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2108f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2108fc: 0x0  nop
    ctx->pc = 0x2108fcu;
    // NOP
    // 0x210900: 0xe7a00280  swc1        $f0, 0x280($sp)
    ctx->pc = 0x210900u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 640), bits); }
    // 0x210904: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210904u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210908: 0x0  nop
    ctx->pc = 0x210908u;
    // NOP
    // 0x21090c: 0xe7a00284  swc1        $f0, 0x284($sp)
    ctx->pc = 0x21090cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 644), bits); }
    // 0x210910: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x210910u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x210914: 0x0  nop
    ctx->pc = 0x210914u;
    // NOP
    // 0x210918: 0xe7a00288  swc1        $f0, 0x288($sp)
    ctx->pc = 0x210918u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 648), bits); }
    // 0x21091c: 0x27a802a0  addiu       $t0, $sp, 0x2A0
    ctx->pc = 0x21091cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x210920: 0x71002628  paddub      $a0, $t0, $zero
    ctx->pc = 0x210920u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 8), GPR_VEC(ctx, 0)));
    // 0x210924: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x210924u;
    SET_GPR_U32(ctx, 31, 0x21092Cu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x21092Cu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x21092Cu) { return; }
    ctx->pc = 0x21092Cu;
label_21092c:
    // 0x21092c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x21092cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210930: 0x27a902a0  addiu       $t1, $sp, 0x2A0
    ctx->pc = 0x210930u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x210934: 0x71202628  paddub      $a0, $t1, $zero
    ctx->pc = 0x210934u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 9), GPR_VEC(ctx, 0)));
    // 0x210938: 0x27a302a0  addiu       $v1, $sp, 0x2A0
    ctx->pc = 0x210938u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x21093c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x21093cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x210940: 0x27aa0370  addiu       $t2, $sp, 0x370
    ctx->pc = 0x210940u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
    // 0x210944: 0x71403628  paddub      $a2, $t2, $zero
    ctx->pc = 0x210944u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 10), GPR_VEC(ctx, 0)));
    // 0x210948: 0xc040d62  jal         func_103588
    ctx->pc = 0x210948u;
    SET_GPR_U32(ctx, 31, 0x210950u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x210950u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210950u) { return; }
    ctx->pc = 0x210950u;
label_210950:
    // 0x210950: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x210950u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210954: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x210954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x210958: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x210958u;
    SET_GPR_U32(ctx, 31, 0x210960u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x210960u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210960u) { return; }
    ctx->pc = 0x210960u;
label_210960:
    // 0x210960: 0x70403628  paddub      $a2, $v0, $zero
    ctx->pc = 0x210960u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210964: 0xc06765c  jal         func_19D970
    ctx->pc = 0x210964u;
    SET_GPR_U32(ctx, 31, 0x21096Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210964u, 0x21096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21096Cu;
label_21096c:
    // 0x21096c: 0x3c054049  lui         $a1, 0x4049
    ctx->pc = 0x21096cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16457 << 16));
    // 0x210970: 0x34a40fdb  ori         $a0, $a1, 0xFDB
    ctx->pc = 0x210970u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)4059);
    // 0x210974: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x210974u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210978: 0x0  nop
    ctx->pc = 0x210978u;
    // NOP
    // 0x21097c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21097cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x210980: 0xe7a00360  swc1        $f0, 0x360($sp)
    ctx->pc = 0x210980u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 864), bits); }
    // 0x210984: 0xc06765c  jal         func_19D970
    ctx->pc = 0x210984u;
    SET_GPR_U32(ctx, 31, 0x21098Cu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x210984u, 0x21098Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x21098Cu;
label_21098c:
    // 0x21098c: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x21098cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x210990: 0x34630fdb  ori         $v1, $v1, 0xFDB
    ctx->pc = 0x210990u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x210994: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x210994u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x210998: 0x0  nop
    ctx->pc = 0x210998u;
    // NOP
    // 0x21099c: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x21099cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2109a0: 0xe7a00364  swc1        $f0, 0x364($sp)
    ctx->pc = 0x2109a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 868), bits); }
    // 0x2109a4: 0xc06765c  jal         func_19D970
    ctx->pc = 0x2109A4u;
    SET_GPR_U32(ctx, 31, 0x2109ACu);
    ctx->pc = 0x19D970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D970u, 0x2109A4u, 0x2109ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2109ACu;
label_2109ac:
    // 0x2109ac: 0x3c034049  lui         $v1, 0x4049
    ctx->pc = 0x2109acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16457 << 16));
    // 0x2109b0: 0x34640fdb  ori         $a0, $v1, 0xFDB
    ctx->pc = 0x2109b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)4059);
    // 0x2109b4: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x2109b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2109b8: 0x0  nop
    ctx->pc = 0x2109b8u;
    // NOP
    // 0x2109bc: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x2109bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x2109c0: 0xe7a00368  swc1        $f0, 0x368($sp)
    ctx->pc = 0x2109c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 872), bits); }
    // 0x2109c4: 0x27a40320  addiu       $a0, $sp, 0x320
    ctx->pc = 0x2109c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x2109c8: 0x27a50320  addiu       $a1, $sp, 0x320
    ctx->pc = 0x2109c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x2109cc: 0x27a60360  addiu       $a2, $sp, 0x360
    ctx->pc = 0x2109ccu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 864));
    // 0x2109d0: 0xc040d62  jal         func_103588
    ctx->pc = 0x2109D0u;
    SET_GPR_U32(ctx, 31, 0x2109D8u);
    ctx->pc = 0x103588u;
    {
        ctx->pc = 0x2109D8u;
        ps2_stubs::sceVu0RotMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2109D8u) { return; }
    ctx->pc = 0x2109D8u;
label_2109d8:
    // 0x2109d8: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2109d8u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2109dc: 0x27a402a0  addiu       $a0, $sp, 0x2A0
    ctx->pc = 0x2109dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x2109e0: 0x27a50320  addiu       $a1, $sp, 0x320
    ctx->pc = 0x2109e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 800));
    // 0x2109e4: 0x27a602a0  addiu       $a2, $sp, 0x2A0
    ctx->pc = 0x2109e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x2109e8: 0xc040c00  jal         func_103000
    ctx->pc = 0x2109E8u;
    SET_GPR_U32(ctx, 31, 0x2109F0u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x2109F0u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x2109F0u) { return; }
    ctx->pc = 0x2109F0u;
label_2109f0:
    // 0x2109f0: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x2109f0u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x2109f4: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x2109f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x2109f8: 0x27a502a0  addiu       $a1, $sp, 0x2A0
    ctx->pc = 0x2109f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 672));
    // 0x2109fc: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x2109fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x210a00: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x210A00u;
    SET_GPR_U32(ctx, 31, 0x210A08u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x210A08u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x210A08u) { return; }
    ctx->pc = 0x210A08u;
label_210a08:
    // 0x210a08: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x210a08u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210a0c: 0x8fa30528  lw          $v1, 0x528($sp)
    ctx->pc = 0x210a0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1320)));
    // 0x210a10: 0x8c630130  lw          $v1, 0x130($v1)
    ctx->pc = 0x210a10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 304)));
    // 0x210a14: 0x27a40290  addiu       $a0, $sp, 0x290
    ctx->pc = 0x210a14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x210a18: 0x27a50290  addiu       $a1, $sp, 0x290
    ctx->pc = 0x210a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x210a1c: 0x24660070  addiu       $a2, $v1, 0x70
    ctx->pc = 0x210a1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 112));
    // 0x210a20: 0xc0675a8  jal         func_19D6A0
    ctx->pc = 0x210A20u;
    SET_GPR_U32(ctx, 31, 0x210A28u);
    ctx->pc = 0x19D6A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D6A0u, 0x210A20u, 0x210A28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A28u;
label_210a28:
    // 0x210a28: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x210a28u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x210a2c: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x210a2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x210a30: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x210a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x210a34: 0x3c034448  lui         $v1, 0x4448
    ctx->pc = 0x210a34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17480 << 16));
    // 0x210a38: 0x44836000  mtc1        $v1, $f12
    ctx->pc = 0x210a38u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x210a3c: 0x3c0843fa  lui         $t0, 0x43FA
    ctx->pc = 0x210a3cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)17402 << 16));
    // 0x210a40: 0x44886800  mtc1        $t0, $f13
    ctx->pc = 0x210a40u;
    { uint32_t bits = GPR_U32(ctx, 8); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x210a44: 0x3c0542f0  lui         $a1, 0x42F0
    ctx->pc = 0x210a44u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17136 << 16));
    // 0x210a48: 0x44857000  mtc1        $a1, $f14
    ctx->pc = 0x210a48u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[14], &bits, sizeof(bits)); }
    // 0x210a4c: 0x70002628  paddub      $a0, $zero, $zero
    ctx->pc = 0x210a4cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210a50: 0x70002e28  paddub      $a1, $zero, $zero
    ctx->pc = 0x210a50u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210a54: 0x27a60290  addiu       $a2, $sp, 0x290
    ctx->pc = 0x210a54u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 656));
    // 0x210a58: 0x70003e28  paddub      $a3, $zero, $zero
    ctx->pc = 0x210a58u;
    SET_GPR_VEC(ctx, 7, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210a5c: 0x70004628  paddub      $t0, $zero, $zero
    ctx->pc = 0x210a5cu;
    SET_GPR_VEC(ctx, 8, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210a60: 0x27a90260  addiu       $t1, $sp, 0x260
    ctx->pc = 0x210a60u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 29), 608));
    // 0x210a64: 0x27aa0280  addiu       $t2, $sp, 0x280
    ctx->pc = 0x210a64u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 29), 640));
    // 0x210a68: 0x70005e28  paddub      $t3, $zero, $zero
    ctx->pc = 0x210a68u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x210a6c: 0xc0bb6c0  jal         func_2EDB00
    ctx->pc = 0x210A6Cu;
    SET_GPR_U32(ctx, 31, 0x210A74u);
    ctx->pc = 0x2EDB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDB00u, 0x210A6Cu, 0x210A74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x210A74u;
label_210a74:
    // 0x210a74: 0x70405e28  paddub      $t3, $v0, $zero
    ctx->pc = 0x210a74u;
    SET_GPR_VEC(ctx, 11, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x210a78u;
}
