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

// Function: entry_0016c92c
// Address: 0x16c92c - 0x16c938
void entry_0016c92c_0x16c92c(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("entry_0016c92c_0x16c92c");
#endif

    ctx->pc = 0x16c92cu;

    // 0x16c92c: 0x8fb500b8  lw          $s5, 0xB8($sp)
    ctx->pc = 0x16c92cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x16c930: 0x8fbe00a8  lw          $fp, 0xA8($sp)
    ctx->pc = 0x16c930u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x16c934: 0x0  nop
    ctx->pc = 0x16c934u;
    // NOP
    ctx->pc = 0x16c938u;
}
