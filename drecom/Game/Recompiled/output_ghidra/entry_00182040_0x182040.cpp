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

// Function: entry_00182040
// Address: 0x182040 - 0x182050
void entry_00182040_0x182040(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182040_0x182040");
#endif

    ctx->pc = 0x182040u;

    // 0x182040: 0xc7a00040  lwc1        $f0, 0x40($sp)
    ctx->pc = 0x182040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182044: 0xe7a00038  swc1        $f0, 0x38($sp)
    ctx->pc = 0x182044u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x182048: 0x10000050  b           . + 4 + (0x50 << 2)
    ctx->pc = 0x182048u;
    {
        const bool branch_taken_0x182048 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x182048) {
            ctx->pc = 0x18218Cu;
            return;
        }
    }
    ctx->pc = 0x182050u;
}
