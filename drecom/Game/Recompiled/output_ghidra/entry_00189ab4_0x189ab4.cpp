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

// Function: entry_00189ab4
// Address: 0x189ab4 - 0x189ac4
void entry_00189ab4_0x189ab4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189ab4_0x189ab4");
#endif

    ctx->pc = 0x189ab4u;

    // 0x189ab4: 0xc7a000c8  lwc1        $f0, 0xC8($sp)
    ctx->pc = 0x189ab4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 200)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189ab8: 0xe7a000a8  swc1        $f0, 0xA8($sp)
    ctx->pc = 0x189ab8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 168), bits); }
    // 0x189abc: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x189ABCu;
    {
        const bool branch_taken_0x189abc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x189abc) {
            ctx->pc = 0x189BC4u;
            return;
        }
    }
    ctx->pc = 0x189AC4u;
}
