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

// Function: entry_00147988
// Address: 0x147988 - 0x1479ac
void entry_00147988_0x147988(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147988_0x147988");
#endif

    ctx->pc = 0x147988u;

    // 0x147988: 0x3c024561  lui         $v0, 0x4561
    ctx->pc = 0x147988u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)17761 << 16));
    // 0x14798c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x14798cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x147990: 0x0  nop
    ctx->pc = 0x147990u;
    // NOP
    // 0x147994: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x147994u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x147998: 0x0  nop
    ctx->pc = 0x147998u;
    // NOP
    // 0x14799c: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x14799cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x1479a0: 0xe4400188  swc1        $f0, 0x188($v0)
    ctx->pc = 0x1479a0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 392), bits); }
    // 0x1479a4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x1479A4u;
    {
        const bool branch_taken_0x1479a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1479a4) {
            ctx->pc = 0x147A28u;
            return;
        }
    }
    ctx->pc = 0x1479ACu;
}
