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

// Function: entry_001cb11c
// Address: 0x1cb11c - 0x1cb170
void entry_001cb11c_0x1cb11c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cb11c_0x1cb11c");
#endif

    ctx->pc = 0x1cb11cu;

    // 0x1cb11c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb11cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb120: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb120u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb124: 0xe4401b58  swc1        $f0, 0x1B58($v0)
    ctx->pc = 0x1cb124u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 7000), bits); }
    // 0x1cb128: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb128u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb12c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb12cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb130: 0xe4401b54  swc1        $f0, 0x1B54($v0)
    ctx->pc = 0x1cb130u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6996), bits); }
    // 0x1cb134: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb138: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x1cb138u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1cb13c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb13cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb140: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb144: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1cb144u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    // 0x1cb148: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb148u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb14c: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb14cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb150: 0xe4400184  swc1        $f0, 0x184($v0)
    ctx->pc = 0x1cb150u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 388), bits); }
    // 0x1cb154: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1cb154u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1cb158: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x1cb158u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb15c: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1cb15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1cb160: 0x8fa30058  lw          $v1, 0x58($sp)
    ctx->pc = 0x1cb160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x1cb164: 0x90620002  lbu         $v0, 0x2($v1)
    ctx->pc = 0x1cb164u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x1cb168: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x1cb168u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x1cb16c: 0xa0620002  sb          $v0, 0x2($v1)
    ctx->pc = 0x1cb16cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1cb170u;
}
