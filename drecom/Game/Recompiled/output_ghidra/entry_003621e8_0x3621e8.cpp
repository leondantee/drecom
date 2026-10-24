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

// Function: entry_003621e8
// Address: 0x3621e8 - 0x3621f4
void entry_003621e8_0x3621e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003621e8_0x3621e8");
#endif

    ctx->pc = 0x3621e8u;

    // 0x3621e8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x3621e8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x3621ec: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x3621ECu;
    {
        const bool branch_taken_0x3621ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3621ec) {
            ctx->pc = 0x362240u;
            return;
        }
    }
    ctx->pc = 0x3621F4u;
}
