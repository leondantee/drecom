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

// Function: entry_00200458
// Address: 0x200458 - 0x20047c
void entry_00200458_0x200458(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00200458_0x200458");
#endif

    ctx->pc = 0x200458u;

    // 0x200458: 0x8fa30078  lw          $v1, 0x78($sp)
    ctx->pc = 0x200458u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x20045c: 0xc4620338  lwc1        $f2, 0x338($v1)
    ctx->pc = 0x20045cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 824)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x200460: 0x6000006  bltz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x200460u;
    {
        const bool branch_taken_0x200460 = (GPR_S32(ctx, 16) < 0);
        if (branch_taken_0x200460) {
            ctx->pc = 0x20047Cu;
            return;
        }
    }
    ctx->pc = 0x200468u;
    // 0x200468: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x200468u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x20046c: 0x0  nop
    ctx->pc = 0x20046cu;
    // NOP
    // 0x200470: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x200470u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x200474: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x200474u;
    {
        const bool branch_taken_0x200474 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x200474) {
            ctx->pc = 0x200498u;
            return;
        }
    }
    ctx->pc = 0x20047Cu;
}
