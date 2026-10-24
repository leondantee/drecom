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

// Function: entry_00249e90
// Address: 0x249e90 - 0x24a0cc
void entry_00249e90_0x249e90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00249e90_0x249e90");
#endif

    switch (ctx->pc) {
        case 0x249ea0u: goto label_249ea0;
        case 0x249ec0u: goto label_249ec0;
        case 0x249ee0u: goto label_249ee0;
        case 0x249f34u: goto label_249f34;
        case 0x249f70u: goto label_249f70;
        case 0x249f90u: goto label_249f90;
        case 0x249facu: goto label_249fac;
        case 0x249fe4u: goto label_249fe4;
        case 0x24a018u: goto label_24a018;
        case 0x24a030u: goto label_24a030;
        case 0x24a06cu: goto label_24a06c;
        case 0x24a084u: goto label_24a084;
        case 0x24a094u: goto label_24a094;
        default: break;
    }

    ctx->pc = 0x249e90u;

    // 0x249e90: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x249e90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249e94: 0x70c02628  paddub      $a0, $a2, $zero
    ctx->pc = 0x249e94u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x249e98: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x249E98u;
    SET_GPR_U32(ctx, 31, 0x249EA0u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x249EA0u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249EA0u) { return; }
    ctx->pc = 0x249EA0u;
label_249ea0:
    // 0x249ea0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249ea4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x249ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249ea8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x249ea8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x249eac: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x249eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249eb0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x249eb0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249eb4: 0xc46c000c  lwc1        $f12, 0xC($v1)
    ctx->pc = 0x249eb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x249eb8: 0xc040d0e  jal         func_103438
    ctx->pc = 0x249EB8u;
    SET_GPR_U32(ctx, 31, 0x249EC0u);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x249EC0u;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249EC0u) { return; }
    ctx->pc = 0x249EC0u;
label_249ec0:
    // 0x249ec0: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249ec4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x249ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249ec8: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x249ec8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x249ecc: 0x27a200e0  addiu       $v0, $sp, 0xE0
    ctx->pc = 0x249eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249ed0: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x249ed0u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249ed4: 0xc46c0008  lwc1        $f12, 0x8($v1)
    ctx->pc = 0x249ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x249ed8: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x249ED8u;
    SET_GPR_U32(ctx, 31, 0x249EE0u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x249EE0u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249EE0u) { return; }
    ctx->pc = 0x249EE0u;
label_249ee0:
    // 0x249ee0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249ee0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249ee4: 0x0  nop
    ctx->pc = 0x249ee4u;
    // NOP
    // 0x249ee8: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x249ee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x249eec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x249eecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249ef0: 0x0  nop
    ctx->pc = 0x249ef0u;
    // NOP
    // 0x249ef4: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x249ef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x249ef8: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249efc: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x249efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249f00: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x249f00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x249f04: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x249f04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x249f08: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x249f08u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x249f0c: 0x0  nop
    ctx->pc = 0x249f0cu;
    // NOP
    // 0x249f10: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x249f10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x249f14: 0x27a50130  addiu       $a1, $sp, 0x130
    ctx->pc = 0x249f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x249f18: 0x70a02628  paddub      $a0, $a1, $zero
    ctx->pc = 0x249f18u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 5), GPR_VEC(ctx, 0)));
    // 0x249f1c: 0x27a600e0  addiu       $a2, $sp, 0xE0
    ctx->pc = 0x249f1cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249f20: 0x70c02e28  paddub      $a1, $a2, $zero
    ctx->pc = 0x249f20u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 6), GPR_VEC(ctx, 0)));
    // 0x249f24: 0x27a70130  addiu       $a3, $sp, 0x130
    ctx->pc = 0x249f24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x249f28: 0x70e03628  paddub      $a2, $a3, $zero
    ctx->pc = 0x249f28u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x249f2c: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x249F2Cu;
    SET_GPR_U32(ctx, 31, 0x249F34u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x249F34u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249F34u) { return; }
    ctx->pc = 0x249F34u;
label_249f34:
    // 0x249f34: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x249f34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249f38: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x249f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249f3c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x249f3cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x249f40: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x249f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x249f44: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x249f44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249f48: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x249f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249f4c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x249f4cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x249f50: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x249f50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x249f54: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x249f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249f58: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x249f58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249f5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x249f5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x249f60: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x249f60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x249f64: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x249f64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249f68: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x249F68u;
    SET_GPR_U32(ctx, 31, 0x249F70u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x249F70u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249F70u) { return; }
    ctx->pc = 0x249F70u;
label_249f70:
    // 0x249f70: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x249f70u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249f74: 0x26030150  addiu       $v1, $s0, 0x150
    ctx->pc = 0x249f74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249f78: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x249f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x249f7c: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x249f7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x249f80: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x249f80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249f84: 0x46000b01  sub.s       $f12, $f1, $f0
    ctx->pc = 0x249f84u;
    ctx->f[12] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x249f88: 0xc058fec  jal         func_163FB0
    ctx->pc = 0x249F88u;
    SET_GPR_U32(ctx, 31, 0x249F90u);
    ctx->pc = 0x163FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x163FB0u, 0x249F88u, 0x249F90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249F90u;
