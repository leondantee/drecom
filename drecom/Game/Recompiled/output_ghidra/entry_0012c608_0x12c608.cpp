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

// Function: entry_0012c608
// Address: 0x12c608 - 0x12c618
void entry_0012c608_0x12c608(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0012c608_0x12c608");
#endif

    ctx->pc = 0x12c608u;

    // 0x12c608: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x12c608u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x12c60c: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x12c60cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x12c610: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x12c610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x12c614: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x12c614u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x12c618u;
}
