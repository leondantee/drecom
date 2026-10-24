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

// Function: entry_0027b804
// Address: 0x27b804 - 0x27b808
void entry_0027b804_0x27b804(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027b804_0x27b804");
#endif

    ctx->pc = 0x27b804u;

    // 0x27b804: 0xac23df58  sw          $v1, -0x20A8($at)
    ctx->pc = 0x27b804u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294958936), GPR_U32(ctx, 3));
    ctx->pc = 0x27b808u;
}
