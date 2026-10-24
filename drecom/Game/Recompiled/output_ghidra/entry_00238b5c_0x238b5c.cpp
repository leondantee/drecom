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

// Function: entry_00238b5c
// Address: 0x238b5c - 0x238b6c
void entry_00238b5c_0x238b5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_00238b5c_0x238b5c");
#endif

    ctx->pc = 0x238b5cu;

    // 0x238b5c: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x238b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x238b60: 0x84621278  lh          $v0, 0x1278($v1)
    ctx->pc = 0x238b60u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4728)));
    // 0x238b64: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x238b64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x238b68: 0xa4621278  sh          $v0, 0x1278($v1)
    ctx->pc = 0x238b68u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4728), (uint16_t)GPR_U32(ctx, 2));
    ctx->pc = 0x238b6cu;
}
