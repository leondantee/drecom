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

// Function: entry_00253144
// Address: 0x253144 - 0x253154
void entry_00253144_0x253144(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00253144_0x253144");
#endif

    ctx->pc = 0x253144u;

    // 0x253144: 0xc7a10094  lwc1        $f1, 0x94($sp)
    ctx->pc = 0x253144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 148)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253148: 0xc7a00074  lwc1        $f0, 0x74($sp)
    ctx->pc = 0x253148u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 116)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25314c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x25314cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x253150: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x253150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    ctx->pc = 0x253154u;
}
