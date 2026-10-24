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

// Function: entry_00289aa0
// Address: 0x289aa0 - 0x289aac
void entry_00289aa0_0x289aa0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00289aa0_0x289aa0");
#endif

    ctx->pc = 0x289aa0u;

    // 0x289aa0: 0x7000b628  paddub      $s6, $zero, $zero
    ctx->pc = 0x289aa0u;
    SET_GPR_VEC(ctx, 22, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x289aa4: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x289AA4u;
    {
        const bool branch_taken_0x289aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x289aa4) {
            ctx->pc = 0x289B10u;
            return;
        }
    }
    ctx->pc = 0x289AACu;
}
