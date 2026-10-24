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

// Function: entry_0017be90
// Address: 0x17be90 - 0x17be9c
void entry_0017be90_0x17be90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017be90_0x17be90");
#endif

    ctx->pc = 0x17be90u;

    // 0x17be90: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17be90u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x17be94: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x17be94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x17be98: 0xe420f0f0  swc1        $f0, -0xF10($at)
    ctx->pc = 0x17be98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x47F0F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x47F0F0u, _value); } while (0); }
    ctx->pc = 0x17be9cu;
}
