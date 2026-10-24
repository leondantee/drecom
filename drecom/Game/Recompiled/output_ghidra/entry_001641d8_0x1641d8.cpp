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

// Function: entry_001641d8
// Address: 0x1641d8 - 0x1641e0
void entry_001641d8_0x1641d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001641d8_0x1641d8");
#endif

    ctx->pc = 0x1641d8u;

    // 0x1641d8: 0xc7a0002c  lwc1        $f0, 0x2C($sp)
    ctx->pc = 0x1641d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1641dc: 0x0  nop
    ctx->pc = 0x1641dcu;
    // NOP
    ctx->pc = 0x1641e0u;
}
