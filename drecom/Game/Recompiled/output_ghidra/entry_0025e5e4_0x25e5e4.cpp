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

// Function: entry_0025e5e4
// Address: 0x25e5e4 - 0x25e5f4
void entry_0025e5e4_0x25e5e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0025e5e4_0x25e5e4");
#endif

    ctx->pc = 0x25e5e4u;

    // 0x25e5e4: 0xc7a0021c  lwc1        $f0, 0x21C($sp)
    ctx->pc = 0x25e5e4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 540)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x25e5e8: 0xe60015e0  swc1        $f0, 0x15E0($s0)
    ctx->pc = 0x25e5e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 5600), bits); }
    // 0x25e5ec: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x25E5ECu;
    {
        const bool branch_taken_0x25e5ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x25e5ec) {
            ctx->pc = 0x25E644u;
            return;
        }
    }
    ctx->pc = 0x25E5F4u;
}
