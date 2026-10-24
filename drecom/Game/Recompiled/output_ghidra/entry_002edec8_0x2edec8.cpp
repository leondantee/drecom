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

// Function: entry_002edec8
// Address: 0x2edec8 - 0x2eded0
void entry_002edec8_0x2edec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002edec8_0x2edec8");
#endif

    ctx->pc = 0x2edec8u;

    // 0x2edec8: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2EDEC8u;
    {
        const bool branch_taken_0x2edec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edec8) {
            ctx->pc = 0x2EDED0u;
            return;
        }
    }
    ctx->pc = 0x2EDED0u;
}
