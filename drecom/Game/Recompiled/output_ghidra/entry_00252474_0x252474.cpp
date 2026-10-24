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

// Function: entry_00252474
// Address: 0x252474 - 0x252484
void entry_00252474_0x252474(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00252474_0x252474");
#endif

    ctx->pc = 0x252474u;

    // 0x252474: 0xc7a10068  lwc1        $f1, 0x68($sp)
    ctx->pc = 0x252474u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x252478: 0xc7a00078  lwc1        $f0, 0x78($sp)
    ctx->pc = 0x252478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25247c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25247cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x252480: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x252480u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    ctx->pc = 0x252484u;
}
