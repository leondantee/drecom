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

// Function: entry_001f6f04
// Address: 0x1f6f04 - 0x1f6f7c
void entry_001f6f04_0x1f6f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f6f04_0x1f6f04");
#endif

    ctx->pc = 0x1f6f04u;

    // 0x1f6f04: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f08: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6f0c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f6f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6f10: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f14: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6f14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6f18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f6f18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6f1c: 0x0  nop
    ctx->pc = 0x1f6f1cu;
    // NOP
    // 0x1f6f20: 0x45000016  bc1f        . + 4 + (0x16 << 2)
    ctx->pc = 0x1F6F20u;
    {
        const bool branch_taken_0x1f6f20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6f20) {
            ctx->pc = 0x1F6F7Cu;
            return;
        }
    }
    ctx->pc = 0x1F6F28u;
    // 0x1f6f28: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f2c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6f30: 0xc4610024  lwc1        $f1, 0x24($v1)
    ctx->pc = 0x1f6f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6f34: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f38: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6f3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x1f6f3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x1f6f40: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6f40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1f6f44: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f48: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6f48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6f4c: 0xc4610018  lwc1        $f1, 0x18($v1)
    ctx->pc = 0x1f6f4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1f6f50: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f54: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6f54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6f58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x1f6f58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1f6f5c: 0x0  nop
    ctx->pc = 0x1f6f5cu;
    // NOP
    // 0x1f6f60: 0x45010006  bc1t        . + 4 + (0x6 << 2)
    ctx->pc = 0x1F6F60u;
    {
        const bool branch_taken_0x1f6f60 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1f6f60) {
            ctx->pc = 0x1F6F7Cu;
            return;
        }
    }
    ctx->pc = 0x1F6F68u;
    // 0x1f6f68: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f6c: 0x24631330  addiu       $v1, $v1, 0x1330
    ctx->pc = 0x1f6f6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4912));
    // 0x1f6f70: 0xc4600018  lwc1        $f0, 0x18($v1)
    ctx->pc = 0x1f6f70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1f6f74: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1f6f74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1f6f78: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1f6f78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    ctx->pc = 0x1f6f7cu;
}
