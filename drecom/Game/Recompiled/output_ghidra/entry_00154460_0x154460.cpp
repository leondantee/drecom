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

// Function: entry_00154460
// Address: 0x154460 - 0x154468
void entry_00154460_0x154460(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00154460_0x154460");
#endif

    ctx->pc = 0x154460u;

    // 0x154460: 0x100002fa  b           . + 4 + (0x2FA << 2)
    ctx->pc = 0x154460u;
    {
        const bool branch_taken_0x154460 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x154460) {
            ctx->pc = 0x15504Cu;
            return;
        }
    }
    ctx->pc = 0x154468u;
}
