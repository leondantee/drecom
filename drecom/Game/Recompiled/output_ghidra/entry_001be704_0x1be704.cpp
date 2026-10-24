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

// Function: entry_001be704
// Address: 0x1be704 - 0x1be70c
void entry_001be704_0x1be704(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001be704_0x1be704");
#endif

    ctx->pc = 0x1be704u;

    // 0x1be704: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x1be704u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1be708: 0xa08010a8  sb          $zero, 0x10A8($a0)
    ctx->pc = 0x1be708u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4264), (uint8_t)GPR_U32(ctx, 0));
    ctx->pc = 0x1be70cu;
}
