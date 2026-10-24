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

// Function: entry_001c9244
// Address: 0x1c9244 - 0x1c9250
void entry_001c9244_0x1c9244(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c9244_0x1c9244");
#endif

    ctx->pc = 0x1c9244u;

    // 0x1c9244: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x1c9244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x1c9248: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c9248u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c924c: 0xa0431577  sb          $v1, 0x1577($v0)
    ctx->pc = 0x1c924cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5495), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c9250u;
}
