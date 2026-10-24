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

// Function: entry_00128054
// Address: 0x128054 - 0x12805c
void entry_00128054_0x128054(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128054_0x128054");
#endif

    ctx->pc = 0x128054u;

    // 0x128054: 0x100000df  b           . + 4 + (0xDF << 2)
    ctx->pc = 0x128054u;
    {
        const bool branch_taken_0x128054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128054) {
            ctx->pc = 0x1283D4u;
            return;
        }
    }
    ctx->pc = 0x12805Cu;
}
