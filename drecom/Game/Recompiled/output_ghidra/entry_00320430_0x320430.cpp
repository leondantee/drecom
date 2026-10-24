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

// Function: entry_00320430
// Address: 0x320430 - 0x32043c
void entry_00320430_0x320430(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00320430_0x320430");
#endif

    ctx->pc = 0x320430u;

    // 0x320430: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x320430u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x320434: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x320434u;
    {
        const bool branch_taken_0x320434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x320434) {
            ctx->pc = 0x3204A0u;
            return;
        }
    }
    ctx->pc = 0x32043Cu;
}
