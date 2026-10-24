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

// Function: entry_0020321c
// Address: 0x20321c - 0x203238
void entry_0020321c_0x20321c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020321c_0x20321c");
#endif

    ctx->pc = 0x20321cu;

    // 0x20321c: 0x8fa30100  lw          $v1, 0x100($sp)
    ctx->pc = 0x20321cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x203220: 0xc4604858  lwc1        $f0, 0x4858($v1)
    ctx->pc = 0x203220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 18520)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x203224: 0xe7a000d0  swc1        $f0, 0xD0($sp)
    ctx->pc = 0x203224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x203228: 0xafa000dc  sw          $zero, 0xDC($sp)
    ctx->pc = 0x203228u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 220), GPR_U32(ctx, 0));
    // 0x20322c: 0xafa000d8  sw          $zero, 0xD8($sp)
    ctx->pc = 0x20322cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 216), GPR_U32(ctx, 0));
    // 0x203230: 0x10000237  b           . + 4 + (0x237 << 2)
    ctx->pc = 0x203230u;
    {
        const bool branch_taken_0x203230 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x203230) {
            ctx->pc = 0x203B10u;
            return;
        }
    }
    ctx->pc = 0x203238u;
}
