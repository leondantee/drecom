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

// Function: entry_002970a8
// Address: 0x2970a8 - 0x2970ac
void entry_002970a8_0x2970a8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002970a8_0x2970a8");
#endif

    ctx->pc = 0x2970a8u;

    // 0x2970a8: 0xac20c9e8  sw          $zero, -0x3618($at)
    ctx->pc = 0x2970a8u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294953448), GPR_U32(ctx, 0));
    ctx->pc = 0x2970acu;
}
