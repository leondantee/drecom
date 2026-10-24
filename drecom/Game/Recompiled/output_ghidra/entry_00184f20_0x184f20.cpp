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

// Function: entry_00184f20
// Address: 0x184f20 - 0x184f2c
void entry_00184f20_0x184f20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00184f20_0x184f20");
#endif

    ctx->pc = 0x184f20u;

    // 0x184f20: 0xc60001a4  lwc1        $f0, 0x1A4($s0)
    ctx->pc = 0x184f20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 420)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x184f24: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x184f24u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x184f28: 0xe4200338  swc1        $f0, 0x338($at)
    ctx->pc = 0x184f28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x480338u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x480338u, _value); } while (0); }
    ctx->pc = 0x184f2cu;
}
