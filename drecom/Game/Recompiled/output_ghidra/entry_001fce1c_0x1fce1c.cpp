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

// Function: entry_001fce1c
// Address: 0x1fce1c - 0x1fce40
void entry_001fce1c_0x1fce1c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fce1c_0x1fce1c");
#endif

    ctx->pc = 0x1fce1cu;

    // 0x1fce1c: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x1fce1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x1fce20: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x1fce20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fce24: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FCE24u;
    {
        const bool branch_taken_0x1fce24 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1fce24) {
            ctx->pc = 0x1FCE40u;
            return;
        }
    }
    ctx->pc = 0x1FCE2Cu;
    // 0x1fce2c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1fce2cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fce30: 0x0  nop
    ctx->pc = 0x1fce30u;
    // NOP
    // 0x1fce34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fce34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fce38: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FCE38u;
    {
        const bool branch_taken_0x1fce38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fce38) {
            ctx->pc = 0x1FCE5Cu;
            return;
        }
    }
    ctx->pc = 0x1FCE40u;
}
