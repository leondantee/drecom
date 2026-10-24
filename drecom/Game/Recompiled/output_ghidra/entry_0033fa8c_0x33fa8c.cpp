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

// Function: entry_0033fa8c
// Address: 0x33fa8c - 0x33faa0
void entry_0033fa8c_0x33fa8c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033fa8c_0x33fa8c");
#endif

    ctx->pc = 0x33fa8cu;

    // 0x33fa8c: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x33fa8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x33fa90: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x33fa90u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x33fa94: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x33fa94u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x33fa98: 0x1000004c  b           . + 4 + (0x4C << 2)
    ctx->pc = 0x33FA98u;
    {
        const bool branch_taken_0x33fa98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33fa98) {
            ctx->pc = 0x33FBCCu;
            return;
        }
    }
    ctx->pc = 0x33FAA0u;
}
