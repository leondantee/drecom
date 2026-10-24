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

// Function: caseD_1
// Address: 0x126d9c - 0x126da4
void caseD_1_0x126d9c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_1_0x126d9c");
#endif

    ctx->pc = 0x126d9cu;

    // 0x126d9c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x126D9Cu;
    {
        const bool branch_taken_0x126d9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x126d9c) {
            ctx->pc = 0x126DDCu;
            return;
        }
    }
    ctx->pc = 0x126DA4u;
}
