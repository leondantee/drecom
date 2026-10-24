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

// Function: entry_0015c3ec
// Address: 0x15c3ec - 0x15c3f4
void entry_0015c3ec_0x15c3ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0015c3ec_0x15c3ec");
#endif

    ctx->pc = 0x15c3ecu;

    // 0x15c3ec: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x15c3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x15c3f0: 0xa4401574  sh          $zero, 0x1574($v0)
    ctx->pc = 0x15c3f0u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 5492), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x15c3f4u;
}
