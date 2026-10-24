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

// Function: entry_00215b34
// Address: 0x215b34 - 0x215b38
void entry_00215b34_0x215b34(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00215b34_0x215b34");
#endif

    ctx->pc = 0x215b34u;

    // 0x215b34: 0xac45003c  sw          $a1, 0x3C($v0)
    ctx->pc = 0x215b34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 60), GPR_U32(ctx, 5));
    ctx->pc = 0x215b38u;
}
