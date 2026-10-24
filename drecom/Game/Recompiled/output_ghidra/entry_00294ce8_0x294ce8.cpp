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

// Function: entry_00294ce8
// Address: 0x294ce8 - 0x294cf0
void entry_00294ce8_0x294ce8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00294ce8_0x294ce8");
#endif

    ctx->pc = 0x294ce8u;

    // 0x294ce8: 0x26100130  addiu       $s0, $s0, 0x130
    ctx->pc = 0x294ce8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 304));
    // 0x294cec: 0x26b50001  addiu       $s5, $s5, 0x1
    ctx->pc = 0x294cecu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 1));
    ctx->pc = 0x294cf0u;
}
