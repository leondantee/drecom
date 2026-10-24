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

// Function: entry_00163a0c
// Address: 0x163a0c - 0x163a18
void entry_00163a0c_0x163a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00163a0c_0x163a0c");
#endif

    ctx->pc = 0x163a0cu;

    // 0x163a0c: 0xc7a000f4  lwc1        $f0, 0xF4($sp)
    ctx->pc = 0x163a0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 244)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x163a10: 0x3c010038  lui         $at, 0x38
    ctx->pc = 0x163a10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)56 << 16));
    // 0x163a14: 0xe42056c8  swc1        $f0, 0x56C8($at)
    ctx->pc = 0x163a14u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x3856C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x3856C8u, _value); } while (0); }
    ctx->pc = 0x163a18u;
}
