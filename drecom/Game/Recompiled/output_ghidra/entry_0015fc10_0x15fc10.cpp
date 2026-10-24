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

// Function: entry_0015fc10
// Address: 0x15fc10 - 0x15fc14
void entry_0015fc10_0x15fc10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015fc10_0x15fc10");
#endif

    ctx->pc = 0x15fc10u;

    // 0x15fc10: 0x3c02003f  lui         $v0, 0x3F
    ctx->pc = 0x15fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)63 << 16));
    ctx->pc = 0x15fc14u;
}
