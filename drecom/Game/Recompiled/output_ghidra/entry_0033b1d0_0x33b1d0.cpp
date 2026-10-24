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

// Function: entry_0033b1d0
// Address: 0x33b1d0 - 0x33b1e8
void entry_0033b1d0_0x33b1d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033b1d0_0x33b1d0");
#endif

    ctx->pc = 0x33b1d0u;

    // 0x33b1d0: 0x2e03001d  sltiu       $v1, $s0, 0x1D
    ctx->pc = 0x33b1d0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x33b1d4: 0x1460fff2  bnez        $v1, . + 4 + (-0xE << 2)
    ctx->pc = 0x33B1D4u;
    {
        const bool branch_taken_0x33b1d4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b1d4) {
            ctx->pc = 0x33B1A0u;
            return;
        }
    }
    ctx->pc = 0x33B1DCu;
    // 0x33b1dc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x33b1dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33b1e0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x33B1E0u;
    {
        const bool branch_taken_0x33b1e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b1e0) {
            ctx->pc = 0x33B218u;
            return;
        }
    }
    ctx->pc = 0x33B1E8u;
}
