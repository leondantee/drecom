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

// Function: entry_001a2794
// Address: 0x1a2794 - 0x1a27a0
void entry_001a2794_0x1a2794(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2794_0x1a2794");
#endif

    ctx->pc = 0x1a2794u;

    // 0x1a2794: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1a2794u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1a2798: 0x8c740010  lw          $s4, 0x10($v1)
    ctx->pc = 0x1a2798u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x1a279c: 0x0  nop
    ctx->pc = 0x1a279cu;
    // NOP
    ctx->pc = 0x1a27a0u;
}
