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

// Function: entry_00147a0c
// Address: 0x147a0c - 0x147a28
void entry_00147a0c_0x147a0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147a0c_0x147a0c");
#endif

    ctx->pc = 0x147a0cu;

    // 0x147a0c: 0x3c02459f  lui         $v0, 0x459F
    ctx->pc = 0x147a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17823 << 16));
    // 0x147a10: 0x34426000  ori         $v0, $v0, 0x6000
    ctx->pc = 0x147a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)24576);
    // 0x147a14: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x147a14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147a18: 0x0  nop
    ctx->pc = 0x147a18u;
    // NOP
    // 0x147a1c: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x147a1cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x147a20: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x147a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147a24: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x147a24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    ctx->pc = 0x147a28u;
}
