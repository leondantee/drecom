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

// Function: entry_0011e14c
// Address: 0x11e14c - 0x11e150
void entry_0011e14c_0x11e14c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011e14c_0x11e14c");
#endif

    ctx->pc = 0x11e14cu;

    // 0x11e14c: 0xa103c  dsll32      $v0, $t2, 0
    ctx->pc = 0x11e14cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 10) << (32 + 0));
    ctx->pc = 0x11e150u;
}
