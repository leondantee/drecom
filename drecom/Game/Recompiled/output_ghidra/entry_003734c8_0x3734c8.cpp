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

// Function: entry_003734c8
// Address: 0x3734c8 - 0x3734e0
void entry_003734c8_0x3734c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003734c8_0x3734c8");
#endif

    ctx->pc = 0x3734c8u;

    // 0x3734c8: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x3734c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3734cc: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x3734ccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x3734d0: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x3734d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3734d4: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x3734d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x3734d8: 0xc6400118  lwc1        $f0, 0x118($s2)
    ctx->pc = 0x3734d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3734dc: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x3734dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    ctx->pc = 0x3734e0u;
}
