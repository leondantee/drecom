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

// Function: entry_002cb788
// Address: 0x2cb788 - 0x2cb7a8
void entry_002cb788_0x2cb788(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cb788_0x2cb788");
#endif

    ctx->pc = 0x2cb788u;

    // 0x2cb788: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2cb788u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb78c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb78cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb790: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2cb790u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2cb794: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2cb794u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2cb798: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2cb798u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2cb79c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2cb79cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cb7a0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2cb7a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2cb7a4: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2cb7a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    ctx->pc = 0x2cb7a8u;
}
