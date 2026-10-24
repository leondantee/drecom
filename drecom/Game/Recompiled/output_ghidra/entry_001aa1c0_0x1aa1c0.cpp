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

// Function: entry_001aa1c0
// Address: 0x1aa1c0 - 0x1aa1d4
void entry_001aa1c0_0x1aa1c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001aa1c0_0x1aa1c0");
#endif

    ctx->pc = 0x1aa1c0u;

    // 0x1aa1c0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa1c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa1c4: 0xc4400028  lwc1        $f0, 0x28($v0)
    ctx->pc = 0x1aa1c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x1aa1c8: 0x46000007  neg.s       $f0, $f0
    ctx->pc = 0x1aa1c8u;
    ctx->f[0] = FPU_NEG_S(ctx->f[0]);
    // 0x1aa1cc: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1aa1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1aa1d0: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x1aa1d0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    ctx->pc = 0x1aa1d4u;
}
