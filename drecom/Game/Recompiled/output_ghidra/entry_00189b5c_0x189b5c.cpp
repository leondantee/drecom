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

// Function: entry_00189b5c
// Address: 0x189b5c - 0x189b6c
void entry_00189b5c_0x189b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189b5c_0x189b5c");
#endif

    ctx->pc = 0x189b5cu;

    // 0x189b5c: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x189b5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189b60: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189b64: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x189B64u;
    {
        const bool branch_taken_0x189b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189b64) {
            ctx->pc = 0x189BC4u;
            return;
        }
    }
    ctx->pc = 0x189B6Cu;
}
