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

// Function: entry_001dc8b4
// Address: 0x1dc8b4 - 0x1dc8bc
void entry_001dc8b4_0x1dc8b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dc8b4_0x1dc8b4");
#endif

    ctx->pc = 0x1dc8b4u;

    // 0x1dc8b4: 0xc7a0009c  lwc1        $f0, 0x9C($sp)
    ctx->pc = 0x1dc8b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 156)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1dc8b8: 0xe7a000ec  swc1        $f0, 0xEC($sp)
    ctx->pc = 0x1dc8b8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 236), bits); }
    ctx->pc = 0x1dc8bcu;
}
