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

// Function: entry_001094a0
// Address: 0x1094a0 - 0x1094a8
void entry_001094a0_0x1094a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_001094a0_0x1094a0");
#endif

    ctx->pc = 0x1094a0u;

    // 0x1094a0: 0x10a8c0  sll         $s5, $s0, 3
    ctx->pc = 0x1094a0u;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 16), 3));
    // 0x1094a4: 0x0  nop
    ctx->pc = 0x1094a4u;
    // NOP
    ctx->pc = 0x1094a8u;
}
