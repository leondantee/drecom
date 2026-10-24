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

// Function: entry_001b3b78
// Address: 0x1b3b78 - 0x1b3b80
void entry_001b3b78_0x1b3b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b3b78_0x1b3b78");
#endif

    ctx->pc = 0x1b3b78u;

    // 0x1b3b78: 0x26d60001  addiu       $s6, $s6, 0x1
    ctx->pc = 0x1b3b78u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 1));
    // 0x1b3b7c: 0x0  nop
    ctx->pc = 0x1b3b7cu;
    // NOP
    ctx->pc = 0x1b3b80u;
}
