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

// Function: entry_00182748
// Address: 0x182748 - 0x182760
void entry_00182748_0x182748(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182748_0x182748");
#endif

    ctx->pc = 0x182748u;

    // 0x182748: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x182748u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x18274c: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x18274cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182750: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182750u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182754: 0xc420f238  lwc1        $f0, -0xDC8($at)
    ctx->pc = 0x182754u;
    { uint32_t bits = FAST_READ32(0x47F238u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182758: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x182758u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x18275c: 0xe7a00058  swc1        $f0, 0x58($sp)
    ctx->pc = 0x18275cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 88), bits); }
    ctx->pc = 0x182760u;
}
