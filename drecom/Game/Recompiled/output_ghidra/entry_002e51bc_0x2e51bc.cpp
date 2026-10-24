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

// Function: entry_002e51bc
// Address: 0x2e51bc - 0x2e5230
void entry_002e51bc_0x2e51bc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e51bc_0x2e51bc");
#endif

    ctx->pc = 0x2e51bcu;

    // 0x2e51bc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x2e51bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e51c0: 0x3c023f73  lui         $v0, 0x3F73
    ctx->pc = 0x2e51c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16243 << 16));
    // 0x2e51c4: 0x34423333  ori         $v0, $v0, 0x3333
    ctx->pc = 0x2e51c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)13107);
    // 0x2e51c8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x2e51c8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x2e51cc: 0xc4600188  lwc1        $f0, 0x188($v1)
    ctx->pc = 0x2e51ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2e51d0: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x2e51d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x2e51d4: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x2e51d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x2e51d8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e51d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e51dc: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e51dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e51e0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e51e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e51e4: 0x0  nop
    ctx->pc = 0x2e51e4u;
    // NOP
    // 0x2e51e8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x2e51e8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e51ec: 0x0  nop
    ctx->pc = 0x2e51ecu;
    // NOP
    // 0x2e51f0: 0x4501000f  bc1t        . + 4 + (0xF << 2)
    ctx->pc = 0x2E51F0u;
    {
        const bool branch_taken_0x2e51f0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e51f0) {
            ctx->pc = 0x2E5230u;
            return;
        }
    }
    ctx->pc = 0x2E51F8u;
    // 0x2e51f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e51f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e51fc: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x2e51fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e5200: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x2e5200u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x2e5204: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e5204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5208: 0x0  nop
    ctx->pc = 0x2e5208u;
    // NOP
    // 0x2e520c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2e520cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2e5210: 0x0  nop
    ctx->pc = 0x2e5210u;
    // NOP
    // 0x2e5214: 0x45000012  bc1f        . + 4 + (0x12 << 2)
    ctx->pc = 0x2E5214u;
    {
        const bool branch_taken_0x2e5214 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x2e5214) {
            ctx->pc = 0x2E5260u;
            return;
        }
    }
    ctx->pc = 0x2E521Cu;
    // 0x2e521c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e521cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5220: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2e5220u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2e5224: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x2e5224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x2e5228: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2E5228u;
    {
        const bool branch_taken_0x2e5228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e5228) {
            ctx->pc = 0x2E5260u;
            return;
        }
    }
    ctx->pc = 0x2E5230u;
}
