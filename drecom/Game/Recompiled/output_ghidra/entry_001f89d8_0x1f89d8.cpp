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

// Function: entry_001f89d8
// Address: 0x1f89d8 - 0x1f8a8c
void entry_001f89d8_0x1f89d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f89d8_0x1f89d8");
#endif

    ctx->pc = 0x1f89d8u;

    // 0x1f89d8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f89d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f89dc: 0xc46101a0  lwc1        $f1, 0x1A0($v1)
    ctx->pc = 0x1f89dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f89e0: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x1f89e0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x1f89e4: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x1f89e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x1f89e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f89e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f89ec: 0x0  nop
    ctx->pc = 0x1f89ecu;
    // NOP
    // 0x1f89f0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f89f0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f89f4: 0xe46001a0  swc1        $f0, 0x1A0($v1)
    ctx->pc = 0x1f89f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 416), bits); }
    // 0x1f89f8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f89f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f89fc: 0xc46101a8  lwc1        $f1, 0x1A8($v1)
    ctx->pc = 0x1f89fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 424)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8a00: 0x3c023cbf  lui         $v0, 0x3CBF
    ctx->pc = 0x1f8a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15551 << 16));
    // 0x1f8a04: 0x3442258c  ori         $v0, $v0, 0x258C
    ctx->pc = 0x1f8a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)9612);
    // 0x1f8a08: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8a08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8a0c: 0x0  nop
    ctx->pc = 0x1f8a0cu;
    // NOP
    // 0x1f8a10: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8a10u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8a14: 0xe46001a8  swc1        $f0, 0x1A8($v1)
    ctx->pc = 0x1f8a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 424), bits); }
    // 0x1f8a18: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1f8a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8a1c: 0xc46101a4  lwc1        $f1, 0x1A4($v1)
    ctx->pc = 0x1f8a1cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8a20: 0x3c023bda  lui         $v0, 0x3BDA
    ctx->pc = 0x1f8a20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)15322 << 16));
    // 0x1f8a24: 0x3442740e  ori         $v0, $v0, 0x740E
    ctx->pc = 0x1f8a24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)29710);
    // 0x1f8a28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8a28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8a2c: 0x0  nop
    ctx->pc = 0x1f8a2cu;
    // NOP
    // 0x1f8a30: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1f8a30u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1f8a34: 0xe46001a4  swc1        $f0, 0x1A4($v1)
    ctx->pc = 0x1f8a34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 420), bits); }
    // 0x1f8a38: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8a3c: 0xc44101a0  lwc1        $f1, 0x1A0($v0)
    ctx->pc = 0x1f8a3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 416)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f8a40: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f8a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8a44: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8a44u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8a48: 0x0  nop
    ctx->pc = 0x1f8a48u;
    // NOP
    // 0x1f8a4c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f8a4cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f8a50: 0x0  nop
    ctx->pc = 0x1f8a50u;
    // NOP
    // 0x1f8a54: 0x4501000d  bc1t        . + 4 + (0xD << 2)
    ctx->pc = 0x1F8A54u;
    {
        const bool branch_taken_0x1f8a54 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f8a54) {
            ctx->pc = 0x1F8A8Cu;
            return;
        }
    }
    ctx->pc = 0x1F8A5Cu;
    // 0x1f8a5c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f8a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8a60: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8a60u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8a64: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8a64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8a68: 0xe44001a0  swc1        $f0, 0x1A0($v0)
    ctx->pc = 0x1f8a68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 416), bits); }
    // 0x1f8a6c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f8a6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8a70: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8a70u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8a74: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8a74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8a78: 0xe44001a8  swc1        $f0, 0x1A8($v0)
    ctx->pc = 0x1f8a78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 424), bits); }
    // 0x1f8a7c: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1f8a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1f8a80: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1f8a80u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f8a84: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x1f8a84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f8a88: 0xe44001a4  swc1        $f0, 0x1A4($v0)
    ctx->pc = 0x1f8a88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 420), bits); }
    ctx->pc = 0x1f8a8cu;
}
