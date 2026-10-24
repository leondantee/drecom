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

// Function: entry_0032931c
// Address: 0x32931c - 0x329328
void entry_0032931c_0x32931c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032931c_0x32931c");
#endif

    ctx->pc = 0x32931cu;

    // 0x32931c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x32931cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x329320: 0x0  nop
    ctx->pc = 0x329320u;
    // NOP
    // 0x329324: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x329324u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    ctx->pc = 0x329328u;
}
