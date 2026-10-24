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

// Function: entry_0010ef0c
// Address: 0x10ef0c - 0x10ef14
void entry_0010ef0c_0x10ef0c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ef0c_0x10ef0c");
#endif

    ctx->pc = 0x10ef0cu;

    // 0x10ef0c: 0x3c14003b  lui         $s4, 0x3B
    ctx->pc = 0x10ef0cu;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)59 << 16));
    // 0x10ef10: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x10ef10u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x10ef14u;
}
