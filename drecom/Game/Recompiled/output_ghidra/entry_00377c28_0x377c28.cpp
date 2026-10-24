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

// Function: entry_00377c28
// Address: 0x377c28 - 0x377c30
void entry_00377c28_0x377c28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00377c28_0x377c28");
#endif

    ctx->pc = 0x377c28u;

    // 0x377c28: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x377c28u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x377c2c: 0x0  nop
    ctx->pc = 0x377c2cu;
    // NOP
    ctx->pc = 0x377c30u;
}
