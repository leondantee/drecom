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

// Function: entry_00308d50
// Address: 0x308d50 - 0x308d6c
void entry_00308d50_0x308d50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00308d50_0x308d50");
#endif

    ctx->pc = 0x308d50u;

    // 0x308d50: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x308d50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x308d54: 0xc4611280  lwc1        $f1, 0x1280($v1)
    ctx->pc = 0x308d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4736)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x308d58: 0x3c024020  lui         $v0, 0x4020
    ctx->pc = 0x308d58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16416 << 16));
    // 0x308d5c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x308d5cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x308d60: 0x0  nop
    ctx->pc = 0x308d60u;
    // NOP
    // 0x308d64: 0x46000800  add.s       $f0, $f1, $f0
    ctx->pc = 0x308d64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x308d68: 0xe4601280  swc1        $f0, 0x1280($v1)
    ctx->pc = 0x308d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4736), bits); }
    ctx->pc = 0x308d6cu;
}
