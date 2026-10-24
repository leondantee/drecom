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

// Function: entry_00230b10
// Address: 0x230b10 - 0x230bc4
void entry_00230b10_0x230b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00230b10_0x230b10");
#endif

    ctx->pc = 0x230b10u;

    // 0x230b10: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230b10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230b14: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x230b14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230b18: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x230b18u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x230b1c: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x230b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x230b20: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230b20u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230b24: 0x0  nop
    ctx->pc = 0x230b24u;
    // NOP
    // 0x230b28: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230b28u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230b2c: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x230b2cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x230b30: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230b34: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x230b34u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230b38: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x230b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x230b3c: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x230b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x230b40: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230b40u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230b44: 0x0  nop
    ctx->pc = 0x230b44u;
    // NOP
    // 0x230b48: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230b48u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230b4c: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x230b4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x230b50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x230b50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230b54: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x230b54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230b58: 0x3c023bda  lui         $v0, 0x3BDA
    ctx->pc = 0x230b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15322 << 16));
    // 0x230b5c: 0x3442740e  ori         $v0, $v0, 0x740E
    ctx->pc = 0x230b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
    // 0x230b60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230b60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230b64: 0x0  nop
    ctx->pc = 0x230b64u;
    // NOP
    // 0x230b68: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x230b68u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x230b6c: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x230b6cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x230b70: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230b70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230b74: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x230b74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x230b78: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x230b78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x230b7c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230b7cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230b80: 0x0  nop
    ctx->pc = 0x230b80u;
    // NOP
    // 0x230b84: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x230b84u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x230b88: 0x0  nop
    ctx->pc = 0x230b88u;
    // NOP
    // 0x230b8c: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x230B8Cu;
    {
        const bool branch_taken_0x230b8c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x230b8c) {
            ctx->pc = 0x230BC4u;
            return;
        }
    }
    ctx->pc = 0x230B94u;
    // 0x230b94: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x230b94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x230b98: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230b98u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230b9c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230ba0: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x230ba0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x230ba4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x230ba4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x230ba8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230ba8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230bac: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230bb0: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x230bb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x230bb4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x230bb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x230bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x230bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230bbc: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x230bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x230bc0: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x230bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    ctx->pc = 0x230bc4u;
}
