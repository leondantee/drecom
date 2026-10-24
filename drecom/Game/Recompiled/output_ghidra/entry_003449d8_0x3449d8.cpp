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

// Function: entry_003449d8
// Address: 0x3449d8 - 0x3449dc
void entry_003449d8_0x3449d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003449d8_0x3449d8");
#endif

    ctx->pc = 0x3449d8u;

    // 0x3449d8: 0x3c03003b  lui         $v1, 0x3B
    ctx->pc = 0x3449d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x3449dcu;
}
