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

// Function: entry_001a0178
// Address: 0x1a0178 - 0x1a0180
void entry_001a0178_0x1a0178(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a0178_0x1a0178");
#endif

    ctx->pc = 0x1a0178u;

    // 0x1a0178: 0xc7a000b0  lwc1        $f0, 0xB0($sp)
    ctx->pc = 0x1a0178u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 176)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1a017c: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x1a017cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    ctx->pc = 0x1a0180u;
}
