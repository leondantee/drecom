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

// Function: entry_00338980
// Address: 0x338980 - 0x338984
void entry_00338980_0x338980(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00338980_0x338980");
#endif

    ctx->pc = 0x338980u;

    // 0x338980: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x338980u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x338984u;
}
