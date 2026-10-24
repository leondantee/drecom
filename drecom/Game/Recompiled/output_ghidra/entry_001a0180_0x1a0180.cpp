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

// Function: entry_001a0180
// Address: 0x1a0180 - 0x1a0188
void entry_001a0180_0x1a0180(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0180_0x1a0180");
#endif

    ctx->pc = 0x1a0180u;

    // 0x1a0180: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x1a0180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a0184: 0xe7a000b8  swc1        $f0, 0xB8($sp)
    ctx->pc = 0x1a0184u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 184), bits); }
    ctx->pc = 0x1a0188u;
}
