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

// Function: entry_0025e63c
// Address: 0x25e63c - 0x25e644
void entry_0025e63c_0x25e63c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e63c_0x25e63c");
#endif

    ctx->pc = 0x25e63cu;

    // 0x25e63c: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e63cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e640: 0xe60015e0  swc1        $f0, 0x15E0($s0)
    ctx->pc = 0x25e640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5600), bits); }
    ctx->pc = 0x25e644u;
}
