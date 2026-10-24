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

// Function: entry_001dd650
// Address: 0x1dd650 - 0x1dd658
void entry_001dd650_0x1dd650(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001dd650_0x1dd650");
#endif

    ctx->pc = 0x1dd650u;

    // 0x1dd650: 0xafb10174  sw          $s1, 0x174($sp)
    ctx->pc = 0x1dd650u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 372), GPR_U32(ctx, 17));
    // 0x1dd654: 0x0  nop
    ctx->pc = 0x1dd654u;
    // NOP
    ctx->pc = 0x1dd658u;
}
