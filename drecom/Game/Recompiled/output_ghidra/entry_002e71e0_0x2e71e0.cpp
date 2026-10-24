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

// Function: entry_002e71e0
// Address: 0x2e71e0 - 0x2e71f8
void entry_002e71e0_0x2e71e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e71e0_0x2e71e0");
#endif

    ctx->pc = 0x2e71e0u;

    // 0x2e71e0: 0xc7a10070  lwc1        $f1, 0x70($sp)
    ctx->pc = 0x2e71e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2e71e4: 0x3c024248  lui         $v0, 0x4248
    ctx->pc = 0x2e71e4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16968 << 16));
    // 0x2e71e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x2e71e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2e71ec: 0x0  nop
    ctx->pc = 0x2e71ecu;
    // NOP
    // 0x2e71f0: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x2e71f0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x2e71f4: 0xe7a00070  swc1        $f0, 0x70($sp)
    ctx->pc = 0x2e71f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    ctx->pc = 0x2e71f8u;
}
