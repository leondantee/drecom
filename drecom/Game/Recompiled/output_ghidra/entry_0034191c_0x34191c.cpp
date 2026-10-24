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

// Function: entry_0034191c
// Address: 0x34191c - 0x341924
void entry_0034191c_0x34191c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0034191c_0x34191c");
#endif

    ctx->pc = 0x34191cu;

    // 0x34191c: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x34191Cu;
    {
        const bool branch_taken_0x34191c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34191c) {
            ctx->pc = 0x341BE0u;
            return;
        }
    }
    ctx->pc = 0x341924u;
}
