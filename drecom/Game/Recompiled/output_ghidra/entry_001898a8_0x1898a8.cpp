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

// Function: entry_001898a8
// Address: 0x1898a8 - 0x1898b0
void entry_001898a8_0x1898a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001898a8_0x1898a8");
#endif

    ctx->pc = 0x1898a8u;

    // 0x1898a8: 0xc7a000c4  lwc1        $f0, 0xC4($sp)
    ctx->pc = 0x1898a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 196)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1898ac: 0xe7a000c0  swc1        $f0, 0xC0($sp)
    ctx->pc = 0x1898acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    ctx->pc = 0x1898b0u;
}
