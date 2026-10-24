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

// Function: entry_001912d0
// Address: 0x1912d0 - 0x1912dc
void entry_001912d0_0x1912d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001912d0_0x1912d0");
#endif

    ctx->pc = 0x1912d0u;

    // 0x1912d0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x1912d0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x1912d4: 0x8c302580  lw          $s0, 0x2580($at)
    ctx->pc = 0x1912d4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x532580u));
    // 0x1912d8: 0x0  nop
    ctx->pc = 0x1912d8u;
    // NOP
    ctx->pc = 0x1912dcu;
}
