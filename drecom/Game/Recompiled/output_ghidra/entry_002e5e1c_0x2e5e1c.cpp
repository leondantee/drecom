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

// Function: entry_002e5e1c
// Address: 0x2e5e1c - 0x2e5e90
void entry_002e5e1c_0x2e5e1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5e1c_0x2e5e1c");
#endif

    ctx->pc = 0x2e5e1cu;

    // 0x2e5e1c: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x2e5e1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5e20: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e5e20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e5e24: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e5e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e5e28: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e5e28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e5e2c: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x2e5e2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e5e30: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e5e30u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e5e34: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e5e34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2e5e38: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5e38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5e3c: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e5e3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5e40: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5e40u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5e44: 0x0  nop
    ctx->pc = 0x2e5e44u;
    // NOP
    // 0x2e5e48: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e5e48u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5e4c: 0x0  nop
    ctx->pc = 0x2e5e4cu;
    // NOP
    // 0x2e5e50: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2E5E50u;
    {
        const bool branch_taken_0x2e5e50 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5e50) {
            ctx->pc = 0x2E5E90u;
            return;
        }
    }
    ctx->pc = 0x2E5E58u;
    // 0x2e5e58: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5e5c: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e5e5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5e60: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5e60u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5e64: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5e64u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5e68: 0x0  nop
    ctx->pc = 0x2e5e68u;
    // NOP
    // 0x2e5e6c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e5e6cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5e70: 0x0  nop
    ctx->pc = 0x2e5e70u;
    // NOP
    // 0x2e5e74: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2E5E74u;
    {
        const bool branch_taken_0x2e5e74 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5e74) {
            ctx->pc = 0x2E5EC0u;
            return;
        }
    }
    ctx->pc = 0x2E5E7Cu;
    // 0x2e5e7c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5e7cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5e80: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e5e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e5e84: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e5e84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2e5e88: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E5E88u;
    {
        const bool branch_taken_0x2e5e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5e88) {
            ctx->pc = 0x2E5EC0u;
            return;
        }
    }
    ctx->pc = 0x2E5E90u;
}
