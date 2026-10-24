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

// Function: entry_001afb04
// Address: 0x1afb04 - 0x1afb08
void entry_001afb04_0x1afb04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001afb04_0x1afb04");
#endif

    ctx->pc = 0x1afb04u;

    // 0x1afb04: 0x0  nop
    ctx->pc = 0x1afb04u;
    // NOP
    ctx->pc = 0x1afb08u;
}
