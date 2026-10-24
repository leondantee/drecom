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

// Function: entry_001e07a8
// Address: 0x1e07a8 - 0x1e08c0
void entry_001e07a8_0x1e07a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001e07a8_0x1e07a8");
#endif

    switch (ctx->pc) {
        case 0x1e088cu: goto label_1e088c;
        case 0x1e0898u: goto label_1e0898;
        case 0x1e08a4u: goto label_1e08a4;
        case 0x1e08b8u: goto label_1e08b8;
        default: break;
    }

    ctx->pc = 0x1e07a8u;

    // 0x1e07a8: 0xa6000104  sh          $zero, 0x104($s0)
    ctx->pc = 0x1e07a8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 260), (uint16_t)GPR_U32(ctx, 0));
    // 0x1e07ac: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e07acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e07b0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e07b0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e07b4: 0x0  nop
    ctx->pc = 0x1e07b4u;
    // NOP
    // 0x1e07b8: 0xe60000e0  swc1        $f0, 0xE0($s0)
    ctx->pc = 0x1e07b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 224), bits); }
    // 0x1e07bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e07bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e07c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e07c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e07c4: 0x0  nop
    ctx->pc = 0x1e07c4u;
    // NOP
    // 0x1e07c8: 0xe60000e4  swc1        $f0, 0xE4($s0)
    ctx->pc = 0x1e07c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 228), bits); }
    // 0x1e07cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e07ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e07d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e07d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e07d4: 0x0  nop
    ctx->pc = 0x1e07d4u;
    // NOP
    // 0x1e07d8: 0xe60000e8  swc1        $f0, 0xE8($s0)
    ctx->pc = 0x1e07d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 232), bits); }
    // 0x1e07dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1e07dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1e07e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1e07e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e07e4: 0x0  nop
    ctx->pc = 0x1e07e4u;
    // NOP
    // 0x1e07e8: 0xe60000ec  swc1        $f0, 0xEC($s0)
    ctx->pc = 0x1e07e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 236), bits); }
    // 0x1e07ec: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e07ecu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e07f0: 0x0  nop
    ctx->pc = 0x1e07f0u;
    // NOP
    // 0x1e07f4: 0xe60000f0  swc1        $f0, 0xF0($s0)
    ctx->pc = 0x1e07f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 240), bits); }
    // 0x1e07f8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e07f8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e07fc: 0x0  nop
    ctx->pc = 0x1e07fcu;
    // NOP
    // 0x1e0800: 0xe60000f4  swc1        $f0, 0xF4($s0)
    ctx->pc = 0x1e0800u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 244), bits); }
    // 0x1e0804: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1e0804u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1e0808: 0x0  nop
    ctx->pc = 0x1e0808u;
    // NOP
    // 0x1e080c: 0xe60000f8  swc1        $f0, 0xF8($s0)
    ctx->pc = 0x1e080cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 248), bits); }
    // 0x1e0810: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e0810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0814: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e0814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e0818: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e0818u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e081c: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1e081cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0820: 0xc6010034  lwc1        $f1, 0x34($s0)
    ctx->pc = 0x1e0820u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0824: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e0824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e0828: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x1e0828u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e082c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e082cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0830: 0x460010c2  mul.s       $f3, $f2, $f0
    ctx->pc = 0x1e0830u;
    ctx->f[3] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e0834: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1e0834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0838: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e0838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e083c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e083cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0840: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1e0840u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0844: 0xc6010030  lwc1        $f1, 0x30($s0)
    ctx->pc = 0x1e0844u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0848: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e0848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e084c: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x1e084cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0850: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e0850u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e0854: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1e0854u;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e0858: 0x460300c0  add.s       $f3, $f0, $f3
    ctx->pc = 0x1e0858u;
    ctx->f[3] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1e085c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1e085cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0860: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e0860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e0864: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e0864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0868: 0x46000880  add.s       $f2, $f1, $f0
    ctx->pc = 0x1e0868u;
    ctx->f[2] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e086c: 0xc6010038  lwc1        $f1, 0x38($s0)
    ctx->pc = 0x1e086cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1e0870: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x1e0870u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x1e0874: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x1e0874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1e0878: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1e0878u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1e087c: 0x46001002  mul.s       $f0, $f2, $f0
    ctx->pc = 0x1e087cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x1e0880: 0x46030300  add.s       $f12, $f0, $f3
    ctx->pc = 0x1e0880u;
    ctx->f[12] = FPU_ADD_S(ctx->f[0], ctx->f[3]);
    // 0x1e0884: 0xc047fe2  jal         func_11FF88
    ctx->pc = 0x1E0884u;
    SET_GPR_U32(ctx, 31, 0x1E088Cu);
    ctx->pc = 0x11FF88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FF88u, 0x1E0884u, 0x1E088Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E088Cu;
label_1e088c:
    // 0x1e088c: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e088cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e0890: 0xc045522  jal         func_115488
    ctx->pc = 0x1E0890u;
    SET_GPR_U32(ctx, 31, 0x1E0898u);
    ctx->pc = 0x115488u;
    {
        ctx->pc = 0x1E0898u;
        ps2_stubs::sqrt(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E0898u) { return; }
    ctx->pc = 0x1E0898u;
label_1e0898:
    // 0x1e0898: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1e0898u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1e089c: 0xc047ce4  jal         func_11F390
    ctx->pc = 0x1E089Cu;
    SET_GPR_U32(ctx, 31, 0x1E08A4u);
    ctx->pc = 0x11F390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11F390u, 0x1E089Cu, 0x1E08A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E08A4u;
label_1e08a4:
    // 0x1e08a4: 0xe60000fc  swc1        $f0, 0xFC($s0)
    ctx->pc = 0x1e08a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 252), bits); }
    // 0x1e08a8: 0x26040080  addiu       $a0, $s0, 0x80
    ctx->pc = 0x1e08a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x1e08ac: 0x72002e28  paddub      $a1, $s0, $zero
    ctx->pc = 0x1e08acu;
    SET_GPR_VEC(ctx, 5, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x1e08b0: 0xc040c44  jal         func_103110
    ctx->pc = 0x1E08B0u;
    SET_GPR_U32(ctx, 31, 0x1E08B8u);
    ctx->pc = 0x103110u;
    {
        ctx->pc = 0x1E08B8u;
        ps2_stubs::sceVu0InversMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1E08B8u) { return; }
    ctx->pc = 0x1E08B8u;
label_1e08b8:
    // 0x1e08b8: 0x26100110  addiu       $s0, $s0, 0x110
    ctx->pc = 0x1e08b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
    // 0x1e08bc: 0x0  nop
    ctx->pc = 0x1e08bcu;
    // NOP
    ctx->pc = 0x1e08c0u;
}
