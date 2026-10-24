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

// Function: entry_00136f00
// Address: 0x136f00 - 0x136f20
void entry_00136f00_0x136f00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136f00_0x136f00");
#endif

    ctx->pc = 0x136f00u;

    // 0x136f00: 0xc7a10104  lwc1        $f1, 0x104($sp)
    ctx->pc = 0x136f00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 260)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136f04: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x136f04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136f08: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x136f08u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136f0c: 0x0  nop
    ctx->pc = 0x136f0cu;
    // NOP
    // 0x136f10: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x136F10u;
    {
        const bool branch_taken_0x136f10 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136f10) {
            ctx->pc = 0x136F20u;
            return;
        }
    }
    ctx->pc = 0x136F18u;
    // 0x136f18: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x136f18u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136f1c: 0xe7a00104  swc1        $f0, 0x104($sp)
    ctx->pc = 0x136f1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 260), bits); }
    ctx->pc = 0x136f20u;
}
