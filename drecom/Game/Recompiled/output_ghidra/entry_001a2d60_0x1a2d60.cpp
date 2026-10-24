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

// Function: entry_001a2d60
// Address: 0x1a2d60 - 0x1a2d64
void entry_001a2d60_0x1a2d60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2d60_0x1a2d60");
#endif

    ctx->pc = 0x1a2d60u;

    // 0x1a2d60: 0x24440140  addiu       $a0, $v0, 0x140
    ctx->pc = 0x1a2d60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 320));
    ctx->pc = 0x1a2d64u;
}
