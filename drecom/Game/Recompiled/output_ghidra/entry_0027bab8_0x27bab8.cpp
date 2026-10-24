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

// Function: entry_0027bab8
// Address: 0x27bab8 - 0x27babc
void entry_0027bab8_0x27bab8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027bab8_0x27bab8");
#endif

    ctx->pc = 0x27bab8u;

    // 0x27bab8: 0x3c020028  lui         $v0, 0x28
    ctx->pc = 0x27bab8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)40 << 16));
    ctx->pc = 0x27babcu;
}
