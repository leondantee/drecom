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

// Function: entry_0033b91c
// Address: 0x33b91c - 0x33b93c
void entry_0033b91c_0x33b91c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b91c_0x33b91c");
#endif

    ctx->pc = 0x33b91cu;

    // 0x33b91c: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x33b91cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    // 0x33b920: 0x8c231a98  lw          $v1, 0x1A98($at)
    ctx->pc = 0x33b920u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x5D1A98u));
    // 0x33b924: 0x30630020  andi        $v1, $v1, 0x20
    ctx->pc = 0x33b924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)32);
    // 0x33b928: 0x14600250  bnez        $v1, . + 4 + (0x250 << 2)
    ctx->pc = 0x33B928u;
    {
        const bool branch_taken_0x33b928 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b928) {
            ctx->pc = 0x33C26Cu;
            return;
        }
    }
    ctx->pc = 0x33B930u;
    // 0x33b930: 0x70008e28  paddub      $s1, $zero, $zero
    ctx->pc = 0x33b930u;
    SET_GPR_VEC(ctx, 17, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b934: 0x1000008e  b           . + 4 + (0x8E << 2)
    ctx->pc = 0x33B934u;
    {
        const bool branch_taken_0x33b934 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b934) {
            ctx->pc = 0x33BB70u;
            return;
        }
    }
    ctx->pc = 0x33B93Cu;
}
