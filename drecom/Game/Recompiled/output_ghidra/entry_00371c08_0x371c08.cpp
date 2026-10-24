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

// Function: entry_00371c08
// Address: 0x371c08 - 0x371c38
void entry_00371c08_0x371c08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00371c08_0x371c08");
#endif

    ctx->pc = 0x371c08u;

    // 0x371c08: 0xc7a1003c  lwc1        $f1, 0x3C($sp)
    ctx->pc = 0x371c08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x371c0c: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x371c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x371c10: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371c10u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371c14: 0x0  nop
    ctx->pc = 0x371c14u;
    // NOP
    // 0x371c18: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x371c18u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x371c1c: 0x0  nop
    ctx->pc = 0x371c1cu;
    // NOP
    // 0x371c20: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x371C20u;
    {
        const bool branch_taken_0x371c20 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x371c20) {
            ctx->pc = 0x371C38u;
            return;
        }
    }
    ctx->pc = 0x371C28u;
    // 0x371c28: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x371c28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x371c2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x371c2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x371c30: 0x0  nop
    ctx->pc = 0x371c30u;
    // NOP
    // 0x371c34: 0xe7a0003c  swc1        $f0, 0x3C($sp)
    ctx->pc = 0x371c34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 60), bits); }
    ctx->pc = 0x371c38u;
}
