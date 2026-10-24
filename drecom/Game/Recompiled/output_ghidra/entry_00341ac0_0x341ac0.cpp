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

// Function: entry_00341ac0
// Address: 0x341ac0 - 0x341ac8
void entry_00341ac0_0x341ac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00341ac0_0x341ac0");
#endif

    ctx->pc = 0x341ac0u;

    // 0x341ac0: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x341AC0u;
    {
        const bool branch_taken_0x341ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x341ac0) {
            ctx->pc = 0x341BE0u;
            return;
        }
    }
    ctx->pc = 0x341AC8u;
}
