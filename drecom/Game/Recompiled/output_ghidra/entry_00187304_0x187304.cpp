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

// Function: entry_00187304
// Address: 0x187304 - 0x187310
void entry_00187304_0x187304(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187304_0x187304");
#endif

    ctx->pc = 0x187304u;

    // 0x187304: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x187304u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x187308: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x187308u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18730c: 0xe4200368  swc1        $f0, 0x368($at)
    ctx->pc = 0x18730cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480368u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480368u, _value); } while (0); }
    ctx->pc = 0x187310u;
}
