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

// Function: entry_00128a34
// Address: 0x128a34 - 0x128a3c
void entry_00128a34_0x128a34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128a34_0x128a34");
#endif

    ctx->pc = 0x128a34u;

    // 0x128a34: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x128A34u;
    {
        const bool branch_taken_0x128a34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128a34) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x128A3Cu;
}
