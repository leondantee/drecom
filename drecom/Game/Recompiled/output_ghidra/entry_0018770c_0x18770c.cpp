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

// Function: entry_0018770c
// Address: 0x18770c - 0x187714
void entry_0018770c_0x18770c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018770c_0x18770c");
#endif

    ctx->pc = 0x18770cu;

    // 0x18770c: 0x1000010d  b           . + 4 + (0x10D << 2)
    ctx->pc = 0x18770Cu;
    {
        const bool branch_taken_0x18770c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x18770c) {
            ctx->pc = 0x187B44u;
            return;
        }
    }
    ctx->pc = 0x187714u;
}
