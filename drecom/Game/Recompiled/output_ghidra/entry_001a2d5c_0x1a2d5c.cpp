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

// Function: entry_001a2d5c
// Address: 0x1a2d5c - 0x1a2d60
void entry_001a2d5c_0x1a2d5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2d5c_0x1a2d5c");
#endif

    ctx->pc = 0x1a2d5cu;

    // 0x1a2d5c: 0x3c020014  lui         $v0, 0x14
    ctx->pc = 0x1a2d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20 << 16));
    ctx->pc = 0x1a2d60u;
}
