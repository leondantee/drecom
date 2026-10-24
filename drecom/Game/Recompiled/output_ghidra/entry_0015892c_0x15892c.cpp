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

// Function: entry_0015892c
// Address: 0x15892c - 0x158958
void entry_0015892c_0x15892c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015892c_0x15892c");
#endif

    ctx->pc = 0x15892cu;

    // 0x15892c: 0xc6010008  lwc1        $f1, 0x8($s0)
    ctx->pc = 0x15892cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x158930: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x158930u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158934: 0xc420f850  lwc1        $f0, -0x7B0($at)
    ctx->pc = 0x158934u;
    { uint32_t bits = FAST_READ32(0x3EF850u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x158938: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x158938u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x15893c: 0x0  nop
    ctx->pc = 0x15893cu;
    // NOP
    // 0x158940: 0x45000005  bc1f        . + 4 + (0x5 << 2)
    ctx->pc = 0x158940u;
    {
        const bool branch_taken_0x158940 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x158940) {
            ctx->pc = 0x158958u;
            return;
        }
    }
    ctx->pc = 0x158948u;
    // 0x158948: 0xc6000008  lwc1        $f0, 0x8($s0)
    ctx->pc = 0x158948u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15894c: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x15894cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x158950: 0xe420f850  swc1        $f0, -0x7B0($at)
    ctx->pc = 0x158950u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3EF850u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3EF850u, _value); } while (0); }
    // 0x158954: 0x0  nop
    ctx->pc = 0x158954u;
    // NOP
    ctx->pc = 0x158958u;
}
