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

// Function: entry_0016a9d0
// Address: 0x16a9d0 - 0x16a9d4
void entry_0016a9d0_0x16a9d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016a9d0_0x16a9d0");
#endif

    ctx->pc = 0x16a9d0u;

    // 0x16a9d0: 0xac23ab20  sw          $v1, -0x54E0($at)
    ctx->pc = 0x16a9d0u;
    WRITE32(ADD32(GPR_U32(ctx, 1), 4294945568), GPR_U32(ctx, 3));
    ctx->pc = 0x16a9d4u;
}
