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

// Function: entry_002c720c
// Address: 0x2c720c - 0x2c7218
void entry_002c720c_0x2c720c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002c720c_0x2c720c");
#endif

    ctx->pc = 0x2c720cu;

    // 0x2c720c: 0x24030078  addiu       $v1, $zero, 0x78
    ctx->pc = 0x2c720cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 120));
    // 0x2c7210: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x2c7210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x2c7214: 0xa4431278  sh          $v1, 0x1278($v0)
    ctx->pc = 0x2c7214u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2c7218u;
}
