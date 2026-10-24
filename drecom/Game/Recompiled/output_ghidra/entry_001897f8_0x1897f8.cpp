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

// Function: entry_001897f8
// Address: 0x1897f8 - 0x189800
void entry_001897f8_0x1897f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001897f8_0x1897f8");
#endif

    ctx->pc = 0x1897f8u;

    // 0x1897f8: 0xc7a000a4  lwc1        $f0, 0xA4($sp)
    ctx->pc = 0x1897f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 164)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1897fc: 0xe7a000bc  swc1        $f0, 0xBC($sp)
    ctx->pc = 0x1897fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 188), bits); }
    ctx->pc = 0x189800u;
}
