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

// Function: entry_002cffc0
// Address: 0x2cffc0 - 0x2cffd8
void entry_002cffc0_0x2cffc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002cffc0_0x2cffc0");
#endif

    ctx->pc = 0x2cffc0u;

    // 0x2cffc0: 0xc7a10028  lwc1        $f1, 0x28($sp)
    ctx->pc = 0x2cffc0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x2cffc4: 0x3c0343fa  lui         $v1, 0x43FA
    ctx->pc = 0x2cffc4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17402 << 16));
    // 0x2cffc8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x2cffc8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x2cffcc: 0x0  nop
    ctx->pc = 0x2cffccu;
    // NOP
    // 0x2cffd0: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x2cffd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x2cffd4: 0xe7a00028  swc1        $f0, 0x28($sp)
    ctx->pc = 0x2cffd4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    ctx->pc = 0x2cffd8u;
}
