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

// Function: entry_003289b4
// Address: 0x3289b4 - 0x3289d8
void entry_003289b4_0x3289b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003289b4_0x3289b4");
#endif

    ctx->pc = 0x3289b4u;

    // 0x3289b4: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x3289b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x3289b8: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x3289b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3289bc: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3289BCu;
    {
        const bool branch_taken_0x3289bc = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x3289bc) {
            ctx->pc = 0x3289D8u;
            return;
        }
    }
    ctx->pc = 0x3289C4u;
    // 0x3289c4: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x3289c4u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3289c8: 0x0  nop
    ctx->pc = 0x3289c8u;
    // NOP
    // 0x3289cc: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x3289ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3289d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3289D0u;
    {
        const bool branch_taken_0x3289d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3289d0) {
            ctx->pc = 0x3289F4u;
            return;
        }
    }
    ctx->pc = 0x3289D8u;
}
