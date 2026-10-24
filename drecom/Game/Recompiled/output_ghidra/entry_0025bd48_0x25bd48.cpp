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

// Function: entry_0025bd48
// Address: 0x25bd48 - 0x25bd60
void entry_0025bd48_0x25bd48(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025bd48_0x25bd48");
#endif

    ctx->pc = 0x25bd48u;

    // 0x25bd48: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x25bd48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bd4c: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25bd4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x25bd50: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x25bd50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bd54: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x25bd54u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x25bd58: 0xc6400118  lwc1        $f0, 0x118($s2)
    ctx->pc = 0x25bd58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bd5c: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x25bd5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    ctx->pc = 0x25bd60u;
}
