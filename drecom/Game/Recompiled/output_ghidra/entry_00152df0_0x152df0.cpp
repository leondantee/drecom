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

// Function: entry_00152df0
// Address: 0x152df0 - 0x152df8
void entry_00152df0_0x152df0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00152df0_0x152df0");
#endif

    ctx->pc = 0x152df0u;

    // 0x152df0: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x152df0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x152df4: 0x0  nop
    ctx->pc = 0x152df4u;
    // NOP
    ctx->pc = 0x152df8u;
}
