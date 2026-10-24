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

// Function: entry_0025e084
// Address: 0x25e084 - 0x25e0a0
void entry_0025e084_0x25e084(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e084_0x25e084");
#endif

    ctx->pc = 0x25e084u;

    // 0x25e084: 0xc6600110  lwc1        $f0, 0x110($s3)
    ctx->pc = 0x25e084u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 272)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e088: 0xe6200110  swc1        $f0, 0x110($s1)
    ctx->pc = 0x25e088u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 272), bits); }
    // 0x25e08c: 0xc6600114  lwc1        $f0, 0x114($s3)
    ctx->pc = 0x25e08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e090: 0xe6200114  swc1        $f0, 0x114($s1)
    ctx->pc = 0x25e090u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 276), bits); }
    // 0x25e094: 0xc6600118  lwc1        $f0, 0x118($s3)
    ctx->pc = 0x25e094u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e098: 0xe6200118  swc1        $f0, 0x118($s1)
    ctx->pc = 0x25e098u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 280), bits); }
    // 0x25e09c: 0x0  nop
    ctx->pc = 0x25e09cu;
    // NOP
    ctx->pc = 0x25e0a0u;
}
