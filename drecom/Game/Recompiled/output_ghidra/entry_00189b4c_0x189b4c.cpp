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

// Function: entry_00189b4c
// Address: 0x189b4c - 0x189b54
void entry_00189b4c_0x189b4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189b4c_0x189b4c");
#endif

    ctx->pc = 0x189b4cu;

    // 0x189b4c: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x189b4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189b50: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x189b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->pc = 0x189b54u;
}
