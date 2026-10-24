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

// Function: entry_0018ff2c
// Address: 0x18ff2c - 0x18ff38
void entry_0018ff2c_0x18ff2c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ff2c_0x18ff2c");
#endif

    ctx->pc = 0x18ff2cu;

    // 0x18ff2c: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x18ff2cu;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x18ff30: 0x100001bd  b           . + 4 + (0x1BD << 2)
    ctx->pc = 0x18FF30u;
    {
        const bool branch_taken_0x18ff30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18ff30) {
            ctx->pc = 0x190628u;
            return;
        }
    }
    ctx->pc = 0x18FF38u;
}
