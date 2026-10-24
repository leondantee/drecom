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

// Function: entry_002caee8
// Address: 0x2caee8 - 0x2caf08
void entry_002caee8_0x2caee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002caee8_0x2caee8");
#endif

    ctx->pc = 0x2caee8u;

    // 0x2caee8: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x2caee8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2caeec: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caeecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caef0: 0x24421330  addiu       $v0, $v0, 0x1330
    ctx->pc = 0x2caef0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4912));
    // 0x2caef4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x2caef4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x2caef8: 0x3c024396  lui         $v0, 0x4396
    ctx->pc = 0x2caef8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17302 << 16));
    // 0x2caefc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2caefcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2caf00: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x2caf00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x2caf04: 0xe44011e0  swc1        $f0, 0x11E0($v0)
    ctx->pc = 0x2caf04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4576), bits); }
    ctx->pc = 0x2caf08u;
}
