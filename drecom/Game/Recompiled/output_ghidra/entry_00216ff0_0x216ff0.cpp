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

// Function: entry_00216ff0
// Address: 0x216ff0 - 0x216ff4
void entry_00216ff0_0x216ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00216ff0_0x216ff0");
#endif

    ctx->pc = 0x216ff0u;

    // 0x216ff0: 0x3c020039  lui         $v0, 0x39
    ctx->pc = 0x216ff0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x216ff4u;
}
