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

// Function: entry_00214228
// Address: 0x214228 - 0x21422c
void entry_00214228_0x214228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00214228_0x214228");
#endif

    ctx->pc = 0x214228u;

    // 0x214228: 0x3c120062  lui         $s2, 0x62
    ctx->pc = 0x214228u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)98 << 16));
    ctx->pc = 0x21422cu;
}
