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

// Function: $L5
// Address: 0x11b1b4 - 0x11b1b8
void ps2__L5_0x11b1b4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("ps2__L5_0x11b1b4");
#endif

    ctx->pc = 0x11b1b4u;

    // 0x11b1b4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x11b1b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    ctx->pc = 0x11b1b8u;
}
