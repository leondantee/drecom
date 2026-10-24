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

// Function: entry_00327490
// Address: 0x327490 - 0x3274a0
void entry_00327490_0x327490(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00327490_0x327490");
#endif

    ctx->pc = 0x327490u;

    // 0x327490: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x327490u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x327494: 0xc7a0004c  lwc1        $f0, 0x4C($sp)
    ctx->pc = 0x327494u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 76)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x327498: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x327498u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x32749c: 0xe6000034  swc1        $f0, 0x34($s0)
    ctx->pc = 0x32749cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 52), bits); }
    ctx->pc = 0x3274a0u;
}
