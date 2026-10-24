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

// Function: entry_0017421c
// Address: 0x17421c - 0x174238
void entry_0017421c_0x17421c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0017421c_0x17421c");
#endif

    ctx->pc = 0x17421cu;

    // 0x17421c: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x17421cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174220: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x174220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174224: 0xe4601284  swc1        $f0, 0x1284($v1)
    ctx->pc = 0x174224u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4740), bits); }
    // 0x174228: 0x3c034040  lui         $v1, 0x4040
    ctx->pc = 0x174228u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16448 << 16));
    // 0x17422c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x17422cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x174230: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x174230u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x174234: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x174234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    ctx->pc = 0x174238u;
}
