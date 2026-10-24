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

// Function: entry_00308ba0
// Address: 0x308ba0 - 0x308bbc
void entry_00308ba0_0x308ba0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00308ba0_0x308ba0");
#endif

    ctx->pc = 0x308ba0u;

    // 0x308ba0: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308ba4: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x308ba4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308ba8: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x308ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x308bac: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308bacu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308bb0: 0x0  nop
    ctx->pc = 0x308bb0u;
    // NOP
    // 0x308bb4: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x308bb4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x308bb8: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x308bb8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    ctx->pc = 0x308bbcu;
}
