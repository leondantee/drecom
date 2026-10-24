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

// Function: entry_0017dd10
// Address: 0x17dd10 - 0x17dd24
void entry_0017dd10_0x17dd10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017dd10_0x17dd10");
#endif

    ctx->pc = 0x17dd10u;

    // 0x17dd10: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x17dd10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    // 0x17dd14: 0xc420dce4  lwc1        $f0, -0x231C($at)
    ctx->pc = 0x17dd14u;
    { uint32_t bits = FAST_READ32(0x3EDCE4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x17dd18: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17dd18u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17dd1c: 0xe420ef08  swc1        $f0, -0x10F8($at)
    ctx->pc = 0x17dd1cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47EF08u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47EF08u, _value); } while (0); }
    // 0x17dd20: 0xe7a0009c  swc1        $f0, 0x9C($sp)
    ctx->pc = 0x17dd20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 156), bits); }
    ctx->pc = 0x17dd24u;
}
