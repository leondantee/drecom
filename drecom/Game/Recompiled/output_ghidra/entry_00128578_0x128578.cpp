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

// Function: entry_00128578
// Address: 0x128578 - 0x128580
void entry_00128578_0x128578(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00128578_0x128578");
#endif

    ctx->pc = 0x128578u;

    // 0x128578: 0x100001f6  b           . + 4 + (0x1F6 << 2)
    ctx->pc = 0x128578u;
    {
        const bool branch_taken_0x128578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x128578) {
            ctx->pc = 0x128D54u;
            return;
        }
    }
    ctx->pc = 0x128580u;
}
