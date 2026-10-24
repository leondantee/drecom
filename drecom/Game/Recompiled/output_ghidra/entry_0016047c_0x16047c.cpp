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

// Function: entry_0016047c
// Address: 0x16047c - 0x160484
void entry_0016047c_0x16047c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016047c_0x16047c");
#endif

    ctx->pc = 0x16047cu;

    // 0x16047c: 0xc7a0006c  lwc1        $f0, 0x6C($sp)
    ctx->pc = 0x16047cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x160480: 0x0  nop
    ctx->pc = 0x160480u;
    // NOP
    ctx->pc = 0x160484u;
}
