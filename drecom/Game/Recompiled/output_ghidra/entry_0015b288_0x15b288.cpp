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

// Function: entry_0015b288
// Address: 0x15b288 - 0x15b294
void entry_0015b288_0x15b288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015b288_0x15b288");
#endif

    ctx->pc = 0x15b288u;

    // 0x15b288: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x15b288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15b28c: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x15b28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x15b290: 0xa04311ed  sb          $v1, 0x11ED($v0)
    ctx->pc = 0x15b290u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4589), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x15b294u;
}
