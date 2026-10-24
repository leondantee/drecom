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

// Function: entry_0010aca0
// Address: 0x10aca0 - 0x10aca4
void entry_0010aca0_0x10aca0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010aca0_0x10aca0");
#endif

    ctx->pc = 0x10aca0u;

    // 0x10aca0: 0x8046760  j           func_119D80
    ctx->pc = 0x10ACA0u;
    ctx->pc = 0x119D80u;
    printf_0x119d80(rdram, ctx, runtime); return;
    ctx->pc = 0x10ACA8u;
}
