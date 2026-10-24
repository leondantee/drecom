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

// Function: entry_0010d10c
// Address: 0x10d10c - 0x10d110
void entry_0010d10c_0x10d10c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010d10c_0x10d10c");
#endif

    ctx->pc = 0x10d10cu;

    // 0x10d10c: 0x8c6245f4  lw          $v0, 0x45F4($v1)
    ctx->pc = 0x10d10cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17908)));
    ctx->pc = 0x10d110u;
}
