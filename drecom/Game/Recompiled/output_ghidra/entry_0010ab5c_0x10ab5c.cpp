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

// Function: entry_0010ab5c
// Address: 0x10ab5c - 0x10ab60
void entry_0010ab5c_0x10ab5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010ab5c_0x10ab5c");
#endif

    ctx->pc = 0x10ab5cu;

    // 0x10ab5c: 0x8c653c1c  lw          $a1, 0x3C1C($v1)
    ctx->pc = 0x10ab5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 15388)));
    ctx->pc = 0x10ab60u;
}
