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

// Function: entry_001b69fc
// Address: 0x1b69fc - 0x1b6a0c
void entry_001b69fc_0x1b69fc(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b69fc_0x1b69fc");
#endif

    ctx->pc = 0x1b69fcu;

    // 0x1b69fc: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1b69fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b6a00: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x1b6a00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x1b6a04: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x1b6a04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b6a08: 0xa0820003  sb          $v0, 0x3($a0)
    ctx->pc = 0x1b6a08u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->pc = 0x1b6a0cu;
}
