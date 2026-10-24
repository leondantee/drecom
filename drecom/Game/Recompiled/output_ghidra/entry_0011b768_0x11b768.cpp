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

// Function: entry_0011b768
// Address: 0x11b768 - 0x11b76c
void entry_0011b768_0x11b768(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011b768_0x11b768");
#endif

    ctx->pc = 0x11b768u;

    // 0x11b768: 0x8e90fff8  lw          $s0, -0x8($s4)
    ctx->pc = 0x11b768u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294967288)));
    ctx->pc = 0x11b76cu;
}
