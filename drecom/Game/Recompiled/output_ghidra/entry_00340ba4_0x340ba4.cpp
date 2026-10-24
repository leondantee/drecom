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

// Function: entry_00340ba4
// Address: 0x340ba4 - 0x340bb0
void entry_00340ba4_0x340ba4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340ba4_0x340ba4");
#endif

    ctx->pc = 0x340ba4u;

    // 0x340ba4: 0x24100002  addiu       $s0, $zero, 0x2
    ctx->pc = 0x340ba4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x340ba8: 0x10000055  b           . + 4 + (0x55 << 2)
    ctx->pc = 0x340BA8u;
    {
        const bool branch_taken_0x340ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340ba8) {
            ctx->pc = 0x340D00u;
            return;
        }
    }
    ctx->pc = 0x340BB0u;
}
