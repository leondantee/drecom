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

// Function: entry_001cfbb4
// Address: 0x1cfbb4 - 0x1cfbbc
void entry_001cfbb4_0x1cfbb4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cfbb4_0x1cfbb4");
#endif

    ctx->pc = 0x1cfbb4u;

    // 0x1cfbb4: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x1CFBB4u;
    {
        const bool branch_taken_0x1cfbb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cfbb4) {
            ctx->pc = 0x1CFF98u;
            return;
        }
    }
    ctx->pc = 0x1CFBBCu;
}
