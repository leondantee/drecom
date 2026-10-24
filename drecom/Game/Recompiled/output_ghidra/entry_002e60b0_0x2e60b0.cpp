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

// Function: entry_002e60b0
// Address: 0x2e60b0 - 0x2e60b8
void entry_002e60b0_0x2e60b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002e60b0_0x2e60b0");
#endif

    ctx->pc = 0x2e60b0u;

    // 0x2e60b0: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x2e60b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x2e60b4: 0xa440127a  sh          $zero, 0x127A($v0)
    ctx->pc = 0x2e60b4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4730), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2e60b8u;
}
