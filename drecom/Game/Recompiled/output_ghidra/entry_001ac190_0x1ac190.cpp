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

// Function: entry_001ac190
// Address: 0x1ac190 - 0x1ac194
void entry_001ac190_0x1ac190(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001ac190_0x1ac190");
#endif

    ctx->pc = 0x1ac190u;

    // 0x1ac190: 0x3c02005d  lui         $v0, 0x5D
    ctx->pc = 0x1ac190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x1ac194u;
}
