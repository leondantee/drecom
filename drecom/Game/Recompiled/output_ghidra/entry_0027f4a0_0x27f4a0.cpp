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

// Function: entry_0027f4a0
// Address: 0x27f4a0 - 0x27f4a4
void entry_0027f4a0_0x27f4a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027f4a0_0x27f4a0");
#endif

    ctx->pc = 0x27f4a0u;

    // 0x27f4a0: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27f4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    ctx->pc = 0x27f4a4u;
}
