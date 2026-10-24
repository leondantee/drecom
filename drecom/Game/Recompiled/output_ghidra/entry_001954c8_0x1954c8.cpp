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

// Function: entry_001954c8
// Address: 0x1954c8 - 0x1954d0
void entry_001954c8_0x1954c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001954c8_0x1954c8");
#endif

    ctx->pc = 0x1954c8u;

    // 0x1954c8: 0x8e100218  lw          $s0, 0x218($s0)
    ctx->pc = 0x1954c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x1954cc: 0x0  nop
    ctx->pc = 0x1954ccu;
    // NOP
    ctx->pc = 0x1954d0u;
}
