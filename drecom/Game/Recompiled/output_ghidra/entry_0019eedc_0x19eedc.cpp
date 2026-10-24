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

// Function: entry_0019eedc
// Address: 0x19eedc - 0x19eee4
void entry_0019eedc_0x19eedc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0019eedc_0x19eedc");
#endif

    ctx->pc = 0x19eedcu;

    // 0x19eedc: 0xc7a000cc  lwc1        $f0, 0xCC($sp)
    ctx->pc = 0x19eedcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 204)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x19eee0: 0xe7a000dc  swc1        $f0, 0xDC($sp)
    ctx->pc = 0x19eee0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 220), bits); }
    ctx->pc = 0x19eee4u;
}
