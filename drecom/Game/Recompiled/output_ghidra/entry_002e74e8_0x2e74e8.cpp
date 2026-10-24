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

// Function: entry_002e74e8
// Address: 0x2e74e8 - 0x2e74f8
void entry_002e74e8_0x2e74e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e74e8_0x2e74e8");
#endif

    ctx->pc = 0x2e74e8u;

    // 0x2e74e8: 0x3c05c0a0  lui         $a1, 0xC0A0
    ctx->pc = 0x2e74e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)49312 << 16));
    // 0x2e74ec: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x2e74ecu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e74f0: 0x0  nop
    ctx->pc = 0x2e74f0u;
    // NOP
    // 0x2e74f4: 0xe7a00098  swc1        $f0, 0x98($sp)
    ctx->pc = 0x2e74f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 152), bits); }
    ctx->pc = 0x2e74f8u;
}
