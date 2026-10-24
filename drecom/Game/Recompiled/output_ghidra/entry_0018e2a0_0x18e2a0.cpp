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

// Function: entry_0018e2a0
// Address: 0x18e2a0 - 0x18e2a8
void entry_0018e2a0_0x18e2a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018e2a0_0x18e2a0");
#endif

    ctx->pc = 0x18e2a0u;

    // 0x18e2a0: 0x8e520218  lw          $s2, 0x218($s2)
    ctx->pc = 0x18e2a0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 536)));
    // 0x18e2a4: 0x0  nop
    ctx->pc = 0x18e2a4u;
    // NOP
    ctx->pc = 0x18e2a8u;
}