label_249f90:
    // 0x249f90: 0xe7a001ac  swc1        $f0, 0x1AC($sp)
    ctx->pc = 0x249f90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 428), bits); }
    // 0x249f94: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x249f94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249f98: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x249f98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249f9c: 0x70602e28  paddub      $a1, $v1, $zero
    ctx->pc = 0x249f9cu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 3), GPR_VEC(ctx, 0)));
    // 0x249fa0: 0xc7ac01ac  lwc1        $f12, 0x1AC($sp)
    ctx->pc = 0x249fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 428)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x249fa4: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x249FA4u;
    SET_GPR_U32(ctx, 31, 0x249FACu);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x249FACu;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249FACu) { return; }
    ctx->pc = 0x249FACu;
label_249fac:
    // 0x249fac: 0x70402e28  paddub      $a1, $v0, $zero
    ctx->pc = 0x249facu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x249fb0: 0xc6000030  lwc1        $f0, 0x30($s0)
    ctx->pc = 0x249fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249fb4: 0xe7a00130  swc1        $f0, 0x130($sp)
    ctx->pc = 0x249fb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x249fb8: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x249fb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249fbc: 0xe7a00134  swc1        $f0, 0x134($sp)
    ctx->pc = 0x249fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 308), bits); }
    // 0x249fc0: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x249fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249fc4: 0xe7a00138  swc1        $f0, 0x138($sp)
    ctx->pc = 0x249fc4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 312), bits); }
    // 0x249fc8: 0xc600003c  lwc1        $f0, 0x3C($s0)
    ctx->pc = 0x249fc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249fcc: 0xe7a0013c  swc1        $f0, 0x13C($sp)
    ctx->pc = 0x249fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 316), bits); }
    // 0x249fd0: 0x27a400e0  addiu       $a0, $sp, 0xE0
    ctx->pc = 0x249fd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249fd4: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x249fd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x249fd8: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x249fd8u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x249fdc: 0xc040c00  jal         func_103000
    ctx->pc = 0x249FDCu;
    SET_GPR_U32(ctx, 31, 0x249FE4u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x249FE4u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x249FE4u) { return; }
    ctx->pc = 0x249FE4u;
label_249fe4:
    // 0x249fe4: 0xc7a00130  lwc1        $f0, 0x130($sp)
    ctx->pc = 0x249fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249fe8: 0xe7a00110  swc1        $f0, 0x110($sp)
    ctx->pc = 0x249fe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 272), bits); }
    // 0x249fec: 0xc7a00134  lwc1        $f0, 0x134($sp)
    ctx->pc = 0x249fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 308)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249ff0: 0xe7a00114  swc1        $f0, 0x114($sp)
    ctx->pc = 0x249ff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 276), bits); }
    // 0x249ff4: 0xc7a00138  lwc1        $f0, 0x138($sp)
    ctx->pc = 0x249ff4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 312)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x249ff8: 0xe7a00118  swc1        $f0, 0x118($sp)
    ctx->pc = 0x249ff8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 280), bits); }
    // 0x249ffc: 0xc7a0013c  lwc1        $f0, 0x13C($sp)
    ctx->pc = 0x249ffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 316)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x24a000: 0xe7a0011c  swc1        $f0, 0x11C($sp)
    ctx->pc = 0x24a000u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 284), bits); }
    // 0x24a004: 0x72402628  paddub      $a0, $s2, $zero
    ctx->pc = 0x24a004u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x24a008: 0x27a500e0  addiu       $a1, $sp, 0xE0
    ctx->pc = 0x24a008u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x24a00c: 0x27a600a0  addiu       $a2, $sp, 0xA0
    ctx->pc = 0x24a00cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24a010: 0xc040c00  jal         func_103000
    ctx->pc = 0x24A010u;
    SET_GPR_U32(ctx, 31, 0x24A018u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24A018u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A018u) { return; }
    ctx->pc = 0x24A018u;
label_24a018:
    // 0x24a018: 0x3c044348  lui         $a0, 0x4348
    ctx->pc = 0x24a018u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)17224 << 16));
    // 0x24a01c: 0x44846000  mtc1        $a0, $f12
    ctx->pc = 0x24a01cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x24a020: 0x72a02628  paddub      $a0, $s5, $zero
    ctx->pc = 0x24a020u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 21), GPR_VEC(ctx, 0)));
    // 0x24a024: 0x72402e28  paddub      $a1, $s2, $zero
    ctx->pc = 0x24a024u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 18), GPR_VEC(ctx, 0)));
    // 0x24a028: 0xc05cad8  jal         func_172B60
    ctx->pc = 0x24A028u;
    SET_GPR_U32(ctx, 31, 0x24A030u);
    ctx->pc = 0x172B60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x172B60u, 0x24A028u, 0x24A030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x24A030u;
