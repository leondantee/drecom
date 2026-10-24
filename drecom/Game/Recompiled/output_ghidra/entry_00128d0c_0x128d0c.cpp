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

// Function: entry_00128d0c
// Address: 0x128d0c - 0x128d14
void entry_00128d0c_0x128d0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128d0c_0x128d0c");
#endif

    ctx->pc = 0x128d0cu;

    // 0x128d0c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x128D0Cu;
    {
        const bool branch_taken_0x128d0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128d0c) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x128D14u;
}
