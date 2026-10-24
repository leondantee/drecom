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

// Function: entry_002527e8
// Address: 0x2527e8 - 0x252818
void entry_002527e8_0x2527e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002527e8_0x2527e8");
#endif

    ctx->pc = 0x2527e8u;

    // 0x2527e8: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x2527e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2527ec: 0xc7a00070  lwc1        $f0, 0x70($sp)
    ctx->pc = 0x2527ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x2527f0: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x2527f0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x2527f4: 0x0  nop
    ctx->pc = 0x2527f4u;
    // NOP
    // 0x2527f8: 0x45010007  bc1t        . + 4 + (0x7 << 2)
    ctx->pc = 0x2527F8u;
    {
        const bool branch_taken_0x2527f8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x2527f8) {
            ctx->pc = 0x252818u;
            return;
        }
    }
    ctx->pc = 0x252800u;
    // 0x252800: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x252800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252804: 0xc7a00080  lwc1        $f0, 0x80($sp)
    ctx->pc = 0x252804u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x252808: 0x46000836  c.le.s      $f1, $f0
    ctx->pc = 0x252808u;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x25280c: 0x0  nop
    ctx->pc = 0x25280cu;
    // NOP
    // 0x252810: 0x45010003  bc1t        . + 4 + (0x3 << 2)
    ctx->pc = 0x252810u;
    {
        const bool branch_taken_0x252810 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x252810) {
            ctx->pc = 0x252820u;
            return;
        }
    }
    ctx->pc = 0x252818u;
}
