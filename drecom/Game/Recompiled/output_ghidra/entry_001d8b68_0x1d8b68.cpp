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

// Function: entry_001d8b68
// Address: 0x1d8b68 - 0x1d8b6c
void entry_001d8b68_0x1d8b68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001d8b68_0x1d8b68");
#endif

    ctx->pc = 0x1d8b68u;

    // 0x1d8b68: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x1d8b68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    ctx->pc = 0x1d8b6cu;
}
