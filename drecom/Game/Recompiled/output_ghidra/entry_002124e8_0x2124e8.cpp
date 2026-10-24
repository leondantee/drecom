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

// Function: entry_002124e8
// Address: 0x2124e8 - 0x2124ec
void entry_002124e8_0x2124e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_002124e8_0x2124e8");
#endif

    ctx->pc = 0x2124e8u;

    // 0x2124e8: 0x8c24fb98  lw          $a0, -0x468($at)
    ctx->pc = 0x2124e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294966168)));
    ctx->pc = 0x2124ecu;
}
