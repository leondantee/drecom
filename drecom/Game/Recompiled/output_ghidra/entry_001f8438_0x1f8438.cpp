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

// Function: entry_001f8438
// Address: 0x1f8438 - 0x1f84ec
void entry_001f8438_0x1f8438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f8438_0x1f8438");
#endif

    ctx->pc = 0x1f8438u;

    // 0x1f8438: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8438u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f843c: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x1f843cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8440: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x1f8440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x1f8444: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x1f8444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x1f8448: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8448u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f844c: 0x0  nop
    ctx->pc = 0x1f844cu;
    // NOP
    // 0x1f8450: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8450u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8454: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x1f8454u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x1f8458: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f845c: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x1f845cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8460: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x1f8460u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x1f8464: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x1f8464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x1f8468: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8468u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f846c: 0x0  nop
    ctx->pc = 0x1f846cu;
    // NOP
    // 0x1f8470: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8470u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8474: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x1f8474u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x1f8478: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8478u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f847c: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x1f847cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8480: 0x3c023bda  lui         $v0, 0x3BDA
    ctx->pc = 0x1f8480u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15322 << 16));
    // 0x1f8484: 0x3442740e  ori         $v0, $v0, 0x740E
    ctx->pc = 0x1f8484u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
    // 0x1f8488: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8488u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f848c: 0x0  nop
    ctx->pc = 0x1f848cu;
    // NOP
    // 0x1f8490: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8490u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8494: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x1f8494u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x1f8498: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8498u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f849c: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x1f849cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f84a0: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f84a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f84a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f84a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f84a8: 0x0  nop
    ctx->pc = 0x1f84a8u;
    // NOP
    // 0x1f84ac: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f84acu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f84b0: 0x0  nop
    ctx->pc = 0x1f84b0u;
    // NOP
    // 0x1f84b4: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1F84B4u;
    {
        const bool branch_taken_0x1f84b4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f84b4) {
            ctx->pc = 0x1F84ECu;
            return;
        }
    }
    ctx->pc = 0x1F84BCu;
    // 0x1f84bc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f84bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f84c0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f84c0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f84c4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f84c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f84c8: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x1f84c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x1f84cc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f84ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f84d0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f84d0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f84d4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f84d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f84d8: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x1f84d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x1f84dc: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f84dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f84e0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f84e0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f84e4: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f84e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f84e8: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x1f84e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    ctx->pc = 0x1f84ecu;
}
