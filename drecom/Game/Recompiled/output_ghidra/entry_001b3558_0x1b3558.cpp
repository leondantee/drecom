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

// Function: entry_001b3558
// Address: 0x1b3558 - 0x1b3578
void entry_001b3558_0x1b3558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3558_0x1b3558");
#endif

    ctx->pc = 0x1b3558u;

    // 0x1b3558: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x1b3558u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x1b355c: 0x8c221a98  lw          $v0, 0x1A98($at)
    ctx->pc = 0x1b355cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x1b3560: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x1b3560u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x1b3564: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1B3564u;
    {
        const bool branch_taken_0x1b3564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3564) {
            ctx->pc = 0x1B3578u;
            return;
        }
    }
    ctx->pc = 0x1B356Cu;
    // 0x1b356c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x1b356cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1b3570: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x1B3570u;
    {
        const bool branch_taken_0x1b3570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1b3570) {
            ctx->pc = 0x1B38CCu;
            return;
        }
    }
    ctx->pc = 0x1B3578u;
}
