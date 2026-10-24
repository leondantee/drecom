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

// Function: entry_00348f04
// Address: 0x348f04 - 0x348f0c
void entry_00348f04_0x348f04(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00348f04_0x348f04");
#endif

    ctx->pc = 0x348f04u;

    // 0x348f04: 0x2450dbc0  addiu       $s0, $v0, -0x2440
    ctx->pc = 0x348f04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958016));
    // 0x348f08: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x348f08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->pc = 0x348f0cu;
}
