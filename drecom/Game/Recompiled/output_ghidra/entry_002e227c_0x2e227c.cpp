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

// Function: entry_002e227c
// Address: 0x2e227c - 0x2e228c
void entry_002e227c_0x2e227c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e227c_0x2e227c");
#endif

    ctx->pc = 0x2e227cu;

    // 0x2e227c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2e227cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e2280: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x2e2280u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2e2284: 0x8c6302d0  lw          $v1, 0x2D0($v1)
    ctx->pc = 0x2e2284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 720)));
    // 0x2e2288: 0xe46002b0  swc1        $f0, 0x2B0($v1)
    ctx->pc = 0x2e2288u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 688), bits); }
    ctx->pc = 0x2e228cu;
}
