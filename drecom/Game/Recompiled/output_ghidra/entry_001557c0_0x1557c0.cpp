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

// Function: entry_001557c0
// Address: 0x1557c0 - 0x1557e0
void entry_001557c0_0x1557c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001557c0_0x1557c0");
#endif

    ctx->pc = 0x1557c0u;

    // 0x1557c0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1557c0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1557c4: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1557c4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1557c8: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1557c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1557cc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1557CCu;
    {
        const bool branch_taken_0x1557cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1557cc) {
            ctx->pc = 0x1557E0u;
            return;
        }
    }
    ctx->pc = 0x1557D4u;
    // 0x1557d4: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1557d4u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1557d8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1557D8u;
    {
        const bool branch_taken_0x1557d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1557d8) {
            ctx->pc = 0x1557E4u;
            return;
        }
    }
    ctx->pc = 0x1557E0u;
}
