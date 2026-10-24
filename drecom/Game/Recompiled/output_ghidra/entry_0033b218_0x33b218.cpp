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

// Function: entry_0033b218
// Address: 0x33b218 - 0x33b230
void entry_0033b218_0x33b218(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b218_0x33b218");
#endif

    ctx->pc = 0x33b218u;

    // 0x33b218: 0x2e030031  sltiu       $v1, $s0, 0x31
    ctx->pc = 0x33b218u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)49) ? 1 : 0);
    // 0x33b21c: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x33B21Cu;
    {
        const bool branch_taken_0x33b21c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b21c) {
            ctx->pc = 0x33B1E8u;
            return;
        }
    }
    ctx->pc = 0x33B224u;
    // 0x33b224: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x33b224u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b228: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33B228u;
    {
        const bool branch_taken_0x33b228 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b228) {
            ctx->pc = 0x33B260u;
            return;
        }
    }
    ctx->pc = 0x33B230u;
}
