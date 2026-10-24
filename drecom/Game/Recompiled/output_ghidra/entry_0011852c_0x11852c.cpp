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

// Function: entry_0011852c
// Address: 0x11852c - 0x118530
void entry_0011852c_0x11852c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0011852c_0x11852c");
#endif

    ctx->pc = 0x11852cu;

    // 0x11852c: 0x8d2a000c  lw          $t2, 0xC($t1)
    ctx->pc = 0x11852cu;
    SET_GPR_S32(ctx, 10, (int32_t)READ32(ADD32(GPR_U32(ctx, 9), 12)));
    ctx->pc = 0x118530u;
}
