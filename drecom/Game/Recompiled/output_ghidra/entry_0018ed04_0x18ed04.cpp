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

// Function: entry_0018ed04
// Address: 0x18ed04 - 0x18ed08
void entry_0018ed04_0x18ed04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018ed04_0x18ed04");
#endif

    ctx->pc = 0x18ed04u;

    // 0x18ed04: 0xac430220  sw          $v1, 0x220($v0)
    ctx->pc = 0x18ed04u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 544), GPR_U32(ctx, 3));
    ctx->pc = 0x18ed08u;
}
