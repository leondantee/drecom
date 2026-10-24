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

// Function: entry_001fce04
// Address: 0x1fce04 - 0x1fce10
void entry_001fce04_0x1fce04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fce04_0x1fce04");
#endif

    ctx->pc = 0x1fce04u;

    // 0x1fce04: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1fce04u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fce08: 0x0  nop
    ctx->pc = 0x1fce08u;
    // NOP
    // 0x1fce0c: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x1fce0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    ctx->pc = 0x1fce10u;
}
