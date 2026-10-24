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

// Function: entry_00147900
// Address: 0x147900 - 0x147928
void entry_00147900_0x147900(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00147900_0x147900");
#endif

    ctx->pc = 0x147900u;

    // 0x147900: 0x3c054522  lui         $a1, 0x4522
    ctx->pc = 0x147900u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)17698 << 16));
    // 0x147904: 0x34a38000  ori         $v1, $a1, 0x8000
    ctx->pc = 0x147904u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32768);
    // 0x147908: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x147908u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x14790c: 0x0  nop
    ctx->pc = 0x14790cu;
    // NOP
    // 0x147910: 0x46010003  div.s       $f0, $f0, $f1
    ctx->pc = 0x147910u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x147914: 0x0  nop
    ctx->pc = 0x147914u;
    // NOP
    // 0x147918: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x147918u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x14791c: 0xe4600188  swc1        $f0, 0x188($v1)
    ctx->pc = 0x14791cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 392), bits); }
    // 0x147920: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x147920u;
    {
        const bool branch_taken_0x147920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x147920) {
            ctx->pc = 0x147A28u;
            return;
        }
    }
    ctx->pc = 0x147928u;
}
