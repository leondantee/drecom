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

// Function: entry_00233be8
// Address: 0x233be8 - 0x233bf0
void entry_00233be8_0x233be8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00233be8_0x233be8");
#endif

    ctx->pc = 0x233be8u;

    // 0x233be8: 0x100003bd  b           . + 4 + (0x3BD << 2)
    ctx->pc = 0x233BE8u;
    {
        const bool branch_taken_0x233be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x233be8) {
            ctx->pc = 0x234AE0u;
            return;
        }
    }
    ctx->pc = 0x233BF0u;
}
