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

// Function: entry_0032043c
// Address: 0x32043c - 0x320460
void entry_0032043c_0x32043c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032043c_0x32043c");
#endif

    ctx->pc = 0x32043cu;

    // 0x32043c: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x32043cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x320440: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x320440u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x320444: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x320444u;
    {
        const bool branch_taken_0x320444 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x320444) {
            ctx->pc = 0x320460u;
            return;
        }
    }
    ctx->pc = 0x32044Cu;
    // 0x32044c: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x32044cu;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x320450: 0x0  nop
    ctx->pc = 0x320450u;
    // NOP
    // 0x320454: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x320454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x320458: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x320458u;
    {
        const bool branch_taken_0x320458 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320458) {
            ctx->pc = 0x32047Cu;
            return;
        }
    }
    ctx->pc = 0x320460u;
}
