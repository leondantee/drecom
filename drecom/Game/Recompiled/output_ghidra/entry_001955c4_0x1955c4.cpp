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

// Function: entry_001955c4
// Address: 0x1955c4 - 0x1955d0
void entry_001955c4_0x1955c4(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001955c4_0x1955c4");
#endif

    ctx->pc = 0x1955c4u;

    // 0x1955c4: 0x8e100218  lw          $s0, 0x218($s0)
    ctx->pc = 0x1955c4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 536)));
    // 0x1955c8: 0x0  nop
    ctx->pc = 0x1955c8u;
    // NOP
    // 0x1955cc: 0x0  nop
    ctx->pc = 0x1955ccu;
    // NOP
    ctx->pc = 0x1955d0u;
}
