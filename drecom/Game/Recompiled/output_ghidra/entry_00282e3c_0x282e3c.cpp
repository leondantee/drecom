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

// Function: entry_00282e3c
// Address: 0x282e3c - 0x282e40
void entry_00282e3c_0x282e3c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00282e3c_0x282e3c");
#endif

    ctx->pc = 0x282e3cu;

    // 0x282e3c: 0xac221a3c  sw          $v0, 0x1A3C($at)
    ctx->pc = 0x282e3cu;
    WRITE32(ADD32(GPR_U32(ctx, 1), 6716), GPR_U32(ctx, 2));
    ctx->pc = 0x282e40u;
}
