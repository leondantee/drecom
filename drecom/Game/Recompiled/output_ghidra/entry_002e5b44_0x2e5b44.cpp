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

// Function: entry_002e5b44
// Address: 0x2e5b44 - 0x2e5bb8
void entry_002e5b44_0x2e5b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5b44_0x2e5b44");
#endif

    ctx->pc = 0x2e5b44u;

    // 0x2e5b44: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5b44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5b48: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e5b48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5b4c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e5b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2e5b50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5b50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5b54: 0x0  nop
    ctx->pc = 0x2e5b54u;
    // NOP
    // 0x2e5b58: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e5b58u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5b5c: 0x0  nop
    ctx->pc = 0x2e5b5cu;
    // NOP
    // 0x2e5b60: 0x45000015  bc1f        . + 4 + (0x15 << 2)
    ctx->pc = 0x2E5B60u;
    {
        const bool branch_taken_0x2e5b60 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5b60) {
            ctx->pc = 0x2E5BB8u;
            return;
        }
    }
    ctx->pc = 0x2E5B68u;
    // 0x2e5b68: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e5b68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5b6c: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x2e5b6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5b70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5b70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5b74: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5b74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5b78: 0x0  nop
    ctx->pc = 0x2e5b78u;
    // NOP
    // 0x2e5b7c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2e5b7cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2e5b80: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e5b80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2e5b84: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5b84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5b88: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e5b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5b8c: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e5b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2e5b90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5b90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5b94: 0x0  nop
    ctx->pc = 0x2e5b94u;
    // NOP
    // 0x2e5b98: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e5b98u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5b9c: 0x0  nop
    ctx->pc = 0x2e5b9cu;
    // NOP
    // 0x2e5ba0: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x2E5BA0u;
    {
        const bool branch_taken_0x2e5ba0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5ba0) {
            ctx->pc = 0x2E5BB8u;
            return;
        }
    }
    ctx->pc = 0x2E5BA8u;
    // 0x2e5ba8: 0x3c024270  lui         $v0, 0x4270
    ctx->pc = 0x2e5ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17008 << 16));
    // 0x2e5bac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5bb0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x2e5bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e5bb4: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e5bb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x2e5bb8u;
}
