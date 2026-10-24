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

// Function: entry_00129994
// Address: 0x129994 - 0x12999c
void entry_00129994_0x129994(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129994_0x129994");
#endif

    ctx->pc = 0x129994u;

    // 0x129994: 0x100000f7  b           . + 4 + (0xF7 << 2)
    ctx->pc = 0x129994u;
    {
        const bool branch_taken_0x129994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129994) {
            ctx->pc = 0x129D74u;
            return;
        }
    }
    ctx->pc = 0x12999Cu;
}
