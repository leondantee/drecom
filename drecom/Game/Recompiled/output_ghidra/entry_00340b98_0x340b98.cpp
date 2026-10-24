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

// Function: entry_00340b98
// Address: 0x340b98 - 0x340ba4
void entry_00340b98_0x340b98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00340b98_0x340b98");
#endif

    ctx->pc = 0x340b98u;

    // 0x340b98: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x340b98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x340b9c: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x340B9Cu;
    {
        const bool branch_taken_0x340b9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x340b9c) {
            ctx->pc = 0x340D00u;
            return;
        }
    }
    ctx->pc = 0x340BA4u;
}
