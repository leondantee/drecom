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

// Function: entry_0025bbc8
// Address: 0x25bbc8 - 0x25bbe0
void entry_0025bbc8_0x25bbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025bbc8_0x25bbc8");
#endif

    ctx->pc = 0x25bbc8u;

    // 0x25bbc8: 0xc6400110  lwc1        $f0, 0x110($s2)
    ctx->pc = 0x25bbc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bbcc: 0xe6000110  swc1        $f0, 0x110($s0)
    ctx->pc = 0x25bbccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 272), bits); }
    // 0x25bbd0: 0xc6400114  lwc1        $f0, 0x114($s2)
    ctx->pc = 0x25bbd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bbd4: 0xe6000114  swc1        $f0, 0x114($s0)
    ctx->pc = 0x25bbd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 276), bits); }
    // 0x25bbd8: 0xc6400118  lwc1        $f0, 0x118($s2)
    ctx->pc = 0x25bbd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25bbdc: 0xe6000118  swc1        $f0, 0x118($s0)
    ctx->pc = 0x25bbdcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 280), bits); }
    ctx->pc = 0x25bbe0u;
}
