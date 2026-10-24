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

// Function: entry_00187694
// Address: 0x187694 - 0x18769c
void entry_00187694_0x187694(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00187694_0x187694");
#endif

    ctx->pc = 0x187694u;

    // 0x187694: 0x1000012b  b           . + 4 + (0x12B << 2)
    ctx->pc = 0x187694u;
    {
        const bool branch_taken_0x187694 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x187694) {
            ctx->pc = 0x187B44u;
            return;
        }
    }
    ctx->pc = 0x18769Cu;
}
