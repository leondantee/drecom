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

// Function: entry_001a2ee8
// Address: 0x1a2ee8 - 0x1a2ef8
void entry_001a2ee8_0x1a2ee8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001a2ee8_0x1a2ee8");
#endif

    ctx->pc = 0x1a2ee8u;

    // 0x1a2ee8: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x1a2ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1a2eec: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x1a2eecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x1a2ef0: 0xa0600000  sb          $zero, 0x0($v1)
    ctx->pc = 0x1a2ef0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x1a2ef4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x1a2ef4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    ctx->pc = 0x1a2ef8u;
}
