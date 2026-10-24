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

// Function: entry_002e73f0
// Address: 0x2e73f0 - 0x2e7408
void entry_002e73f0_0x2e73f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e73f0_0x2e73f0");
#endif

    ctx->pc = 0x2e73f0u;

    // 0x2e73f0: 0x3c034270  lui         $v1, 0x4270
    ctx->pc = 0x2e73f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17008 << 16));
    // 0x2e73f4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e73f4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e73f8: 0x0  nop
    ctx->pc = 0x2e73f8u;
    // NOP
    // 0x2e73fc: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e73fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    // 0x2e7400: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x2E7400u;
    {
        const bool branch_taken_0x2e7400 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2e7400) {
            ctx->pc = 0x2E7448u;
            return;
        }
    }
    ctx->pc = 0x2E7408u;
}
