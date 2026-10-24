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

// Function: entry_002970f0
// Address: 0x2970f0 - 0x2970f4
void entry_002970f0_0x2970f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002970f0_0x2970f0");
#endif

    ctx->pc = 0x2970f0u;

    // 0x2970f0: 0x3c01005d  lui         $at, 0x5D
    ctx->pc = 0x2970f0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)93 << 16));
    ctx->pc = 0x2970f4u;
}
