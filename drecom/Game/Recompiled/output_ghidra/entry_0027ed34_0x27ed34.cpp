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

// Function: entry_0027ed34
// Address: 0x27ed34 - 0x27ed38
void entry_0027ed34_0x27ed34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0027ed34_0x27ed34");
#endif

    ctx->pc = 0x27ed34u;

    // 0x27ed34: 0xac231b70  sw          $v1, 0x1B70($at)
    ctx->pc = 0x27ed34u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 7024), GPR_U32(ctx, 3));
    ctx->pc = 0x27ed38u;
}
