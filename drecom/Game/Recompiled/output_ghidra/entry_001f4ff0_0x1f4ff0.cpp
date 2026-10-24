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

// Function: entry_001f4ff0
// Address: 0x1f4ff0 - 0x1f5018
void entry_001f4ff0_0x1f4ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001f4ff0_0x1f4ff0");
#endif

    ctx->pc = 0x1f4ff0u;

    // 0x1f4ff0: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4ff4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x1f4ff4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f4ff8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f4ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f4ffc: 0xa440127c  sh          $zero, 0x127C($v0)
    ctx->pc = 0x1f4ffcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4732), (uint16_t)GPR_U32(ctx, 0));
    // 0x1f5000: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f5000u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5004: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5004u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5008: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1f5008u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1f500c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x1f500cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1f5010: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x1f5010u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1f5014: 0xe4400180  swc1        $f0, 0x180($v0)
    ctx->pc = 0x1f5014u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 384), bits); }
    ctx->pc = 0x1f5018u;
}
