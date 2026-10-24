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

// Function: entry_00182104
// Address: 0x182104 - 0x182118
void entry_00182104_0x182104(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00182104_0x182104");
#endif

    ctx->pc = 0x182104u;

    // 0x182104: 0xc60101b0  lwc1        $f1, 0x1B0($s0)
    ctx->pc = 0x182104u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x182108: 0x3c010048  lui         $at, 0x48
    ctx->pc = 0x182108u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)72 << 16));
    // 0x18210c: 0xc420f1f0  lwc1        $f0, -0xE10($at)
    ctx->pc = 0x18210cu;
    { uint32_t bits = FAST_READ32(0x47F1F0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x182110: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x182110u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x182114: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x182114u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    ctx->pc = 0x182118u;
}
