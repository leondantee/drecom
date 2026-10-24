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

// Function: entry_001b95e0
// Address: 0x1b95e0 - 0x1b95f0
void entry_001b95e0_0x1b95e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001b95e0_0x1b95e0");
#endif

    ctx->pc = 0x1b95e0u;

    // 0x1b95e0: 0x8fa20068  lw          $v0, 0x68($sp)
    ctx->pc = 0x1b95e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1b95e4: 0x90430003  lbu         $v1, 0x3($v0)
    ctx->pc = 0x1b95e4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x1b95e8: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1b95e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1b95ec: 0xa0430003  sb          $v1, 0x3($v0)
    ctx->pc = 0x1b95ecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 3));
    ctx->pc = 0x1b95f0u;
}
