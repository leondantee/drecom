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

// Function: entry_001fb018
// Address: 0x1fb018 - 0x1fb024
void entry_001fb018_0x1fb018(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001fb018_0x1fb018");
#endif

    ctx->pc = 0x1fb018u;

    // 0x1fb018: 0x70008628  paddub      $s0, $zero, $zero
    ctx->pc = 0x1fb018u;
    SET_GPR_VEC(ctx, 16, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x1fb01c: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x1FB01Cu;
    {
        const bool branch_taken_0x1fb01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1fb01c) {
            ctx->pc = 0x1FB088u;
            return;
        }
    }
    ctx->pc = 0x1FB024u;
}
