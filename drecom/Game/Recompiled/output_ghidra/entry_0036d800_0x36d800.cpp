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

// Function: entry_0036d800
// Address: 0x36d800 - 0x36d810
void entry_0036d800_0x36d800(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0036d800_0x36d800");
#endif

    ctx->pc = 0x36d800u;

    // 0x36d800: 0xc7a0011c  lwc1        $f0, 0x11C($sp)
    ctx->pc = 0x36d800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d804: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x36d804u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x36d808: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x36D808u;
    {
        const bool branch_taken_0x36d808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d808) {
            ctx->pc = 0x36D848u;
            return;
        }
    }
    ctx->pc = 0x36D810u;
}
