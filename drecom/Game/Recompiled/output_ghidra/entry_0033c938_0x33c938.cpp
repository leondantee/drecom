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

// Function: entry_0033c938
// Address: 0x33c938 - 0x33c94c
void entry_0033c938_0x33c938(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033c938_0x33c938");
#endif

    ctx->pc = 0x33c938u;

    // 0x33c938: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x33C938u;
    {
        const bool branch_taken_0x33c938 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c938) {
            ctx->pc = 0x33C94Cu;
            return;
        }
    }
    ctx->pc = 0x33C940u;
    // 0x33c940: 0x70009628  paddub      $s2, $zero, $zero
    ctx->pc = 0x33c940u;
    SET_GPR_VEC(ctx, 18, _mm_adds_epu8(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x33c944: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x33C944u;
    {
        const bool branch_taken_0x33c944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33c944) {
            ctx->pc = 0x33C968u;
            return;
        }
    }
    ctx->pc = 0x33C94Cu;
}
