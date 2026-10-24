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

// Function: entry_0037c370
// Address: 0x37c370 - 0x37c3e0
void entry_0037c370_0x37c370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0037c370_0x37c370");
#endif

    ctx->pc = 0x37c370u;

    // 0x37c370: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c370u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c374: 0xc48112cc  lwc1        $f1, 0x12CC($a0)
    ctx->pc = 0x37c374u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4812)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x37c378: 0x3c0340c0  lui         $v1, 0x40C0
    ctx->pc = 0x37c378u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16576 << 16));
    // 0x37c37c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x37c37cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x37c380: 0x0  nop
    ctx->pc = 0x37c380u;
    // NOP
    // 0x37c384: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x37c384u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x37c388: 0xe48012cc  swc1        $f0, 0x12CC($a0)
    ctx->pc = 0x37c388u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4812), bits); }
    // 0x37c38c: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c38cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c390: 0x3c033f81  lui         $v1, 0x3F81
    ctx->pc = 0x37c390u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16257 << 16));
    // 0x37c394: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x37c394u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
    // 0x37c398: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37c398u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37c39c: 0xc48001a0  lwc1        $f0, 0x1A0($a0)
    ctx->pc = 0x37c39cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c3a0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37c3a0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37c3a4: 0xe48001a0  swc1        $f0, 0x1A0($a0)
    ctx->pc = 0x37c3a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 416), bits); }
    // 0x37c3a8: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c3ac: 0x3c033f81  lui         $v1, 0x3F81
    ctx->pc = 0x37c3acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16257 << 16));
    // 0x37c3b0: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x37c3b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
    // 0x37c3b4: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37c3b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37c3b8: 0xc48001a4  lwc1        $f0, 0x1A4($a0)
    ctx->pc = 0x37c3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c3bc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37c3bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37c3c0: 0xe48001a4  swc1        $f0, 0x1A4($a0)
    ctx->pc = 0x37c3c0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 420), bits); }
    // 0x37c3c4: 0x8fa40018  lw          $a0, 0x18($sp)
    ctx->pc = 0x37c3c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x37c3c8: 0x3c033f81  lui         $v1, 0x3F81
    ctx->pc = 0x37c3c8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16257 << 16));
    // 0x37c3cc: 0x346347ae  ori         $v1, $v1, 0x47AE
    ctx->pc = 0x37c3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)18350);
    // 0x37c3d0: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x37c3d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x37c3d4: 0xc48001a8  lwc1        $f0, 0x1A8($a0)
    ctx->pc = 0x37c3d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x37c3d8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x37c3d8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x37c3dc: 0xe48001a8  swc1        $f0, 0x1A8($a0)
    ctx->pc = 0x37c3dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 424), bits); }
    ctx->pc = 0x37c3e0u;
}
