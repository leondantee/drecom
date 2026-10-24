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

// Function: entry_001b2130
// Address: 0x1b2130 - 0x1b2138
void entry_001b2130_0x1b2130(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b2130_0x1b2130");
#endif

    ctx->pc = 0x1b2130u;

    // 0x1b2130: 0x27de0001  addiu       $fp, $fp, 0x1
    ctx->pc = 0x1b2130u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 1));
    // 0x1b2134: 0x0  nop
    ctx->pc = 0x1b2134u;
    // NOP
    ctx->pc = 0x1b2138u;
}
