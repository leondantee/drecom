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

// Function: entry_0019eee4
// Address: 0x19eee4 - 0x19eeec
void entry_0019eee4_0x19eee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019eee4_0x19eee4");
#endif

    ctx->pc = 0x19eee4u;

    // 0x19eee4: 0xc7a000dc  lwc1        $f0, 0xDC($sp)
    ctx->pc = 0x19eee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 220)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19eee8: 0xe7a000d4  swc1        $f0, 0xD4($sp)
    ctx->pc = 0x19eee8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 212), bits); }
    ctx->pc = 0x19eeecu;
}
