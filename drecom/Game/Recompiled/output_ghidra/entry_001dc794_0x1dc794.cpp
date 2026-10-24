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

// Function: entry_001dc794
// Address: 0x1dc794 - 0x1dc7a0
void entry_001dc794_0x1dc794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc794_0x1dc794");
#endif

    ctx->pc = 0x1dc794u;

    // 0x1dc794: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1dc794u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1dc798: 0x0  nop
    ctx->pc = 0x1dc798u;
    // NOP
    // 0x1dc79c: 0xe7a0004c  swc1        $f0, 0x4C($sp)
    ctx->pc = 0x1dc79cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 76), bits); }
    ctx->pc = 0x1dc7a0u;
}
