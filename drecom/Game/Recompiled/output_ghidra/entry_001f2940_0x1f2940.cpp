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

// Function: entry_001f2940
// Address: 0x1f2940 - 0x1f29f4
void entry_001f2940_0x1f2940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f2940_0x1f2940");
#endif

    ctx->pc = 0x1f2940u;

    // 0x1f2940: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2940u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2944: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x1f2944u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2948: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x1f2948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x1f294c: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x1f294cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x1f2950: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2950u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2954: 0x0  nop
    ctx->pc = 0x1f2954u;
    // NOP
    // 0x1f2958: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f2958u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f295c: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x1f295cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x1f2960: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2960u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2964: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x1f2964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2968: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x1f2968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x1f296c: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x1f296cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x1f2970: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2970u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2974: 0x0  nop
    ctx->pc = 0x1f2974u;
    // NOP
    // 0x1f2978: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f2978u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f297c: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x1f297cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x1f2980: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f2980u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f2984: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x1f2984u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f2988: 0x3c023bda  lui         $v0, 0x3BDA
    ctx->pc = 0x1f2988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15322 << 16));
    // 0x1f298c: 0x3442740e  ori         $v0, $v0, 0x740E
    ctx->pc = 0x1f298cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
    // 0x1f2990: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f2990u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f2994: 0x0  nop
    ctx->pc = 0x1f2994u;
    // NOP
    // 0x1f2998: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f2998u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f299c: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x1f299cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x1f29a0: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f29a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f29a4: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x1f29a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f29a8: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f29a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f29ac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f29acu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f29b0: 0x0  nop
    ctx->pc = 0x1f29b0u;
    // NOP
    // 0x1f29b4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f29b4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f29b8: 0x0  nop
    ctx->pc = 0x1f29b8u;
    // NOP
    // 0x1f29bc: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1F29BCu;
    {
        const bool branch_taken_0x1f29bc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f29bc) {
            ctx->pc = 0x1F29F4u;
            return;
        }
    }
    ctx->pc = 0x1F29C4u;
    // 0x1f29c4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f29c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f29c8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f29c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f29cc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f29ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f29d0: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x1f29d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x1f29d4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f29d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f29d8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f29d8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f29dc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f29dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f29e0: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x1f29e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x1f29e4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f29e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f29e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f29e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f29ec: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f29ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f29f0: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x1f29f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    ctx->pc = 0x1f29f4u;
}
