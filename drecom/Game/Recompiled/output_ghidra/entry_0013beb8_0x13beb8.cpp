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

// Function: entry_0013beb8
// Address: 0x13beb8 - 0x13bedc
void entry_0013beb8_0x13beb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0013beb8_0x13beb8");
#endif

    ctx->pc = 0x13beb8u;

    // 0x13beb8: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x13beb8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x13bebc: 0xc421fd70  lwc1        $f1, -0x290($at)
    ctx->pc = 0x13bebcu;
    { uint32_t bits = FAST_READ32(0x5CFD70u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x13bec0: 0x6400006  bltz        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x13BEC0u;
    {
        const bool branch_taken_0x13bec0 = (GPR_S32(ctx, 18) < 0);
        if (branch_taken_0x13bec0) {
            ctx->pc = 0x13BEDCu;
            return;
        }
    }
    ctx->pc = 0x13BEC8u;
    // 0x13bec8: 0x44920000  mtc1        $s2, $f0
    ctx->pc = 0x13bec8u;
    { uint32_t bits = GPR_U32(ctx, 18); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13becc: 0x0  nop
    ctx->pc = 0x13beccu;
    // NOP
    // 0x13bed0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x13bed0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x13bed4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x13BED4u;
    {
        const bool branch_taken_0x13bed4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x13bed4) {
            ctx->pc = 0x13BEF8u;
            return;
        }
    }
    ctx->pc = 0x13BEDCu;
}
