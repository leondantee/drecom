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

// Function: entry_00189ec4
// Address: 0x189ec4 - 0x189ecc
void entry_00189ec4_0x189ec4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00189ec4_0x189ec4");
#endif

    ctx->pc = 0x189ec4u;

    // 0x189ec4: 0xc7a00018  lwc1        $f0, 0x18($sp)
    ctx->pc = 0x189ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x189ec8: 0xe7a000e4  swc1        $f0, 0xE4($sp)
    ctx->pc = 0x189ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 228), bits); }
    ctx->pc = 0x189eccu;
}
