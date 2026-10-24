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

// Function: entry_0021fda8
// Address: 0x21fda8 - 0x21fdb8
void entry_0021fda8_0x21fda8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021fda8_0x21fda8");
#endif

    ctx->pc = 0x21fda8u;

    // 0x21fda8: 0x3c0243fa  lui         $v0, 0x43FA
    ctx->pc = 0x21fda8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17402 << 16));
    // 0x21fdac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x21fdacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x21fdb0: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x21fdb0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    // 0x21fdb4: 0xe4208b6c  swc1        $f0, -0x7494($at)
    ctx->pc = 0x21fdb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x388B6Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x388B6Cu, _value); } while (0); }
    ctx->pc = 0x21fdb8u;
}
