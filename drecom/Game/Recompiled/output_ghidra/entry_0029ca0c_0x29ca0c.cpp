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

// Function: entry_0029ca0c
// Address: 0x29ca0c - 0x29ca10
void entry_0029ca0c_0x29ca0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029ca0c_0x29ca0c");
#endif

    ctx->pc = 0x29ca0cu;

    // 0x29ca0c: 0x2445ccf0  addiu       $a1, $v0, -0x3310
    ctx->pc = 0x29ca0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954224));
    ctx->pc = 0x29ca10u;
}
