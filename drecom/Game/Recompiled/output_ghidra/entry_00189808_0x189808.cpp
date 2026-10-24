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

// Function: entry_00189808
// Address: 0x189808 - 0x189818
void entry_00189808_0x189808(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189808_0x189808");
#endif

    ctx->pc = 0x189808u;

    // 0x189808: 0xc7a000b8  lwc1        $f0, 0xB8($sp)
    ctx->pc = 0x189808u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 184)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x18980c: 0xe7a000a4  swc1        $f0, 0xA4($sp)
    ctx->pc = 0x18980cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 164), bits); }
    // 0x189810: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x189810u;
    {
        const bool branch_taken_0x189810 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189810) {
            ctx->pc = 0x189918u;
            return;
        }
    }
    ctx->pc = 0x189818u;
}
