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

// Function: entry_0031f6dc
// Address: 0x31f6dc - 0x31f700
void entry_0031f6dc_0x31f6dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031f6dc_0x31f6dc");
#endif

    ctx->pc = 0x31f6dcu;

    // 0x31f6dc: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x31f6dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x31f6e0: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x31f6e0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x31f6e4: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x31F6E4u;
    {
        const bool branch_taken_0x31f6e4 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x31f6e4) {
            ctx->pc = 0x31F700u;
            return;
        }
    }
    ctx->pc = 0x31F6ECu;
    // 0x31f6ec: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x31f6ecu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x31f6f0: 0x0  nop
    ctx->pc = 0x31f6f0u;
    // NOP
    // 0x31f6f4: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x31f6f4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x31f6f8: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x31F6F8u;
    {
        const bool branch_taken_0x31f6f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x31f6f8) {
            ctx->pc = 0x31F71Cu;
            return;
        }
    }
    ctx->pc = 0x31F700u;
}
