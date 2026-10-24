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

// Function: entry_002a37e8
// Address: 0x2a37e8 - 0x2a37f0
void entry_002a37e8_0x2a37e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002a37e8_0x2a37e8");
#endif

    ctx->pc = 0x2a37e8u;

    // 0x2a37e8: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x2a37e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2a37ec: 0xa440127e  sh          $zero, 0x127E($v0)
    ctx->pc = 0x2a37ecu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4734), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x2a37f0u;
}
