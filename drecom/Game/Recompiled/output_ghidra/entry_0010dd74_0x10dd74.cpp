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

// Function: entry_0010dd74
// Address: 0x10dd74 - 0x10dd7c
void entry_0010dd74_0x10dd74(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010dd74_0x10dd74");
#endif

    ctx->pc = 0x10dd74u;

    // 0x10dd74: 0x3c16003b  lui         $s6, 0x3B
    ctx->pc = 0x10dd74u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)59 << 16));
    // 0x10dd78: 0x3c17003b  lui         $s7, 0x3B
    ctx->pc = 0x10dd78u;
    SET_GPR_S32(ctx, 23, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x10dd7cu;
}
