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

// Function: entry_001b0440
// Address: 0x1b0440 - 0x1b0450
void entry_001b0440_0x1b0440(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0440_0x1b0440");
#endif

    ctx->pc = 0x1b0440u;

    // 0x1b0440: 0x3c033f80  lui         $v1, 0x3F80
    ctx->pc = 0x1b0440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16256 << 16));
    // 0x1b0444: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1b0444u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b0448: 0x0  nop
    ctx->pc = 0x1b0448u;
    // NOP
    // 0x1b044c: 0xe6000020  swc1        $f0, 0x20($s0)
    ctx->pc = 0x1b044cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 32), bits); }
    ctx->pc = 0x1b0450u;
}
