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

// Function: entry_0025e318
// Address: 0x25e318 - 0x25e330
void entry_0025e318_0x25e318(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e318_0x25e318");
#endif

    ctx->pc = 0x25e318u;

    // 0x25e318: 0xc6600110  lwc1        $f0, 0x110($s3)
    ctx->pc = 0x25e318u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e31c: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x25e31cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x25e320: 0xc6600114  lwc1        $f0, 0x114($s3)
    ctx->pc = 0x25e320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e324: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x25e324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x25e328: 0xc6600118  lwc1        $f0, 0x118($s3)
    ctx->pc = 0x25e328u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e32c: 0xe6200118  swc1        $f0, 0x118($s1)
    ctx->pc = 0x25e32cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
    ctx->pc = 0x25e330u;
}
