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

// Function: entry_0030306c
// Address: 0x30306c - 0x303070
void entry_0030306c_0x30306c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0030306c_0x30306c");
#endif

    ctx->pc = 0x30306cu;

    // 0x30306c: 0x0  nop
    ctx->pc = 0x30306cu;
    // NOP
    ctx->pc = 0x303070u;
}
