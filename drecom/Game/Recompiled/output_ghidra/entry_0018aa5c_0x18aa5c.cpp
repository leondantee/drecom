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

// Function: entry_0018aa5c
// Address: 0x18aa5c - 0x18aa60
void entry_0018aa5c_0x18aa5c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0018aa5c_0x18aa5c");
#endif

    ctx->pc = 0x18aa5cu;

    // 0x18aa5c: 0x8c23ac50  lw          $v1, -0x53B0($at)
    ctx->pc = 0x18aa5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 1), 4294945872)));
    ctx->pc = 0x18aa60u;
}
