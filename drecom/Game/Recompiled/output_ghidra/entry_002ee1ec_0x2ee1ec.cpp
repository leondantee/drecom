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

// Function: entry_002ee1ec
// Address: 0x2ee1ec - 0x2ee1f4
void entry_002ee1ec_0x2ee1ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002ee1ec_0x2ee1ec");
#endif

    ctx->pc = 0x2ee1ecu;

    // 0x2ee1ec: 0x10000001  b           . + 4 + (0x1 << 2)
    ctx->pc = 0x2EE1ECu;
    {
        const bool branch_taken_0x2ee1ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2ee1ec) {
            ctx->pc = 0x2EE1F4u;
            return;
        }
    }
    ctx->pc = 0x2EE1F4u;
}
