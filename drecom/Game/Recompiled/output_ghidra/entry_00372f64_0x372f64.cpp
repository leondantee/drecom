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

// Function: entry_00372f64
// Address: 0x372f64 - 0x373020
void entry_00372f64_0x372f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00372f64_0x372f64");
#endif

    switch (ctx->pc) {
        case 0x372fe4u: goto label_372fe4;
        case 0x37301cu: goto label_37301c;
        default: break;
    }

    ctx->pc = 0x372f64u;

    // 0x372f64: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x372f64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372f68: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372f6c: 0xe46009cc  swc1        $f0, 0x9CC($v1)
    ctx->pc = 0x372f6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 2508), bits); }
    // 0x372f70: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x372f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372f74: 0x8c460330  lw          $a2, 0x330($v0)
    ctx->pc = 0x372f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 816)));
    // 0x372f78: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x372f78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372f7c: 0xe7a00120  swc1        $f0, 0x120($sp)
    ctx->pc = 0x372f7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 288), bits); }
    // 0x372f80: 0x8fa50138  lw          $a1, 0x138($sp)
    ctx->pc = 0x372f80u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372f84: 0x8ca20330  lw          $v0, 0x330($a1)
    ctx->pc = 0x372f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 816)));
    // 0x372f88: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x372f88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372f8c: 0xe7a00124  swc1        $f0, 0x124($sp)
    ctx->pc = 0x372f8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 292), bits); }
    // 0x372f90: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x372f90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372f94: 0x8c830330  lw          $v1, 0x330($a0)
    ctx->pc = 0x372f94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 816)));
    // 0x372f98: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x372f98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372f9c: 0xe7a00128  swc1        $f0, 0x128($sp)
    ctx->pc = 0x372f9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 296), bits); }
    // 0x372fa0: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x372fa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372fa4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372fa4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372fa8: 0x8c630330  lw          $v1, 0x330($v1)
    ctx->pc = 0x372fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x372fac: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x372facu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x372fb0: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x372fb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372fb4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372fb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372fb8: 0x8c650330  lw          $a1, 0x330($v1)
    ctx->pc = 0x372fb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x372fbc: 0xe4a00004  swc1        $f0, 0x4($a1)
    ctx->pc = 0x372fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4), bits); }
    // 0x372fc0: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x372fc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372fc4: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372fc8: 0x8c640330  lw          $a0, 0x330($v1)
    ctx->pc = 0x372fc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 816)));
    // 0x372fcc: 0xe4800008  swc1        $f0, 0x8($a0)
    ctx->pc = 0x372fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x372fd0: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x372fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x372fd4: 0x8c7002d0  lw          $s0, 0x2D0($v1)
    ctx->pc = 0x372fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x372fd8: 0x72002628  paddub      $a0, $s0, $zero
    ctx->pc = 0x372fd8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x372fdc: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x372FDCu;
    SET_GPR_U32(ctx, 31, 0x372FE4u);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x372FE4u;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x372FE4u) { return; }
    ctx->pc = 0x372FE4u;
label_372fe4:
    // 0x372fe4: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x372fe4u;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x372fe8: 0xc7a00110  lwc1        $f0, 0x110($sp)
    ctx->pc = 0x372fe8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372fec: 0xe6000030  swc1        $f0, 0x30($s0)
    ctx->pc = 0x372fecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 48), bits); }
    // 0x372ff0: 0xc7a00114  lwc1        $f0, 0x114($sp)
    ctx->pc = 0x372ff0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372ff4: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x372ff4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    // 0x372ff8: 0xc7a00118  lwc1        $f0, 0x118($sp)
    ctx->pc = 0x372ff8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x372ffc: 0xe6000038  swc1        $f0, 0x38($s0)
    ctx->pc = 0x372ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 56), bits); }
    // 0x373000: 0x8fa40138  lw          $a0, 0x138($sp)
    ctx->pc = 0x373000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373004: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x373004u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
    // 0x373008: 0x8c840130  lw          $a0, 0x130($a0)
    ctx->pc = 0x373008u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 304)));
    // 0x37300c: 0x246500e0  addiu       $a1, $v1, 0xE0
    ctx->pc = 0x37300cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), 224));
    // 0x373010: 0x72003628  paddub      $a2, $s0, $zero
    ctx->pc = 0x373010u;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 16), GPR_VEC(ctx, 0)));
    // 0x373014: 0xc0675f8  jal         func_19D7E0
    ctx->pc = 0x373014u;
    SET_GPR_U32(ctx, 31, 0x37301Cu);
    ctx->pc = 0x19D7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x19D7E0u, 0x373014u, 0x37301Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x37301Cu;
label_37301c:
    // 0x37301c: 0x70401e28  paddub      $v1, $v0, $zero
    ctx->pc = 0x37301cu;
    SET_GPR_VEC(ctx, 3, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    ctx->pc = 0x373020u;
}
