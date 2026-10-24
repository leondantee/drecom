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

// Function: entry_0017409c
// Address: 0x17409c - 0x1740a4
void entry_0017409c_0x17409c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017409c_0x17409c");
#endif

    ctx->pc = 0x17409cu;

    // 0x17409c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x17409cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1740a0: 0x0  nop
    ctx->pc = 0x1740a0u;
    // NOP
    ctx->pc = 0x1740a4u;
}
