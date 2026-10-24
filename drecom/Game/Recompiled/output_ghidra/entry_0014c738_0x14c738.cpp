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

// Function: entry_0014c738
// Address: 0x14c738 - 0x14c73c
void entry_0014c738_0x14c738(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0014c738_0x14c738");
#endif

    ctx->pc = 0x14c738u;

    // 0x14c738: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x14c738u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x14c73cu;
}
