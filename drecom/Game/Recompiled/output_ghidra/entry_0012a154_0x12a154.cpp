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

// Function: entry_0012a154
// Address: 0x12a154 - 0x12a15c
void entry_0012a154_0x12a154(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012a154_0x12a154");
#endif

    ctx->pc = 0x12a154u;

    // 0x12a154: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x12A154u;
    {
        const bool branch_taken_0x12a154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x12a154) {
            ctx->pc = 0x12A534u;
            return;
        }
    }
    ctx->pc = 0x12A15Cu;
}
