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

// Function: entry_00147878
// Address: 0x147878 - 0x14789c
void entry_00147878_0x147878(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147878_0x147878");
#endif

    ctx->pc = 0x147878u;

    // 0x147878: 0x3c0344c8  lui         $v1, 0x44C8
    ctx->pc = 0x147878u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)17608 << 16));
    // 0x14787c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x14787cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147880: 0x0  nop
    ctx->pc = 0x147880u;
    // NOP
    // 0x147884: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x147884u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x147888: 0x0  nop
    ctx->pc = 0x147888u;
    // NOP
    // 0x14788c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x14788cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x147890: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x147890u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x147894: 0x10000064  b           . + 4 + (0x64 << 2)
    ctx->pc = 0x147894u;
    {
        const bool branch_taken_0x147894 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147894) {
            ctx->pc = 0x147A28u;
            return;
        }
    }
    ctx->pc = 0x14789Cu;
}
