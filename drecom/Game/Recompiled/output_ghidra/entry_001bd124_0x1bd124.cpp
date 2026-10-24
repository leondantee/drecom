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

// Function: entry_001bd124
// Address: 0x1bd124 - 0x1bd12c
void entry_001bd124_0x1bd124(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bd124_0x1bd124");
#endif

    ctx->pc = 0x1bd124u;

    // 0x1bd124: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x1bd124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1bd128: 0xa06010a8  sb          $zero, 0x10A8($v1)
    ctx->pc = 0x1bd128u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1bd12cu;
}
