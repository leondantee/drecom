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

// Function: entry_003773e4
// Address: 0x3773e4 - 0x3773e8
void entry_003773e4_0x3773e4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_003773e4_0x3773e4");
#endif

    ctx->pc = 0x3773e4u;

    // 0x3773e4: 0x3c01003f  lui         $at, 0x3F
    ctx->pc = 0x3773e4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)63 << 16));
    ctx->pc = 0x3773e8u;
}
