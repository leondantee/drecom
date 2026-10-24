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

// Function: entry_002970e0
// Address: 0x2970e0 - 0x2970e4
void entry_002970e0_0x2970e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002970e0_0x2970e0");
#endif

    ctx->pc = 0x2970e0u;

    // 0x2970e0: 0x3c010081  lui         $at, 0x81
    ctx->pc = 0x2970e0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)129 << 16));
    ctx->pc = 0x2970e4u;
}
