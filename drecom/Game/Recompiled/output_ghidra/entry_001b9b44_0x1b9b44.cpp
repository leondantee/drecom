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

// Function: entry_001b9b44
// Address: 0x1b9b44 - 0x1b9b70
void entry_001b9b44_0x1b9b44(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b9b44_0x1b9b44");
#endif

    ctx->pc = 0x1b9b44u;

    // 0x1b9b44: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x1b9b44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x1b9b48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1b9b48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1b9b4c: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9b50: 0xe4401b50  swc1        $f0, 0x1B50($v0)
    ctx->pc = 0x1b9b50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 6992), bits); }
    // 0x1b9b54: 0x2404000a  addiu       $a0, $zero, 0xA
    ctx->pc = 0x1b9b54u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
    // 0x1b9b58: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1b9b58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9b5c: 0xa06410a8  sb          $a0, 0x10A8($v1)
    ctx->pc = 0x1b9b5cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 4));
    // 0x1b9b60: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b9b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b9b64: 0x90440003  lbu         $a0, 0x3($v0)
    ctx->pc = 0x1b9b64u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1b9b68: 0x24850001  addiu       $a1, $a0, 0x1
    ctx->pc = 0x1b9b68u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1b9b6c: 0xa0450003  sb          $a1, 0x3($v0)
    ctx->pc = 0x1b9b6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 5));
    ctx->pc = 0x1b9b70u;
}
