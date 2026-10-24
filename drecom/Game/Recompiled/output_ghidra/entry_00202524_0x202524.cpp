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

// Function: entry_00202524
// Address: 0x202524 - 0x202548
void entry_00202524_0x202524(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00202524_0x202524");
#endif

    ctx->pc = 0x202524u;

    // 0x202524: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x202524u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202528: 0x8c634848  lw          $v1, 0x4848($v1)
    ctx->pc = 0x202528u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18504)));
    // 0x20252c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x20252Cu;
    {
        const bool branch_taken_0x20252c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x20252c) {
            ctx->pc = 0x202548u;
            return;
        }
    }
    ctx->pc = 0x202534u;
    // 0x202534: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x202534u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202538: 0x0  nop
    ctx->pc = 0x202538u;
    // NOP
    // 0x20253c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x20253cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202540: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202540u;
    {
        const bool branch_taken_0x202540 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202540) {
            ctx->pc = 0x202564u;
            return;
        }
    }
    ctx->pc = 0x202548u;
}
