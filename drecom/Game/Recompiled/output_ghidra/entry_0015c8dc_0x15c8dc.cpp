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

// Function: entry_0015c8dc
// Address: 0x15c8dc - 0x15c8e8
void entry_0015c8dc_0x15c8dc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c8dc_0x15c8dc");
#endif

    ctx->pc = 0x15c8dcu;

    // 0x15c8dc: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x15c8dcu;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x15c8e0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x15C8E0u;
    {
        const bool branch_taken_0x15c8e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15c8e0) {
            ctx->pc = 0x15C990u;
            return;
        }
    }
    ctx->pc = 0x15C8E8u;
}
