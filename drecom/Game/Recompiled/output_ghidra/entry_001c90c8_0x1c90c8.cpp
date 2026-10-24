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

// Function: entry_001c90c8
// Address: 0x1c90c8 - 0x1c90d4
void entry_001c90c8_0x1c90c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001c90c8_0x1c90c8");
#endif

    ctx->pc = 0x1c90c8u;

    // 0x1c90c8: 0x2403000e  addiu       $v1, $zero, 0xE
    ctx->pc = 0x1c90c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x1c90cc: 0x8fa20088  lw          $v0, 0x88($sp)
    ctx->pc = 0x1c90ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x1c90d0: 0xa0431576  sb          $v1, 0x1576($v0)
    ctx->pc = 0x1c90d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 5494), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1c90d4u;
}
