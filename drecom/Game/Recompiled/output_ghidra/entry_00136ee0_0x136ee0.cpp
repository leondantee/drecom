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

// Function: entry_00136ee0
// Address: 0x136ee0 - 0x136f00
void entry_00136ee0_0x136ee0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00136ee0_0x136ee0");
#endif

    ctx->pc = 0x136ee0u;

    // 0x136ee0: 0xc7a100f4  lwc1        $f1, 0xF4($sp)
    ctx->pc = 0x136ee0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x136ee4: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x136ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136ee8: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x136ee8u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x136eec: 0x0  nop
    ctx->pc = 0x136eecu;
    // NOP
    // 0x136ef0: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x136EF0u;
    {
        const bool branch_taken_0x136ef0 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x136ef0) {
            ctx->pc = 0x136F00u;
            return;
        }
    }
    ctx->pc = 0x136EF8u;
    // 0x136ef8: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x136ef8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x136efc: 0xe7a000f4  swc1        $f0, 0xF4($sp)
    ctx->pc = 0x136efcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 244), bits); }
    ctx->pc = 0x136f00u;
}
