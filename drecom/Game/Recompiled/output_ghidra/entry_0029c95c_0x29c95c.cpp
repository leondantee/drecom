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

// Function: entry_0029c95c
// Address: 0x29c95c - 0x29c960
void entry_0029c95c_0x29c95c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0029c95c_0x29c95c");
#endif

    ctx->pc = 0x29c95cu;

    // 0x29c95c: 0x3c02002a  lui         $v0, 0x2A
    ctx->pc = 0x29c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)42 << 16));
    ctx->pc = 0x29c960u;
}
