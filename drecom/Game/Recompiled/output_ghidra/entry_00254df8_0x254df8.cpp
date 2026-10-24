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

// Function: entry_00254df8
// Address: 0x254df8 - 0x254dfc
void entry_00254df8_0x254df8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00254df8_0x254df8");
#endif

    ctx->pc = 0x254df8u;

    // 0x254df8: 0x3c010039  lui         $at, 0x39
    ctx->pc = 0x254df8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)57 << 16));
    ctx->pc = 0x254dfcu;
}
