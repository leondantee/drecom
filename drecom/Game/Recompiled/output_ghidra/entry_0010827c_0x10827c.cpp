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

// Function: entry_0010827c
// Address: 0x10827c - 0x108280
void entry_0010827c_0x10827c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0010827c_0x10827c");
#endif

    ctx->pc = 0x10827cu;

    // 0x10827c: 0x8d183e4c  lw          $t8, 0x3E4C($t0)
    ctx->pc = 0x10827cu;
    SET_GPR_S32(ctx, 24, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 15948)));
    ctx->pc = 0x108280u;
}
