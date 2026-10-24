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

// Function: entry_0011bac0
// Address: 0x11bac0 - 0x11bac4
void entry_0011bac0_0x11bac0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011bac0_0x11bac0");
#endif

    ctx->pc = 0x11bac0u;

    // 0x11bac0: 0x9e90fff8  lwu         $s0, -0x8($s4)
    ctx->pc = 0x11bac0u;
    SET_GPR_ZE32(ctx, 16, READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    ctx->pc = 0x11bac4u;
}