label_24a030:
    // 0x24a030: 0x44800800  mtc1        $zero, $f1
    ctx->pc = 0x24a030u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x24a034: 0x0  nop
    ctx->pc = 0x24a034u;
    // NOP
    // 0x24a038: 0x46000832  c.eq.s      $f1, $f0
    ctx->pc = 0x24a038u;
    ctx->fcr31 = (FPU_C_EQ_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x24a03c: 0x0  nop
    ctx->pc = 0x24a03cu;
    // NOP
    // 0x24a040: 0x45000025  bc1f        . + 4 + (0x25 << 2)
    ctx->pc = 0x24A040u;
    {
        const bool branch_taken_0x24a040 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x24a040) {
            ctx->pc = 0x24A0D8u;
            return;
        }
    }
    ctx->pc = 0x24A048u;
    // 0x24a048: 0x16200020  bnez        $s1, . + 4 + (0x20 << 2)
    ctx->pc = 0x24A048u;
    {
        const bool branch_taken_0x24a048 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x24a048) {
            ctx->pc = 0x24A0CCu;
            return;
        }
    }
    ctx->pc = 0x24A050u;
    // 0x24a050: 0x96050140  lhu         $a1, 0x140($s0)
    ctx->pc = 0x24a050u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 320)));
    // 0x24a054: 0x30a2ff5b  andi        $v0, $a1, 0xFF5B
    ctx->pc = 0x24a054u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65371);
    // 0x24a058: 0xa6020140  sh          $v0, 0x140($s0)
    ctx->pc = 0x24a058u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 320), (uint16_t)GPR_U32(ctx, 2));
    // 0x24a05c: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x24a05cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24a060: 0x8e050100  lw          $a1, 0x100($s0)
    ctx->pc = 0x24a060u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 256)));
    // 0x24a064: 0xc040c44  jal         func_103110
    ctx->pc = 0x24A064u;
    SET_GPR_U32(ctx, 31, 0x24A06Cu);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x24A06Cu;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A06Cu) { return; }
    ctx->pc = 0x24A06Cu;
label_24a06c:
    // 0x24a06c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x24a06cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x24a070: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x24a070u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24a074: 0x27a500a0  addiu       $a1, $sp, 0xA0
    ctx->pc = 0x24a074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x24a078: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x24a078u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24a07c: 0xc040c00  jal         func_103000
    ctx->pc = 0x24A07Cu;
    SET_GPR_U32(ctx, 31, 0x24A084u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x24A084u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A084u) { return; }
    ctx->pc = 0x24A084u;
label_24a084:
    // 0x24a084: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x24a084u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x24a088: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x24a088u;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x24a08c: 0xc040ca2  jal         func_103288
    ctx->pc = 0x24A08Cu;
    SET_GPR_U32(ctx, 31, 0x24A094u);
    ctx->pc = 0x103288u;
    {
        ctx->pc = 0x24A094u;
        ps2_stubs::sceVu0CopyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x24A094u) { return; }
    ctx->pc = 0x24A094u;
label_24a094:
    // 0x24a094: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24a094u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a098: 0x94a3002e  lhu         $v1, 0x2E($a1)
    ctx->pc = 0x24a098u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 46)));
    // 0x24a09c: 0x3064fffe  andi        $a0, $v1, 0xFFFE
    ctx->pc = 0x24a09cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65534);
    // 0x24a0a0: 0xa4a4002e  sh          $a0, 0x2E($a1)
    ctx->pc = 0x24a0a0u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 46), (uint16_t)GPR_U32(ctx, 4));
    // 0x24a0a4: 0x8fa301c8  lw          $v1, 0x1C8($sp)
    ctx->pc = 0x24a0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 456)));
    // 0x24a0a8: 0x24651330  addiu       $a1, $v1, 0x1330
    ctx->pc = 0x24a0a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x24a0ac: 0x8ca40030  lw          $a0, 0x30($a1)
    ctx->pc = 0x24a0acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x24a0b0: 0x2403feff  addiu       $v1, $zero, -0x101
    ctx->pc = 0x24a0b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
    // 0x24a0b4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x24a0b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x24a0b8: 0xaca40030  sw          $a0, 0x30($a1)
    ctx->pc = 0x24a0b8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 48), GPR_U32(ctx, 4));
    // 0x24a0bc: 0x26050150  addiu       $a1, $s0, 0x150
    ctx->pc = 0x24a0bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 336));
    // 0x24a0c0: 0xa0a00029  sb          $zero, 0x29($a1)
    ctx->pc = 0x24a0c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 41), (uint8_t)GPR_U32(ctx, 0));
    // 0x24a0c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x24A0C4u;
    {
        const bool branch_taken_0x24a0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x24a0c4) {
            ctx->pc = 0x24A0D8u;
            return;
        }
    }
    ctx->pc = 0x24A0CCu;
}
