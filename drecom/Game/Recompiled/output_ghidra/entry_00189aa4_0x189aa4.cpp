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

// Function: entry_00189aa4
// Address: 0x189aa4 - 0x189aac
void entry_00189aa4_0x189aa4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189aa4_0x189aa4");
#endif

    ctx->pc = 0x189aa4u;

    // 0x189aa4: 0xc7a000a8  lwc1        $f0, 0xA8($sp)
    ctx->pc = 0x189aa4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 168)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189aa8: 0xe7a000cc  swc1        $f0, 0xCC($sp)
    ctx->pc = 0x189aa8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 204), bits); }
    ctx->pc = 0x189aacu;
}
