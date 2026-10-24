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

// Function: entry_0029c960
// Address: 0x29c960 - 0x29c964
void entry_0029c960_0x29c960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c960_0x29c960");
#endif

    ctx->pc = 0x29c960u;

    // 0x29c960: 0x2445c980  addiu       $a1, $v0, -0x3680
    ctx->pc = 0x29c960u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4294953344));
    ctx->pc = 0x29c964u;
}
