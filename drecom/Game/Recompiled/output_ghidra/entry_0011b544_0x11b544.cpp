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

// Function: entry_0011b544
// Address: 0x11b544 - 0x11b548
void entry_0011b544_0x11b544(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b544_0x11b544");
#endif

    ctx->pc = 0x11b544u;

    // 0x11b544: 0x8fa301ec  lw          $v1, 0x1EC($sp)
    ctx->pc = 0x11b544u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 492)));
    ctx->pc = 0x11b548u;
}
