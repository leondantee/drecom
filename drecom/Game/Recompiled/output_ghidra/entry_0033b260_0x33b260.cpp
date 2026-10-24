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

// Function: entry_0033b260
// Address: 0x33b260 - 0x33b278
void entry_0033b260_0x33b260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b260_0x33b260");
#endif

    ctx->pc = 0x33b260u;

    // 0x33b260: 0x2e03000b  sltiu       $v1, $s0, 0xB
    ctx->pc = 0x33b260u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x33b264: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x33B264u;
    {
        const bool branch_taken_0x33b264 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b264) {
            ctx->pc = 0x33B230u;
            return;
        }
    }
    ctx->pc = 0x33B26Cu;
    // 0x33b26c: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x33b26cu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b270: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33B270u;
    {
        const bool branch_taken_0x33b270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b270) {
            ctx->pc = 0x33B2A8u;
            return;
        }
    }
    ctx->pc = 0x33B278u;
}
