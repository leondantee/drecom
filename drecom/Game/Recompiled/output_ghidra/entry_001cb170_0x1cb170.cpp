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

// Function: entry_001cb170
// Address: 0x1cb170 - 0x1cb1c0
void entry_001cb170_0x1cb170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb170_0x1cb170");
#endif

    ctx->pc = 0x1cb170u;

    // 0x1cb170: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb174: 0xc4610188  lwc1        $f1, 0x188($v1)
    ctx->pc = 0x1cb174u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb178: 0x3c024120  lui         $v0, 0x4120
    ctx->pc = 0x1cb178u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16672 << 16));
    // 0x1cb17c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb17cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb180: 0x0  nop
    ctx->pc = 0x1cb180u;
    // NOP
    // 0x1cb184: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x1cb184u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x1cb188: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x1cb188u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x1cb18c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb18cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb190: 0xc4410188  lwc1        $f1, 0x188($v0)
    ctx->pc = 0x1cb190u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 392)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x1cb194: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1cb194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x1cb198: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb198u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb19c: 0x0  nop
    ctx->pc = 0x1cb19cu;
    // NOP
    // 0x1cb1a0: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x1cb1a0u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x1cb1a4: 0x0  nop
    ctx->pc = 0x1cb1a4u;
    // NOP
    // 0x1cb1a8: 0x45010005  bc1t        . + 4 + (0x5 << 2)
    ctx->pc = 0x1CB1A8u;
    {
        const bool branch_taken_0x1cb1a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x1cb1a8) {
            ctx->pc = 0x1CB1C0u;
            return;
        }
    }
    ctx->pc = 0x1CB1B0u;
    // 0x1cb1b0: 0x3c024296  lui         $v0, 0x4296
    ctx->pc = 0x1cb1b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17046 << 16));
    // 0x1cb1b4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1cb1b4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb1b8: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb1b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb1bc: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1cb1bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x1cb1c0u;
}
