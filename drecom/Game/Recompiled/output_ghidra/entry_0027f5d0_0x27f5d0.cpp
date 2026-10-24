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

// Function: entry_0027f5d0
// Address: 0x27f5d0 - 0x27f5d4
void entry_0027f5d0_0x27f5d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f5d0_0x27f5d0");
#endif

    ctx->pc = 0x27f5d0u;

    // 0x27f5d0: 0xac22dbc8  sw          $v0, -0x2438($at)
    ctx->pc = 0x27f5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958024), GPR_U32(ctx, 2));
    ctx->pc = 0x27f5d4u;
}
