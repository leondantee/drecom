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

// Function: entry_0033dcd0
// Address: 0x33dcd0 - 0x33dcd4
void entry_0033dcd0_0x33dcd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0033dcd0_0x33dcd0");
#endif

    ctx->pc = 0x33dcd0u;

    // 0x33dcd0: 0x0  nop
    ctx->pc = 0x33dcd0u;
    // NOP
    ctx->pc = 0x33dcd4u;
}
