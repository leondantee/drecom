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

// Function: entry_00291534
// Address: 0x291534 - 0x291558
void entry_00291534_0x291534(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00291534_0x291534");
#endif

    ctx->pc = 0x291534u;

    // 0x291534: 0x8fa201f8  lw          $v0, 0x1F8($sp)
    ctx->pc = 0x291534u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 504)));
    // 0x291538: 0x90430008  lbu         $v1, 0x8($v0)
    ctx->pc = 0x291538u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x29153c: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x29153Cu;
    {
        const bool branch_taken_0x29153c = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x29153c) {
            ctx->pc = 0x291558u;
            return;
        }
    }
    ctx->pc = 0x291544u;
    // 0x291544: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x291544u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x291548: 0x0  nop
    ctx->pc = 0x291548u;
    // NOP
    // 0x29154c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x29154cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x291550: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x291550u;
    {
        const bool branch_taken_0x291550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x291550) {
            ctx->pc = 0x291574u;
            return;
        }
    }
    ctx->pc = 0x291558u;
}
