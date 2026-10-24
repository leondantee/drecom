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

// Function: entry_00252cb8
// Address: 0x252cb8 - 0x252ce8
void entry_00252cb8_0x252cb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252cb8_0x252cb8");
#endif

    ctx->pc = 0x252cb8u;

    // 0x252cb8: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x252cb8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252cbc: 0xc7a00098  lwc1        $f0, 0x98($sp)
    ctx->pc = 0x252cbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 152)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252cc0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252cc0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252cc4: 0x0  nop
    ctx->pc = 0x252cc4u;
    // NOP
    // 0x252cc8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x252CC8u;
    {
        const bool branch_taken_0x252cc8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252cc8) {
            ctx->pc = 0x252CE8u;
            return;
        }
    }
    ctx->pc = 0x252CD0u;
    // 0x252cd0: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x252cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252cd4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x252cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252cd8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252cd8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252cdc: 0x0  nop
    ctx->pc = 0x252cdcu;
    // NOP
    // 0x252ce0: 0x45010164  bc1t        . + 4 + (0x164 << 2)
    ctx->pc = 0x252CE0u;
    {
        const bool branch_taken_0x252ce0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252ce0) {
            ctx->pc = 0x253274u;
            return;
        }
    }
    ctx->pc = 0x252CE8u;
}
