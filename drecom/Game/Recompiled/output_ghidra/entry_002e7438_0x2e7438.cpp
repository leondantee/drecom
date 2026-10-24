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

// Function: entry_002e7438
// Address: 0x2e7438 - 0x2e7448
void entry_002e7438_0x2e7438(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e7438_0x2e7438");
#endif

    ctx->pc = 0x2e7438u;

    // 0x2e7438: 0x3c0342f0  lui         $v1, 0x42F0
    ctx->pc = 0x2e7438u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17136 << 16));
    // 0x2e743c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2e743cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e7440: 0x0  nop
    ctx->pc = 0x2e7440u;
    // NOP
    // 0x2e7444: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x2e7444u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    ctx->pc = 0x2e7448u;
}
