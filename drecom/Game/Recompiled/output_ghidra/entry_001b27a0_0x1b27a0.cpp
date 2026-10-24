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

// Function: entry_001b27a0
// Address: 0x1b27a0 - 0x1b27a8
void entry_001b27a0_0x1b27a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b27a0_0x1b27a0");
#endif

    ctx->pc = 0x1b27a0u;

    // 0x1b27a0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x1b27a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x1b27a4: 0x0  nop
    ctx->pc = 0x1b27a4u;
    // NOP
    ctx->pc = 0x1b27a8u;
}
