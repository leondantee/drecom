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

// Function: entry_001898b0
// Address: 0x1898b0 - 0x1898c0
void entry_001898b0_0x1898b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001898b0_0x1898b0");
#endif

    ctx->pc = 0x1898b0u;

    // 0x1898b0: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x1898b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1898b4: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x1898b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x1898b8: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x1898B8u;
    {
        const bool branch_taken_0x1898b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1898b8) {
            ctx->pc = 0x189918u;
            return;
        }
    }
    ctx->pc = 0x1898C0u;
}
