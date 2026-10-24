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

// Function: entry_00185f94
// Address: 0x185f94 - 0x185fa4
void entry_00185f94_0x185f94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00185f94_0x185f94");
#endif

    ctx->pc = 0x185f94u;

    // 0x185f94: 0xc7a00058  lwc1        $f0, 0x58($sp)
    ctx->pc = 0x185f94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 88)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x185f98: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x185f98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x185f9c: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x185F9Cu;
    {
        const bool branch_taken_0x185f9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x185f9c) {
            ctx->pc = 0x186004u;
            return;
        }
    }
    ctx->pc = 0x185FA4u;
}
