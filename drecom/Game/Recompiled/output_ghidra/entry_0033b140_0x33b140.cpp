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

// Function: entry_0033b140
// Address: 0x33b140 - 0x33b158
void entry_0033b140_0x33b140(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b140_0x33b140");
#endif

    ctx->pc = 0x33b140u;

    // 0x33b140: 0x2e030010  sltiu       $v1, $s0, 0x10
    ctx->pc = 0x33b140u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)16) ? 1 : 0);
    // 0x33b144: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x33B144u;
    {
        const bool branch_taken_0x33b144 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b144) {
            ctx->pc = 0x33B110u;
            return;
        }
    }
    ctx->pc = 0x33B14Cu;
    // 0x33b14c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x33b14cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b150: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33B150u;
    {
        const bool branch_taken_0x33b150 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b150) {
            ctx->pc = 0x33B188u;
            return;
        }
    }
    ctx->pc = 0x33B158u;
}
