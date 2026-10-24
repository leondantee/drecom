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

// Function: entry_00129570
// Address: 0x129570 - 0x129578
void entry_00129570_0x129570(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00129570_0x129570");
#endif

    ctx->pc = 0x129570u;

    // 0x129570: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x129570u;
    {
        const bool branch_taken_0x129570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x129570) {
            ctx->pc = 0x1295B0u;
            return;
        }
    }
    ctx->pc = 0x129578u;
}
