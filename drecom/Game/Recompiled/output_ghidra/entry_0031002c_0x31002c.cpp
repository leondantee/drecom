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

// Function: entry_0031002c
// Address: 0x31002c - 0x310030
void entry_0031002c_0x31002c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0031002c_0x31002c");
#endif

    ctx->pc = 0x31002cu;

    // 0x31002c: 0x0  nop
    ctx->pc = 0x31002cu;
    // NOP
    ctx->pc = 0x310030u;
}
