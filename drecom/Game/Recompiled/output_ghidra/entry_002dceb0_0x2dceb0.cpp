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

// Function: entry_002dceb0
// Address: 0x2dceb0 - 0x2dcebc
void entry_002dceb0_0x2dceb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002dceb0_0x2dceb0");
#endif

    ctx->pc = 0x2dceb0u;

    // 0x2dceb0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x2dceb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2dceb4: 0x8fa20108  lw          $v0, 0x108($sp)
    ctx->pc = 0x2dceb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
    // 0x2dceb8: 0xa443127e  sh          $v1, 0x127E($v0)
    ctx->pc = 0x2dceb8u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 3));
    ctx->pc = 0x2dcebcu;
}
