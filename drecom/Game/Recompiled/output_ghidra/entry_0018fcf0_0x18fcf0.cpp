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

// Function: entry_0018fcf0
// Address: 0x18fcf0 - 0x18fcfc
void entry_0018fcf0_0x18fcf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018fcf0_0x18fcf0");
#endif

    ctx->pc = 0x18fcf0u;

    // 0x18fcf0: 0x3c010053  lui         $at, 0x53
    ctx->pc = 0x18fcf0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)83 << 16));
    // 0x18fcf4: 0x8c302580  lw          $s0, 0x2580($at)
    ctx->pc = 0x18fcf4u;
    SET_GPR_S32(ctx, 16, (int32_t)FAST_READ32(0x532580u));
    // 0x18fcf8: 0x0  nop
    ctx->pc = 0x18fcf8u;
    // NOP
    ctx->pc = 0x18fcfcu;
}
