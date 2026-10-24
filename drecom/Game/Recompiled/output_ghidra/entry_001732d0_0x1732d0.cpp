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

// Function: entry_001732d0
// Address: 0x1732d0 - 0x1732d8
void entry_001732d0_0x1732d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001732d0_0x1732d0");
#endif

    ctx->pc = 0x1732d0u;

    // 0x1732d0: 0xc7a00030  lwc1        $f0, 0x30($sp)
    ctx->pc = 0x1732d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1732d4: 0xe7a00034  swc1        $f0, 0x34($sp)
    ctx->pc = 0x1732d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 52), bits); }
    ctx->pc = 0x1732d8u;
}
