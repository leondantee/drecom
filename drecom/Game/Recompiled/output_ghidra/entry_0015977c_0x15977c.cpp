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

// Function: entry_0015977c
// Address: 0x15977c - 0x159784
void entry_0015977c_0x15977c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015977c_0x15977c");
#endif

    ctx->pc = 0x15977cu;

    // 0x15977c: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x15977Cu;
    {
        const bool branch_taken_0x15977c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15977c) {
            ctx->pc = 0x1598A8u;
            return;
        }
    }
    ctx->pc = 0x159784u;
}
