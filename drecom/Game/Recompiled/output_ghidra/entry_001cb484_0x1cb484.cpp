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

// Function: entry_001cb484
// Address: 0x1cb484 - 0x1cb498
void entry_001cb484_0x1cb484(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb484_0x1cb484");
#endif

    ctx->pc = 0x1cb484u;

    // 0x1cb484: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb484u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb488: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb48c: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1cb48cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1cb490: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1CB490u;
    {
        const bool branch_taken_0x1cb490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cb490) {
            ctx->pc = 0x1CB4F4u;
            return;
        }
    }
    ctx->pc = 0x1CB498u;
}
