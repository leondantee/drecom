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

// Function: entry_001234c8
// Address: 0x1234c8 - 0x1234d4
void entry_001234c8_0x1234c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001234c8_0x1234c8");
#endif

    ctx->pc = 0x1234c8u;

    // 0x1234c8: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1234c8u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1234cc: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x1234CCu;
    {
        const bool branch_taken_0x1234cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1234cc) {
            ctx->pc = 0x123518u;
            return;
        }
    }
    ctx->pc = 0x1234D4u;
}
