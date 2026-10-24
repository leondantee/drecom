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

// Function: entry_0033be50
// Address: 0x33be50 - 0x33be68
void entry_0033be50_0x33be50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033be50_0x33be50");
#endif

    ctx->pc = 0x33be50u;

    // 0x33be50: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33be50u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33be54: 0x8e030130  lw          $v1, 0x130($s0)
    ctx->pc = 0x33be54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 304)));
    // 0x33be58: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x33be58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    // 0x33be5c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x33be5cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33be60: 0x8e030134  lw          $v1, 0x134($s0)
    ctx->pc = 0x33be60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 308)));
    // 0x33be64: 0xe46000d0  swc1        $f0, 0xD0($v1)
    ctx->pc = 0x33be64u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 208), bits); }
    ctx->pc = 0x33be68u;
}
