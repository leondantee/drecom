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

// Function: entry_00182a4c
// Address: 0x182a4c - 0x182a64
void entry_00182a4c_0x182a4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182a4c_0x182a4c");
#endif

    ctx->pc = 0x182a4cu;

    // 0x182a4c: 0x3c0242fa  lui         $v0, 0x42FA
    ctx->pc = 0x182a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17146 << 16));
    // 0x182a50: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x182a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x182a54: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182a54u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x182a58: 0xc420f240  lwc1        $f0, -0xDC0($at)
    ctx->pc = 0x182a58u;
    { uint32_t bits = FAST_READ32(0x47F240u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182a5c: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x182a5cu;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x182a60: 0xe7a00060  swc1        $f0, 0x60($sp)
    ctx->pc = 0x182a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    ctx->pc = 0x182a64u;
}
