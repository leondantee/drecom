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

// Function: entry_0018de94
// Address: 0x18de94 - 0x18deb4
void entry_0018de94_0x18de94(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018de94_0x18de94");
#endif

    ctx->pc = 0x18de94u;

    // 0x18de94: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x18de94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x18de98: 0x78430000  lq          $v1, 0x0($v0)
    ctx->pc = 0x18de98u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x18de9c: 0x260200b0  addiu       $v0, $s0, 0xB0
    ctx->pc = 0x18de9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 176));
    // 0x18dea0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x18dea0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x18dea4: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x18dea4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x18dea8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x18dea8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x18deac: 0x0  nop
    ctx->pc = 0x18deacu;
    // NOP
    // 0x18deb0: 0xe60000bc  swc1        $f0, 0xBC($s0)
    ctx->pc = 0x18deb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 188), bits); }
    ctx->pc = 0x18deb4u;
}
