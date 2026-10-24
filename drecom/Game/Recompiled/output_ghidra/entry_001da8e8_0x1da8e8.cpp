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

// Function: entry_001da8e8
// Address: 0x1da8e8 - 0x1da8f8
void entry_001da8e8_0x1da8e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001da8e8_0x1da8e8");
#endif

    ctx->pc = 0x1da8e8u;

    // 0x1da8e8: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1da8e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1da8ec: 0x8fa200c8  lw          $v0, 0xC8($sp)
    ctx->pc = 0x1da8ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x1da8f0: 0xa0430001  sb          $v1, 0x1($v0)
    ctx->pc = 0x1da8f0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 3));
    // 0x1da8f4: 0x0  nop
    ctx->pc = 0x1da8f4u;
    // NOP
    ctx->pc = 0x1da8f8u;
}
