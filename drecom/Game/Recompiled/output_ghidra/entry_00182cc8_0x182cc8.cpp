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

// Function: entry_00182cc8
// Address: 0x182cc8 - 0x182ce0
void entry_00182cc8_0x182cc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182cc8_0x182cc8");
#endif

    ctx->pc = 0x182cc8u;

    // 0x182cc8: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x182cc8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182ccc: 0xe7a00020  swc1        $f0, 0x20($sp)
    ctx->pc = 0x182cccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 32), bits); }
    // 0x182cd0: 0xc7a00048  lwc1        $f0, 0x48($sp)
    ctx->pc = 0x182cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182cd4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x182cd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x182cd8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x182CD8u;
    {
        const bool branch_taken_0x182cd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182cd8) {
            ctx->pc = 0x182D08u;
            return;
        }
    }
    ctx->pc = 0x182CE0u;
}
