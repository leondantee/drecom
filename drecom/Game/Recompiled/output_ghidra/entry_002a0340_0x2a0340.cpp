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

// Function: entry_002a0340
// Address: 0x2a0340 - 0x2a034c
void entry_002a0340_0x2a0340(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a0340_0x2a0340");
#endif

    ctx->pc = 0x2a0340u;

    // 0x2a0340: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2a0340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2a0344: 0x8fa30168  lw          $v1, 0x168($sp)
    ctx->pc = 0x2a0344u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 360)));
    // 0x2a0348: 0xa06210a8  sb          $v0, 0x10A8($v1)
    ctx->pc = 0x2a0348u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x2a034cu;
}
