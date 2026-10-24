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

// Function: entry_001a2a20
// Address: 0x1a2a20 - 0x1a2a28
void entry_001a2a20_0x1a2a20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2a20_0x1a2a20");
#endif

    ctx->pc = 0x1a2a20u;

    // 0x1a2a20: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x1a2a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1a2a24: 0x24510138  addiu       $s1, $v0, 0x138
    ctx->pc = 0x1a2a24u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 312));
    ctx->pc = 0x1a2a28u;
}
