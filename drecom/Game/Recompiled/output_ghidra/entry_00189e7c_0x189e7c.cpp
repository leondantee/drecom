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

// Function: entry_00189e7c
// Address: 0x189e7c - 0x189e84
void entry_00189e7c_0x189e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189e7c_0x189e7c");
#endif

    ctx->pc = 0x189e7cu;

    // 0x189e7c: 0xc7a00010  lwc1        $f0, 0x10($sp)
    ctx->pc = 0x189e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189e80: 0xe7a000e0  swc1        $f0, 0xE0($sp)
    ctx->pc = 0x189e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 224), bits); }
    ctx->pc = 0x189e84u;
}
