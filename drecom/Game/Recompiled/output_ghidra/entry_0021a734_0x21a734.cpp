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

// Function: entry_0021a734
// Address: 0x21a734 - 0x21a748
void entry_0021a734_0x21a734(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0021a734_0x21a734");
#endif

    ctx->pc = 0x21a734u;

    // 0x21a734: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x21a734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x21a738: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x21a738u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x21a73c: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x21a73cu;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x21a740: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x21A740u;
    {
        const bool branch_taken_0x21a740 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x21a740) {
            ctx->pc = 0x21A850u;
            return;
        }
    }
    ctx->pc = 0x21A748u;
}
