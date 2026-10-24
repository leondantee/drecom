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

// Function: entry_00191518
// Address: 0x191518 - 0x191524
void entry_00191518_0x191518(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00191518_0x191518");
#endif

    ctx->pc = 0x191518u;

    // 0x191518: 0x70001628  paddub      $v0, $zero, $zero
    ctx->pc = 0x191518u;
    SET_GPR_VEC(ctx, 2, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x19151c: 0x10000166  b           . + 4 + (0x166 << 2)
    ctx->pc = 0x19151Cu;
    {
        const bool branch_taken_0x19151c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19151c) {
            ctx->pc = 0x191AB8u;
            return;
        }
    }
    ctx->pc = 0x191524u;
}
