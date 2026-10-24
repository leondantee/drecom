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

// Function: entry_0033b2a8
// Address: 0x33b2a8 - 0x33b2c0
void entry_0033b2a8_0x33b2a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b2a8_0x33b2a8");
#endif

    ctx->pc = 0x33b2a8u;

    // 0x33b2a8: 0x2e030008  sltiu       $v1, $s0, 0x8
    ctx->pc = 0x33b2a8u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x33b2ac: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x33B2ACu;
    {
        const bool branch_taken_0x33b2ac = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b2ac) {
            ctx->pc = 0x33B278u;
            return;
        }
    }
    ctx->pc = 0x33B2B4u;
    // 0x33b2b4: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x33b2b4u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b2b8: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33B2B8u;
    {
        const bool branch_taken_0x33b2b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b2b8) {
            ctx->pc = 0x33B2F0u;
            return;
        }
    }
    ctx->pc = 0x33B2C0u;
}
