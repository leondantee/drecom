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

// Function: entry_0010e960
// Address: 0x10e960 - 0x10e964
void entry_0010e960_0x10e960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010e960_0x10e960");
#endif

    ctx->pc = 0x10e960u;

    // 0x10e960: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x10e960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x10e964u;
}
