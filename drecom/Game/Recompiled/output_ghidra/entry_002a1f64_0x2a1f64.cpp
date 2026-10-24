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

// Function: entry_002a1f64
// Address: 0x2a1f64 - 0x2a1f74
void entry_002a1f64_0x2a1f64(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a1f64_0x2a1f64");
#endif

    ctx->pc = 0x2a1f64u;

    // 0x2a1f64: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2a1f64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2a1f68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2a1f68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2a1f6c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x2a1f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x2a1f70: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2a1f70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    ctx->pc = 0x2a1f74u;
}
