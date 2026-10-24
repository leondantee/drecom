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

// Function: entry_00252338
// Address: 0x252338 - 0x252368
void entry_00252338_0x252338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252338_0x252338");
#endif

    ctx->pc = 0x252338u;

    // 0x252338: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x252338u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x25233c: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x25233cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252340: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x252340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x252344: 0x0  nop
    ctx->pc = 0x252344u;
    // NOP
    // 0x252348: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x252348u;
    {
        const bool branch_taken_0x252348 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252348) {
            ctx->pc = 0x252368u;
            return;
        }
    }
    ctx->pc = 0x252350u;
    // 0x252350: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x252350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252354: 0xc7a00088  lwc1        $f0, 0x88($sp)
    ctx->pc = 0x252354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252358: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252358u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25235c: 0x0  nop
    ctx->pc = 0x25235cu;
    // NOP
    // 0x252360: 0x4501012f  bc1t        . + 4 + (0x12F << 2)
    ctx->pc = 0x252360u;
    {
        const bool branch_taken_0x252360 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252360) {
            ctx->pc = 0x252820u;
            return;
        }
    }
    ctx->pc = 0x252368u;
}
