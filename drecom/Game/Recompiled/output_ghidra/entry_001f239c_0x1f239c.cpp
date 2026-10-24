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

// Function: entry_001f239c
// Address: 0x1f239c - 0x1f2474
void entry_001f239c_0x1f239c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f239c_0x1f239c");
#endif

    switch (ctx->pc) {
        case 0x1f23acu: goto label_1f23ac;
        case 0x1f23ccu: goto label_1f23cc;
        case 0x1f23e4u: goto label_1f23e4;
        case 0x1f2430u: goto label_1f2430;
        default: break;
    }

    ctx->pc = 0x1f239cu;

    // 0x1f239c: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1f239cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f23a0: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f23a0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f23a4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x1F23A4u;
    SET_GPR_U32(ctx, 31, 0x1F23ACu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x1F23ACu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F23ACu) { return; }
    ctx->pc = 0x1F23ACu;
label_1f23ac:
    // 0x1f23ac: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f23acu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f23b0: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f23b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f23b4: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x1f23b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f23b8: 0x70402628  paddub      $a0, $v0, $zero
    ctx->pc = 0x1f23b8u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x1f23bc: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1f23bcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f23c0: 0xc46c00d0  lwc1        $f12, 0xD0($v1)
    ctx->pc = 0x1f23c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f23c4: 0xc040d0e  jal         func_103438
    ctx->pc = 0x1F23C4u;
    SET_GPR_U32(ctx, 31, 0x1F23CCu);
    ctx->pc = 0x103438u;
    {
        ctx->pc = 0x1F23CCu;
        ps2_stubs::sceVu0RotMatrixX(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F23CCu) { return; }
    ctx->pc = 0x1F23CCu;
label_1f23cc:
    // 0x1f23cc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f23ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f23d0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x1f23d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f23d4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1f23d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f23d8: 0xc44c00d4  lwc1        $f12, 0xD4($v0)
    ctx->pc = 0x1f23d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 212)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x1f23dc: 0xc040d38  jal         func_1034E0
    ctx->pc = 0x1F23DCu;
    SET_GPR_U32(ctx, 31, 0x1F23E4u);
    ctx->pc = 0x1034E0u;
    {
        ctx->pc = 0x1F23E4u;
        ps2_stubs::sceVu0RotMatrixY(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F23E4u) { return; }
    ctx->pc = 0x1F23E4u;
label_1f23e4:
    // 0x1f23e4: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f23e4u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f23e8: 0x0  nop
    ctx->pc = 0x1f23e8u;
    // NOP
    // 0x1f23ec: 0xe7a00050  swc1        $f0, 0x50($sp)
    ctx->pc = 0x1f23ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 80), bits); }
    // 0x1f23f0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f23f0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f23f4: 0x0  nop
    ctx->pc = 0x1f23f4u;
    // NOP
    // 0x1f23f8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x1f23f8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x1f23fc: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x1f23fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2400: 0xc4400188  lwc1        $f0, 0x188($v0)
    ctx->pc = 0x1f2400u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2404: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x1f2404u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    // 0x1f2408: 0x3c043f80  lui         $a0, 0x3F80
    ctx->pc = 0x1f2408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16256 << 16));
    // 0x1f240c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x1f240cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2410: 0x0  nop
    ctx->pc = 0x1f2410u;
    // NOP
    // 0x1f2414: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x1f2414u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
    // 0x1f2418: 0x27a70050  addiu       $a3, $sp, 0x50
    ctx->pc = 0x1f2418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f241c: 0x70e02628  paddub      $a0, $a3, $zero
    ctx->pc = 0x1f241cu;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 7), GPR_VEC(ctx, 0)));
    // 0x1f2420: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x1f2420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x1f2424: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x1f2424u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x1f2428: 0xc040bf4  jal         func_102FD0
    ctx->pc = 0x1F2428u;
    SET_GPR_U32(ctx, 31, 0x1F2430u);
    ctx->pc = 0x102FD0u;
    {
        ctx->pc = 0x1F2430u;
        ps2_stubs::sceVu0ApplyMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x1F2430u) { return; }
    ctx->pc = 0x1F2430u;
label_1f2430:
    // 0x1f2430: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2434: 0xc4610120  lwc1        $f1, 0x120($v1)
    ctx->pc = 0x1f2434u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2438: 0xc7a00050  lwc1        $f0, 0x50($sp)
    ctx->pc = 0x1f2438u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 80)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f243c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f243cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f2440: 0xe4600120  swc1        $f0, 0x120($v1)
    ctx->pc = 0x1f2440u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 288), bits); }
    // 0x1f2444: 0x8fa300b8  lw          $v1, 0xB8($sp)
    ctx->pc = 0x1f2444u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f2448: 0xc4610124  lwc1        $f1, 0x124($v1)
    ctx->pc = 0x1f2448u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f244c: 0xc7a00054  lwc1        $f0, 0x54($sp)
    ctx->pc = 0x1f244cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 84)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2450: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f2450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f2454: 0xe4600124  swc1        $f0, 0x124($v1)
    ctx->pc = 0x1f2454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 292), bits); }
    // 0x1f2458: 0x8fa400b8  lw          $a0, 0xB8($sp)
    ctx->pc = 0x1f2458u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x1f245c: 0xc4810128  lwc1        $f1, 0x128($a0)
    ctx->pc = 0x1f245cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 296)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2460: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x1f2460u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f2464: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f2464u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f2468: 0xe4800128  swc1        $f0, 0x128($a0)
    ctx->pc = 0x1f2468u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 296), bits); }
    // 0x1f246c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x1F246Cu;
    {
        const bool branch_taken_0x1f246c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f246c) {
            ctx->pc = 0x1F2528u;
            return;
        }
    }
    ctx->pc = 0x1F2474u;
}
