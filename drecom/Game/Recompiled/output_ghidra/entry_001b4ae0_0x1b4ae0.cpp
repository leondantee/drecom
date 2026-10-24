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

// Function: entry_001b4ae0
// Address: 0x1b4ae0 - 0x1b4ae8
void entry_001b4ae0_0x1b4ae0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b4ae0_0x1b4ae0");
#endif

    ctx->pc = 0x1b4ae0u;

    // 0x1b4ae0: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x1b4ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1b4ae4: 0xa4401416  sh          $zero, 0x1416($v0)
    ctx->pc = 0x1b4ae4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5142), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1b4ae8u;
}
