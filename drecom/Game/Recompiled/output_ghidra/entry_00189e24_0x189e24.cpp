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

// Function: entry_00189e24
// Address: 0x189e24 - 0x189e2c
void entry_00189e24_0x189e24(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189e24_0x189e24");
#endif

    ctx->pc = 0x189e24u;

    // 0x189e24: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x189e24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189e28: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x189e28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    ctx->pc = 0x189e2cu;
}
