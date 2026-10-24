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

// Function: entry_00128044
// Address: 0x128044 - 0x12804c
void entry_00128044_0x128044(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128044_0x128044");
#endif

    ctx->pc = 0x128044u;

    // 0x128044: 0x100000e3  b           . + 4 + (0xE3 << 2)
    ctx->pc = 0x128044u;
    {
        const bool branch_taken_0x128044 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128044) {
            ctx->pc = 0x1283D4u;
            return;
        }
    }
    ctx->pc = 0x12804Cu;
}
