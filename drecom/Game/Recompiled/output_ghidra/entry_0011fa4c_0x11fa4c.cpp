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

// Function: entry_0011fa4c
// Address: 0x11fa4c - 0x11fa50
void entry_0011fa4c_0x11fa4c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011fa4c_0x11fa4c");
#endif

    ctx->pc = 0x11fa4cu;

    // 0x11fa4c: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x11fa4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    ctx->pc = 0x11fa50u;
}
