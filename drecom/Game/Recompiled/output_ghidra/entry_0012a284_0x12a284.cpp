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

// Function: entry_0012a284
// Address: 0x12a284 - 0x12a28c
void entry_0012a284_0x12a284(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a284_0x12a284");
#endif

    ctx->pc = 0x12a284u;

    // 0x12a284: 0x100000ab  b           . + 4 + (0xAB << 2)
    ctx->pc = 0x12A284u;
    {
        const bool branch_taken_0x12a284 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a284) {
            ctx->pc = 0x12A534u;
            return;
        }
    }
    ctx->pc = 0x12A28Cu;
}
