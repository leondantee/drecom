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

// Function: entry_00230fc0
// Address: 0x230fc0 - 0x231074
void entry_00230fc0_0x230fc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230fc0_0x230fc0");
#endif

    ctx->pc = 0x230fc0u;

    // 0x230fc0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230fc4: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x230fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230fc8: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x230fc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x230fcc: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x230fccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x230fd0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230fd4: 0x0  nop
    ctx->pc = 0x230fd4u;
    // NOP
    // 0x230fd8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230fd8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230fdc: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x230fdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x230fe0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230fe4: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x230fe4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230fe8: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x230fe8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x230fec: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x230fecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x230ff0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230ff0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230ff4: 0x0  nop
    ctx->pc = 0x230ff4u;
    // NOP
    // 0x230ff8: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230ff8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230ffc: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x230ffcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x231000: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x231000u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231004: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x231004u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231008: 0x3c023bda  lui         $v0, 0x3BDA
    ctx->pc = 0x231008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15322 << 16));
    // 0x23100c: 0x3442740e  ori         $v0, $v0, 0x740E
    ctx->pc = 0x23100cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
    // 0x231010: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231010u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231014: 0x0  nop
    ctx->pc = 0x231014u;
    // NOP
    // 0x231018: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x231018u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x23101c: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x23101cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x231020: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x231020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231024: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x231024u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x231028: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x231028u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x23102c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x23102cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x231030: 0x0  nop
    ctx->pc = 0x231030u;
    // NOP
    // 0x231034: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x231034u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x231038: 0x0  nop
    ctx->pc = 0x231038u;
    // NOP
    // 0x23103c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x23103Cu;
    {
        const bool branch_taken_0x23103c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x23103c) {
            ctx->pc = 0x231074u;
            return;
        }
    }
    ctx->pc = 0x231044u;
    // 0x231044: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x231044u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x231048: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231048u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23104c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23104cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231050: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x231050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x231054: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x231054u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x231058: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23105c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23105cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231060: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x231060u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x231064: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x231064u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x231068: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x231068u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x23106c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x23106cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x231070: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x231070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    ctx->pc = 0x231074u;
}
