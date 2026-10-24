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

// Function: entry_00128b7c
// Address: 0x128b7c - 0x128b84
void entry_00128b7c_0x128b7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128b7c_0x128b7c");
#endif

    ctx->pc = 0x128b7cu;

    // 0x128b7c: 0x10000075  b           . + 4 + (0x75 << 2)
    ctx->pc = 0x128B7Cu;
    {
        const bool branch_taken_0x128b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128b7c) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x128B84u;
}
