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

// Function: entry_0015eb08
// Address: 0x15eb08 - 0x15eb10
void entry_0015eb08_0x15eb08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015eb08_0x15eb08");
#endif

    ctx->pc = 0x15eb08u;

    // 0x15eb08: 0xc7a00034  lwc1        $f0, 0x34($sp)
    ctx->pc = 0x15eb08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x15eb0c: 0x0  nop
    ctx->pc = 0x15eb0cu;
    // NOP
    ctx->pc = 0x15eb10u;
}
