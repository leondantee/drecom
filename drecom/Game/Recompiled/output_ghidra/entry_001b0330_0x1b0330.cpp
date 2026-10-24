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

// Function: entry_001b0330
// Address: 0x1b0330 - 0x1b0348
void entry_001b0330_0x1b0330(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b0330_0x1b0330");
#endif

    ctx->pc = 0x1b0330u;

    // 0x1b0330: 0x8fa404b4  lw          $a0, 0x4B4($sp)
    ctx->pc = 0x1b0330u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1204)));
    // 0x1b0334: 0x24830024  addiu       $v1, $a0, 0x24
    ctx->pc = 0x1b0334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 36));
    // 0x1b0338: 0xafa304b4  sw          $v1, 0x4B4($sp)
    ctx->pc = 0x1b0338u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1204), GPR_U32(ctx, 3));
    // 0x1b033c: 0x8fa304a8  lw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b033cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 1192)));
    // 0x1b0340: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b0340u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b0344: 0xafa304a8  sw          $v1, 0x4A8($sp)
    ctx->pc = 0x1b0344u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 1192), GPR_U32(ctx, 3));
    ctx->pc = 0x1b0348u;
}
