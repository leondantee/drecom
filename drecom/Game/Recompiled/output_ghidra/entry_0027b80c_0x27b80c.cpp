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

// Function: entry_0027b80c
// Address: 0x27b80c - 0x27b810
void entry_0027b80c_0x27b80c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027b80c_0x27b80c");
#endif

    ctx->pc = 0x27b80cu;

    // 0x27b80c: 0x2463e390  addiu       $v1, $v1, -0x1C70
    ctx->pc = 0x27b80cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294960016));
    ctx->pc = 0x27b810u;
}
