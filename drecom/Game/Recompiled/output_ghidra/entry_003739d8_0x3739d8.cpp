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

// Function: entry_003739d8
// Address: 0x3739d8 - 0x373a08
void entry_003739d8_0x3739d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003739d8_0x3739d8");
#endif

    ctx->pc = 0x3739d8u;

    // 0x3739d8: 0xc7a1008c  lwc1        $f1, 0x8C($sp)
    ctx->pc = 0x3739d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3739dc: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x3739dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x3739e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3739e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3739e4: 0x0  nop
    ctx->pc = 0x3739e4u;
    // NOP
    // 0x3739e8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3739e8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3739ec: 0x0  nop
    ctx->pc = 0x3739ecu;
    // NOP
    // 0x3739f0: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x3739F0u;
    {
        const bool branch_taken_0x3739f0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3739f0) {
            ctx->pc = 0x373A08u;
            return;
        }
    }
    ctx->pc = 0x3739F8u;
    // 0x3739f8: 0x3c03c120  lui         $v1, 0xC120
    ctx->pc = 0x3739f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)49440 << 16));
    // 0x3739fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3739fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x373a00: 0x0  nop
    ctx->pc = 0x373a00u;
    // NOP
    // 0x373a04: 0xe7a0008c  swc1        $f0, 0x8C($sp)
    ctx->pc = 0x373a04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 140), bits); }
    ctx->pc = 0x373a08u;
}
