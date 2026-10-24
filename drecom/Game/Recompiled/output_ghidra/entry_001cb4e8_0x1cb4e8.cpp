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

// Function: entry_001cb4e8
// Address: 0x1cb4e8 - 0x1cb4f4
void entry_001cb4e8_0x1cb4e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb4e8_0x1cb4e8");
#endif

    ctx->pc = 0x1cb4e8u;

    // 0x1cb4e8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb4e8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb4ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb4ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb4f0: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1cb4f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    ctx->pc = 0x1cb4f4u;
}
