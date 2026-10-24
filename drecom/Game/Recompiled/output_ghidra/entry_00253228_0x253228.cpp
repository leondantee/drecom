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

// Function: entry_00253228
// Address: 0x253228 - 0x253258
void entry_00253228_0x253228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00253228_0x253228");
#endif

    ctx->pc = 0x253228u;

    // 0x253228: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x253228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25322c: 0xc7a00090  lwc1        $f0, 0x90($sp)
    ctx->pc = 0x25322cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253230: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x253230u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x253234: 0x0  nop
    ctx->pc = 0x253234u;
    // NOP
    // 0x253238: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x253238u;
    {
        const bool branch_taken_0x253238 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253238) {
            ctx->pc = 0x253258u;
            return;
        }
    }
    ctx->pc = 0x253240u;
    // 0x253240: 0xc7a10060  lwc1        $f1, 0x60($sp)
    ctx->pc = 0x253240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253244: 0xc7a000a0  lwc1        $f0, 0xA0($sp)
    ctx->pc = 0x253244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253248: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x253248u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25324c: 0x0  nop
    ctx->pc = 0x25324cu;
    // NOP
    // 0x253250: 0x45010008  bc1t        . + 4 + (0x8 << 2)
    ctx->pc = 0x253250u;
    {
        const bool branch_taken_0x253250 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x253250) {
            ctx->pc = 0x253274u;
            return;
        }
    }
    ctx->pc = 0x253258u;
}
