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

// Function: entry_001106ec
// Address: 0x1106ec - 0x1106f0
void entry_001106ec_0x1106ec(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001106ec_0x1106ec");
#endif

    ctx->pc = 0x1106ecu;

    // 0x1106ec: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x1106ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    ctx->pc = 0x1106f0u;
}
