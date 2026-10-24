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

// Function: entry_002c99b8
// Address: 0x2c99b8 - 0x2c99c8
void entry_002c99b8_0x2c99b8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c99b8_0x2c99b8");
#endif

    ctx->pc = 0x2c99b8u;

    // 0x2c99b8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2c99b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2c99bc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2c99bcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2c99c0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2c99c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2c99c4: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2c99c4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    ctx->pc = 0x2c99c8u;
}
