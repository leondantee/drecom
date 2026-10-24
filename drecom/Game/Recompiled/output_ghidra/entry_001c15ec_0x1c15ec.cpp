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

// Function: entry_001c15ec
// Address: 0x1c15ec - 0x1c15f8
void entry_001c15ec_0x1c15ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c15ec_0x1c15ec");
#endif

    ctx->pc = 0x1c15ecu;

    // 0x1c15ec: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x1c15ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1c15f0: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x1c15f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x1c15f4: 0xa06413f9  sb          $a0, 0x13F9($v1)
    ctx->pc = 0x1c15f4u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 5113), (uint8_t)GPR_U32(ctx, 4));
    ctx->pc = 0x1c15f8u;
}
