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

// Function: entry_003779e0
// Address: 0x3779e0 - 0x3779e4
void entry_003779e0_0x3779e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003779e0_0x3779e0");
#endif

    ctx->pc = 0x3779e0u;

    // 0x3779e0: 0x3c01009a  lui         $at, 0x9A
    ctx->pc = 0x3779e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)154 << 16));
    ctx->pc = 0x3779e4u;
}
