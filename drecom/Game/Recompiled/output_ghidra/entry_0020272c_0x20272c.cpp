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

// Function: entry_0020272c
// Address: 0x20272c - 0x202748
void entry_0020272c_0x20272c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020272c_0x20272c");
#endif

    ctx->pc = 0x20272cu;

    // 0x20272c: 0x8fa60100  lw          $a2, 0x100($sp)
    ctx->pc = 0x20272cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x202730: 0xc4c04858  lwc1        $f0, 0x4858($a2)
    ctx->pc = 0x202730u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 18520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x202734: 0xe7a000d8  swc1        $f0, 0xD8($sp)
    ctx->pc = 0x202734u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 216), bits); }
    // 0x202738: 0xafa000e4  sw          $zero, 0xE4($sp)
    ctx->pc = 0x202738u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 0));
    // 0x20273c: 0xafa000e0  sw          $zero, 0xE0($sp)
    ctx->pc = 0x20273cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 0));
    // 0x202740: 0x10000243  b           . + 4 + (0x243 << 2)
    ctx->pc = 0x202740u;
    {
        const bool branch_taken_0x202740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202740) {
            ctx->pc = 0x203050u;
            return;
        }
    }
    ctx->pc = 0x202748u;
}
