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

// Function: entry_00300ee4
// Address: 0x300ee4 - 0x300f10
void entry_00300ee4_0x300ee4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00300ee4_0x300ee4");
#endif

    ctx->pc = 0x300ee4u;

    // 0x300ee4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x300ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x300ee8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300eec: 0xa0430000  sb          $v1, 0x0($v0)
    ctx->pc = 0x300eecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x300ef0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300ef0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300ef4: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x300ef4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x300ef8: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300efc: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x300efcu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f00: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f04: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x300f04u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x300f08: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x300f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x300f0c: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x300f0cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
    ctx->pc = 0x300f10u;
}
