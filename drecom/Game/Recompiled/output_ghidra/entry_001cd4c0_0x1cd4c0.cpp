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

// Function: entry_001cd4c0
// Address: 0x1cd4c0 - 0x1cd4c8
void entry_001cd4c0_0x1cd4c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001cd4c0_0x1cd4c0");
#endif

    ctx->pc = 0x1cd4c0u;

    // 0x1cd4c0: 0x100001ab  b           . + 4 + (0x1AB << 2)
    ctx->pc = 0x1CD4C0u;
    {
        const bool branch_taken_0x1cd4c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1cd4c0) {
            ctx->pc = 0x1CDB70u;
            return;
        }
    }
    ctx->pc = 0x1CD4C8u;
}
