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

// Function: entry_00127124
// Address: 0x127124 - 0x12712c
void entry_00127124_0x127124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00127124_0x127124");
#endif

    ctx->pc = 0x127124u;

    // 0x127124: 0x10000093  b           . + 4 + (0x93 << 2)
    ctx->pc = 0x127124u;
    {
        const bool branch_taken_0x127124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x127124) {
            ctx->pc = 0x127374u;
            return;
        }
    }
    ctx->pc = 0x12712Cu;
}
