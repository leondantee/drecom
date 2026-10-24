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

// Function: entry_00107e7c
// Address: 0x107e7c - 0x107e80
void entry_00107e7c_0x107e7c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00107e7c_0x107e7c");
#endif

    ctx->pc = 0x107e7cu;

    // 0x107e7c: 0x3c04003b  lui         $a0, 0x3B
    ctx->pc = 0x107e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x107e80u;
}
