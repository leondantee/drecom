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

// Function: entry_002ed140
// Address: 0x2ed140 - 0x2ed154
void entry_002ed140_0x2ed140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ed140_0x2ed140");
#endif

    ctx->pc = 0x2ed140u;

    // 0x2ed140: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x2ed140u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x2ed144: 0x2475a610  addiu       $s5, $v1, -0x59F0
    ctx->pc = 0x2ed144u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x2ed148: 0x8eb00000  lw          $s0, 0x0($s5)
    ctx->pc = 0x2ed148u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x2ed14c: 0x1000004e  b           . + 4 + (0x4E << 2)
    ctx->pc = 0x2ED14Cu;
    {
        const bool branch_taken_0x2ed14c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ed14c) {
            ctx->pc = 0x2ED288u;
            return;
        }
    }
    ctx->pc = 0x2ED154u;
}
