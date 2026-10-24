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

// Function: entry_0026dc50
// Address: 0x26dc50 - 0x26dc80
void entry_0026dc50_0x26dc50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0026dc50_0x26dc50");
#endif

    ctx->pc = 0x26dc50u;

    // 0x26dc50: 0xc6011b58  lwc1        $f1, 0x1B58($s0)
    ctx->pc = 0x26dc50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 7000)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x26dc54: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x26dc54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x26dc58: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dc58u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dc5c: 0x0  nop
    ctx->pc = 0x26dc5cu;
    // NOP
    // 0x26dc60: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x26dc60u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x26dc64: 0x0  nop
    ctx->pc = 0x26dc64u;
    // NOP
    // 0x26dc68: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x26DC68u;
    {
        const bool branch_taken_0x26dc68 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x26dc68) {
            ctx->pc = 0x26DC80u;
            return;
        }
    }
    ctx->pc = 0x26DC70u;
    // 0x26dc70: 0x3c03c1a0  lui         $v1, 0xC1A0
    ctx->pc = 0x26dc70u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49568 << 16));
    // 0x26dc74: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x26dc74u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x26dc78: 0x0  nop
    ctx->pc = 0x26dc78u;
    // NOP
    // 0x26dc7c: 0xe6001b58  swc1        $f0, 0x1B58($s0)
    ctx->pc = 0x26dc7cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 7000), bits); }
    ctx->pc = 0x26dc80u;
}
