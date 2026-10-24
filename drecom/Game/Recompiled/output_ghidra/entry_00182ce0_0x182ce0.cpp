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

// Function: entry_00182ce0
// Address: 0x182ce0 - 0x182cf0
void entry_00182ce0_0x182ce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182ce0_0x182ce0");
#endif

    ctx->pc = 0x182ce0u;

    // 0x182ce0: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x182ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182ce4: 0xe7a00024  swc1        $f0, 0x24($sp)
    ctx->pc = 0x182ce4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 36), bits); }
    // 0x182ce8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x182CE8u;
    {
        const bool branch_taken_0x182ce8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182ce8) {
            ctx->pc = 0x182D08u;
            return;
        }
    }
    ctx->pc = 0x182CF0u;
}
