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

// Function: entry_0033b188
// Address: 0x33b188 - 0x33b1a0
void entry_0033b188_0x33b188(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b188_0x33b188");
#endif

    ctx->pc = 0x33b188u;

    // 0x33b188: 0x2e030022  sltiu       $v1, $s0, 0x22
    ctx->pc = 0x33b188u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)34) ? 1 : 0);
    // 0x33b18c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x33B18Cu;
    {
        const bool branch_taken_0x33b18c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b18c) {
            ctx->pc = 0x33B158u;
            return;
        }
    }
    ctx->pc = 0x33B194u;
    // 0x33b194: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x33b194u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b198: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33B198u;
    {
        const bool branch_taken_0x33b198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b198) {
            ctx->pc = 0x33B1D0u;
            return;
        }
    }
    ctx->pc = 0x33B1A0u;
}
