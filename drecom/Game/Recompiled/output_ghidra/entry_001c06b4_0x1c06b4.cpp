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

// Function: entry_001c06b4
// Address: 0x1c06b4 - 0x1c06bc
void entry_001c06b4_0x1c06b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c06b4_0x1c06b4");
#endif

    ctx->pc = 0x1c06b4u;

    // 0x1c06b4: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x1C06B4u;
    {
        const bool branch_taken_0x1c06b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c06b4) {
            ctx->pc = 0x1C06BCu;
            return;
        }
    }
    ctx->pc = 0x1C06BCu;
}
