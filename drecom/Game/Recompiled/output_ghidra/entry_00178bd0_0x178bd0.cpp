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

// Function: entry_00178bd0
// Address: 0x178bd0 - 0x178bd8
void entry_00178bd0_0x178bd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00178bd0_0x178bd0");
#endif

    ctx->pc = 0x178bd0u;

    // 0x178bd0: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x178bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x178bd4: 0x24700080  addiu       $s0, $v1, 0x80
    ctx->pc = 0x178bd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
    ctx->pc = 0x178bd8u;
}
