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

// Function: entry_0025d868
// Address: 0x25d868 - 0x25d908
void entry_0025d868_0x25d868(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025d868_0x25d868");
#endif

    switch (ctx->pc) {
        case 0x25d8dcu: goto label_25d8dc;
        default: break;
    }

    ctx->pc = 0x25d868u;

    // 0x25d868: 0xc60115e0  lwc1        $f1, 0x15E0($s0)
    ctx->pc = 0x25d868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 5600)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25d86c: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x25d86cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d870: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x25d870u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x25d874: 0xe7a001dc  swc1        $f0, 0x1DC($sp)
    ctx->pc = 0x25d874u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 476), bits); }
    // 0x25d878: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x25d878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d87c: 0xe60009cc  swc1        $f0, 0x9CC($s0)
    ctx->pc = 0x25d87cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 2508), bits); }
    // 0x25d880: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25d880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25d884: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x25d884u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d888: 0xe7a001e8  swc1        $f0, 0x1E8($sp)
    ctx->pc = 0x25d888u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 488), bits); }
    // 0x25d88c: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25d88cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25d890: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x25d890u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d894: 0xe7a001ec  swc1        $f0, 0x1EC($sp)
    ctx->pc = 0x25d894u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 492), bits); }
    // 0x25d898: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25d898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25d89c: 0xc4400008  lwc1        $f0, 0x8($v0)
    ctx->pc = 0x25d89cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d8a0: 0xe7a001f0  swc1        $f0, 0x1F0($sp)
    ctx->pc = 0x25d8a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 496), bits); }
    // 0x25d8a4: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x25d8a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d8a8: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25d8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25d8ac: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x25d8acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
    // 0x25d8b0: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x25d8b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d8b4: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25d8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25d8b8: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x25d8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x25d8bc: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x25d8bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d8c0: 0x8e020330  lw          $v0, 0x330($s0)
    ctx->pc = 0x25d8c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 816)));
    // 0x25d8c4: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x25d8c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x25d8c8: 0x8e0202d0  lw          $v0, 0x2D0($s0)
    ctx->pc = 0x25d8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 720)));
    // 0x25d8cc: 0x70408e28  paddub      $s1, $v0, $zero
    ctx->pc = 0x25d8ccu;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 2), GPR_VEC(ctx, 0)));
    // 0x25d8d0: 0x72202628  paddub      $a0, $s1, $zero
    ctx->pc = 0x25d8d0u;
    SET_GPR_VEC(ctx, 4, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25d8d4: 0xc040cbc  jal         func_1032F0
    ctx->pc = 0x25D8D4u;
    SET_GPR_U32(ctx, 31, 0x25D8DCu);
    ctx->pc = 0x1032F0u;
    {
        ctx->pc = 0x25D8DCu;
        ps2_stubs::sceVu0UnitMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D8DCu) { return; }
    ctx->pc = 0x25D8DCu;
label_25d8dc:
    // 0x25d8dc: 0xc7a001d8  lwc1        $f0, 0x1D8($sp)
    ctx->pc = 0x25d8dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 472)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d8e0: 0xe6200030  swc1        $f0, 0x30($s1)
    ctx->pc = 0x25d8e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 48), bits); }
    // 0x25d8e4: 0xc7a001dc  lwc1        $f0, 0x1DC($sp)
    ctx->pc = 0x25d8e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 476)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d8e8: 0xe6200034  swc1        $f0, 0x34($s1)
    ctx->pc = 0x25d8e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 52), bits); }
    // 0x25d8ec: 0xc7a001e0  lwc1        $f0, 0x1E0($sp)
    ctx->pc = 0x25d8ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 480)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25d8f0: 0xe6200038  swc1        $f0, 0x38($s1)
    ctx->pc = 0x25d8f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 56), bits); }
    // 0x25d8f4: 0x8e040130  lw          $a0, 0x130($s0)
    ctx->pc = 0x25d8f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x25d8f8: 0x260500e0  addiu       $a1, $s0, 0xE0
    ctx->pc = 0x25d8f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 224));
    // 0x25d8fc: 0x72203628  paddub      $a2, $s1, $zero
    ctx->pc = 0x25d8fcu;
    SET_GPR_VEC(ctx, 6, _mm_adds_epu8(GPR_VEC(ctx, 17), GPR_VEC(ctx, 0)));
    // 0x25d900: 0xc040c00  jal         func_103000
    ctx->pc = 0x25D900u;
    SET_GPR_U32(ctx, 31, 0x25D908u);
    ctx->pc = 0x103000u;
    {
        ctx->pc = 0x25D908u;
        ps2_stubs::sceVu0MulMatrix(rdram, ctx, runtime);
    }
    if (ctx->pc != 0x25D908u) { return; }
    ctx->pc = 0x25D908u;
}
