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

// Function: entry_001ca884
// Address: 0x1ca884 - 0x1ca88c
void entry_001ca884_0x1ca884(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ca884_0x1ca884");
#endif

    ctx->pc = 0x1ca884u;

    // 0x1ca884: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x1CA884u;
    {
        const bool branch_taken_0x1ca884 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ca884) {
            ctx->pc = 0x1CA8E8u;
            return;
        }
    }
    ctx->pc = 0x1CA88Cu;
}
