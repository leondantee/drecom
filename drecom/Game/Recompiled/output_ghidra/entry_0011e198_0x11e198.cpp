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

// Function: entry_0011e198
// Address: 0x11e198 - 0x11e19c
void entry_0011e198_0x11e198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e198_0x11e198");
#endif

    ctx->pc = 0x11e198u;

    // 0x11e198: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x11e198u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    ctx->pc = 0x11e19cu;
}
