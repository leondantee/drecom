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

// Function: entry_001bf6e8
// Address: 0x1bf6e8 - 0x1bf6f4
void entry_001bf6e8_0x1bf6e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001bf6e8_0x1bf6e8");
#endif

    ctx->pc = 0x1bf6e8u;

    // 0x1bf6e8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1bf6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1bf6ec: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x1bf6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1bf6f0: 0xa06413f9  sb          $a0, 0x13F9($v1)
    ctx->pc = 0x1bf6f0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1bf6f4u;
}
