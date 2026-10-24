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

// Function: entry_0022eb54
// Address: 0x22eb54 - 0x22ebcc
void entry_0022eb54_0x22eb54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0022eb54_0x22eb54");
#endif

    ctx->pc = 0x22eb54u;

    // 0x22eb54: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb58: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eb58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eb5c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22eb5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eb60: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb64: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22eb64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eb68: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22eb68u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22eb6c: 0x0  nop
    ctx->pc = 0x22eb6cu;
    // NOP
    // 0x22eb70: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x22EB70u;
    {
        const bool branch_taken_0x22eb70 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x22eb70) {
            ctx->pc = 0x22EBCCu;
            return;
        }
    }
    ctx->pc = 0x22EB78u;
    // 0x22eb78: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb7c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eb7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eb80: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x22eb80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eb84: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb88: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22eb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eb8c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x22eb8cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x22eb90: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22eb90u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x22eb94: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eb94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eb98: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22eb98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22eb9c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x22eb9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x22eba0: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22eba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22eba4: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x22eba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22eba8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x22eba8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x22ebac: 0x0  nop
    ctx->pc = 0x22ebacu;
    // NOP
    // 0x22ebb0: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x22EBB0u;
    {
        const bool branch_taken_0x22ebb0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x22ebb0) {
            ctx->pc = 0x22EBCCu;
            return;
        }
    }
    ctx->pc = 0x22EBB8u;
    // 0x22ebb8: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ebb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ebbc: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x22ebbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x22ebc0: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x22ebc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x22ebc4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x22ebc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x22ebc8: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x22ebc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x22ebccu;
}
