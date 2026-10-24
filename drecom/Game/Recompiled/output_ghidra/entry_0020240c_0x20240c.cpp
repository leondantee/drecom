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

// Function: entry_0020240c
// Address: 0x20240c - 0x202430
void entry_0020240c_0x20240c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020240c_0x20240c");
#endif

    ctx->pc = 0x20240cu;

    // 0x20240c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x20240cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x202410: 0x8c634844  lw          $v1, 0x4844($v1)
    ctx->pc = 0x202410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 18500)));
    // 0x202414: 0x4600006  bltz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x202414u;
    {
        const bool branch_taken_0x202414 = (GPR_S32(ctx, 3) < 0);
        if (branch_taken_0x202414) {
            ctx->pc = 0x202430u;
            return;
        }
    }
    ctx->pc = 0x20241Cu;
    // 0x20241c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x20241cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x202420: 0x0  nop
    ctx->pc = 0x202420u;
    // NOP
    // 0x202424: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x202424u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x202428: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x202428u;
    {
        const bool branch_taken_0x202428 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x202428) {
            ctx->pc = 0x20244Cu;
            return;
        }
    }
    ctx->pc = 0x202430u;
}
