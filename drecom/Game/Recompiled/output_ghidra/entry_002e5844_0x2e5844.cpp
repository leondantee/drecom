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

// Function: entry_002e5844
// Address: 0x2e5844 - 0x2e5850
void entry_002e5844_0x2e5844(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e5844_0x2e5844");
#endif

    ctx->pc = 0x2e5844u;

    // 0x2e5844: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e5844u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e5848: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x2e5848u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2e584c: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x2e584cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    ctx->pc = 0x2e5850u;
}
