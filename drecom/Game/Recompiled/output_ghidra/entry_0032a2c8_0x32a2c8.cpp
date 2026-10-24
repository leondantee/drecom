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

// Function: entry_0032a2c8
// Address: 0x32a2c8 - 0x32a2d0
void entry_0032a2c8_0x32a2c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0032a2c8_0x32a2c8");
#endif

    ctx->pc = 0x32a2c8u;

    // 0x32a2c8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x32a2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x32a2cc: 0xa2030000  sb          $v1, 0x0($s0)
    ctx->pc = 0x32a2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x32a2d0u;
}
