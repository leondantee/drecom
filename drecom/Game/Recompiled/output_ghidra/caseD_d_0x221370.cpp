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

// Function: caseD_d
// Address: 0x221370 - 0x221378
void caseD_d_0x221370(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("caseD_d_0x221370");
#endif

    ctx->pc = 0x221370u;

    // 0x221370: 0x10000296  b           . + 4 + (0x296 << 2)
    ctx->pc = 0x221370u;
    {
        const bool branch_taken_0x221370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x221370) {
            ctx->pc = 0x221DCCu;
            return;
        }
    }
    ctx->pc = 0x221378u;
}
