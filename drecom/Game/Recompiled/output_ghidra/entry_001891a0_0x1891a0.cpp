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

// Function: entry_001891a0
// Address: 0x1891a0 - 0x1891a4
void entry_001891a0_0x1891a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001891a0_0x1891a0");
#endif

    ctx->pc = 0x1891a0u;

    // 0x1891a0: 0x3c01004b  lui         $at, 0x4B
    ctx->pc = 0x1891a0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)75 << 16));
    ctx->pc = 0x1891a4u;
}
