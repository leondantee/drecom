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

// Function: entry_001fee54
// Address: 0x1fee54 - 0x1fee78
void entry_001fee54_0x1fee54(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fee54_0x1fee54");
#endif

    ctx->pc = 0x1fee54u;

    // 0x1fee54: 0x8fa30098  lw          $v1, 0x98($sp)
    ctx->pc = 0x1fee54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x1fee58: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x1fee58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x1fee5c: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1FEE5Cu;
    {
        const bool branch_taken_0x1fee5c = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x1fee5c) {
            ctx->pc = 0x1FEE78u;
            return;
        }
    }
    ctx->pc = 0x1FEE64u;
    // 0x1fee64: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x1fee64u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1fee68: 0x0  nop
    ctx->pc = 0x1fee68u;
    // NOP
    // 0x1fee6c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1fee6cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1fee70: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1FEE70u;
    {
        const bool branch_taken_0x1fee70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fee70) {
            ctx->pc = 0x1FEE94u;
            return;
        }
    }
    ctx->pc = 0x1FEE78u;
}
