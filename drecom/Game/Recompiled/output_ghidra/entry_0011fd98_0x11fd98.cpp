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

// Function: entry_0011fd98
// Address: 0x11fd98 - 0x11fd9c
void entry_0011fd98_0x11fd98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fd98_0x11fd98");
#endif

    ctx->pc = 0x11fd98u;

    // 0x11fd98: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x11fd98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    ctx->pc = 0x11fd9cu;
}
