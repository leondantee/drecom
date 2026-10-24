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

// Function: entry_0020c9f8
// Address: 0x20c9f8 - 0x20ca00
void entry_0020c9f8_0x20c9f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0020c9f8_0x20c9f8");
#endif

    ctx->pc = 0x20c9f8u;

    // 0x20c9f8: 0x8fa20048  lw          $v0, 0x48($sp)
    ctx->pc = 0x20c9f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x20c9fc: 0xa4401278  sh          $zero, 0x1278($v0)
    ctx->pc = 0x20c9fcu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 4728), (uint16_t)GPR_U32(ctx, 0));
    ctx->pc = 0x20ca00u;
}
