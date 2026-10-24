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

// Function: entry_00218d30
// Address: 0x218d30 - 0x218d44
void entry_00218d30_0x218d30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00218d30_0x218d30");
#endif

    ctx->pc = 0x218d30u;

    // 0x218d30: 0x3c030054  lui         $v1, 0x54
    ctx->pc = 0x218d30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)84 << 16));
    // 0x218d34: 0x2474a610  addiu       $s4, $v1, -0x59F0
    ctx->pc = 0x218d34u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944272));
    // 0x218d38: 0x8e900000  lw          $s0, 0x0($s4)
    ctx->pc = 0x218d38u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x53A610u));
    // 0x218d3c: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x218D3Cu;
    {
        const bool branch_taken_0x218d3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x218d3c) {
            ctx->pc = 0x218E74u;
            return;
        }
    }
    ctx->pc = 0x218D44u;
}
