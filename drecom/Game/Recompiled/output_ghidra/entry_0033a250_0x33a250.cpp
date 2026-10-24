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

// Function: entry_0033a250
// Address: 0x33a250 - 0x33a258
void entry_0033a250_0x33a250(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033a250_0x33a250");
#endif

    ctx->pc = 0x33a250u;

    // 0x33a250: 0x3c01003b  lui         $at, 0x3B
    ctx->pc = 0x33a250u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)59 << 16));
    // 0x33a254: 0x8c249a10  lw          $a0, -0x65F0($at)
    ctx->pc = 0x33a254u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x3A9A10u));
    ctx->pc = 0x33a258u;
}
