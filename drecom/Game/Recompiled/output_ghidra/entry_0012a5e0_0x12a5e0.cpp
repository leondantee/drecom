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

// Function: entry_0012a5e0
// Address: 0x12a5e0 - 0x12a5e8
void entry_0012a5e0_0x12a5e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a5e0_0x12a5e0");
#endif

    ctx->pc = 0x12a5e0u;

    // 0x12a5e0: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x12A5E0u;
    {
        const bool branch_taken_0x12a5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a5e0) {
            ctx->pc = 0x12A7ECu;
            return;
        }
    }
    ctx->pc = 0x12A5E8u;
}
