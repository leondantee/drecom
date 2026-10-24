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

// Function: entry_0022ec68
// Address: 0x22ec68 - 0x22ece0
void entry_0022ec68_0x22ec68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022ec68_0x22ec68");
#endif

    ctx->pc = 0x22ec68u;

    // 0x22ec68: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec6c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ec6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ec70: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22ec70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ec74: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec78: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ec78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ec7c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ec7cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ec80: 0x0  nop
    ctx->pc = 0x22ec80u;
    // NOP
    // 0x22ec84: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x22EC84u;
    {
        const bool branch_taken_0x22ec84 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ec84) {
            ctx->pc = 0x22ECE0u;
            return;
        }
    }
    ctx->pc = 0x22EC8Cu;
    // 0x22ec8c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec90: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ec90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ec94: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x22ec94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ec98: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ec98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ec9c: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ec9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eca0: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22eca0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22eca4: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22eca4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    // 0x22eca8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eca8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ecac: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ecacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ecb0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x22ecb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22ecb4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ecb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ecb8: 0xc4600180  lwc1        $f0, 0x180($v1)
    ctx->pc = 0x22ecb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 384)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ecbc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22ecbcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ecc0: 0x0  nop
    ctx->pc = 0x22ecc0u;
    // NOP
    // 0x22ecc4: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22ECC4u;
    {
        const bool branch_taken_0x22ecc4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ecc4) {
            ctx->pc = 0x22ECE0u;
            return;
        }
    }
    ctx->pc = 0x22ECCCu;
    // 0x22eccc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ecccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ecd0: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ecd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ecd4: 0xc4600014  lwc1        $f0, 0x14($v1)
    ctx->pc = 0x22ecd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ecd8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ecd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ecdc: 0xe4600180  swc1        $f0, 0x180($v1)
    ctx->pc = 0x22ecdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 384), bits); }
    ctx->pc = 0x22ece0u;
}
