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

// Function: entry_003276ac
// Address: 0x3276ac - 0x3276d0
void entry_003276ac_0x3276ac(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003276ac_0x3276ac");
#endif

    ctx->pc = 0x3276acu;

    // 0x3276ac: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3276acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3276b0: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x3276b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3276b4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3276B4u;
    {
        const bool branch_taken_0x3276b4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x3276b4) {
            ctx->pc = 0x3276D0u;
            return;
        }
    }
    ctx->pc = 0x3276BCu;
    // 0x3276bc: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3276bcu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3276c0: 0x0  nop
    ctx->pc = 0x3276c0u;
    // NOP
    // 0x3276c4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3276c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3276c8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3276C8u;
    {
        const bool branch_taken_0x3276c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3276c8) {
            ctx->pc = 0x3276ECu;
            return;
        }
    }
    ctx->pc = 0x3276D0u;
}
